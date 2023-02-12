#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeB/Iterator0X/Iterator6/IteratorB6Abstract.h"

class IteratorB6 : public IteratorB6Abstract {
	public:

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
