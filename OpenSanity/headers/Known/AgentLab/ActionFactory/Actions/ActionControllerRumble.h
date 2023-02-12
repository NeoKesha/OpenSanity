#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class ActionControllerRumble : public ActionAbstract {
	public:
		float unnamed_1;

		void Dispose(byte param_1);
		void Construct();
		virtual void UnkMethod(int* param_1);
		virtual void ExecuteFromCallContext();
		static int GetSize();

};
