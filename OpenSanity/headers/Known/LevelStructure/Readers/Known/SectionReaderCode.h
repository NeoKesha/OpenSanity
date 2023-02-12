#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderCode : public SectionReaderAbstract {
	public:
		int sectionId;
		void * unkPointer;
		SectionCode * section;

		virtual void Read(void* buffer, size_t size, size_t offset);
		void Dispose(byte param_1);
		void Construct(uint param_1, uint param_2, uint param_3);

};
