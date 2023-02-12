#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeB/Iterator1X/Iterator13/IteratorB13Abstract.h"

class IteratorB13 : public IteratorB13Abstract {
	public:

		virtual int Get();
		virtual void Rewind();
		virtual uint End();
		virtual void Iterate();
		virtual void SeekEnd();
		virtual int Get2();
		virtual void Previous();
		virtual void Set(int param_1);
		void Dispose(byte param_1);
		void Construct(uint param_1);

};
