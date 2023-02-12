#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderInstancePosition : public SectionReaderAbstract {
	public:
		InstanceSectionResources * instanceResources;
		CollectionPositionWrapper * collection;
		int cnt;

		virtual void Read(void* buffer, size_t size, size_t offset);
		void Dispose(byte param_1);

};
