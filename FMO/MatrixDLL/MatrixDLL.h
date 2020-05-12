#pragma once

#ifndef EXT_MATRIXDLL
	#ifdef MATRIXDLL_BUILD
		#define EXT_MATRIXDLL __declspec(dllexport)
	#else
		#define EXT_MATRIXDLL __declspec(dllimport)
	#endif // MATRIXDLL_BUILD
#endif
