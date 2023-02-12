#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Structs/InstanceNodeTriggerAbstractBody.h"

class InstanceNodeTriggerAbstract {
	public:
		InstanceNodeTriggerAbstractBody body;

		virtual void CleanUp();
		virtual void UpdateTime();
		void Construct(void* param_1, int param_2);
		void Dispose(byte param_1);
		virtual void SetCtx(InstanceContext* ctx);
		virtual bool Step(byte* param_1);
		static void EmptyFunction();

};
