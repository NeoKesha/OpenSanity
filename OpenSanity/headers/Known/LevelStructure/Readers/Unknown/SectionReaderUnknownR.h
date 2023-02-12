#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderUnknownR : public SectionReaderAbstract {
	public:
		int index;
		SectionSM * section;

		void Construct(uint param_1, uint param_2);
		void Construct_1(uint param_1, uint param_2, uint param_3, uint param_4);
		virtual void Read(void* param_1, size_t param_2, int* param_3);
		void Dispose(byte param_1);

};
