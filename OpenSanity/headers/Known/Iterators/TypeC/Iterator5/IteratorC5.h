#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeC/Iterator5/IteratorC5Abstract.h"

class IteratorC5 : public IteratorC5Abstract {
	public:
		short index1;
		short index2;
		UnkFamily28A * collection;

		virtual void Reset();
		virtual void Iterate();
		virtual bool IsEnd();
		virtual UnkFamily28Element* Get();
		virtual void Set(IteratorC5* param_1);
		virtual int GetIndex();
		virtual int GetCollectionCnt();
		void Dispose(byte param_1);
		void Construct(uint param_1);

};
