#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families3X/Family33/UnkFamily33B.h"

class UnkFamily33BA : public UnkFamily33B {
	public:

		virtual int FUN_001375a0(float* param_1, float* param_2, int param_3);
		virtual void FUN_0013cf50(int* param_1);
		void Construct(Vector4* param_1, Vector4* param_2, int param_3, int param_4);
		void Construct_3();
		void Dispose();
		virtual void FUN_0013efb0(uint param_1);
		virtual uint FUN_00140070(int** param_1);
		virtual void FUN_00137770(uint* param_1);
		virtual void FUN_0013cfd0();
		virtual int FUN_0013ee90(uint param_1, int param_2);
		void Dispose_10(byte param_1);
		static uint FUN_00143490();
		virtual void FUN_0013e120(int* param_1, int param_2);
		virtual uint FUN_00137740();
		virtual void FUN_0013b110(uint* param_1);
		virtual void FUN_0013b150(uint* param_1);
		virtual void FUN_0013b190(char param_1, char param_2);
		virtual int FUN_001434a0();
		virtual int FUN_001434b0();
		static uint FUN_001434c0();
		void Construct_20(Vector4* param_1, float param_2, uint param_3, uint param_4);

};
