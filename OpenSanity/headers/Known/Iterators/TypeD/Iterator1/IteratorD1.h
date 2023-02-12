#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeD/Iterator1/IteratorD1Abstract.h"

class IteratorD1 : public IteratorD1Abstract {
	public:
		void * first;
		void * current;

		virtual int Get();
		virtual void UnkMethod1();
		virtual void UnkMethod4(IteratorD1* param_1);
		virtual void UnkMethod3();
		virtual void UnkMethod2();
		void Construct(uint* param_1);
		void Dispose(byte param_1);
		virtual void Rewind();
		virtual bool IsEnd();

};
