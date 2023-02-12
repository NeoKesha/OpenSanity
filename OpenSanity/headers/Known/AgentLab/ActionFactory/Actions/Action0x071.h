#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class Action0x071 : public ActionAbstract {
	public:
		int unnamed_1;
		float unnamed_2;
		float unnamed_3;
		float unnamed_4;

		void Dispose(byte param_1);
		virtual void UnkMethod(int* param_2);
		void Construct();
		static int GetSize();
		virtual void ExecuteFromCallContext(uint time_clock, InstanceContext* ctx);

};
