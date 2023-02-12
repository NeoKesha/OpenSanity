#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeA/Iterator4/IteratorA4Abstract.h"

class IteratorA4 : public IteratorA4Abstract {
	public:
		void * colection;
		int index;

		virtual bool IsEnd();
		virtual int Get();
		virtual void Rewind();
		virtual void Iterate();
		virtual void Set(IteratorA4* other);
		virtual void SeekEnd();
		virtual void Previous();
		void Dispose(byte param_1);
		void Construct(uint* param_1);

};
