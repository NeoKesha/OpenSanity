#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class ActionResetGame : public ActionAbstract {
	public:

		void Dispose(byte param_1);
		void Construct();
		static int GetSize();
		virtual void ExecuteFromCallContext();

};
