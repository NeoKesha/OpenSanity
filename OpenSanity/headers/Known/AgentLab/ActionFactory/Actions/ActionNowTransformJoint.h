#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class ActionNowTransformJoint : public ActionAbstract {
	public:
		int unnamed_1;

		void Dispose(byte param_1);
		void Construct(uint param_1);
		static int GetSize();
		virtual void ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx);

};
