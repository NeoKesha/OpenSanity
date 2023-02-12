#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class Action0x27D : public ActionAbstract {
	public:

		void Dispose(byte param_1);
		virtual void ExecuteFromCallContext(uint time_clock, InstanceContext* ctx);
		void Construct();
		static void EmptyFunction();
		static int GetSize();

};
