#pragma once

#include "headers/OpenSanityGlobal.h"

class AiPath {
	public:
		short node1;
		short node2;
		short arg1;
		short arg2;
		short arg3;

		uint FUN_00160ca0(UnkFamily27Wrapper* param_1);
		void Construct(MemoryStream* stream);
		virtual void Write(MemoryStream* stream);

};
