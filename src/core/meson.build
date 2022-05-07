core_src = files([
  'meta.cpp'
])
core_lib = shared_library('core',
  sources : core_src,
  include_directories : inc_dir,
  cpp_args : ['-DBUILDING_CORE'],
  install : true)
