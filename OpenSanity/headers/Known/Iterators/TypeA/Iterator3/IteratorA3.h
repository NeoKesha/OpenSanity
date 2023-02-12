#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeA/Iterator3/IteratorA3Abstract.h"

class IteratorA3 : public IteratorA3Abstract {
	public:

		virtual int Get();
		virtual void Rewind();
		virtual bool IsEnd();
		void Dispose(byte param_1);
		virtual void Iterate();
		virtual void Set(int param_1);
		virtual void SeekEnd();
		virtual void Previous();
		void Construct(uint* param_1);

};
