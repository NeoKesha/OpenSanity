#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeB/Iterator0X/Iterator8/IteratorB8Abstract.h"

class IteratorB8 : public IteratorB8Abstract {
	public:

		virtual uint End();
		virtual int Get();
		virtual void Rewind();
		void Dispose(byte param_1);
		virtual void Iterate();
		virtual void Previous();
		virtual void Set(int param_1);
		virtual void SeekEnd();
		virtual int Get2();
		void Construct(uint param_1);

};
