#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"
#include "headers/Unknown/Families/Families0X/Family8/UnkFamily8B.h"

class UnkFamily8BC : public UnkFamily8B {
	public:
		TwinString name;

		virtual uint* FUN_000ab910(byte param_1);
		virtual uint FUN_000a6db0();
		void Construct(uint param_1, uint param_2, char* param_3, byte param_4, byte param_5);
		void Construct_3(uint param_1, uint param_2, char* param_3, byte param_4, byte param_5);

};
