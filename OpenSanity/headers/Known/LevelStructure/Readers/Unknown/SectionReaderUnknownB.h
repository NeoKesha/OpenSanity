#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderUnknownB : public SectionReaderAbstract {
	public:

		void Dispose(byte param_1);
		virtual void Read();
		void Construct(uint param_1, uint param_2, uint param_3, uint param_4);

};
