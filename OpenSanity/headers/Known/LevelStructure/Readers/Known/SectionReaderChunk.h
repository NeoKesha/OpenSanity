#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Readers/SectionReaderAbstract.h"

class SectionReaderChunk : public SectionReaderAbstract {
	public:
		ChunkDataRefCounter * chunkDataRef;
		uint someID;

		void Construct(uint param_1, ChunkData* param_2);
		virtual void Read(ChunkData* buffer, size_t size, size_t offset);
		void Dispose(byte param_1);

};
