#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderUnknownP : public SectionReaderAbstract {
	public:

		virtual void Read(uint* param_1, uint* param_2);
		void Dispose(byte param_1);
		void Construct(uint param_1, uint param_2, uint param_3);

};
