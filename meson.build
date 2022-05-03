project('gtkmm-example', 'cpp',
  version : '0.1',
  default_options : [
    'warning_level=3',
    'cpp_std=c++20',
    'cairomm:build-deprecated-api=false',
    'cairomm:build-examples=false',
    'cairomm:build-tests=false',
    'cairomm:maintainer-mode=false',
    'gi-docgen:development_tests=false',
    'graphene:installed_tests=false',
    'graphene:tests=false',
    'gtk:media-ffmpeg=disabled',
    'gtk:media-gstreamer=disabled',
    'gtk:print-cups=disabled',
    'gtk:f16c=disabled',
    'gtk:demos=false',
    'gtk:build-examples=false',
    'gtk:build-tests=false',
    'libsigcplusplus:maintainer-mode=false',
    'libsigcplusplus:build-deprecated-api=false',
    'libsigcplusplus:build-examples=false',
    'libsigcplusplus:validation=false',
    'gtkmm-4.6.1:build-demos=false',
    'gtkmm-4.6.1:build-deprecated-api=false',
    'gtkmm-4.6.1:build-documentation=false',
    'gtkmm-4.6.1:build-tests=false',
    'gtkmm-4.6.1:maintainer-mode=false'])

gtkmm_dep = dependency('gtkmm-4.0')

inc_dir = include_directories('include')

subdir('include')
subdir('src')
