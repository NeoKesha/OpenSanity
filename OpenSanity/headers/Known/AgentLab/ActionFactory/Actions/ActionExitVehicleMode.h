#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class ActionExitVehicleMode : public ActionAbstract {
	public:
		int unnamed_1;

		void Dispose(byte param_1);
		static int GetSize();
		void Construct();
		virtual void UnkMethod(int* param_1);
		virtual void ExecuteFromCallContext();

};
