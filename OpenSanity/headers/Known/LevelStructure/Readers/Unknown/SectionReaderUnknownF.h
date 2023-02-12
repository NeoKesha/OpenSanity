#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderUnknownF : public SectionReaderAbstract {
	public:
		void * buffer;

		void Dispose();
		void Dispose_1(byte param_1);
		void Construct(uint* param_1, uint* param_2);
		static void EmptyFunction();
		static void EmptyFunction_4();

};
