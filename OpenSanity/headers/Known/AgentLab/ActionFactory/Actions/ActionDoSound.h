#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class ActionDoSound : public ActionAbstract {
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

		void Construct();
		void Dispose(byte param_1);
		virtual void Execute(InstanceContext* ctx);
		virtual void UnkMethod(int* param_1);
		virtual void ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx);
		static int GetSize();

};
