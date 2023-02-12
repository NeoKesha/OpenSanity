#pragma once

#include "headers/OpenSanityGlobal.h"

class Action0x06F {
	public:

		void Dispose(byte param_1);
		void Construct();
		static int GetSize();
		virtual void ExecuteFromCallContext(uint time_clock, InstanceContext* ctx);

};
