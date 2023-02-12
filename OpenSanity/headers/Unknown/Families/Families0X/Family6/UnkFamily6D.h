#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families0X/Family6/UnkFamily6Abstract.h"

class UnkFamily6D : public UnkFamily6Abstract {
	public:

		void CleanUp();
		static void Init(int* param_1);
		void Construct(int param_1, int param_2);
		virtual void FUN_00080bd0(float* param_1, int param_2);
		virtual uint FUN_0008dfe0();
		static void FUN_0008e450(int param_1);
		virtual void FUN_00094c90(float param_1);
		void Dispose(byte param_1);
		virtual uint FUN_0008e340(uint param_1, InstanceNodeKSubA* param_2);
		static uint FUN_000a6300();
		static void FUN_000a6310(Vector4* param_1, Vector4* param_2);
		virtual uint FUN_000a6370(uint* param_1);
		virtual void FUN_000a63b0(Vector4* param_1);
		static void FUN_000a6410();

};
