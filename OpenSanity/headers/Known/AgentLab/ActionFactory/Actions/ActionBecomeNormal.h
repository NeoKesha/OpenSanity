#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class ActionBecomeNormal : public ActionAbstract {
	public:
		byte unnamed_1;

		void Dispose(byte param_1);
		void Construct();
		static int GetSize();
		virtual void UnkMethod(int* param_1);
		virtual void ExecuteFromCallContext(uint time_clock, InstanceContext* ctx);

};
