#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderUnknownO : public SectionReaderAbstract {
	public:
		SectionRM * section;

		void Dispose(byte param_1);
		virtual void Read();
		void Construct(uint param_1);

};
