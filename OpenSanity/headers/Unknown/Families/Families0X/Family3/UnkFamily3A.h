#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families0X/Family3/UnkFamily3Abstract.h"

class UnkFamily3A : public UnkFamily3Abstract {
	public:

		virtual void FUN_00038bd0(int param_1);
		virtual void FUN_00038c20(int param_1);
		virtual bool FUN_00049a10(void* param_1, float* param_2);
		void Construct();
		void Dispose(byte param_1);

};
