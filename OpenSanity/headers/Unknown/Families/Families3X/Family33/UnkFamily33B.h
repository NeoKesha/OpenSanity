#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families3X/Family33/UnkFamily33Abstract.h"

class UnkFamily33B : public UnkFamily33Abstract {
	public:

		virtual void FUN_00138bb0(int param_1);
		virtual uint FUN_00138d30();
		void Construct(Vector4* param_1, float param_2, uint param_3, uint param_4);
		void Construct_3(Vector4* param_1, Vector4* param_2, uint param_3, uint param_4);
		virtual void FUN_0013fd60(int* param_1);
		void Dispose(byte param_1);
		virtual int* FUN_00138d90(short* param_1, uint param_2);
		virtual void FUN_00138df0(uint param_1);
		virtual int* FUN_0013be30(short* param_1, int param_2, int param_3, uint param_4, int param_5, uint param_6, uint param_7);
		virtual uint FUN_0013d860(int param_1, int* param_2, int param_3);
		virtual int* FUN_0013d950(short* param_1, int param_2, uint param_3);
		virtual void FUN_0013d9c0(uint param_1);
		virtual void FUN_0013da10(int* param_1, int param_2);
		virtual void FUN_0013fdc0(float* param_1, int param_2);
		virtual void FUN_0013fe30(int param_1, int* param_2, uint param_3, int* param_4);
		static uint FUN_00143130();
		static uint FUN_00143140();
		static uint FUN_00143150();
		static void FUN_00143160();
		virtual uint FUN_00143170();
		void Construct_20(int* param_1);

};
