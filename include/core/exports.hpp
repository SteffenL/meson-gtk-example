#pragma once

#ifndef CORE_API
#  if defined(CORE_STATIC)
#    define CORE_API
#  elif defined(WIN32)
#    ifdef BUILDING_CORE
#      define CORE_API __declspec(dllexport)
#    else
#      define CORE_API __declspec(dllimport)
#    endif
#  else
#    define CORE_API __attribute__((visibility("default")))
#  endif
#endif
