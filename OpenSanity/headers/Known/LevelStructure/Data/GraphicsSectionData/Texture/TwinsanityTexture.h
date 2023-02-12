#pragma once

#include "headers/OpenSanityGlobal.h"

class TwinsanityTexture {
	public:
		uint index;
		uint id;
		int size;
		D3DTexture * d3dTexture;

		void Dispose();
		virtual void FreeTexture();
		virtual void ReadFromStream(MemoryStream* stream);
		virtual void Write(MemoryStream* stream);

};
