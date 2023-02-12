#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"
#include "headers/Unknown/Families/Families0X/Family8/UnkFamily8B.h"

class UnkFamily8BD : public UnkFamily8B {
	public:
		TwinString name;

		virtual void FUN_000a7180(byte param_2, uint param_3, uint param_4);
		virtual uint* FUN_000abb00(byte param_1);
		void Construct(uint param_1, uint param_2, uint param_3);
		void Construct_3(uint param_1, uint param_2, uint param_3);

};
