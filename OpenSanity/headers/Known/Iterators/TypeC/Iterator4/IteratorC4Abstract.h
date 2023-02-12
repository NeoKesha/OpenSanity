#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeC/IteratorCAbstract.h"

class IteratorC4Abstract : public IteratorCAbstract {
	public:

		void Dispose(byte param_1);
		void Construct();
		void Unroll();
		void Unroll_3();

};
