#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families2X/Family25/UnkFamily25Abstract.h"

class UnkFamily25D : public UnkFamily25Abstract {
	public:

		virtual void FUN_001007b0(float* param_1, float* param_2, float* param_3, float* param_4);
		virtual void FUN_00106c10();
		virtual int* FUN_00100680(int param_1);
		virtual void FUN_001132e0(MemoryStream* param_1);
		virtual void FUN_00113350(int* param_1);
		virtual uint FUN_001133c0(int** param_1);
		virtual void FUN_001170c0();
		void Dispose(byte param_1);

};
