#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"

class UnkBuilder1ItemAbstract {
	public:
		TwinString name;

		virtual uint FUN_001c4af0(int** param_1);
		void Dispose(byte param_1);
		void Construct(int param_1);
		static uint FUN_001a76e0();
		void Construct_4();
		void Dispose_5();
		void Construct_6(TwinString* param_1);
		void Construct_7(TwinString* param_1, byte param_2);

};
