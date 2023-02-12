#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeC/Iterator7/IteratorC7Abstract.h"

class IteratorC7 : public IteratorC7Abstract {
	public:
		short index;
		void * collection;

		virtual void Reset();
		virtual void Iterate();
		virtual uint IsEnd();
		virtual int Get();
		virtual void Set(int param_1);
		virtual int GetIndex();
		virtual int GetCollectionCnt();
		void Dispose(byte param_1);
		void Construct(uint param_1);

};
