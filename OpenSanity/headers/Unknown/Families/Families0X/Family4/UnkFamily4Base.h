#pragma once

#include "headers/OpenSanityGlobal.h"

class UnkFamily4Base {
	public:
		InstanceContext * ctx;

		void Init(float param_1, int param_2);
		virtual void FUN_001a48e0(InputStruct* param_1, float param_2);
		void Dispose(byte param_1);
		void Construct(float param_1, uint param_2, int param_3);
		static void Dispose_4(UnkFamily4Base* param_1);
		void Dispose_5();

};
