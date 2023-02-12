#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderUnknownS : public SectionReaderAbstract {
	public:
		SectionSM * section;

		virtual void Read();
		void Dispose(byte param_1);
		void Construct(uint param_1);

};
