#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeC/Iterator4/IteratorC4Abstract.h"

class IteratorC4 : public IteratorC4Abstract {
	public:
		short i;
		short index;
		RendererSubStruct * collection;

		virtual void Reset();
		virtual void Iterate();
		virtual FontRenderer** Get();
		void Dispose(byte param_1);
		virtual bool IsEnd();
		virtual void Set(IteratorC4* param_1);
		virtual int GetIndex();
		virtual int GetCollectionCnt();
		void Construct(uint param_1);

};
