#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class Action0x0C8 : public ActionAbstract {
	public:
		int unnamed_1;
		int unnamed_2;
		int unnamed_3;

		void Dispose(byte param_1);
		virtual void ExecuteFromCallContext(uint time_clock, InstanceContext* ctx);
		void Construct(uint param_1);
		static int GetSize();
		virtual void UnkMethod(int* param_1);

};
