#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class ActionClearBottomText : public ActionAbstract {
	public:

		void Dispose(byte param_1);
		static void EmptyFunction();
		static int GetSize();
		virtual void ExecuteFromCallContext();
		void Construct();

};
