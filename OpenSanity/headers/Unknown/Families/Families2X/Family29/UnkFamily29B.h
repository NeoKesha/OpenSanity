#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families2X/Family29/UnkFamily29Abstract.h"

class UnkFamily29B : public UnkFamily29Abstract {
	public:

		void Construct(Matrix4* param_1, Vector4* param_2, Vector4* param_3, uint param_4, uint param_5);
		virtual uint FUN_0014c8d0(int* param_1);
		virtual uint FUN_0014ca30(void* param_1, int* param_2);
		virtual uint FUN_0014ccb0(int* param_1, float* param_2);
		void Construct_4(UnkFamily29B* other);
		virtual uint FUN_00146de0(float* param_1);
		virtual uint FUN_00146e80(float* param_1, float param_2);
		static uint FUN_00146f50();
		static uint FUN_00146f60();
		static uint FUN_00146f70();
		virtual void FUN_00146f80();
		virtual UnkFamily29B* FUN_0014c9f0(void* param_1);
		static void FUN_00151f20();
		static uint FUN_00151f30();
		void Dispose(byte param_1);
		virtual uint FUN_00152290();
		void Construct_16(D3DXCOLOR* color1, D3DXCOLOR* color2, float val);

};
