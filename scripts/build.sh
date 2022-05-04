#!/usr/bin/env sh
set -e
meson subprojects download sigc++-3.0 graphene gtk4
meson setup --native-file profiles/default.ini builddir
meson compile -C builddir app
