#pragma once

#include "headers/OpenSanityGlobal.h"

class UnkFamily2Base {
	public:
		InstanceNodeAbstract * node;

		void Construct(uint param_1, byte param_2);
		virtual void Unroll();
		static void EmptyFunction();
		static void EmptyFunction_3();
		static void EmptyFunction_4();
		static void EmptyFunction_5();
		void Dispose(byte param_1);

};
