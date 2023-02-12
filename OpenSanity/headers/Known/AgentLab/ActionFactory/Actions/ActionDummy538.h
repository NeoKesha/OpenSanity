#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class ActionDummy538 : public ActionAbstract {
	public:

		void Dispose(byte param_1);
		static int GetSize();
		static void EmptyFunction();
		virtual void ExecuteFromCallContext(uint time_clock, InstanceContext* ctx);
		void Construct();

};
