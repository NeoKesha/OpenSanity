#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families2X/Family25/UnkFamily25Abstract.h"

class UnkFamily25C : public UnkFamily25Abstract {
	public:

		virtual void FUN_00100f00(float* param_1, float* param_2, float* param_3, float* param_4);
		virtual int* FUN_00100e60(int param_1);
		virtual void FUN_00100e80();
		virtual void FUN_00113500(int* param_1);
		virtual void FUN_00113520(int* param_1);
		virtual uint FUN_00113550(int** param_1);
		virtual void FUN_00116ff0();
		void Dispose(byte param_1);

};
