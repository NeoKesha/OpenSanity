#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class ActionNowGoBackCollidable : public ActionAbstract {
	public:
		int unnamed_1;

		void Construct();
		virtual void ExecuteFromCallContext(uint time_clock, InstanceContext* ctx);
		void Dispose(byte param_1);
		static int GetSize();
		virtual void UnkMethod(int* param_1);

};
