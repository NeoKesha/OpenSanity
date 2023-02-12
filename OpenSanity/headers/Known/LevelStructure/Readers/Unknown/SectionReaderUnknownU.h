#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderUnknownU : public SectionReaderAbstract {
	public:

		virtual void Read();
		void Dispose(byte param_1);
		void Construct(byte param_1, byte param_2, uint param_3);

};
