#pragma once

#ifndef CORE_API
#  ifdef CORE_STATIC
#    define CORE_API
#  else
#    ifdef WIN32
#      ifdef BUILDING_CORE
#        define CORE_API __declspec(dllexport)
#      else
#        define CORE_API __declspec(dllimport)
#      endif
#    endif
#  else
#    define CORE_API __attribute__((visibility("default")))
#  endif
#endif
