#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Data/CodeSectionData/Script/SectionDataScriptBase.h"

class SectionDataScript : public SectionDataScriptBase {
	public:

		void Dispose(byte param_1);
		void Construct(uint cnt);

};
