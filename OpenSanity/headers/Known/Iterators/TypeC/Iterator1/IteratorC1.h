#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeC/Iterator1/IteratorC1Abstract.h"

class IteratorC1 : public IteratorC1Abstract {
	public:
		short index;
		void * collection;

		virtual void Reset();
		virtual void Iterate();
		virtual uint IsEnd();
		virtual int Get();
		void Dispose(byte param_1);
		virtual void Set(int param_1);
		virtual int GetIndex();
		virtual int GetCollectionCnt();
		void Construct(uint param_1);

};
