#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderInstanceAiPosition : public SectionReaderAbstract {
	public:
		InstanceSectionResources * instanceResources;
		CollectionAiPositionWrapper * collectionAiPosition;
		int cnt;

		virtual void Read(void* buffer, size_t size, size_t offset);
		void Dispose(byte param_1);

};
