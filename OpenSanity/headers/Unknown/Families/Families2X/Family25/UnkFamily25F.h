#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families2X/Family25/UnkFamily25Abstract.h"

class UnkFamily25F : public UnkFamily25Abstract {
	public:

		virtual void FUN_00100ce0();
		virtual void FUN_00100d20(float* param_1, uint* param_2, float* param_3);
		virtual void FUN_0011a340();
		static void EmptyFunction();
		static void FUN_0011a360();
		void Dispose(byte param_1);
		static void Construct(UnkFamily25F* param_1);

};
