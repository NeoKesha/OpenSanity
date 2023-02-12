#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families0X/Family6/UnkFamily6Abstract.h"

class UnkFamily6E : public UnkFamily6Abstract {
	public:

		void Construct(int param_1, int param_2, byte param_3);
		static void Init(UnkFamily6E* param_1);
		virtual uint FUN_00081950();
		virtual void FUN_0008e910(int param_1, uint param_2, int param_3);
		virtual void FUN_0009a020(float param_1);
		void Dispose(byte param_1);
		static void FUN_000a6480(int param_1);
		static uint FUN_000a6490();
		static void FUN_000a64a0(Vector4* param_1, Vector4* param_2);

};
