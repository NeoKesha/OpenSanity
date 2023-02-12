#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class Action0x28F : public ActionAbstract {
	public:
		int argListStart;
		int unnamed_2;
		int unnamed_3;
		int unnamed_4;
		int unnamed_5;
		int unnamed_6;
		int argIdCount;

		void Dispose(byte param_1);
		void Construct();
		static int GetSize();
		virtual void UnkMethod(int* param_1);
		virtual void ExecuteFromCallContext(uint time_clock, InstanceContext* ctx);

};
