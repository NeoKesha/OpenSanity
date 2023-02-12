#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class Action0x281 : public ActionAbstract {
	public:
		int unnamed_1;
		int subtype;
		int unnamed_3;
		int unnamed_4;
		int unnamed_5;
		int unnamed_6;

		virtual void ExecuteFromCallContext(uint time_clock, InstanceContext* ctx);
		virtual void UnkMethod(int* param_2);
		void Dispose(byte param_1);
		void Construct(uint param_1);
		static int GetSize();

};
