#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeC/Iterator2/IteratorC2Abstract.h"

class IteratorC2 : public IteratorC2Abstract {
	public:
		short index;
		short minFreeIndex;
		void * collection;

		virtual void Reset();
		virtual void Iterate();
		virtual bool IsEnd();
		virtual int Get();
		virtual void Set(IteratorC2* other);
		virtual int GetIndex();
		virtual int GetCollectionCnt();
		void Dispose(byte param_1);
		void Construct(uint param_1);

};
