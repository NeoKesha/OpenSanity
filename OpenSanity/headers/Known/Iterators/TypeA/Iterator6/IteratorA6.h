#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeA/Iterator6/IteratorA6Abstract.h"

class IteratorA6 : public IteratorA6Abstract {
	public:
		StringCollection * stringCollection;
		int strIndex;

		virtual int Get();
		virtual void Rewind();
		virtual uint IsEnd();
		virtual void Iterate();
		virtual void SeekEnd();
		virtual void Previous();
		virtual void Set(int param_1);
		void Dispose(byte param_1);
		void Construct(uint param_1);

};
