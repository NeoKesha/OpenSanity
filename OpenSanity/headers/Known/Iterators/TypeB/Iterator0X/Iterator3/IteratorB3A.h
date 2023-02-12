#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeB/Iterator0X/Iterator3/IteratorB3Abstract.h"

class IteratorB3A : public IteratorB3Abstract {
	public:
		UnkCInit172Collection * colection;
		int index;

		virtual uint End();
		virtual void Rewind();
		virtual void Iterate();
		virtual void SeekEnd();
		virtual void Previous();
		virtual void Set(IteratorB3A* other);
		virtual InstanceContextRefCounter** Get();
		virtual InstanceContextRefCounter** Get2();
		void Dispose(byte param_1);
		void Construct(uint param_1);

};
