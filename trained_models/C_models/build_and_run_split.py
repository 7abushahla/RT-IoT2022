#!/usr/bin/env python3
import argparse, os, sys, shlex, subprocess, platform, pathlib

def run(cmd, cwd=None):
    print(">>", cmd)
    p = subprocess.run(cmd, shell=True, cwd=cwd)
    if p.returncode != 0:
        sys.exit(p.returncode)

def guess_cpu_flags(device_hint: str):
    m = platform.machine().lower()
    default = ""
    if device_hint:
        hint = device_hint.lower()
        if "a53" in hint or "pi zero 2" in hint or "coral" in hint:
            return "-mcpu=cortex-a53 -march=armv8-a"
        if "a72" in hint or "raspberry pi 4" in hint or "rpi4" in hint:
            return "-mcpu=cortex-a72"
        if "jetson" in hint or "orin" in hint:
            return "-march=armv8.2-a+fp16+dotprod"
    if m in ("aarch64", "arm64"):
        return ""
    if m in ("x86_64", "amd64", "x86"):
        return "-march=native"
    return default

def is_cxx(ext):
    return ext.lower() in (".cc", ".cpp", ".cxx", ".c++", ".C", ".CPP")

def main():
    ap = argparse.ArgumentParser(description="Build & run C/C++ models with split SVM support")
    ap.add_argument("--model", required=True, help="Logical model name; used for lib name (e.g., xgb, lgbm, rf, svm)")
    ap.add_argument("--src", required=True, help="Source dir with generated files (e.g., xgb_src, lgbm_src, rf_src, svm_src)")
    ap.add_argument("--wrapper", default=None, help="Wrapper base name WITHOUT extension in --src (e.g., xgb_wrap, treelite_wrap). Use 'none' or omit for header-only.")
    ap.add_argument("--bench", required=True, help="Path to bench .c/.cc/.cpp file")
    ap.add_argument("--cc",   default="gcc", help="C compiler")
    ap.add_argument("--cxx",  default="g++", help="C++ compiler")
    ap.add_argument("--std",  default="-std=c++17", help="C++ standard used when compiling C++ files")
    ap.add_argument("--opt",  default="-O2", help="Optimization flags (e.g. -O3 -ffast-math)")
    ap.add_argument("--cflags", default="", help="Extra CFLAGS (CPU flags, defines, etc.)")
    ap.add_argument("--device", default="", help="Hint: a53 | a72 | coral | jetson-orin | rpi4 | etc. (sets CPU flags)")
    ap.add_argument("--run", action="store_true", help="Run after building")
    ap.add_argument("--name", default=None, help="Output binary name (default: bench_<model>)")
    ap.add_argument("--clean", action="store_true", help="Delete old *.o and libs before building")
    ap.add_argument("--split-svm", action="store_true", help="Use split SVM implementation (svm_model_split.h + svm_params.cpp)")
    args = ap.parse_args()

    srcdir = pathlib.Path(args.src)
    if not srcdir.is_dir():
        print(f"ERROR: src dir not found: {srcdir}")
        sys.exit(1)

    bench_src = pathlib.Path(args.bench)
    if not bench_src.exists():
        print(f"ERROR: bench file not found: {bench_src}")
        sys.exit(1)

    outbin = args.name or f"bench_{args.model}"
    on_macos = (sys.platform == "darwin")

    # Treelite layout?
    mains  = list(srcdir.glob("main.c")) + list(srcdir.glob("main.cc")) + list(srcdir.glob("main.cpp"))
    tus    = list(srcdir.glob("tu*.c")) + list(srcdir.glob("tu*.cc")) + list(srcdir.glob("tu*.cpp"))
    header = srcdir / "header.h"
    has_treelite = header.exists() and bool(mains) and bool(tus)

    # Header-only?
    has_rf_header  = (srcdir / "rf_model.h").exists()   # emlearn RF (C)
    has_svm_header = (srcdir / "svm_model.h").exists()  # micromlgen SVM (C++)
    has_svm_split = (srcdir / "svm_model_split.h").exists() and (srcdir / "svm_params.cpp").exists()  # Split SVM
    has_header_only = has_rf_header or has_svm_header or has_svm_split

    # Wrapper optional
    wrapper_base = None if (args.wrapper in (None, "", "none")) else args.wrapper
    wrapper_src = None
    if wrapper_base:
        candidates = [srcdir / f"{wrapper_base}{ext}" for ext in (".c",".cc",".cpp",".cxx",".C",".CPP")]
        wrapper_src = next((p for p in candidates if p.exists()), None)
        if not wrapper_src:
            print(f"ERROR: wrapper not found in {srcdir}: {wrapper_base}.[c|cc|cpp]")
            sys.exit(1)

    cpu_flags = args.cflags.strip() or guess_cpu_flags(args.device)
    base = f"{args.opt} {cpu_flags}".strip()
    print(f"Using flags: {base or '(none)'}")

    # Clean old artifacts
    if args.clean:
        for p in list(srcdir.glob("*.o")) + list(srcdir.glob("lib*.a")) + [pathlib.Path(outbin)]:
            try: p.unlink()
            except: pass
        try: pathlib.Path(bench_src.name.replace(bench_src.suffix, ".o")).unlink()
        except: pass
        if wrapper_base:
            try: pathlib.Path(f"{wrapper_src.stem}.o").unlink()
            except: pass

    # ===== PATH A: Treelite (XGB/LGBM) =====
    if has_treelite:
        libname = f"lib{args.model}.a"
        gen_srcs = mains + tus
        gen_objs = []

        # 1) compile generated sources
        for s in gen_srcs:
            ext = s.suffix
            o = s.with_suffix(".o")
            if is_cxx(ext):
                run(f"{args.cxx} {base} -I {shlex.quote(str(srcdir))} {args.std} -fPIC -c {shlex.quote(str(s))} -o {shlex.quote(str(o))}")
            else:
                run(f"{args.cc}  {base} -I {shlex.quote(str(srcdir))}        -fPIC -c {shlex.quote(str(s))} -o {shlex.quote(str(o))}")
            gen_objs.append(o)

        # 2) archive static lib
        libpath = srcdir / libname
        if on_macos:
            run(f"libtool -static -o {shlex.quote(str(libpath))} " + " ".join(shlex.quote(str(o)) for o in gen_objs))
        else:
            run(f"ar rcs {shlex.quote(str(libpath))} " + " ".join(shlex.quote(str(o)) for o in gen_objs))

        link_cxx = False

        # 3) compile wrapper (optional)
        wrap_o = None
        if wrapper_src:
            wrap_o = pathlib.Path(f"{wrapper_src.stem}.o")
            if is_cxx(wrapper_src.suffix):
                run(f"{args.cxx} {base} -I {shlex.quote(str(srcdir))} {args.std} -c {shlex.quote(str(wrapper_src))} -o {shlex.quote(str(wrap_o))}")
                link_cxx = True
            else:
                run(f"{args.cc}  {base} -I {shlex.quote(str(srcdir))}        -c {shlex.quote(str(wrapper_src))} -o {shlex.quote(str(wrap_o))}")

        # 4) compile bench
        bench_o = pathlib.Path(bench_src.name.replace(bench_src.suffix, ".o"))
        if is_cxx(bench_src.suffix):
            run(f"{args.cxx} {base} -I {shlex.quote(str(srcdir))} {args.std} -c {shlex.quote(str(bench_src))} -o {shlex.quote(str(bench_o))}")
            link_cxx = True or link_cxx
        else:
            run(f"{args.cc}  {base} -I {shlex.quote(str(srcdir))}        -c {shlex.quote(str(bench_src))} -o {shlex.quote(str(bench_o))}")

        # 5) link
        linker = args.cxx if link_cxx else args.cc
        pieces = [shlex.quote(str(bench_o))]
        if wrap_o: pieces.append(shlex.quote(str(wrap_o)))
        if on_macos:
            pieces.append(shlex.quote(str(libpath)))
        else:
            pieces.append(f"-L {shlex.quote(str(srcdir))} -l{args.model}")
        pieces.append("-lm")
        if link_cxx: pieces.append("-lstdc++")
        pieces.append(f"-o {shlex.quote(outbin)}")
        run(f"{linker} {base} " + " ".join(pieces))

        print(f"\nBuilt: ./{outbin}")
        if args.run:
            print("\n--- program output ---")
            run(f"./{shlex.quote(outbin)}")
        return

    # ===== PATH B: Header-only (RF / SVM) =====
    if has_header_only:
        bench_o = pathlib.Path(bench_src.name.replace(bench_src.suffix, ".o"))

        # SVM header is C++ -> always compile & link with C++
        needs_cxx = has_svm_header or has_svm_split or is_cxx(bench_src.suffix)

        # For SVM (huge header), compile the TU that includes it with light/fast flags.
        if has_svm_header:
            if on_macos:
                # Clang (macOS) – use only flags Clang supports
                compile_flags_for_tu = "-O0 -fno-inline"
            else:
                # GCC (Linux/RPi) – disable a couple of heavy passes too
                compile_flags_for_tu = "-O0 -fno-inline -fno-tree-slp-vectorize -fno-ipa-sra"
        else:
            compile_flags_for_tu = base

        if needs_cxx:
            # If bench file is .c but we need C++, force C++ mode
            force_lang = "" if is_cxx(bench_src.suffix) else "-x c++"
            run(f"{args.cxx} {compile_flags_for_tu} -I {shlex.quote(str(srcdir))} {args.std} {force_lang} -c {shlex.quote(str(bench_src))} -o {shlex.quote(str(bench_o))}")
            linker = args.cxx
            link_tail = "-lm -lstdc++"
        else:
            run(f"{args.cc}  {compile_flags_for_tu} -I {shlex.quote(str(srcdir))}        -c {shlex.quote(str(bench_src))} -o {shlex.quote(str(bench_o))}")
            linker = args.cc
            link_tail = "-lm"

        # For split SVM, we need to compile the params.cpp file as well
        if has_svm_split:
            params_o = srcdir / "svm_params.o"
            run(f"{args.cxx} {base} -I {shlex.quote(str(srcdir))} {args.std} -c {shlex.quote(str(srcdir / 'svm_params.cpp'))} -o {shlex.quote(str(params_o))}")
            # Link with the params object file
            link_tail = f"{shlex.quote(str(params_o))} -lm -lstdc++"

        # Link with your original optimization/base flags
        run(f"{linker} {base} {shlex.quote(str(bench_o))} {link_tail} -o {shlex.quote(outbin)}")

        print(f"\nBuilt (header-only): ./{outbin}")
        if args.run:
            print("\n--- program output ---")
            run(f"./{shlex.quote(outbin)}")
        return

    print("ERROR: Could not detect a supported layout in --src.")
    print(" - Treelite layout requires: header.h + main.c + tu*.c in src")
    print(" - Header-only expects: rf_model.h or svm_model.h in src")
    print(" - Split SVM expects: svm_model_split.h + svm_params.cpp in src")
    sys.exit(1)

if __name__ == "__main__":
    main()
