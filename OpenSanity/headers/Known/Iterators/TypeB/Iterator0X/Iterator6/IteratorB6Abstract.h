#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeB/IteratorBAbstract.h"

class IteratorB6Abstract : public IteratorBAbstract {
	public:

		void Dispose(byte param_1);
		void Dispose_1(byte param_1);
		static void Unroll(IteratorB6Abstract* param_1);
		static void Unroll_3(IteratorB6Abstract* param_1);
		static void Unroll_4(IteratorB6Abstract* param_1);

};
