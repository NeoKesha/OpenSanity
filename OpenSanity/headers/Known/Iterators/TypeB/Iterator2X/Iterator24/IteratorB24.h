#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeB/Iterator2X/Iterator24/IteratorB24Abstract.h"

class IteratorB24 : public IteratorB24Abstract {
	public:

		virtual uint End();
		virtual CollisionSurface** Get();
		virtual void Rewind();
		virtual void Iterate();
		void Construct(uint param_1);
		virtual void SeekEnd();
		virtual void Previous();
		virtual void Set(int param_1);
		virtual int Get2();
		void Dispose(byte param_1);

};
