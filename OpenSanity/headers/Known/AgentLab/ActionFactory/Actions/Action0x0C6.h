#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class Action0x0C6 : public ActionAbstract {
	public:
		float unnamed_1;
		float unnamed_2;
		float unnamed_3;

		void Dispose(byte param_1);
		virtual void ExecuteFromCallContext(uint time_clock, InstanceContext* ctx);
		void Construct();
		virtual void UnkMethod(int* param_1);
		static int GetSize();

};
