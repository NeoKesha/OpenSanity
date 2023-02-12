#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families2X/Family25/UnkFamily25Abstract.h"

class UnkFamily25B : public UnkFamily25Abstract {
	public:

		virtual int* FUN_00101700(int param_1);
		virtual void FUN_00101740();
		virtual void FUN_001017c0(uint param_1, uint* param_2, uint* param_3, uint param_4, uint* param_5);
		virtual void FUN_001135f0(int* param_1);
		virtual void FUN_00113620(int* param_1);
		virtual uint FUN_00113650(int** param_1);
		virtual void FUN_00116fb0();
		void Dispose(byte param_1);

};
