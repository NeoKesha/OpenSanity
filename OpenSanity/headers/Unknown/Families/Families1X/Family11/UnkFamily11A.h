#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families1X/Family11/UnkFamily11Abstract.h"

class UnkFamily11A : public UnkFamily11Abstract {
	public:

		virtual void FUN_000e08e0(int* param_1);
		void Dispose();
		UnkFamily11A* FUN_000edec0(int cnt, int param_2, float param_3);
		void Construct(UnkFamily11A* other);
		virtual void FUN_000e15a0(int* param_1);
		void Dispose_5(byte param_1);
		void Construct_6(int cnt, float param_2);
		virtual void FUN_000e1550(int* param_1);
		void Construct_8();
		void Construct_9(int cnt, int param_2, float param_3);

};
