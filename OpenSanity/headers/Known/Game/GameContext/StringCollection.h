#pragma once

#include "headers/OpenSanityGlobal.h"

class StringCollection {
	public:
		TwinString** array;
		int strCnt;
		uint capacity;
		uint cnt2;

		StringCollection();
		StringCollection(uint cnt);
		int AddString(TwinString* str);
};
