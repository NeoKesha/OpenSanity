#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families2X/Family25/UnkFamily25Abstract.h"

class UnkFamily25A : public UnkFamily25Abstract {
	public:

		virtual int* FUN_00101900(uint param_1);
		virtual void FUN_00101920();
		virtual uint FUN_0010e800(int** param_1);
		virtual void FUN_00116f50();
		void Dispose(byte param_1);
		static void EmptyFunction();

};
