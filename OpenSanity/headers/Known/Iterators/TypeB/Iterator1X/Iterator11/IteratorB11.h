#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeB/Iterator1X/Iterator11/IteratorB11Abstract.h"

class IteratorB11 : public IteratorB11Abstract {
	public:

		virtual uint End();
		virtual void Rewind();
		virtual void Iterate();
		virtual int Get();
		virtual int Get2();
		virtual void Previous();
		virtual void Set(int param_1);
		virtual void SeekEnd();
		void Dispose(byte param_1);

};
