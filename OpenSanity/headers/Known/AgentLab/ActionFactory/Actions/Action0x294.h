#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class Action0x294 : public ActionAbstract {
	public:
		int unnamed_1;

		void Dispose(byte param_1);
		static void EmptyFunction();
		static int GetSize();
		virtual void ExecuteFromCallContext(uint time_clock, InstanceContext* ctx);
		void Construct();

};
