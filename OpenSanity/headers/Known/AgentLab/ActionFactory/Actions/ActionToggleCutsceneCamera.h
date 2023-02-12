#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class ActionToggleCutsceneCamera : public ActionAbstract {
	public:
		int arg1;
		int arg2;

		virtual void ExecuteFromCallContext();
		void Dispose(byte param_1);
		void Construct();
		static int GetSize();

};
