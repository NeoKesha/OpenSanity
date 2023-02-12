#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeB/Iterator1X/Iterator16/IteratorB16Abstract.h"

class IteratorB16 : public IteratorB16Abstract {
	public:

		virtual int Get();
		virtual void Rewind();
		virtual uint End();
		virtual void Iterate();
		void Construct(uint param_1);
		virtual void Previous();
		virtual void Set(int param_1);
		virtual void SeekEnd();
		virtual int Get2();
		void Dispose(byte param_1);

};
