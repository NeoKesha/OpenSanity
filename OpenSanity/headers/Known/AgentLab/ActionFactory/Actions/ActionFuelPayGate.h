#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class ActionFuelPayGate : public ActionAbstract {
	public:
		int unnamed_1;

		void Dispose(byte param_1);
		void Construct();
		static int GetSize();
		static void EmptyFunction();
		static void EmptyFunction_4();

};
