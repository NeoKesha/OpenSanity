#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeB/Iterator1X/Iterator17/IteratorB17Abstract.h"

class IteratorB17 : public IteratorB17Abstract {
	public:

		virtual Instance** Get();
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
