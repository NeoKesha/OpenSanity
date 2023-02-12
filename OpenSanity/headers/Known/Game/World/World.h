#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Game/InstanceSystem/InstanceContextSmartPtr.h"
#include "headers/Known/TwinString.h"

class World {
	public:
		int flags;
		TwinString restrictValue;
		uint unkField5;
		SomeState * someState;
		WorldChunk * first;
		WorldChunk * currentChunk;
		InstanceContextSmartPtr ctxPtr;

		World();
		World(SomeState* someState, int param_2);

		bool AddChunk(WorldChunk* unk);
		WorldChunk* FindSameCtxChunk(InstanceContext* ctx);
		WorldChunk* GetChunkByName(TwinString* chunkName);
		bool ProcessAndRead(int flagVal, bool* flagPtr);
		void FreeLevel(int flag, UnkFamily16A* _default);
		void FUN_00207280(TwinString* param_1, int param_2);
		void ChunkTransition(InstanceContext* ctx);
		bool FUN_002040f0(WorldChunk* param_1);
		WorldChunk* AddChunkByName(TwinString* param_1, uint param_2);

};
