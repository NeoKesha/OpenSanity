#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class ActionPickUpHealth : public ActionAbstract {
	public:

		void Dispose(byte param_1);
		void Construct();
		static int GetSize();
		virtual void Execute(InstanceContext* ctx);
		virtual void ExecuteFromCallContext(uint time_clock, InstanceContext* ctx);

};
