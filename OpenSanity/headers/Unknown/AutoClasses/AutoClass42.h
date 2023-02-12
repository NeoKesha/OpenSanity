#pragma once

#include "headers/OpenSanityGlobal.h"

class AutoClass42 {
	public:
		uint subStruct;
		int fileHandle;
		int * xwbHeader;

		void LoadMwb(char* fname, int errno);

};
