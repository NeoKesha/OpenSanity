#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class ActionCameraSaveLoadParams : public ActionAbstract {
	public:
		int unnamed_1;

		virtual void ExecuteFromCallContext(int time_clock, InstanceContext* ctx);
		void Dispose(byte param_1);
		void Construct(uint param_1);
		static void EmptyFunction();
		static int GetSize();

};
