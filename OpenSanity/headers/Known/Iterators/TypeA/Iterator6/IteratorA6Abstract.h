#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeA/IteratorAAbstract.h"

class IteratorA6Abstract : public IteratorAAbstract {
	public:

		void Dispose(byte param_1);
		static void Unroll(uint* param_1);
		static void Unroll_2(uint* param_1);
		static void Unroll_3(uint* param_1);
		static void Unroll_4(uint* param_1);

};
