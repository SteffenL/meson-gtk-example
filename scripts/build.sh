#!/usr/bin/env bash
set -e

compile_type=native
if [[ ${#@} > 0 ]]; then
    compile_type=${1}
    shift
fi

files=("${@}")
build_dir=builddir
declare -a setup_args

setup_args+=("--${compile_type}-file")
setup_args+=("profiles/default.ini")

for file in "${files[@]}"; do
    setup_args+=("--${compile_type}-file")
    if [[ "${compile_type}" != "native" ]]; then
        setup_args+=("profiles/${compile_type}/${file}.ini")
    else
        setup_args+=("profiles/${file}.ini")
    fi
done

meson setup "${build_dir}" "${setup_args[@]}"
meson compile -C "${build_dir}" app
