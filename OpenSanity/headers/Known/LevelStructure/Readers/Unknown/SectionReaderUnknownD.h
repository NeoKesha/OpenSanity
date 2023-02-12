#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderUnknownD : public SectionReaderAbstract {
	public:

		static void Read();
		void Dispose(byte param_1);
		void Construct();

};
