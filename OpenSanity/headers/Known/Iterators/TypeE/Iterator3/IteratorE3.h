#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeE/Iterator3/IteratorE3Abstract.h"

class IteratorE3 : public IteratorE3Abstract {
	public:
		void * collection;
		uint index;

		void Dispose(byte param_1);
		virtual bool IsEnd();
		virtual void Rewind();
		virtual int Get();
		virtual void Iterate();

};
