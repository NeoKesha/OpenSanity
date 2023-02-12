#pragma once

#include "headers/OpenSanityGlobal.h"

class UnkFamily21Base {
	public:
		char * str;

		virtual void FUN_000c31e0(int* param_1);
		void Dispose(byte param_1);
		void Construct();
		void Construct_3(uint param_1, uint param_2);
		void Construct_4(UnkFamily21Base* other);

};
