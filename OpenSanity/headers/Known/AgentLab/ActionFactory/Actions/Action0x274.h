#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class Action0x274 : public ActionAbstract {
	public:
		int unnamed_1;
		int unnamed_2;

		virtual void ExecuteFromCallContext();
		void Dispose(byte param_1);
		void Construct();
		static int GetSize();

};
