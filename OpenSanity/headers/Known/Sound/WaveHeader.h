#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Sound/RIFFContainer.h"

class WaveHeader {
	public:
		byte * streamData1;
		RIFFContainer riff;
		RIFFContainer fmt;
		RIFFContainer data;

		static void Construct1(WaveHeader* param_1);
		uint Construct2(byte* param_1);

};
