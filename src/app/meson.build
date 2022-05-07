gnome = import('gnome')
app_resources = gnome.compile_resources(
  'as-resources',
  files(['resources.xml']),
  c_name: 'as'
)
app_src = files([
  'main.cpp'
])
app_exe = executable('app',
  sources : app_src + app_resources,
  include_directories : inc_dir,
  link_with : core_lib,
  dependencies : gtk4_dep,
  cpp_args : ['-DBUILDING_CORE'])
