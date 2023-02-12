#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderSM : public SectionReaderAbstract {
	public:
		SectionAbstract * section;
		int size;
		bool flag;

		void Dispose(byte param_1);
		virtual void Read(void* buffer, size_t size);
		void Construct(byte param_1, uint param_2, uint param_3);

};
