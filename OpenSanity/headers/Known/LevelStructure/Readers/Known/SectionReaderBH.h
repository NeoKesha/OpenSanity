#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderBH : public SectionReaderAbstract {
	public:
		BHTable * bhTable;
		TwinString packageName;

		virtual void Read(byte* buffer, size_t length);
		void Dispose(byte param_1);
		void Construct(uint param_1, char** param_2);

};
