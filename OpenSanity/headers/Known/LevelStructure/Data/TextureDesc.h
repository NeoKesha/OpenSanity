#pragma once

#include "headers/OpenSanityGlobal.h"

class TextureDesc {
	public:
		byte widthPower;
		byte heightPower;
		int * texture[5];
		uint format;
		int unkInt1;
		short unkShort1;

		void ReadTextureFromStream(MemoryStream* stream);

};
