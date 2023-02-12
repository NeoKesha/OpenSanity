#pragma once

#include "headers/OpenSanityGlobal.h"

class TwinsanityModel {
	public:
		uint id;
		uint submodels;
		uint * someCnt1;
		uint * vertexBufferLength;
		uint * someLength;
		uint * someCnt2;
		int * * dataArray1;
		IDirect3DVertexBuffer8* * vertexBuffer;

		virtual void ReadFromStream(MemoryStream* stream);
		virtual void Register(int index);
		void Dispose();

};
