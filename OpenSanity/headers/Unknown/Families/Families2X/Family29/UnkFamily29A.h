#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families2X/Family29/UnkFamily29Abstract.h"

class UnkFamily29A : public UnkFamily29Abstract {
	public:

		virtual uint FUN_001445d0(float* param_1);
		void Construct(int* param_1);
		virtual uint FUN_00151680(void** param_1);
		virtual uint FUN_00151df0(int* param_1);
		virtual void FUN_001515e0(int* param_1);
		void Construct_5(UnkFamily29A* param_1);
		virtual void FUN_001363c0(uint param_1, uint param_2);
		static void FUN_00136410();
		static uint FUN_00136420();
		void Dispose(byte param_1);
		virtual uint* FUN_00136450();
		virtual void FUN_00144590(uint* param_1, uint* param_2);
		virtual void FUN_001446a0();
		static uint FUN_00144b70();
		static uint FUN_00144b80();
		static uint FUN_00146bd0();
		virtual uint FUN_0014c0f0(float param_2, float* param_3, float* param_4);
		virtual void FUN_0014c1e0(float* param_1);
		static uint FUN_0014c200();
		static uint FUN_0014c210();
		virtual uint FUN_0014c690(int param_1, int* param_2);
		virtual void FUN_00151630(int* param_1);
		static void Unroll(uint* param_1);
		void Construct_23(float val);
		void Construct_24(D3DXCOLOR* color, float val);
		void Construct_25(D3DXCOLOR* color1, D3DXCOLOR* color2);
		void Construct_26(D3DXCOLOR* color);

};
