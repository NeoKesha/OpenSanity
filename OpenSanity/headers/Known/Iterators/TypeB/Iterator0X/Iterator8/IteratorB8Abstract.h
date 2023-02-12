#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeB/IteratorBAbstract.h"

class IteratorB8Abstract : public IteratorBAbstract {
	public:

		void Dispose(byte param_1);
		static void Unroll(uint* param_1);
		static void Unroll_2(uint* param_1);
		static void Unroll_3(uint* param_1);
		static void Unroll_4(uint* param_1);

};
