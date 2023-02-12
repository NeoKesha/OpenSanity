#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Skydome/SectionDataSkydomeA.h"

class SectionDataSkydomeXbox : public SectionDataSkydomeA {
	public:

		virtual void FUN_00108530(uint* param_1, Sfx* param_2);
		void Construct();
		void Dispose();
		void Dispose_3(byte param_1);

};
