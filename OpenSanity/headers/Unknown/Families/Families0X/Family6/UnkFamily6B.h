#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families0X/Family6/UnkFamily6Abstract.h"

class UnkFamily6B : public UnkFamily6Abstract {
	public:

		virtual void Init();
		void Construct(int param_1, int param_2);
		virtual uint FUN_0008b600();
		virtual void FUN_0008b910(float* param_1);
		void Dispose(byte param_1);
		virtual uint FUN_00080910(uint param_1, InstanceNodeKSubA* param_2);
		virtual void FUN_00092df0(float param_1);
		static uint FUN_000a5d70();
		static void FUN_000a5d80(Vector4* param_1, Vector4* param_2);
		static void FUN_000a5de0();
		static void FUN_000a5df0();
		void CleanUp();

};
