#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Data/CodeSectionData/Sfx/SfxBase/SectionDataSfxBase.h"

class SectionDataSfx : public SectionDataSfxBase {
	public:
		MemoryStream * waveData;
		int field2_0x1c;

		SectionDataSfx();
		SectionDataSfx(uint elementCount);
		~SectionDataSfx();

		virtual MemoryStream* InitMemoryStreamBuffer();
		void WriteToStream(MemoryStream* stream);
		
		virtual void CleanUp();
		virtual void FUN_001b2210(uint cnt, uint param_2, int param_3);
		virtual void FUN_001b22f0(uint unused, void* other);
		virtual void DisposeStream();
		void Add(int param_1, uint index, Sfx* element, uint* ptr);

};
