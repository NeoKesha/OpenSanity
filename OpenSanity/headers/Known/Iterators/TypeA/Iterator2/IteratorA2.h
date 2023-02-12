#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeA/Iterator2/IteratorA2Abstract.h"

class IteratorA2 : public IteratorA2Abstract {
	public:
		AutoClass58SubCollection * colection;
		int index;

		void Dispose(byte param_1);
		virtual void Rewind();
		virtual bool IsEnd();
		virtual void Iterate();
		virtual void SeekEnd();
		virtual void Previous();
		virtual void Set(IteratorA2* param_1);
		virtual RendererText** Get();
		void Construct(uint param_1);

};
