#pragma once

#include "headers/OpenSanityGlobal.h"

class ChunkDataRefCounter {
	public:
		ChunkData * chunk;
		int refCount;

		static void Release(ChunkDataRefCounter** out);
		static ChunkDataRefCounter** Unpack(ChunkDataRefCounter** chunkDataRef, ChunkData* chunkData);

};
