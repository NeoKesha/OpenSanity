#pragma once

#include "headers/OpenSanityGlobal.h"

class TwinsanitySkin {
	public:
		uint id;
		TwinsanityMaterial * * materials;
		void * * vertexBufferData;
		IDirect3DVertexBuffer8* * vertexBuffer;
		uint * cnt4;
		uint * cnt3;
		uint * * array4A;
		uint * * array4B;
		uint * * array3;
		uint cnt;
		uint * vertexBufferLength;

		void Dispose();
		virtual void Read(MemoryStream* stream);
		virtual void FUN_00103430(int param_1);
		virtual void Render(byte param_1, int param_2);
		void Construct(uint param_1);
		virtual void Write(MemoryStream* stream);

};
