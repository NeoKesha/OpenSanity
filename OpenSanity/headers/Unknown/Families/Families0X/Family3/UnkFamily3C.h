#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families0X/Family3/UnkFamily3Abstract.h"

class UnkFamily3C : public UnkFamily3Abstract {
	public:

		void Construct(uint ctx);
		void Init();
		void Dispose();
		virtual void FUN_0007e8e0(int param_1);
		virtual void FUN_0007e920(int param_1);
		virtual bool FUN_00085a00(void* param_1, Matrix4* param_2);
		void Dispose_6(byte param_1);

};
