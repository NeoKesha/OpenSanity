#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeB/Iterator0X/Iterator5/IteratorB5Abstract.h"

class IteratorB5 : public IteratorB5Abstract {
	public:
		void * collection;
		uint index;

		virtual int Get();
		virtual void Rewind();
		virtual uint End();
		virtual void Iterate();
		virtual void SeekEnd();
		virtual int Get2();
		virtual void Previous();
		virtual void Set(int param_1);
		void Dispose(byte param_1);
		void Construct(uint param_1);

};
