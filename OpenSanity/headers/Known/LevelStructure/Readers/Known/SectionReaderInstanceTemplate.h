#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderInstanceTemplate : public SectionReaderAbstract {
	public:
		InstanceSectionResources * instanceResources;
		CollectionInstanceTemplateWrapper * collectionInstanceTemplate;
		int cnt;

		virtual void Read(void* buffer, size_t size, size_t offset);
		void Dispose(byte param_1);

};
