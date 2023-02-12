#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class ActionCutsceneStart : public ActionAbstract {
	public:
		float unnamed_1;

		void Dispose(byte param_1);
		void Construct();
		static int GetSize();
		virtual void UnkMethod(int* param_1);
		virtual void ExecuteFromCallContext();

};
