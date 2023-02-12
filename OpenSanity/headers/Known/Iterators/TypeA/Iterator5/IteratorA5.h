#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeA/Iterator5/IteratorA5Abstract.h"

class IteratorA5 : public IteratorA5Abstract {
	public:
		StringCollection * stringCollection;
		int strIndex;

		virtual bool IsEnd();
		virtual TwinString* Get();
		virtual void Previous();
		virtual void SeekEnd();
		virtual void Iterate();
		virtual void Set(IteratorA5* collection);
		void Construct(uint param_1);

};
