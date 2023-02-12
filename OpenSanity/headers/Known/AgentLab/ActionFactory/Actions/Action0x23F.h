#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class Action0x23F : public ActionAbstract {
	public:
		int unnamed_1;
		int unnamed_2;

		virtual void ExecuteFromCallContext(uint time_clock, InstanceContext* ctx);
		void Dispose(byte param_1);
		void Construct();
		static int GetSize();
		virtual void UnkMethod(int* param_1);

};
