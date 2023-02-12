#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class ActionSetPlayerMode : public ActionAbstract {
	public:
		int unnamed_1;
		int unnamed_2;
		int unnamed_3;

		void Dispose(byte param_1);
		void Construct();
		static int GetSize();
		virtual void ExecuteFromCallContext();

};
