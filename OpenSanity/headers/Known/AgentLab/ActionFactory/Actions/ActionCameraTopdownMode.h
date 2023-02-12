#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class ActionCameraTopdownMode : public ActionAbstract {
	public:

		void Dispose(byte param_1);
		virtual void ExecuteFromCallContext();
		void Construct();
		static int GetSize();

};
