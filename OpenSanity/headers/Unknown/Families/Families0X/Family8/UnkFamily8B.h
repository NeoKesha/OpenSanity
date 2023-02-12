#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families0X/Family8/UnkFamily8Abstract.h"

class UnkFamily8B : public UnkFamily8Abstract {
	public:

		void Construct(uint param_1, uint param_2, uint param_3, byte param_4);
		void Construct_1(uint param_1, uint param_2, UnkFamily10Base* param_3, uint param_4);
		virtual uint FUN_001a1da0();
		virtual uint FUN_001a1db0(void* param_2);
		static void FUN_001a1dc0();
		virtual uint FUN_001a1dd0(uint* param_2);
		static void FUN_001a1de0();
		virtual uint FUN_001a1df0(uint* param_2);
		static void IsA();
		virtual uint FUN_001a1e10(float* param_2);
		virtual uint FUN_001a4250(uint param_1, int* param_2);
		void Construct_11(uint param_1, uint param_2, uint param_3, byte param_4);

};
