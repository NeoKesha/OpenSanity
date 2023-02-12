#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class Action0x23E : public ActionAbstract {
	public:
		int unnamed_1;
		int unnamed_2;
		int unnamed_3;
		int unnamed_4;
		int unnamed_5;
		int unnamed_6;
		int unnamed_7;
		int unnamed_8;
		int unnamed_9;
		int unnamed_10;
		int unnamed_11;
		int unnamed_12;
		int unnamed_13;
		int unnamed_14;
		int unnamed_15;
		int unnamed_16;
		int unnamed_17;
		int unnamed_18;

		void Construct();
		void Dispose(byte param_1);
		static int GetSize();
		virtual void ExecuteFromCallContext(int time_clock, InstanceContext* ctx);

};
