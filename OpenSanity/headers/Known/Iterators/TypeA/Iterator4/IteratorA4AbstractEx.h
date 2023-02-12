#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeA/Iterator4/IteratorA4Abstract.h"

class IteratorA4AbstractEx : public IteratorA4Abstract {
	public:
		void * colection;
		int index;

		void Dispose(byte param_1);
		static void Construct(uint* param_1);

};
