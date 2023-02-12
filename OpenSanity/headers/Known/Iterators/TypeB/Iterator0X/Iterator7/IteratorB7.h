#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeB/Iterator0X/Iterator7/IteratorB7Abstract.h"

class IteratorB7 : public IteratorB7Abstract {
	public:

		virtual int Get();
		virtual void Rewind();
		virtual void Iterate();
		virtual uint End();
		virtual void Previous();
		virtual void Set(int param_1);
		virtual void SeekEnd();
		virtual int Get2();
		void Dispose(byte param_1);
		void Construct(uint param_1);

};
