#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families0X/Family3/UnkFamily3Abstract.h"

class UnkFamily3B : public UnkFamily3Abstract {
	public:

		void Construct(uint param_1);
		void Init();
		void Dispose();
		virtual void FUN_0007de70(int param_1);
		virtual void FUN_0007df00(int param_1);
		virtual bool FUN_000916d0(void* param_1, Matrix4* param_2);
		void Dispose_6(byte param_1);

};
