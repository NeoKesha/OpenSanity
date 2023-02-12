#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/DirectX/Resource/D3DBaseTexture.h"

class D3DTexture : public D3DBaseTexture { //Replace with DIRECT3DTEXTURE8
	public:

		virtual void GetSurfaceLevel(uint param_2);

};
