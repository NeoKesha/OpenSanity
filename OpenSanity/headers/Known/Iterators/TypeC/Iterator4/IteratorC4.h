#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeC/Iterator4/IteratorC4Abstract.h"

class IteratorC4 : public IteratorC4Abstract {
	public:
		short i;
		short index;
		RendererSubStruct * collection;
		
		IteratorC4(RendererSubStruct* _collection);

		virtual void Reset();
		virtual void Iterate();
		virtual FontRenderer** Get();
		virtual bool IsEnd();
		virtual void Set(IteratorC4* param_1);
		virtual int GetIndex();
		virtual int GetCollectionCnt();

};
