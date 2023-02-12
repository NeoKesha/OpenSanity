#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeC/Iterator3/IteratorC3Abstract.h"

class IteratorC3 : public IteratorC3Abstract {
	public:
		short index;
		UnkFamily28A * collection;

		virtual void Reset();
		virtual void Iterate();
		virtual uint IsEnd();
		virtual UnkFamily28Element* Get();
		virtual void Set(int param_1);
		virtual int GetIndex();
		virtual int GetCollectionCnt();
		void Dispose(byte param_1);
		void Construct(uint param_1);

};
