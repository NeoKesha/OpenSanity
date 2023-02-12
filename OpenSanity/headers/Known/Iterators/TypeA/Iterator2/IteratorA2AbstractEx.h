#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeA/Iterator2/IteratorA2Abstract.h"

class IteratorA2AbstractEx : public IteratorA2Abstract {
	public:
		AutoClass58SubCollection * colection;
		int index;

		void Dispose(byte param_1);
		static void Construct(uint* param_1);

};
