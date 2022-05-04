#!/usr/bin/env sh
set -e
meson subprojects download glibmm-2.68 pangomm-2.48 sigc++-3.0 cairomm-1.16 graphene gtk4 gtkmm
meson setup --native-file profiles/default.ini builddir
meson compile -C builddir app
