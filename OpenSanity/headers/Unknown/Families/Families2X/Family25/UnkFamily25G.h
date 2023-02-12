#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families2X/Family25/UnkFamily25Abstract.h"

class UnkFamily25G : public UnkFamily25Abstract {
	public:

		virtual void FUN_00100bc0();
		virtual void FUN_00100bf0(float* param_1, float* param_2, float* param_3);
		virtual void FUN_0011a2d0();
		static void EmptyFunction();
		static void FUN_0011a2f0();
		void Dispose(byte param_1);
		void Construct();

};
