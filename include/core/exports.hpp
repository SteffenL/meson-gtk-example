#pragma once

#ifndef CORE_API
#  ifdef CORE_STATIC
#    define CORE_API
#  else
#    ifdef BUILDING_CORE
#      define CORE_API __declspec(dllexport)
#    else
#      define CORE_API __declspec(dllimport)
#    endif
#  endif
#endif
