#pragma once

#include "headers/OpenSanityGlobal.h"

class CollectionInts {
	public:
		int * ints;
		uint intsCnt;

		void Read(MemoryStream* stream);
		void Write(MemoryStream* stream);

};
