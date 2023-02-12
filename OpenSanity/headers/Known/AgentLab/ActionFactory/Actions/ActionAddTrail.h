#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class ActionAddTrail : public ActionAbstract {
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
		int unnamed_19;
		int unnamed_20;
		int unnamed_21;
		int unnamed_22;
		int unnamed_23;
		int unnamed_24;
		int unnamed_25;
		int unnamed_26;
		int unnamed_27;
		int unnamed_28;
		int unnamed_29;

		void Construct();
		void Dispose(byte param_1);
		virtual void UnkMethod(int* param_2);
		static int GetSize();
		virtual void Execute(InstanceContext* ctx);
		virtual void ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx);

};
