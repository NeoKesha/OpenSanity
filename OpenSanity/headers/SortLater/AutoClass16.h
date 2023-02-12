#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"

class AutoClass16 {
	public:
		TwinString levelName;
		ushort strCnt;
		UnkFamily16A * defaultRm;
		ChunkDataRefCounter * chunkData;
		IndexToIdList * indexToIdList;

		virtual void FUN_001b3970();
		InstanceContext* GetInstanceContextById(short index);
		void FUN_001b5950();
		void FUN_001b59d0();
		virtual void CleanUp();
		void Dispose();
		void Dispose_6(byte param_1);
		void FUN_001b1ca0(UnkFamily15A* param_1);
		void Construct(char* str, short strCnt, ChunkData* chunkData, UnkFamily16Base* defaultRm, UnkFamily15A* ptr);
		void CreateIndexMapping();

};
