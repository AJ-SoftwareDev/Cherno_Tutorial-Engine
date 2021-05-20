#pragma once

#ifdef  PRAC_PLATFORM_WINDOWS

	#ifdef PRAC_BUILD_DLL
		#define PRAC_API __declspec(dllexport)
	#else
		#define PRAC_API __declspec(dllimport)
	#endif // PRAC_BUILD_DLL

#else
	#error Practice only supports Windows!
#endif //  PRAC_PLATFORM_WINDOWS

