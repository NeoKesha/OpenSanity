#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class ActionClearTrail : public ActionAbstract {
	public:

		void Dispose(byte param_1);
		virtual void Execute(InstanceContext* ctx);
		virtual void ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx);
		static int GetSize();
		void Construct();

};
