#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Texture/SectionDataTexture.h"

class SectionDataTextureA : public SectionDataTexture {
	public:
		TwinString folder;

		void Dispose();
		void Dispose_1(byte param_1);
		static void EmptyFunction();
		void Construct(TwinString* name);

};
