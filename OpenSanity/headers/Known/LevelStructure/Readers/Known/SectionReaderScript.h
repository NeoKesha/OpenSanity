#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderScript : public SectionReaderAbstract {
	public:
		int cnt;
		SectionDataScriptBase * data;
		int * indexList;

		void Dispose(byte param_1);
		virtual void Read(void* param_1, size_t param_2);

};
