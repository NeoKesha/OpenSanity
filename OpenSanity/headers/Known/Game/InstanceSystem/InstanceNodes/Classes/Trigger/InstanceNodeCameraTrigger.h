#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Structs/InstanceNodeCameraTriggerBody.h"

class InstanceNodeCameraTrigger {
	public:
		InstanceNodeCameraTriggerBody body;

		void Dispose();
		virtual void FUN_001d7d10(InstanceContext* ctx);
		void Dispose_2(byte param_1);
		void Construct(void* param_1, int param_2);
		virtual void FUN_001caec0();
		static void EmptyFunction();
		static void EmptyFunction_6();
		static void EmptyFunction_7();
		static byte GetIndex();
		static uint GetBuilderIndex();

};
