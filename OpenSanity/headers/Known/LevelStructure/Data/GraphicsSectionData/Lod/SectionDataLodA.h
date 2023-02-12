#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Lod/SectionDataLod.h"

class SectionDataLodA : public SectionDataLod {
	public:
		TwinString folder;

		static void Dispose(SectionDataLodA* param_1);
		void Dispose_1(byte param_1);
		static void EmptyFunction();
		void Construct(char** param_1);

};
