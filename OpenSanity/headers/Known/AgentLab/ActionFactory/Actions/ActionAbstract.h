#pragma once

#include "headers/OpenSanityGlobal.h"

class ActionAbstract {
	public:
		ActionAbstract * nextAction;

		virtual void CleanUp();
		void Write(MemoryStream* stream);
		static ActionAbstract* BuildAction(MemoryStream* stream);
		void Dispose(byte param_1);
		virtual void CleanUp_4();
		virtual void EmptyFunction(InstanceContext* ctx);
		static bool ReturnTrue();
		static void EmptyFunction_7();
		void Construct();

};
