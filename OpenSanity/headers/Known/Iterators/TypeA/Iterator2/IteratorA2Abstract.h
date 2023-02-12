#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeA/IteratorAAbstract.h"

class IteratorA2Abstract : public IteratorAAbstract {
	public:

		void Dispose(byte param_1);
		void Unroll();
		static void Unroll_2(IteratorA2Abstract* param_1);
		static void Unroll_3(IteratorA2Abstract* param_1);
		static void Unroll_4(IteratorA2Abstract* param_1);

};
