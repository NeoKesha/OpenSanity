#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class Action0x0CE : public ActionAbstract {
	public:

		void Dispose(byte param_1);
		static void EmptyFunction();
		virtual void ExecuteFromCallContext(uint time_clock, InstanceContext* ctx);
		static int GetSize();
		void Construct();

};
