#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families3X/Family33/UnkFamily33BA.h"

class UnkFamily33BAA : public UnkFamily33BA {
	public:

		virtual void FUN_0013d060(int param_1, Matrix4* param_2);
		virtual void FUN_0013d100(int* param_1);
		virtual void FUN_0013f190(uint param_1);
		void Construct(uint param_1);
		virtual uint FUN_00140140(int** param_1);
		void Dispose(byte param_1);
		void Dispose_6();
		virtual void FUN_001377b0(float* param_1, float* param_2);
		virtual void FUN_0013e1a0(int* param_1, int param_2);
		virtual void FUN_0013ff20(uint param_1, void* param_2);
		static uint FUN_001434d0();
		void Construct_11(float* param_1, float param_2, int param_3);
		void Construct_12(Vector4* param_1, Vector4* param_2, int param_3);
		void Dispose_13();

};
