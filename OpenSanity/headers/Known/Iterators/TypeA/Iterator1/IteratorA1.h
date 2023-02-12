#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeA/Iterator1/IteratorA1Abstract.h"

class IteratorA1 : public IteratorA1Abstract {
	public:
		FontCollection * fontCollection;
		int index;

		static void Rewind(IteratorA1* param_1);
		virtual void Iterate();
		virtual bool IsEnd();
		virtual void Previous();
		virtual void Set(IteratorA1* param_1);
		virtual void SeekEnd();
		virtual AutoClass58** Get();
		void Dispose(byte param_1);

};
