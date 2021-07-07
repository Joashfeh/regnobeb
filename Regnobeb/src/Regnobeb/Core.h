#pragma once

#ifdef RB_PLATFORM_WINDOWS
	#ifdef RB_BUILD_DLL
		#define REGNOBEB_API __declspec(dllexport)
	#else
		#define REGNOBEB_API __declspec(dllimport)
	#endif
#else
	#error Regnobeb only supports Windows!
#endif