#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Iterators/TypeE/Iterator1/IteratorE1Abstract.h"

class IteratorE1 : public IteratorE1Abstract {
	public:
		InstanceDataList * collection;
		int index;

		virtual void Iterate();
		virtual InstanceNodeAbstract** Get();
		virtual bool IsEnd();
		virtual void Rewind();
		void Dispose(byte param_1);
		void Construct(byte* param_1);

};
