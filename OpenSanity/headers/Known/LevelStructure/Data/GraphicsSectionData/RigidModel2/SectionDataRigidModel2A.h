#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/RigidModel2/SectionDataRigidModel2.h"

class SectionDataRigidModel2A : public SectionDataRigidModel2 {
	public:
		TwinString folder;

		void Dispose();
		void Dispose_1(byte param_1);
		static void EmptyFunction();
		void Construct(char** param_1);

};
