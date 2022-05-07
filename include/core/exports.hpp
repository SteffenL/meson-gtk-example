#pragma once

#ifdef BUILDING_CORE
#  define CORE_API __declspec(dllexport)
#else
#  define CORE_API __declspec(dllimport)
#endif
