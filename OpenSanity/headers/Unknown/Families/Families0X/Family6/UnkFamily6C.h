#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families0X/Family6/UnkFamily6Abstract.h"

class UnkFamily6C : public UnkFamily6Abstract {
	public:

		void CleanUp();
		static void Init(UnkFamily6C* param_1);
		void Construct(int param_1, int param_2);
		virtual void FUN_0007ffe0(uint* param_1, uint* param_2);
		virtual uint FUN_0008a1e0();
		static void FUN_0008a510(UnkFamily6C* param_1);
		void Dispose(byte param_1);
		virtual void FUN_0007fef0(uint* param_2);
		virtual uint FUN_0007ff10(uint param_1, InstanceNodeKSubA* param_2);
		virtual void FUN_00092720(float param_1);
		static uint FUN_000a6210();
		static void FUN_000a6220(Vector4* param_1, Vector4* param_2);
		static void FUN_000a6280();

};
