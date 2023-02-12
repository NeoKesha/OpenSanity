#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderUnknownL : public SectionReaderAbstract {
	public:
		SectionRM * section;

		virtual void Read(byte param_2, uint param_3, uint param_4, uint param_5);
		void Dispose(byte param_1);
		void Construct(uint param_1);

};
