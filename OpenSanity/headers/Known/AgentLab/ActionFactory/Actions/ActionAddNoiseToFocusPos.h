#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class ActionAddNoiseToFocusPos : public ActionAbstract {
	public:
		int unnamed_1;
		float unnamed_3;
		float unnamed_4;

		void Dispose(byte param_1);
		virtual void ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx);
		virtual void UnkMethod(int* param_1);
		void Construct(byte param_1);
		static int GetSize();

};
