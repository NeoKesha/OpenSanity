#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"

class AutoClass56 {
	public:
		uint flags;
		uint someTicks;
		TwinString chunkName;
		void * rmDataPool;
		short field4_0x18;
		int field1_0x4;

		void WriteDataToStream(ChunkDesc* chunkDesc, UnkFamily16A* defaultRm, AutoClass53* param_3);
		void Write(MemoryStream* stream);
		void ReadToChunkDesc(bool flag, ChunkDesc* chunkDesc, UnkFamily16Base* level);
		void Read(MemoryStream* param_1);

};
