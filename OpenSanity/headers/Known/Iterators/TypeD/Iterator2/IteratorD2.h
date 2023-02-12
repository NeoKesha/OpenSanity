#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeD/Iterator2/IteratorD2Abstract.h"

class IteratorD2 : public IteratorD2Abstract {
	public:

		virtual int Get();
		virtual void Rewind();
		virtual bool IsEnd();
		virtual void UnkMethod1();
		virtual void UnkMethod4(int param_1);
		virtual void UnkMethod3();
		virtual void UnkMethod2();
		void Dispose(byte param_1);
		void Construct(uint* param_1);

};
