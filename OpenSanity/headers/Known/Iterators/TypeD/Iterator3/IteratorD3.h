#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeD/Iterator3/IteratorD3Abstract.h"

class IteratorD3 : public IteratorD3Abstract {
	public:

		virtual void Rewind();
		virtual bool IsEnd();
		virtual void UnkMethod4(int param_1);
		virtual void UnkMethod3();
		virtual int Get();
		virtual void UnkMethod1();
		virtual void UnkMethod2();
		void Dispose(byte param_1);
		void Construct(uint* param_1);

};
