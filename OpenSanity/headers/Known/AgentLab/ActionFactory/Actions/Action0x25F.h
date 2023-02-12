#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class Action0x25F : public ActionAbstract {
	public:

		void Dispose(byte param_1);
		void Construct();
		static int GetSize();
		static void EmptyFunction();
		virtual void ExecuteFromCallContext();

};
