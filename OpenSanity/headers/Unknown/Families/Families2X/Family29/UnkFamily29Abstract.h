#pragma once

#include "headers/OpenSanityGlobal.h"

class UnkFamily29Abstract {
	public:
		D3DXCOLOR color;

		virtual uint FUN_00151130(void** param_1);
		static uint FUN_00136350();
		static void EmptyFunction();
		static void EmptyFunction_3();
		void Dispose(byte param_1);
		virtual void FUN_0014b570(float* param_1, float* param_2);
		virtual void FUN_001510f0(int* param_1);
		virtual void FUN_00151110(int* param_1);
		static void Unroll(uint* param_1);
		static void Unroll_9(uint* param_1);
		static void Unroll_10(uint* param_1);
		void Construct(Vector4* param_1, uint param_2);
		void Construct_12(uint param_1);
		static void Unroll_13(uint* param_1);

};
