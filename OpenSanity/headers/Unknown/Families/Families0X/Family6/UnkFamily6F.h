#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families0X/Family6/UnkFamily6Abstract.h"

class UnkFamily6F : public UnkFamily6Abstract {
	public:

		void Construct(int param_1, uint param_2, uint param_3);
		void Dispose(byte param_1);
		static void FUN_000815e0();
		virtual void FUN_00081650(uint* param_1, float* param_2);
		static void EmptyFunction();
		virtual uint FUN_000a5880();
		static void FUN_000a5890(Vector4* param_1, Vector4* param_2);
		static void FUN_000a58f0();

};
