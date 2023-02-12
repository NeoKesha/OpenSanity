#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeA/Iterator2/IteratorA2Abstract.h"

class IteratorB2 : public IteratorA2Abstract {
	public:
		AutoClass58SubCollection * colection;
		int index;

		virtual RendererText** Get();
		virtual void Rewind();
		virtual bool End();
		virtual void Iterate();
		virtual void SeekEnd();
		virtual void Previous();
		virtual void Set(IteratorB2* param_1);
		virtual RendererText** Get2();
		void Dispose(byte param_1);
		void Construct(uint param_1);

};
