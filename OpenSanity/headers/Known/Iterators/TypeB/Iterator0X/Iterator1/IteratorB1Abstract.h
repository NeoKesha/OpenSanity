#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeB/IteratorBAbstract.h"

class IteratorB1Abstract : public IteratorBAbstract {
	public:

		void Dispose(byte param_1);
		void Dispose_1(byte param_1);
		void Unroll();
		static void Unroll_3(uint* param_1);
		static void Unroll_4(uint* param_1);
		static void Construct(uint* param_1);

};
