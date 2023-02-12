#pragma once

#include "headers/OpenSanityGlobal.h"

class SfxDataStream {
	public:
		int header;
		int unkField1;
		int unkField2;
		int someData;
		byte * soundStream;
		int soundStreamLength;
		int unkField3;
		int unkField4;
		void * buffer;
		uint streamLength;

		void Write(MemoryStream* stream);
		uint LoadAudio(Sfx* sfx, MemoryStream* stream);
		void Read(MemoryStream* stream);

};
