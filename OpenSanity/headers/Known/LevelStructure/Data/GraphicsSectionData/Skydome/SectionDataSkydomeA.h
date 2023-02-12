#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Skydome/SectionDataSkydome.h"

class SectionDataSkydomeA : public SectionDataSkydome {
	public:
		TwinString folder;

		void Dispose();
		void Dispose_1(byte param_1);
		static void EmptyFunction();
		void Construct(char** param_1);

};
