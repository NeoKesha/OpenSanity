#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families2X/Family29/UnkFamily29Abstract.h"

class UnkFamily29C : public UnkFamily29Abstract {
	public:
		float alpha;

		void Construct(D3DXCOLOR* color, float val);
		virtual uint FUN_00148c50(int param_1, int* param_2);
		virtual int FUN_00148fd0(int** param_1, int param_2);
		virtual uint FUN_0014db80(int* param_1, float* param_2);
		virtual uint FUN_00148ae0(float* param_1);
		virtual uint FUN_00148b50(float* param_1, float param_2);
		virtual void FUN_00148be0();
		virtual UnkFamily29C* FUN_00148bf0(void* param_1);
		virtual int FUN_00148e50(float* param_1, int param_2);
		virtual void FUN_001495a0(float* param_1, uint param_2, uint* param_3);
		virtual uint FUN_0014dac0(int* param_1);
		static void FUN_00151f60();
		static uint FUN_00151f70();
		void Dispose(byte param_1);
		virtual UnkFamily29C* FUN_00152510();
		void Construct_15(Matrix4* param_1, Vector4* param_2, float val);
		void Construct_16();
		void Construct_17(float val);

};
