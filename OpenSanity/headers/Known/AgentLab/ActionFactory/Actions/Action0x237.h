#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class Action0x237 : public ActionAbstract {
	public:

		virtual void ExecuteFromCallContext(uint time_clock, InstanceContext* ctx);
		void Dispose(byte param_1);
		void Construct();
		static int GetSize();

};
