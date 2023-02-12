#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class ActionTriggerBalancedCrateFalling : public ActionAbstract {
	public:

		void Dispose(byte param_1);
		virtual void ExecuteFromCallContext(uint time_clock, InstanceContext* ctx);
		void Construct();
		static int GetSize();

};
