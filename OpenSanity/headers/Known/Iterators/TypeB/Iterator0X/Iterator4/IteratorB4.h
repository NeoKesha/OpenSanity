#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeB/Iterator0X/Iterator4/IteratorB4Abstract.h"

class IteratorB4 : public IteratorB4Abstract {
	public:
		void * * colection;
		int index;

		virtual void* Get();
		virtual void Rewind();
		virtual bool End();
		virtual void Iterate();
		virtual void SeekEnd();
		virtual void* Get2();
		virtual void Previous();
		virtual void Set(IteratorB4* other);
		void Dispose(byte param_1);
		void Construct(uint param_1);

};
