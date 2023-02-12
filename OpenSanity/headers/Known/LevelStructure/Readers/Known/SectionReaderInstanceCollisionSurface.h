#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderInstanceCollisionSurface : public SectionReaderAbstract {
	public:
		InstanceSectionResources * instanceResources;
		CollectionCollisionSurfaceWrapper * collection;
		int cnt;

		void Dispose(byte param_1);
		virtual void Read(void* buffer, size_t size, size_t offset);

};
