#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderUnknownM : public SectionReaderAbstract {
	public:

		virtual void Read();
		void Dispose(byte param_1);
		void Construct(uint param_1, uint param_2);

};
