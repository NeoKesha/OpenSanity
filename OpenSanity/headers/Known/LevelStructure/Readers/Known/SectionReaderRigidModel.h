#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderRigidModel : public SectionReaderAbstract {
	public:
		TwinsanityRigidModel * rigidModel;
		SectionDataRigidModel * data;

		virtual void Read(void* buffer, size_t size, size_t offset);
		void Dispose(byte param_1);

};
