#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"

class InstanceContextSub {
	public:
		uint cnt;
		TwinString chunkName;

		uint FUN_000f7300();
		void Construct(InstanceContext* ctx, ChunkData* chunkData);
		virtual bool FUN_000f8c80(InstanceContext* ctx);

};
