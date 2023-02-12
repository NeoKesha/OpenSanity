#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class Action0x095 : public ActionAbstract {
	public:
		int unnamed_1;
		int unnamed_2;

		void Dispose(byte param_1);
		virtual void ExecuteFromCallContext(int time_clock, InstanceContext* ctx);
		void Construct();
		static int GetSize();
		virtual void UnkMethod(int* param_1);

};
