#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeD/IteratorDAbstract.h"

class IteratorD2Abstract : public IteratorDAbstract {
	public:

		void Dispose(byte param_1);
		static void Unroll(uint* param_1);
		static void Unroll_2(uint* param_1);

};
