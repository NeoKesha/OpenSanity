#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class ActionSetObject : public ActionAbstract {
	public:
		int unnamed_1;
		int unnamed_2;

		void Dispose(byte param_1);
		void Construct();
		virtual void UnkMethod(int* param_1);
		virtual void Execute(InstanceContext* node);
		virtual void ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx);
		static int GetSize();

};
