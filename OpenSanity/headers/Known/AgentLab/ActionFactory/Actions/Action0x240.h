#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class Action0x240 : public ActionAbstract {
	public:
		int unnamed_1;

		void Dispose(byte param_1);
		static int GetSize();
		virtual void UnkMethod(int* param_1);
		virtual void ExecuteFromCallContext(uint time_clock, InstanceContext* ctx);
		void Construct();

};
