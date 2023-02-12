#pragma once

#include "headers/OpenSanityGlobal.h"

class ChunkList {
	public:
		ChunkData * firstChunk;
		ChunkDataRefCounter * chunkRef;

		static void SetTimeFlagsAll();
		ChunkData* GetDataByName(TwinString* chunkName);
		virtual void FUN_0013d250(ChunkData* param_1);
		void FUN_0013d2e0(uint param_1, uint* param_2);
		static ChunkList* GetInstance();
		virtual void ProcessChunks(bool param_1, Clock* clock);

};
