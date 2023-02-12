#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families2X/Family25/UnkFamily25Abstract.h"

class UnkFamily25I : public UnkFamily25Abstract {
	public:

		virtual void FUN_001009b0();
		virtual void FUN_001009f0(float* param_1, float* param_2, float* param_3);
		virtual void FUN_0011a240();
		static void EmptyFunction();
		static void FUN_0011a260();
		void Dispose(byte param_1);
		void Construct();

};
