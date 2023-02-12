#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderTexture : public SectionReaderAbstract {
	public:
		TwinsanityTexture * texture;
		SectionDataTexture * data;

		virtual void Read(void* buffer, size_t size, size_t offset);
		void Dispose(byte param_1);

};
