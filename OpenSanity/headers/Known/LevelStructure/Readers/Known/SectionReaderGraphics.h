#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderGraphics : public SectionReaderAbstract {
	public:
		int sectionId;
		int size;
		SectionGraphics * section;

		virtual void Read(void* buffer, size_t size, size_t offset);
		void Dispose(byte param_1);

};
