#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderCollisionData : public SectionReaderAbstract {
	public:
		byte unkField;
		int sectionOffset;
		CollisionData * data;

		void Dispose(byte param_1);
		virtual void Read(CollisionData* buffer, size_t size, size_t offset);
		void Construct(byte param_1, uint param_2, uint data);

};
