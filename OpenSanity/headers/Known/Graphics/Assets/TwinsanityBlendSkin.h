#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Graphics/Assets/TwinsanityGraphicsBase.h"

class TwinsanityBlendSkin : public TwinsanityGraphicsBase {
	public:
		TwinsanityMaterial * * materials;
		IDirect3DVertexBuffer8* * vertexBuffer;
		uint submodels;
		uint * vertexBufferLength;
		uint vertexBufferCnt;

		virtual void FUN_00103990(int param_1);
		void Dispose();
		virtual void Read(MemoryStream* stream);
		virtual void Render(byte param_1, int param_2);
		void Construct(uint param_1);
		virtual void Write(MemoryStream* stream);

};
