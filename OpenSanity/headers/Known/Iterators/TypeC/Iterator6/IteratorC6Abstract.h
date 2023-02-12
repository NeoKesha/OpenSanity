#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeC/IteratorCAbstract.h"

class IteratorC6Abstract : public IteratorCAbstract {
	public:

		void Dispose(byte param_1);
		static void Unroll(uint* param_1);
		static void Unroll_2(uint* param_1);
		static void Unroll_3(uint* param_1);

};
