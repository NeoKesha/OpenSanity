#pragma once

#include "headers/OpenSanityGlobal.h"

class RIFFContainer {
	public:
		uint fourcc;
		RIFFContainer * parentRiff;
		byte * streamDataPtr;
		uint waveOffset;
		uint wave;

		uint Check();
		void GetShort(int offset, short* outVal);
		void GetInt(int offset, int* outVal);

};
