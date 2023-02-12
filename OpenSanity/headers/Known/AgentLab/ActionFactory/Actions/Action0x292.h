#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class Action0x292 : public ActionAbstract {
	public:
		int unnamed_1;
		int unnamed_2;
		int unnamed_3;
		int unnamed_4;
		int unnamed_5;
		int unnamed_6;
		int unnamed_7;

		void Construct();
		virtual void ExecuteFromCallContext(uint time_clock, InstanceContext* ctx);
		void Dispose(byte param_1);
		static int GetSize();
		virtual void UnkMethod(int* param_1);

};
