#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeE/Iterator2/IteratorE2Abstract.h"

class IteratorE2 : public IteratorE2Abstract {
	public:
		void * collection;
		uint index;

		virtual void Rewind();
		virtual bool IsEnd();
		virtual void Iterate();
		void Construct(int* param_1);
		virtual int Get();
		void Dispose(byte param_1);

};
