#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class ActionRaycastFocusPosition : public ActionAbstract {
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

		virtual void UnkMethod(int* param_2);
		virtual void ExecuteFromCallContext(uint time_clock, InstanceContext* ctx);
		void Dispose(byte param_1);
		void Construct();
		static int GetSize();

};
