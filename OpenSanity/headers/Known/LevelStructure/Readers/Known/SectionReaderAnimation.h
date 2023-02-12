#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderAnimation : public SectionReaderAbstract {
	public:
		int cnt;
		int cnt_;
		SectionDataAnimationBase * collection;
		SectionAnimation * section;

		void Dispose(byte param_1);
		virtual void Read(void* buffer, size_t size, size_t offset);

};
