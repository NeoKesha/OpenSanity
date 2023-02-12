#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeB/Iterator2X/Iterator21/IteratorB21Abstract.h"

class IteratorB21 : public IteratorB21Abstract {
	public:

		virtual Trigger** Get();
		virtual uint End();
		virtual void Rewind();
		virtual void Iterate();
		void Construct(uint param_1);
		virtual void SeekEnd();
		virtual void Previous();
		virtual void Set(int param_1);
		virtual int Get2();
		void Dispose(byte param_1);

};
