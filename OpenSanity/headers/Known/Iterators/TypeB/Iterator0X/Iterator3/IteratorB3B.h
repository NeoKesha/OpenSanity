#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeB/Iterator0X/Iterator3/IteratorB3Abstract.h"

class IteratorB3B : public IteratorB3Abstract {
	public:
		uint index;
		uint * collection;

		virtual bool End();
		virtual uint* Get();
		virtual void Rewind();
		void Dispose(byte param_1);
		void Construct(uint param_1);
		virtual void Iterate();

};
