#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families2X/Family25/UnkFamily25Abstract.h"

class UnkFamily25E : public UnkFamily25Abstract {
	public:

		virtual void FUN_00100dc0();
		virtual void FUN_00100df0(float* param_1, uint param_2, float* param_3);
		virtual void FUN_0011a3b0();
		static void EmptyFunction();
		static void FUN_0011a3d0();
		void Dispose(byte param_1);
		void Construct();

};
