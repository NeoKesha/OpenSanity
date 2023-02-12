#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeB/Iterator1X/Iterator14/IteratorB14Abstract.h"

class IteratorB14 : public IteratorB14Abstract {
	public:
		int index;

		virtual Position** Get();
		virtual uint End();
		virtual void Rewind();
		void Dispose(byte param_1);
		virtual void Iterate();
		void Construct(uint param_1);
		virtual void SeekEnd();
		virtual int Get2();
		virtual void Previous();
		virtual void Set(int param_1);

};
