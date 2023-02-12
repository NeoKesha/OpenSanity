#pragma once

#include "headers/OpenSanityGlobal.h"

class CollectionFloats {
	public:
		float * floats;
		uint floatsCnt;

		void Read(MemoryStream* stream);
		void Write(MemoryStream* stream);

};
