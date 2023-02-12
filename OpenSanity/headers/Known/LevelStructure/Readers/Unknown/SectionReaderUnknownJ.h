#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderUnknownJ : public SectionReaderAbstract {
	public:
		SectionGraphics * section;

		static void Read(SectionReaderUnknownJ* param_1);
		void Dispose(byte param_1);
		void Construct(uint param_1);

};
