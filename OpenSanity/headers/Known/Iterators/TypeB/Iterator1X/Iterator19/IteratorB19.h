#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeB/Iterator1X/Iterator19/IteratorB19Abstract.h"

class IteratorB19 : public IteratorB19Abstract {
	public:
		int index;

		virtual uint End();
		virtual AiPosition** Get();
		virtual void Rewind();
		virtual void Iterate();
		void Construct(uint param_1);
		virtual void SeekEnd();
		virtual void Previous();
		virtual void Set(int param_1);
		virtual int Get2();
		void Dispose(byte param_1);

};
