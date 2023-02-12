#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/RigidModel/SectionDataRigidModel.h"

class SectionDataRigidModelA : public SectionDataRigidModel {
	public:
		TwinString folder;

		void Dispose();
		void Dispose_1(byte param_1);

};
