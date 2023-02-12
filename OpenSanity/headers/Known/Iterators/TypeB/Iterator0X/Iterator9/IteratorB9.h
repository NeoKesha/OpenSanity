#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeB/Iterator0X/Iterator9/IteratorB9Abstract.h"

class IteratorB9 : public IteratorB9Abstract {
	public:

		virtual void Rewind();
		virtual void Iterate();
		virtual uint End();
		virtual int Get();
		virtual int Get2();
		virtual void Previous();
		virtual void Set(int param_1);
		virtual void SeekEnd();
		void Dispose(byte param_1);
		void Construct(uint param_1);

};
