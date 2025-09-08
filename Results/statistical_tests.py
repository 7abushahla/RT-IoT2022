#!/usr/bin/env python
# coding: utf-8

# In[10]:


# ---------------------------------------------------------------
# Runs the statistical pipeline described in the paper:
# - Q1: Friedman (repeated measures) + Wilcoxon post-hoc (Holm)
# - Q2: FP32 vs INT8 (Shapiro -> paired t or Wilcoxon)
# Saves CSV and LaTeX tables; prints a succinct console summary.
# ---------------------------------------------------------------

import pandas as pd
import numpy as np
from itertools import combinations
from scipy.stats import shapiro, ttest_rel, wilcoxon, friedmanchisquare
import math
from scipy.stats import norm


# In[11]:


# ========== CONFIG ==========
CSV_PATH = "./model_scores_per_fold.csv"  # <-- change path if needed

# Expected model display names (any order is fine)
MODEL_ORDER = [
    "Random Forest", "SVM", "XGBoost", "LightGBM",
    "FCNN (FP32)", "FCNN (INT8)", "AutoEncoder (FP32)", "AutoEncoder (INT8)"
]

# Mapping from CSV column prefixes to display names
PREFIX_TO_MODEL = {
    "RF": "Random Forest",
    "SVM": "SVM", 
    "XGB": "XGBoost",
    "LGB": "LightGBM",
    "FCNN32": "FCNN (FP32)",
    "FCNN8": "FCNN (INT8)",
    "AE32": "AutoEncoder (FP32)",
    "AE8": "AutoEncoder (INT8)"
}

# Metric mapping from CSV suffixes to standard names
METRIC_MAPPING = {
    "Acc": "Accuracy",
    "BalAcc": "Balanced Accuracy", 
    "F1": "Macro F1",
    "ROC": "ROC AUC",
    "Prec": "Precision (Macro)",
    "Rec": "Recall (Macro)"
}

# Quantization pairs (architecture FP32 vs INT8)
QUANT_PAIRS = [
    ("FCNN (FP32)", "FCNN (INT8)"),
    ("AutoEncoder (FP32)", "AutoEncoder (INT8)")
]

# Metric column names to analyze (will auto-detect if empty)
METRICS = []  # e.g., ["Accuracy","Balanced Accuracy","Macro F1","ROC AUC","Precision (Macro)","Recall (Macro)"]

# Column names for LONG format (will auto-infer if None)
MODEL_COL = None  # e.g., "Model"
FOLD_COL  = None  # e.g., "fold" or "fold_id"


# In[12]:


# ========== Helpers ==========
def holm_bonferroni(pvals_dict):
    # dict[(a,b)] = p  -> returns adjusted p-values dict with same keys
    items = sorted(pvals_dict.items(), key=lambda kv: kv[1])  # ascending by raw p
    m = len(items)
    adj_sorted = []
    for i, (k, p) in enumerate(items, start=1):
        adj_sorted.append((k, min((m - i + 1) * p, 1.0)))
    # enforce monotonicity
    for i in range(1, m):
        adj_sorted[i] = (adj_sorted[i][0], max(adj_sorted[i][1], adj_sorted[i-1][1]))
    # back to original order
    return {k: v for k, v in adj_sorted}

def cohen_d_paired(a, b):
    d = np.asarray(a) - np.asarray(b)
    sd = d.std(ddof=1)
    return d.mean() / (sd if sd > 0 else np.nan)

def cliffs_delta(a, b):
    a = np.asarray(a); b = np.asarray(b)
    gt = sum((x > y) for x in a for y in b)
    lt = sum((x < y) for x in a for y in b)
    n = len(a) * len(b)
    return (gt - lt) / n if n else np.nan

def kendalls_w_from_friedman(chi2, n_blocks, k_groups):
    # W = chi2 / (N * (k - 1))
    if any(math.isnan(x) for x in [chi2, n_blocks, k_groups]) or k_groups <= 1 or n_blocks <= 0:
        return np.nan
    return chi2 / (n_blocks * (k_groups - 1))

def wilcoxon_z_from_p(p, median_diff):
    """Two-sided p -> |Z| via normal inverse; sign from median_diff."""
    if np.isnan(p) or p <= 0 or p >= 1:
        return np.nan
    z_abs = norm.isf(p/2.0)
    sign = 1.0 if median_diff > 0 else (-1.0 if median_diff < 0 else 0.0)
    return sign * z_abs

def effect_r_from_z(z, n):
    return z / math.sqrt(n) if (not np.isnan(z) and n > 0) else np.nan

def write_latex(df, path, caption, label):
    with open(path, "w", encoding="utf-8") as f:
        f.write(df.to_latex(index=False, escape=True,
                            caption=caption, label=label,
                            float_format="%.4g"))


# In[13]:


# ========== Load CSV and detect shape ==========
df = pd.read_csv(CSV_PATH)

# Try to detect LONG vs WIDE
def is_long_format(d: pd.DataFrame):
    nonnum = [c for c in d.columns if not np.issubdtype(d[c].dtype, np.number)]
    return len(nonnum) >= 1 and any('model' in c.lower() for c in nonnum)

long_format = is_long_format(df)
print(f"Detected format: {'LONG' if long_format else 'WIDE'}")

if long_format:
    # Infer MODEL_COL and FOLD_COL if needed
    if MODEL_COL is None:
        nonnum = [c for c in df.columns if not np.issubdtype(df[c].dtype, np.number)]
        MODEL_COL = nonnum[0]
    if FOLD_COL is None:
        candidates = [c for c in df.columns if "fold" in c.lower() or "repeat" in c.lower() or "cv" in c.lower()]
        FOLD_COL = candidates[0] if candidates else None

    # Build metric list if not provided
    if not METRICS:
        ignore = {MODEL_COL}
        if FOLD_COL: ignore.add(FOLD_COL)
        METRICS = [c for c in df.columns if c not in ignore and np.issubdtype(df[c].dtype, np.number)]

    # Clean model labels
    df[MODEL_COL] = df[MODEL_COL].astype(str).str.strip()
else:
    # WIDE format: create LONG view for processing.
    # Parse columns like "RF_Acc", "SVM_BalAcc", etc.
    
    # Build metric list from column suffixes
    if not METRICS:
        suffixes = set()
        for col in df.columns:
            if '_' in col and col != 'Fold':
                suffix = col.split('_', 1)[1]
                suffixes.add(suffix)
        METRICS = [METRIC_MAPPING.get(s, s) for s in sorted(suffixes)]
    
    print(f"Found metrics: {METRICS}")
    
    # Build LONG format by parsing column names
    rows = []
    for col in df.columns:
        if col == 'Fold':
            continue
        if '_' in col:
            prefix, suffix = col.split('_', 1)
            if prefix in PREFIX_TO_MODEL:
                model_name = PREFIX_TO_MODEL[prefix]
                metric_name = METRIC_MAPPING.get(suffix, suffix)
                
                for idx, row in df.iterrows():
                    rows.append({
                        'fold': row['Fold'],
                        'Model': model_name,
                        'metric_name': metric_name,
                        'value': row[col]
                    })
    
    long_df = pd.DataFrame(rows)
    
    # Pivot to (fold, model) x metrics
    MODEL_COL, FOLD_COL = "Model", "fold"
    df = long_df.pivot_table(index=[FOLD_COL, MODEL_COL], columns="metric_name", values="value").reset_index()
    
    # Clean up column names
    df.columns.name = None

print(f"DataFrame shape: {df.shape}")
print(f"Columns: {list(df.columns)}")

# Now we are in LONG-like form with MODEL_COL, FOLD_COL, METRICS
models_present = sorted(df[MODEL_COL].unique())
print(f"Models found: {models_present}")

# Keep only models we know (if present)
models_used = [m for m in MODEL_ORDER if m in models_present]
print(f"Models to use: {models_used}")

if len(models_used) < 3:
    raise ValueError(f"Fewer than 3 recognized models. Found: {models_present}")


# In[14]:


# Build wide matrices per metric: rows = folds, cols = models
def metric_wide(metric):
    w = (df[[FOLD_COL, MODEL_COL, metric]]
         .pivot_table(index=FOLD_COL, columns=MODEL_COL, values=metric, aggfunc="first"))
    # keep only selected models and drop any rows with missing
    w = w.reindex(columns=models_used)
    w = w.dropna(axis=0, how="any")
    return w

friedman_rows = []
posthoc_rows  = []
quant_rows    = []

for metric in METRICS:
    print(f"\nProcessing {metric}...")
    W = metric_wide(metric)
    if W.empty or W.shape[0] < 3:
        print(f"Skipping {metric} - insufficient data")
        continue
    
    print(f"Data shape for {metric}: {W.shape}")

    # ---------- Q1: Friedman ----------
    try:
        fr_stat, fr_p = friedmanchisquare(*[W[m].values for m in W.columns])
    except Exception as e:
        print(f"Friedman test failed for {metric}: {e}")
        fr_stat, fr_p = (np.nan, np.nan)
    friedman_rows.append({
        "metric": metric,
        "n_folds": W.shape[0],
        "n_models": W.shape[1],
        "chi2": fr_stat,
        "p_value": fr_p
    })

    # Post-hoc Wilcoxon (paired) with Holm; include model1/model2 + effect
    pair_p = {}
    pair_stat = {}
    pair_eff = {}

    for m1, m2 in combinations(W.columns, 2):
        s1, s2 = W[m1].values, W[m2].values
        try:
            stat, p = wilcoxon(s1, s2, zero_method='pratt', alternative='two-sided')
        except ValueError:
            stat, p = (0.0, 1.0)
        pair_p[(m1, m2)] = p
        pair_stat[(m1, m2)] = stat
        # Effect size for post-hoc: Cliff's delta (direction m1 vs m2)
        pair_eff[(m1, m2)] = cliffs_delta(s1, s2)

    adj = holm_bonferroni(pair_p)
    for (m1, m2), p in pair_p.items():
        posthoc_rows.append({
            "metric": metric,
            "model1": m1,
            "model2": m2,
            "pair": f"{m1} vs {m2}",
            "wilcoxon_stat": pair_stat[(m1, m2)],
            "p_raw": p,
            "p_holm": adj[(m1, m2)],
            "effect": pair_eff[(m1, m2)]
        })

    # ---------- Q2: Quantization (per architecture) ----------
    for a, b in QUANT_PAIRS:
        if a in W.columns and b in W.columns:
            diffs = W[a].values - W[b].values
            p_norm = np.nan
            test_name = "Wilcoxon"
            stat = np.nan
            pval = np.nan
            eff = np.nan
            if diffs.size >= 3 and diffs.var() > 0:
                try:
                    _, p_norm = shapiro(diffs)
                except Exception:
                    p_norm = np.nan
                if not np.isnan(p_norm) and p_norm > 0.05:
                    # paired t
                    stat, pval = ttest_rel(W[a].values, W[b].values)
                    eff = cohen_d_paired(W[a].values, W[b].values)
                    test_name = "Paired t"
                else:
                    # Wilcoxon
                    try:
                        stat, pval = wilcoxon(W[a].values, W[b].values, zero_method='pratt', alternative='two-sided')
                    except ValueError:
                        stat, pval = (0.0, 1.0)
                    eff = cliffs_delta(W[a].values, W[b].values)
            quant_rows.append({
                "metric": metric,
                "pair": f"{a} vs {b}",
                "n_folds": W.shape[0],
                "normality_p": p_norm,
                "test": test_name,
                "stat": stat,
                "p_value": pval,
                "effect": eff
            })

print("\nProcessing complete!")


# In[15]:


# ---------- Save as .TXT (human-readable) + ENHANCED Q1 SUMMARY ----------

def save_txt(df, path, title):
    with open(path, "w", encoding="utf-8") as f:
        f.write(f"{title}\n")
        f.write("=" * len(title) + "\n")
        if df.empty:
            f.write("(no results)\n")
        else:
            f.write(df.to_string(index=False))
            f.write("\n")

# Create DataFrames (sorted)
friedman_df = pd.DataFrame(friedman_rows).sort_values(["metric"])
posthoc_df  = pd.DataFrame(posthoc_rows).sort_values(["metric","p_holm"])
quant_df    = pd.DataFrame(quant_rows).sort_values(["metric","pair"])

# Attach Kendall's W + df to Friedman table
if not friedman_df.empty:
    friedman_df["df"] = friedman_df["n_models"] - 1
    friedman_df["kendall_w"] = friedman_df.apply(
        lambda r: kendalls_w_from_friedman(r["chi2"], r["n_folds"], r["n_models"]), axis=1
    )

# Compute medians, Z, and r for post-hoc rows
def _pair_medians(metric, m1, m2):
    Wloc = metric_wide(metric)
    a = Wloc[m1].values; b = Wloc[m2].values
    return np.median(a), np.median(b)

if not posthoc_df.empty:
    mdn_a, mdn_b, z_vals, r_vals = [], [], [], []
    for _, r in posthoc_df.iterrows():
        mA, mB = r["model1"], r["model2"]
        ma, mb = _pair_medians(r["metric"], mA, mB)
        mdn_a.append(ma); mdn_b.append(mb)
        # compute Z from two-sided p_raw using sign of median_diff
        Wloc = metric_wide(r["metric"])
        diff = (Wloc[mA] - Wloc[mB]).values
        med_diff = np.median(diff)
        z = wilcoxon_z_from_p(r["p_raw"], med_diff)
        r_eff = effect_r_from_z(z, Wloc.shape[0])
        z_vals.append(z); r_vals.append(r_eff)
    posthoc_df["mdn_model1"] = mdn_a
    posthoc_df["mdn_model2"] = mdn_b
    posthoc_df["Z"] = z_vals
    posthoc_df["r"] = r_vals

# Attach Z and r for quantization comparisons
if not quant_df.empty:
    Zs, rs = [], []
    for _, r in quant_df.iterrows():
        n = int(r["n_folds"]) if not pd.isnull(r["n_folds"]) else np.nan
        if r["test"] == "Paired t":
            Zs.append(np.nan)
            rs.append(np.nan)
        else:
            # Wilcoxon: recover Z from p two-sided; sign via median difference
            metric = r["metric"]
            pair = r["pair"]
            archA, archB = pair.split(" vs ")
            Wloc = metric_wide(metric)
            if archA in Wloc.columns and archB in Wloc.columns:
                med_diff = np.median(Wloc[archA].values - Wloc[archB].values)
            else:
                med_diff = 0.0
            z = wilcoxon_z_from_p(r["p_value"], med_diff)
            Zs.append(z)
            rs.append(effect_r_from_z(z, n))
    quant_df["Z"] = Zs
    quant_df["r"] = rs

# Save to .txt files
save_txt(friedman_df, "friedman_results.txt",
         "Friedman omnibus tests across models (per metric)")
save_txt(posthoc_df,  "posthoc_wilcoxon_holm.txt",
         "Post-hoc Wilcoxon pairs after Holm correction")
save_txt(quant_df,    "quantization_tests.txt",
         "Quantization comparisons (FP32 vs INT8) with chosen test and effect size")

print("Results saved to TXT files:")
print("- friedman_results.txt")
print("- posthoc_wilcoxon_holm.txt")
print("- quantization_tests.txt")
print("- sensitivity_analysis.txt")

# ---------------------- Q1: build richer summary ----------------------

# Ensure posthoc has model1/model2/effect; if not, derive
if not posthoc_df.empty:
    if "model1" not in posthoc_df.columns or "model2" not in posthoc_df.columns:
        split = posthoc_df["pair"].str.split(" vs ", n=1, expand=True)
        posthoc_df["model1"] = split[0]
        posthoc_df["model2"] = split[1]
    if "effect" not in posthoc_df.columns:
        # compute Cliff's Δ as an effect size direction for each pair/metric
        def _pair_effect(r):
            Wloc = metric_wide(r["metric"])
            m1, m2 = r["model1"], r["model2"]
            if m1 in Wloc.columns and m2 in Wloc.columns:
                return cliffs_delta(Wloc[m1].values, Wloc[m2].values)
            return np.nan
        posthoc_df["effect"] = posthoc_df.apply(_pair_effect, axis=1)

# Compute per-metric means/SDs and average ranks; build global leaderboard
per_metric_summaries = []
global_rank_accum = []

for metric in METRICS:
    Wm = metric_wide(metric)
    if Wm.empty:
        continue
    means = Wm.mean(axis=0)
    stds  = Wm.std(axis=0, ddof=1)
    ranks = Wm.rank(axis=1, method="average", ascending=False)   # higher is better
    avg_ranks = ranks.mean(axis=0).sort_values()                 # ↓ is better
    global_rank_accum.append(avg_ranks)

    metric_df = pd.DataFrame({
        "Metric": metric,
        "Model": means.index,
        "Mean": means.values,
        "SD": stds.reindex(means.index).values,
        "Avg Rank": avg_ranks.reindex(means.index).values
    }).sort_values(["Avg Rank","Mean"], ascending=[True, False])
    per_metric_summaries.append(metric_df)

if global_rank_accum:
    global_rank = pd.concat(global_rank_accum, axis=1).mean(axis=1).sort_values()
    # Directional wins/losses from significant post-hoc (Holm < .05)
    posthoc_sig = posthoc_df[posthoc_df["p_holm"] < 0.05].copy()
    # get median diff to determine direction (m1 > m2 or vice versa)
    def _median_diff(r):
        Wloc = metric_wide(r["metric"])
        if r["model1"] in Wloc.columns and r["model2"] in Wloc.columns:
            d = (Wloc[r["model1"]] - Wloc[r["model2"]]).values
            return np.median(d) if len(d) else np.nan
        return np.nan
    if not posthoc_sig.empty:
        posthoc_sig["median_diff"] = posthoc_sig.apply(_median_diff, axis=1)
    win_counts = {m: 0 for m in models_used}
    loss_counts = {m: 0 for m in models_used}
    for _, r in (posthoc_sig if not posthoc_sig.empty else pd.DataFrame()).iterrows():
        if pd.notnull(r["median_diff"]):
            if r["median_diff"] > 0:
                win_counts[r["model1"]] += 1
                loss_counts[r["model2"]] += 1
            elif r["median_diff"] < 0:
                win_counts[r["model2"]] += 1
                loss_counts[r["model1"]] += 1
    global_table = pd.DataFrame({
        "Model": global_rank.index,
        "Global Avg Rank (↓ better)": global_rank.values,
        "Wins (Holm<0.05)": [win_counts.get(m,0) for m in global_rank.index],
        "Losses": [loss_counts.get(m,0) for m in global_rank.index]
    })
else:
    posthoc_sig = pd.DataFrame()
    global_table = pd.DataFrame()

# Save Q1 human-readable summary file
with open("q1_summary.txt", "w", encoding="utf-8") as f:
    f.write("Q1 SUMMARY: Which model is best?\n")
    f.write("================================\n\n")
    f.write("Friedman omnibus per metric:\n")
    if friedman_df.empty:
        f.write("  (no results)\n\n")
    else:
        for _, row in friedman_df.iterrows():
            f.write(f"  - {row['metric']}: chi2={row['chi2']:.3f}, p={row['p_value']:.2e}\n")
        f.write("\n")

    f.write("Global leaderboard (average rank across metrics):\n")
    if global_table.empty:
        f.write("  (no leaderboard)\n\n")
    else:
        f.write(global_table.to_string(index=False))
        f.write("\n\n")

    f.write("Per-metric best model (mean ± sd; avg rank):\n")
    if not per_metric_summaries:
        f.write("  (none)\n")
    else:
        for metric_df in per_metric_summaries:
            top = metric_df.iloc[0]
            f.write(f"  - {top['Metric']}: {top['Model']} "
                    f"({top['Mean']:.4f} ± {top['SD']:.4f}; rank={top['Avg Rank']:.2f})\n")
        f.write("\n")

    f.write("Significant post-hoc pairs after Holm (directional):\n")
    if posthoc_sig.empty:
        f.write("  (none)\n")
    else:
        for _, r in posthoc_sig.sort_values(["p_holm","metric"]).head(20).iterrows():
            arrow = " > " if r["median_diff"] > 0 else (" < " if r["median_diff"] < 0 else " = ")
            f.write(f"  - {r['metric']}: {r['model1']}{arrow}{r['model2']} "
                    f"(p_holm={r['p_holm']:.2e})\n")
print("Saved: q1_summary.txt")

# ========================= Console SUMMARY (enhanced) =========================
print("\n" + "="*70)
print("SUMMARY")
print("="*70)
print(f"Models analyzed: {len(models_used)}")
print(f"Metrics analyzed: {len(METRICS)}")

# ---------- Q1: Model comparison ----------
print("\n[Q1] WHICH MODEL IS BEST? (Friedman + Ranks + Post-hoc)")
sig_friedman = friedman_df[friedman_df['p_value'] < 0.05]
nonsig_friedman = friedman_df[friedman_df['p_value'] >= 0.05]

if not sig_friedman.empty:
    print(f"Friedman significant (p < 0.05): {len(sig_friedman)} / {len(friedman_df)} metrics")
    for _, row in sig_friedman.iterrows():
        kendall_w = row.get('kendall_w', np.nan)
        df = row.get('df', np.nan)
        print(f"  - {row['metric']}: χ²={row['chi2']:.3f}, df={df:.0f}, p={row['p_value']:.2e}, Kendall's W={kendall_w:.3f}")
else:
    print("No metrics reached significance in Friedman test.")

if not nonsig_friedman.empty:
    print(f"Friedman non-significant: {len(nonsig_friedman)} metrics")
    for _, row in nonsig_friedman.iterrows():
        kendall_w = row.get('kendall_w', np.nan)
        df = row.get('df', np.nan)
        print(f"  - {row['metric']}: χ²={row['chi2']:.3f}, df={df:.0f}, p={row['p_value']:.2e}, Kendall's W={kendall_w:.3f}")

# Global leaderboard
if not global_table.empty:
    print("\nGlobal leaderboard (average rank across metrics):")
    for _, r in global_table.sort_values("Global Avg Rank (↓ better)").iterrows():
        print(f"  {r['Model']}: avg rank={r['Global Avg Rank (↓ better)']:.2f}, "
              f"Wins={int(r['Wins (Holm<0.05)'])}, Losses={int(r['Losses'])}")

# Per-metric bests
if per_metric_summaries:
    print("\nPer-metric best model (mean ± sd; avg rank):")
    for metric_df in per_metric_summaries:
        top = metric_df.iloc[0]
        print(f"  - {top['Metric']}: {top['Model']} "
              f"({top['Mean']:.4f} ± {top['SD']:.4f}; rank={top['Avg Rank']:.2f})")

# Post-hoc directional highlights
if not posthoc_sig.empty:
    print("\nTop post-hoc (directional, Holm-corrected p) — smallest first:")
    for _, r in posthoc_sig.sort_values(["p_holm","metric"]).head(10).iterrows():
        arrow = " > " if r["median_diff"] > 0 else (" < " if r["median_diff"] < 0 else " = "
        )
        print(f"  {r['metric']}: {r['model1']}{arrow}{r['model2']} (p_holm={r['p_holm']:.2e})")
else:
    print("\nNo significant post-hoc pairs after Holm.")

# ---------- Separator ----------
print("\n" + "-"*70)

# ---------- Q2: Quantization effect ----------
print("[Q2] DOES INT8 QUANTIZATION AFFECT PERFORMANCE?")
sig_quant = quant_df[quant_df['p_value'] < 0.05]
nonsig_quant = quant_df[quant_df['p_value'] >= 0.05]

if not sig_quant.empty:
    print(f"Significant quantization differences (p < 0.05): {len(sig_quant)} cases")
    for _, row in sig_quant.iterrows():
        z_val = row.get('Z', np.nan)
        r_val = row.get('r', np.nan)
        norm_p = row.get('normality_p', np.nan)
        if row['test'] == 'Paired t':
            print(f"  - {row['metric']} [{row['pair']}]: Shapiro p={norm_p:.3f} → {row['test']}, "
                  f"p={row['p_value']:.4g}, Cohen's d={row['effect']:.3f}")
        else:
            print(f"  - {row['metric']} [{row['pair']}]: Shapiro p={norm_p:.3f} → {row['test']}, "
                  f"p={row['p_value']:.4g}, Z={z_val:.2f}, r={r_val:.3f}, Cliff's Δ={row['effect']:.3f}")
else:
    print("No significant quantization effects found.")

if not nonsig_quant.empty:
    print(f"Non-significant quantization results: {len(nonsig_quant)} cases")
    for _, row in nonsig_quant.iterrows():
        z_val = row.get('Z', np.nan)
        r_val = row.get('r', np.nan)
        norm_p = row.get('normality_p', np.nan)
        if row['test'] == 'Paired t':
            print(f"  - {row['metric']} [{row['pair']}]: Shapiro p={norm_p:.3f} → {row['test']}, "
                  f"p={row['p_value']:.4g}, Cohen's d={row['effect']:.3f}")
        else:
            print(f"  - {row['metric']} [{row['pair']}]: Shapiro p={norm_p:.3f} → {row['test']}, "
                  f"p={row['p_value']:.4g}, Z={z_val:.2f}, r={r_val:.3f}, Cliff's Δ={row['effect']:.3f}")


# In[16]:


# =============================
# Q1: WHICH MODEL IS BEST?
# =============================
print("\n[Q1] WHICH MODEL IS BEST? (Friedman + Ranks + Post-hoc)")

# Friedman results summary
sig_friedman = friedman_df[friedman_df['p_value'] < 0.05]
nonsig_friedman = friedman_df[friedman_df['p_value'] >= 0.05]

if not sig_friedman.empty:
    print(f"Friedman test: Significant differences detected in "
          f"{len(sig_friedman)}/{len(friedman_df)} metrics (p < 0.05).")
else:
    print("Friedman test: No significant differences between models.")

print("\nPer-metric significance:")
for _, row in friedman_df.iterrows():
    sig_flag = "✔" if row['p_value'] < 0.05 else "✘"
    kendall_w = row.get('kendall_w', np.nan)
    df = row.get('df', np.nan)
    print(f"  {sig_flag} {row['metric']}: χ²={row['chi2']:.3f}, df={df:.0f}, p={row['p_value']:.4g}, Kendall's W={kendall_w:.3f}")

# Global leaderboard
print("\nGlobal Leaderboard (avg rank across all metrics):")
if not global_table.empty:
    for _, r in global_table.sort_values("Global Avg Rank (↓ better)").iterrows():
        print(f"  {r['Model']}: rank={r['Global Avg Rank (↓ better)']:.2f}, "
              f"Wins={int(r['Wins (Holm<0.05)'])}, Losses={int(r['Losses'])}")
else:
    print("  (no leaderboard)")

# Per-metric best model
print("\nBest model per metric (mean ± sd; avg rank):")
if per_metric_summaries:
    for metric_df in per_metric_summaries:
        top = metric_df.iloc[0]
        print(f"  - {top['Metric']}: {top['Model']} "
              f"({top['Mean']:.4f} ± {top['SD']:.4f}; rank={top['Avg Rank']:.2f})")
else:
    print("  (no per-metric bests)")

# Post-hoc top pairs (directional)
print("\nTop Post-hoc Comparisons (Holm-corrected p, smallest first):")
if 'posthoc_sig' in locals() and not posthoc_sig.empty:
    show = posthoc_sig.sort_values(["p_holm", "metric"]).head(10)
    for _, row in show.iterrows():
        # Determine direction using median_diff (computed earlier)
        if 'median_diff' in row and pd.notnull(row['median_diff']):
            better = row['model1'] if row['median_diff'] > 0 else row['model2']
            worse  = row['model2'] if row['median_diff'] > 0 else row['model1']
        else:
            # Fallback to effect sign if median_diff missing
            better = row['model1'] if row.get('effect', 0) > 0 else row['model2']
            worse  = row['model2'] if row.get('effect', 0) > 0 else row['model1']
        eff_val = row['effect'] if 'effect' in row and pd.notnull(row['effect']) else np.nan
        z_val = row.get('Z', np.nan)
        r_val = row.get('r', np.nan)
        mdn1 = row.get('mdn_model1', np.nan)
        mdn2 = row.get('mdn_model2', np.nan)
        print(f"  {row['metric']}: {better} > {worse} (mdn: {mdn1:.4f} vs {mdn2:.4f}, Z={z_val:.2f}, r={r_val:.3f}, p_holm={row['p_holm']:.2e})")
else:
    print("  (no significant post-hoc pairs)")

# ---------- Separator ----------
print("\n" + "-"*70)

# =============================
# Q2: DOES INT8 QUANTIZATION AFFECT PERFORMANCE?
# =============================
print("[Q2] DOES INT8 QUANTIZATION AFFECT PERFORMANCE?")

sig_quant = quant_df[quant_df['p_value'] < 0.05]
nonsig_quant = quant_df[quant_df['p_value'] >= 0.05]

# Summary
if not sig_quant.empty:
    print(f"Quantization effect detected in {len(sig_quant)}/{len(quant_df)} cases.")
else:
    print("No significant quantization effects detected.")

# FCNN summary
print("\nFCNN (FP32 vs INT8):")
fcnn_results = quant_df[quant_df['pair'].str.contains("FCNN")]
if not fcnn_results.empty:
    for _, row in fcnn_results.iterrows():
        sig_flag = "✔" if row['p_value'] < 0.05 else "✘"
        z_val = row.get('Z', np.nan)
        r_val = row.get('r', np.nan)
        norm_p = row.get('normality_p', np.nan)
        if row['test'] == 'Paired t':
            print(f"  {sig_flag} {row['metric']}: Shapiro p={norm_p:.3f} → {row['test']}, "
                  f"p={row['p_value']:.4g}, Cohen's d={row['effect']:.3f}")
        else:
            print(f"  {sig_flag} {row['metric']}: Shapiro p={norm_p:.3f} → {row['test']}, "
                  f"p={row['p_value']:.4g}, Z={z_val:.2f}, r={r_val:.3f}, Cliff's Δ={row['effect']:.3f}")
else:
    print("  (no FCNN comparison rows)")

# AutoEncoder summary
print("\nAutoEncoder (FP32 vs INT8):")
ae_results = quant_df[quant_df['pair'].str.contains("AutoEncoder")]
if not ae_results.empty:
    for _, row in ae_results.iterrows():
        sig_flag = "✔" if row['p_value'] < 0.05 else "✘"
        z_val = row.get('Z', np.nan)
        r_val = row.get('r', np.nan)
        norm_p = row.get('normality_p', np.nan)
        if row['test'] == 'Paired t':
            print(f"  {sig_flag} {row['metric']}: Shapiro p={norm_p:.3f} → {row['test']}, "
                  f"p={row['p_value']:.4g}, Cohen's d={row['effect']:.3f}")
        else:
            print(f"  {sig_flag} {row['metric']}: Shapiro p={norm_p:.3f} → {row['test']}, "
                  f"p={row['p_value']:.4g}, Z={z_val:.2f}, r={r_val:.3f}, Cliff's Δ={row['effect']:.3f}")
else:
    print("  (no AutoEncoder comparison rows)")

# =============================
# SIGNIFICANCE LEVEL SENSITIVITY ANALYSIS
# =============================
print("\n" + "="*70)
print("SIGNIFICANCE LEVEL SENSITIVITY ANALYSIS")
print("="*70)

# Test multiple significance levels for robustness (focus on Type II error)
alpha_levels = [0.10, 0.05, 0.01]
sensitivity_results = []

for alpha in alpha_levels:
    # Count significant results at this alpha level
    sig_friedman_count = len(friedman_df[friedman_df['p_value'] < alpha])
    sig_posthoc_count = len(posthoc_df[posthoc_df['p_holm'] < alpha]) if not posthoc_df.empty else 0
    sig_quant_count = len(quant_df[quant_df['p_value'] < alpha]) if not quant_df.empty else 0
    
    # Store results
    sensitivity_results.append({
        'alpha': alpha,
        'friedman_sig': sig_friedman_count,
        'friedman_total': len(friedman_df),
        'posthoc_sig': sig_posthoc_count,
        'posthoc_total': len(posthoc_df) if not posthoc_df.empty else 0,
        'quant_sig': sig_quant_count,
        'quant_total': len(quant_df) if not quant_df.empty else 0
    })

# Create sensitivity DataFrame for export
sensitivity_df = pd.DataFrame(sensitivity_results)

# Print sensitivity analysis results
print(f"Testing robustness across significance levels: {alpha_levels}")
print("Focus: Balancing Type I vs Type II error risk")
print("\nResults Summary:")
print("-" * 80)
print(f"{'Alpha':<8} {'Friedman':<12} {'Post-hoc':<12} {'Quantization':<15} {'Total Significant':<15}")
print("-" * 80)

for _, row in sensitivity_df.iterrows():
    alpha = row['alpha']
    friedman_str = f"{int(row['friedman_sig'])}/{int(row['friedman_total'])}"
    posthoc_str = f"{int(row['posthoc_sig'])}/{int(row['posthoc_total'])}"
    quant_str = f"{int(row['quant_sig'])}/{int(row['quant_total'])}"
    total_sig = int(row['friedman_sig']) + int(row['posthoc_sig']) + int(row['quant_sig'])
    total_tests = int(row['friedman_total']) + int(row['posthoc_total']) + int(row['quant_total'])
    total_str = f"{total_sig}/{total_tests}"
    
    print(f"{alpha:<8} {friedman_str:<12} {posthoc_str:<12} {quant_str:<15} {total_str:<15}")

# Detailed analysis
print("\nDetailed Sensitivity Analysis:")
print("-" * 50)

# Check if all metrics remain significant at strictest level
strictest_alpha = 0.01  # Most conservative level
if not friedman_df.empty:
    all_sig_strictest = len(friedman_df[friedman_df['p_value'] < strictest_alpha]) == len(friedman_df)
    print(f"All Friedman tests significant at α = {strictest_alpha}: {'✓' if all_sig_strictest else '✗'}")

# Effect size vs significance relationship
if not posthoc_df.empty:
    large_effects = posthoc_df[abs(posthoc_df['effect']) > 0.5] if 'effect' in posthoc_df.columns else pd.DataFrame()
    if not large_effects.empty:
        large_effects_strict = len(large_effects[large_effects['p_holm'] < strictest_alpha])
        print(f"Large effect post-hoc pairs (|effect| > 0.5) significant at α = {strictest_alpha}: {large_effects_strict}/{len(large_effects)}")

# Robustness interpretation with Type II error focus
print("\nRobustness Interpretation:")
conservative_sig = sensitivity_df[sensitivity_df['alpha'] == 0.01]['friedman_sig'].iloc[0]
liberal_sig = sensitivity_df[sensitivity_df['alpha'] == 0.10]['friedman_sig'].iloc[0]
standard_sig = sensitivity_df[sensitivity_df['alpha'] == 0.05]['friedman_sig'].iloc[0]

if conservative_sig > 0:
    print("✓ Strong evidence: Results significant even at conservative α = 0.01")
    print("✓ Low risk of Type I errors (false positives)")
if liberal_sig > standard_sig:
    print("✓ Liberal threshold (α = 0.10) captures additional true effects")
    print("✓ Reduced risk of Type II errors (false negatives)")
if conservative_sig == standard_sig:
    print("✓ Results robust: no additional effects lost at conservative threshold")
else:
    print(f"⚠ Some effects lost at conservative threshold: {standard_sig - conservative_sig} fewer significant")
    print("⚠ Consider Type II error risk vs Type I error protection")

# Save sensitivity results
sensitivity_path = "sensitivity_analysis.txt"
with open(sensitivity_path, "w", encoding="utf-8") as f:
    f.write("Significance Level Sensitivity Analysis\n")
    f.write("=" * 40 + "\n\n")
    f.write(f"Tested α levels: {alpha_levels}\n\n")
    f.write(sensitivity_df.to_string(index=False))
    f.write("\n\nInterpretation:\n")
    conservative_sig = sensitivity_df[sensitivity_df['alpha'] == 0.01]['friedman_sig'].iloc[0]
    liberal_sig = sensitivity_df[sensitivity_df['alpha'] == 0.10]['friedman_sig'].iloc[0]
    standard_sig = sensitivity_df[sensitivity_df['alpha'] == 0.05]['friedman_sig'].iloc[0]
    
    if conservative_sig > 0:
        f.write("Results show strong robustness - significant even at conservative α = 0.01.\n")
        f.write("Low risk of Type I errors.\n")
    if liberal_sig > standard_sig:
        f.write(f"Liberal threshold captures {liberal_sig - standard_sig} additional effects.\n")
        f.write("Reduced Type II error risk.\n")
    f.write(f"\nType I vs Type II error trade-off:\n")
    f.write(f"- Conservative (α=0.01): {conservative_sig} significant (lower Type I risk)\n")
    f.write(f"- Standard (α=0.05): {standard_sig} significant (balanced)\n")
    f.write(f"- Liberal (α=0.10): {liberal_sig} significant (lower Type II risk)\n")

print(f"\nSensitivity analysis saved to: {sensitivity_path}")

# Add sensitivity analysis to Q1 summary
with open("q1_summary.txt", "a", encoding="utf-8") as f:
    f.write("\n" + "="*50 + "\n")
    f.write("SIGNIFICANCE LEVEL SENSITIVITY ANALYSIS\n")
    f.write("="*50 + "\n\n")
    f.write("Robustness test across multiple α levels:\n")
    for _, row in sensitivity_df.iterrows():
        alpha = row['alpha']
        sig_count = int(row['friedman_sig'])
        total_count = int(row['friedman_total'])
        f.write(f"  α = {alpha:>6}: {sig_count}/{total_count} metrics significant\n")
    f.write("\n")
    conservative_sig = sensitivity_df[sensitivity_df['alpha'] == 0.01]['friedman_sig'].iloc[0]
    standard_sig = sensitivity_df[sensitivity_df['alpha'] == 0.05]['friedman_sig'].iloc[0]
    
    if conservative_sig > 0:
        f.write("Conclusion: Results robust across significance levels.\n")
        f.write("Strong evidence with controlled Type I error risk.\n")
    if conservative_sig == standard_sig:
        f.write("No additional Type II errors introduced by conservative testing.\n")
    else:
        f.write(f"Conservative testing introduces {standard_sig - conservative_sig} potential Type II errors.\n")
        f.write("Consider effect sizes and practical significance for borderline cases.\n")

print("Enhanced Q1 summary with sensitivity analysis saved.")

