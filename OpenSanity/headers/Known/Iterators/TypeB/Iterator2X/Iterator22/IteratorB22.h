#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeB/Iterator2X/Iterator22/IteratorB22Abstract.h"

class IteratorB22 : public IteratorB22Abstract {
	public:

		virtual CameraTrigger** Get();
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
