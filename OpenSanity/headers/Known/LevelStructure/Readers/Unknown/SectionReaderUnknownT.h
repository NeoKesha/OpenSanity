#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderUnknownT : public SectionReaderAbstract {
	public:

		virtual void Read();
		void Dispose(byte param_1);
		void Construct(uint param_1);

};
