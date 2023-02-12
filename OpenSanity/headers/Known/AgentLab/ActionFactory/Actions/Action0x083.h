#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class Action0x083 : public ActionAbstract {
	public:

		void Dispose(byte param_1);
		virtual void ExecuteFromCallContext(int time_clock, InstanceContext* ctx);
		void Construct();
		static int GetSize();

};
