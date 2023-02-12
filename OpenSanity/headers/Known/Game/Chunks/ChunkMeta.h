#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"

class ChunkMeta {
	public:
		TwinString chunkName;
		short chunkIndex;
		void * chunkManager;
		ChunkDataRefCounter * chunkDataRef;
		short someCnt;

		void IncrementSomeCnt();

};
