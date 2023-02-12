#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeB/Iterator1X/Iterator10/IteratorB10Abstract.h"

class IteratorB10 : public IteratorB10Abstract {
	public:

		virtual int Get();
		virtual void Rewind();
		virtual void SeekEnd();
		virtual uint End();
		virtual int Get2();
		virtual void Iterate();
		virtual void Previous();
		virtual void Set(int param_1);
		void Dispose(byte param_1);
		void Construct(uint param_1);

};
