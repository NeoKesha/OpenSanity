#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeB/Iterator2X/Iterator23/IteratorB23Abstract.h"

class IteratorB23 : public IteratorB23Abstract {
	public:

		virtual int Get();
		virtual void Rewind();
		virtual uint End();
		void Dispose(byte param_1);
		virtual void Iterate();
		void Construct(uint param_1);
		virtual void SeekEnd();
		virtual void Previous();
		virtual void Set(int param_1);
		virtual int Get2();

};
