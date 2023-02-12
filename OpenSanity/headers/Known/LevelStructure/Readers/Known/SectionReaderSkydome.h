#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderSkydome : public SectionReaderAbstract {
	public:
		TwinsanitySkydome * skydome;
		SectionDataSkydome * data;

		virtual void Read(void* buffer, size_t size, size_t offset);
		void Dispose(byte param_1);

};
