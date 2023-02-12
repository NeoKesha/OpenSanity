#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeB/Iterator0X/Iterator1/IteratorB1Abstract.h"

class IteratorB1 : public IteratorB1Abstract {
	public:
		FontCollection * collection;
		int index;

		virtual AutoClass58** Get();
		virtual void Rewind();
		virtual void Iterate();
		virtual bool End();
		virtual void Previous();
		virtual void Set(IteratorB1* other);
		virtual void SeekEnd();
		static AutoClass58** Get2(IteratorB1* param_1);
		void Dispose(byte param_1);

};
