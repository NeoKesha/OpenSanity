#pragma once

#include "headers/OpenSanityGlobal.h"

class CollectionFractions {
	public:
		uint * fraction;
		uint fractionCnt;

		void Read(MemoryStream* stream);
		void Write(MemoryStream* stream);

};
