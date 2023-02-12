#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderInstance : public SectionReaderAbstract {
	public:
		SectionInstance * data;
		int sectionId;
		int sectionOffset;

		virtual void Read();
		void Dispose(byte param_1);

};
