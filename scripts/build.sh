#!/usr/bin/env bash
set -e

files=("${@}")
build_dir=builddir
declare -a setup_args

setup_args+=("--${compile_type}-file")
setup_args+=("profiles/default.ini")

for file in ${files[@]}; do
    setup_args+=("--${compile_type}-file")
    setup_args+=("profiles/${file}.ini")
done

meson setup "${build_dir}" "${setup_args[@]}"
meson compile -C "${build_dir}" app
