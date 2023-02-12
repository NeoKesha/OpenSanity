#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderUnknownW : public SectionReaderAbstract {
	public:
		TwinString str;

		virtual void Read(byte* param_1);
		void Dispose(byte param_1);
		void Construct(uint param_1, char* param_2);

};
