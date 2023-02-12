#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeB/Iterator1X/Iterator12/IteratorB12Abstract.h"

class IteratorB12 : public IteratorB12Abstract {
	public:

		virtual uint End();
		virtual int Get();
		virtual void Rewind();
		virtual void Iterate();
		virtual int Get2();
		virtual void Previous();
		virtual void Set(int param_1);
		virtual void SeekEnd();
		void Dispose(byte param_1);
		void Construct(uint param_1);

};
