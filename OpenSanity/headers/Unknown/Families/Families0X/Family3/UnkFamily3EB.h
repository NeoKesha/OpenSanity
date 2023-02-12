#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families0X/Family3/UnkFamily3EAbstract.h"

class UnkFamily3EB : public UnkFamily3EAbstract {
	public:

		void Dispose();
		void Dispose_1(byte param_1);
		virtual void FUN_00082bb0(int param_1);
		virtual void FUN_00082c70(int param_1);
		virtual uint FUN_00082d30(void* param_1);
		void Construct(int param_1, float param_2, void* param_3);

};
