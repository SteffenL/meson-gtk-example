#!/usr/bin/env bash
set -e
#meson subprojects download sigc++-3.0 graphene gtk4

compile_type=${1}
cross_file=${2}
declare -a setup_args

if [[ -z "${compile_type}" ]]; then
    compile_type=native
fi

if [[ "${compile_type}" = "cross" && -z "${cross_file}" ]]; then
    echo "Please specify a cross file."
    exit 1
fi

setup_args+=("--${compile_type}-file")
setup_args+=("profiles/default.ini")

if [[ "${compile_type}" = "cross" ]]; then
    setup_args+=("--${compile_type}-file")
    setup_args+=("profiles/cross/${cross_file}.ini")
fi

meson setup builddir "${setup_args[@]}"
#meson compile -C builddir app
