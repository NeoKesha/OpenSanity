#pragma once

#include "headers/OpenSanityGlobal.h"

class UNV010 {
	public:
		InstanceContext * ctx;
		InstanceContextRefCounter * refCounter;

		void Construct(uint param_1, InstanceContext* ctx);
		void Construct_1(uint param_1, uint param_2);

};
