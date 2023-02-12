#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeB/Iterator1X/Iterator18/IteratorB18Abstract.h"

class IteratorB18 : public IteratorB18Abstract {
	public:

		virtual uint End();
		virtual InstanceTemplate** Get();
		virtual void Rewind();
		virtual void Iterate();
		void Construct(uint param_1);
		virtual void SeekEnd();
		virtual int Get2();
		virtual void Previous();
		virtual void Set(int param_1);
		void Dispose(byte param_1);

};
