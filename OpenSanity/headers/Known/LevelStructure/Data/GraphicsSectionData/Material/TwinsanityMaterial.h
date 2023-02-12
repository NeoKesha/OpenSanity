#pragma once

#include "headers/OpenSanityGlobal.h"

class TwinsanityMaterial {
	public:
		uint id;
		TwinsanityMaterialShader * shader;

		virtual void FreeMaterial();
		virtual void LoadFromStream(MemoryStream* stream);

};
