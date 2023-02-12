#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class Action0x0B5 : public ActionAbstract {
	public:

		void Dispose(byte param_1);
		static void EmptyFunction();
		virtual void ExecuteFromCallContext(int time_clock);
		static int GetSize();
		void Construct();

};
