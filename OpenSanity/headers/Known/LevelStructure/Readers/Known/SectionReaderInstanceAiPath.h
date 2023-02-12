#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderInstanceAiPath : public SectionReaderAbstract {
	public:
		InstanceSectionResources * instanceResources;
		CollectionAiPathWrapper * collectionAiPath;
		int cnt;

		virtual void Read(void* buffer, size_t size, size_t offset);
		void Dispose(byte param_1);

};
