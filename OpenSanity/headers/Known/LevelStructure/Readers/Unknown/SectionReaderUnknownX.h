#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderUnknownX : public SectionReaderAbstract {
	public:
		int someIndex;
		Oleg * oleg;

		void Dispose(byte param_1);
		void Dispose_1(byte param_1);
		virtual void Read(void* buffer, size_t size);
		void Construct(uint param_1, uint param_2);

};
