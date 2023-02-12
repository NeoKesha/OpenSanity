#pragma once

#include "headers/OpenSanityGlobal.h"

class AutoClass23 {
	public:
		MemoryStream * stream;
		short * dataStream;
		int waveFcc;
		int waveOffset;

		static void Construct(AutoClass23* param_1);
		virtual void ReadWaveHeader(byte* param_1);
		bool ReadWavFile(TwinString* fname);

};
