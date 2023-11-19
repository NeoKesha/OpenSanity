#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"

class WorldChunk {
	public:
		WorldChunkSub* unkData;
		uint flags;
		int unk1;
		TwinString chunkName;
		World * world;
		SomeState * someState;
		LevelHolderRM * RM;
		LevelHolderSM * SM;
		void * findMe;
		WorldChunk * next;
		WorldChunk * prev;

		void Construct(TwinString* chunkName, World* ac6, uint flags);
		bool CheckFlags();
		bool CheckSomeNum(bool flag);
		bool CheckSomeNum2(bool param_1);
		bool MaybeRead(int param_1, uint param_2);
		void FUN_00206990();
		void FUN_00206af0(int param_1, uint param_2, uint param_3);
		void SetHackyShit(WorldChunk** other, int fieldIndex1, int fieldIndex2);
		WorldChunkSub* FUN_00207fa0(WorldChunk* param_1, byte param_2);
		uint FUN_00207550(UnkFamily27Wrapper* param_1);

};
