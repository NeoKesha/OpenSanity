#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderUnknownC : public SectionReaderAbstract {
	public:
		TwinString str;

		void Construct(uint param_1, int param_2, char* param_3);
		void Dispose(byte param_1);
		virtual void Read(int* param_1);
		void Construct_3(uint param_1, int param_2, uint param_3);

};
