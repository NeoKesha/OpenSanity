#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families0X/Family3/UnkFamily3EAbstract.h"

class UnkFamily3EA : public UnkFamily3EAbstract {
	public:

		void Construct(int param_1, uint param_2);
		void Dispose();
		void Dispose_2(byte param_1);
		void FUN_000f3fe0(byte param_1, void* param_2);
		void FUN_000f4650(byte param_1, uint param_2, void* param_3);
		void FUN_000f4b80(byte param_1, uint param_2, void* param_3);
		virtual void FUN_00083090(int param_1);
		virtual void FUN_000830c0(int param_1);
		virtual uint FUN_000830f0(void* param_1);

};
