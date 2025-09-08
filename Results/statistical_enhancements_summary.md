# Statistical Enhancements Added to statistical_tests.py

## New Helper Functions Added

```python
import math
from scipy.stats import norm

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
```

## Enhancements to Friedman Results

- **Added degrees of freedom (df)**: `df = n_models - 1`
- **Added Kendall's W**: Effect size measure for Friedman test
- **Enhanced output**: Now shows χ², df, p-value, and Kendall's W

## Enhancements to Post-hoc Results

- **Added model medians**: `mdn_model1` and `mdn_model2` for each comparison
- **Added Z scores**: Converted from Wilcoxon p-values with proper sign
- **Added effect size r**: `r = Z / √n` for practical significance
- **Enhanced output**: Shows medians, Z, r, and Holm-corrected p-values

## Enhancements to Quantization Comparisons

- **Added Z and r for Wilcoxon tests**: Similar to post-hoc enhancements
- **Preserved Cohen's d for t-tests**: Maintains existing effect sizes
- **Enhanced output**: Distinguishes between t-test (Cohen's d) and Wilcoxon (Z, r, Cliff's Δ)

## Output Improvements

### Friedman Results
- Before: `Accuracy: χ²=15.234, p=0.002`
- After: `Accuracy: χ²=15.234, df=7, p=0.002, Kendall's W=0.254`

### Post-hoc Results
- Before: `Accuracy: Model A > Model B (p=0.001, effect=0.456)`
- After: `Accuracy: Model A > Model B (mdn: 0.923 vs 0.876, Z=3.45, r=0.387, p_holm=0.001)`

### Quantization Results
- Paired t: `Accuracy: Paired t, p=0.023, Cohen's d=0.567`
- Wilcoxon: `Accuracy: Wilcoxon, p=0.018, Z=2.34, r=0.427, Cliff's Δ=0.234`

## Files Updated

1. **statistical_tests.py**: Main script with all enhancements
2. **Output files** will now include additional columns:
   - `friedman_results.txt`: Added df and kendall_w
   - `posthoc_wilcoxon_holm.txt`: Added mdn_model1, mdn_model2, Z, r
   - `quantization_tests.txt`: Added Z and r for Wilcoxon tests

## Benefits

1. **More complete statistical reporting**: All standard effect sizes included
2. **Better interpretability**: Medians provide intuitive understanding
3. **Consistent effect size metrics**: Z and r for non-parametric tests
4. **Enhanced reproducibility**: All statistics needed for meta-analysis
