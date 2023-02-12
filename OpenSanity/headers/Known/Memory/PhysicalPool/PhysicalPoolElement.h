#pragma once

#include "headers/OpenSanityGlobal.h"

class PhysicalPoolElement {
	public:
		int bufferIndex;
		void * alignedStart;
		size_t length;
		PhysicalPoolElement * next2;
		PhysicalPoolElement * next;
		PhysicalPoolElement * prev;

		void FUN_00156ae0(PhysicalPoolElement** param_2, int param_3, int param_4);
		void Init();
		void FUN_0015a8f0();

};
