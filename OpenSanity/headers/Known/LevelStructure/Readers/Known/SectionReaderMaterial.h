#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderMaterial : public SectionReaderAbstract {
	public:
		TwinsanityMaterial * material;
		SectionDataMaterial * data;

		virtual void Read(void* buffer, size_t size, size_t offset);
		void Dispose(byte param_1);

};
