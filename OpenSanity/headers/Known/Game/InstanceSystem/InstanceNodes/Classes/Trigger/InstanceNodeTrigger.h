#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Structs/InstanceNodeTriggerBody.h"

class InstanceNodeTrigger {
	public:
		InstanceNodeTriggerBody body;

		virtual int* FUN_00182db0(ushort param_1, void** param_2, int* param_3);
		virtual void TriggerMethod1(void** param_1);
		virtual void TriggerMethod2(void** param_1);
		virtual void TriggerMethod3(void* param_1);
		virtual void TriggerMethod4(void* param_1);
		void Dispose(byte param_1);
		void Construct(void* param_1, int param_2);
		virtual void Reset();
		virtual void UpdateTime(byte param_2, uint param_3, uint param_4);
		static byte GetIndex();
		static uint GetBuilderIndex();

};
