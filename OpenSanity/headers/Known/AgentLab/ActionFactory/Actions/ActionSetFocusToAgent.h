#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class ActionSetFocusToAgent : public ActionAbstract {
	public:
		int unnamed_1;

		void Dispose(byte param_1);
		virtual void ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx);
		void Construct(byte param_1);
		virtual void UnkMethod(int* param_1);
		static int GetSize();

};
