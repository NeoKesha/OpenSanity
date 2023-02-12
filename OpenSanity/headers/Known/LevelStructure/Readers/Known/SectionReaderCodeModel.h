#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderCodeModel : public SectionReaderAbstract {
	public:
		int cnt;
		SectionDataCodeModelBase * data;
		int * idArray;

		void Dispose(byte param_1);
		virtual void Read(void* buffer, size_t size, size_t offset);

};
