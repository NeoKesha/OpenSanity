#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families3X/Family33/UnkFamily33Abstract.h"

class UnkFamily33A : public UnkFamily33Abstract {
	public:

		void Construct(Vector4* param_1, Vector4* param_2, uint param_3);
		void Construct_1(Vector4* param_1, float param_2, uint param_3);
		void Dispose(byte param_1);
		void Construct_3();
		virtual uint FUN_00137080();
		virtual void FUN_00139450(uint param_1, int param_2, int param_3, uint param_4, int param_5, uint param_6, char param_7);
		virtual uint FUN_0013c880(int** param_1);
		static uint FUN_001430d0();
		static void FUN_001430e0();
		static void EmptyFunction();
		static uint FUN_00143100();

};
