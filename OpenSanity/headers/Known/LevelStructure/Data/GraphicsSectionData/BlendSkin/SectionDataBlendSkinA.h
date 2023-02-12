#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/BlendSkin/SectionDataBlendSkin.h"
#include "headers/Known/TwinString.h"

class SectionDataBlendSkinA : public SectionDataBlendSkin {
	public:
		TwinString folder;

		void Dispose();
		void Dispose_1(byte param_1);

};
