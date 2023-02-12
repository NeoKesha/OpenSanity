#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderGameObject : public SectionReaderAbstract {
	public:
		int cnt;
		int cnt_;
		SectionDataGameObjectBase * collection;
		IndexToIdList * indexList;

		void Dispose(byte param_1);
		virtual void Read(void* buffer, size_t size, size_t offset);

};
