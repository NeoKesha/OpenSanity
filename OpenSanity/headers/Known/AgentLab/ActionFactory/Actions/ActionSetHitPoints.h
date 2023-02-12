#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class ActionSetHitPoints : public ActionAbstract {
	public:
		int unnamed_1;

		void Dispose(byte param_1);
		virtual void ExecuteFromCallContext(uint time_clock, InstanceContext* ctx);
		static int GetSize();
		void Construct();

};
