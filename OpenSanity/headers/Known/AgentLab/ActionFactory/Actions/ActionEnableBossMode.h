#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"

class ActionEnableBossMode : public ActionAbstract {
	public:
		int unnamed_1;
		int unnamed_2;
		int unnamed_3;

		void Construct();
		void Dispose(byte param_1);
		static int GetSize();
		virtual void UnkMethod(int* param_1);

};
