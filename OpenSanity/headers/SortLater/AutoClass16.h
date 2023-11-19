#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"

class Chunk {
	public:
		TwinString levelName;
		ushort strCnt;
		ushort padding;
		UnkFamily16A * defaultRm;
		ChunkDataRefCounter * chunkData;
		IndexToIdList * indexToIdList;
		UnkFamily15A* unk1;
		UnkFamily15A* unk2;
		short unk3;
		short padding2;
		UnkFamily12Base* unk4;
		int reserved1;
		int reserved2;
		int reserved3;

		void FUN_001b3970();
		InstanceContext* GetInstanceContextById(short index);
		void FUN_001b5950();
		void FUN_001b59d0();
		void CleanUp();
		void Dispose();
		void Dispose_6(byte param_1);
		void FUN_001b1ca0(UnkFamily15A* param_1);
		void Construct(char* str, short strCnt, ChunkData* chunkData, UnkFamily16Base* defaultRm, UnkFamily15A* ptr);
		void CreateIndexMapping();

};
