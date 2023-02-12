#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeE/IteratorEAbstract.h"

class IteratorE3Abstract : public IteratorEAbstract {
	public:

		void Dispose(byte param_1);
		static void Unroll(uint* param_1);
		static void Unroll_2(uint* param_1);

};
