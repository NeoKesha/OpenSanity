#pragma once

#include "headers/OpenSanityGlobal.h"

class Action0x25C {
	public:

		void Dispose(byte param_1);
		static void EmptyFunction();
		static int GetSize();
		virtual void ExecuteFromCallContext(uint time_clock, InstanceContext* ctx);
		void Construct();

};
