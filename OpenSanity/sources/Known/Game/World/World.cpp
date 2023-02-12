#include "headers/Known/Game/World/World.h"

#include "headers/Known/TwinString.h"
#include "headers/Known/Game/World/WorldChunk.h"
#include "headers/Unknown/SomeState.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
#include "headers/Unknown/Families/Families1X/Family16/UnkFamily16A.h"
bool World::AddChunk(WorldChunk* unk) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall World::AddChunk(World *this,WorldChunk *unk){
		uint uVar1;
		int iVar2;
		if (((unk->prev != (WorldChunk *)0x0) || (unk->next != (WorldChunk *)0x0)) || (this->first == unk)) {
		return false;
		}
		if ((this->restrict).strLength != 0) {
		iVar2 = TwinString::FindSubstringEndPos(&unk->chunkName,0,(this->restrict).value);
		if (iVar2 != 0) goto LAB_002040bc;
		}
		uVar1 = this->flags;
		this->flags = (uVar1 + 1 ^ uVar1) & 0xfff ^ uVar1;
		LAB_002040bc:if (this->first == (WorldChunk *)0x0) {
		this->first = unk;
		unk->prev = (WorldChunk *)0x0;
		unk->next = (WorldChunk *)0x0;
		return true;
		}
		this->first->prev = unk;
		unk->next = this->first;
		this->first = unk;
		return true;
		}
		
	*/
	return false;
}

WorldChunk* World::FindSameCtxChunk(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	WorldChunk * __thiscall World::FindSameCtxChunk(World *this,InstanceContext *ctx){
		LevelHolderRM *this_00;
		LevelHolderSM *this_01;
		byte bVar1;
		bool bVar2;
		WorldChunk *worldChunk;
		worldChunk = this->first;
		while( true ) {
		if (worldChunk == (WorldChunk *)0x0) {
		return (WorldChunk *)0x0;
		}
		this_00 = worldChunk->RM;
		bVar1 = 0;
		if (this_00 != (LevelHolderRM *)0x0) {
		bVar1 = (*((this_00->parent).vtable)->SameChunkData)(&this_00->parent,ctx);
		}
		this_01 = worldChunk->SM;
		if (this_01 != (LevelHolderSM *)0x0) {
		bVar2 = (*((this_01->parent).vtable)->SameChunkData)(&this_01->parent,ctx);
		bVar1 = bVar1 | bVar2;
		}
		if (bVar1 != 0) break;
		worldChunk = worldChunk->next;
		}
		return worldChunk;
		}
		
	*/
	return null;
}

WorldChunk* World::GetChunkByName(TwinString* chunkName) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	WorldChunk * __thiscall World::GetChunkByName(World *this,TwinString *chunkName){
		byte bVar1;
		int iVar2;
		byte *elementChunkName;
		int i;
		bool bVar3;
		TwinString chunkNameLowered;
		WorldChunk *element;
		byte *otherChunkName;
		element = this->first;
		chunkNameLowered.value = (char *)0x0;
		chunkNameLowered.strLength = 0;
		chunkNameLowered.strSize = 0;
		TwinString::Copy(&chunkNameLowered,chunkName->value);
		i = 0;
		if (0 < chunkNameLowered.strLength) {
		do {
		iVar2 = _tolower((int)chunkNameLowered.value[i]);
		chunkNameLowered.value[i] = (byte)iVar2;
		i = i + 1;
		}
		 while (i < chunkNameLowered.strLength);
		}
		do {
		if (element == (WorldChunk *)0x0) {
		TwinString::Dispose(&chunkNameLowered);
		return (WorldChunk *)0x0;
		}
		elementChunkName = (byte *)(element->chunkName).value;
		otherChunkName = (byte *)chunkNameLowered.value;
		if (elementChunkName == (byte *)0x0) {
		if ((byte *)chunkNameLowered.value == (byte *)0x0) {
		LAB_00205573:do {
		bVar1 = *elementChunkName;
		bVar3 = bVar1 < *otherChunkName;
		if (bVar1 != *otherChunkName) {
		LAB_00205597:i = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
		goto LAB_0020559c;
		}
		if (bVar1 == 0) break;
		bVar1 = elementChunkName[1];
		bVar3 = bVar1 < otherChunkName[1];
		if (bVar1 != otherChunkName[1]) goto LAB_00205597;
		elementChunkName = elementChunkName + 2;
		otherChunkName = otherChunkName + 2;
		}
		 while (bVar1 != 0);
		i = 0;
		LAB_0020559c:if (i == 0) {
		TwinString::Dispose(&chunkNameLowered);
		return element;
		}
		}
		}
		else if ((byte *)chunkNameLowered.value != (byte *)0x0) goto LAB_00205573;
		element = element->next;
		}
		 while( true );
		}
		
	*/
	return null;
}

bool World::ProcessAndRead(int flagVal, bool* flagPtr) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall World::ProcessAndRead(World *this,int flagVal,bool *flagPtr){
		LevelHolderRM *this_00;
		LevelHolderSM *this_01;
		bool bVar1;
		bool bVar2;
		uint uVar3;
		int iVar4;
		uint uVar5;
		WorldChunk *worldChunk;
		WorldChunk *worldChunkList;
		uVar3 = this->flags;
		uVar5 = uVar3 >> 0x18 & 0xf;
		if ((uVar5 == 2) || (bVar1 = false, uVar5 == 1)) {
		bVar1 = true;
		}
		while( true ) {
		worldChunkList = this->first;
		this->flags = uVar3 & 0xff000fff;
		if (this->currentChunk != (WorldChunk *)0x0) {
		WorldChunk::FUN_00206af0(this->currentChunk,this->unkField5,0,0);
		}
		while (worldChunk = worldChunkList, worldChunk != (WorldChunk *)0x0) {
		worldChunkList = worldChunk->next;
		bVar2 = WorldChunk::MaybeRead(worldChunk,this->unkField5,flagVal);
		if (bVar2 == false) {
		if ((uVar3 >> 0x18 & 0xf) == 5) {
		if (((worldChunk->prev != (WorldChunk *)0x0) || (worldChunk->next != (WorldChunk *)0x0))|| (this->first == worldChunk)) {
		if (((this->restrict).strLength == 0) ||(iVar4 = TwinString::FindSubstringEndPos(&worldChunk->chunkName,0,(this->restrict).value), iVar4 == 0)) {
		uVar5 = this->flags;
		this->flags = (uVar5 - 1 ^ uVar5) & 0xfff ^ uVar5;
		}
		 Sets next and prev fields WorldChunk::SetHackyShit(worldChunk,&this->first,0x30,0x2c);
		}
		WorldChunk::FUN_00206990(worldChunk);
		this_00 = worldChunk->RM;
		if (this_00 != (LevelHolderRM *)0x0) {
		(*((this_00->parent).vtable)->Dispose)(&this_00->parent,1);
		}
		this_01 = worldChunk->SM;
		if (this_01 != (LevelHolderSM *)0x0) {
		(*((this_01->parent).vtable)->Dispose)(&this_01->parent,1);
		}
		TwinString::Dispose(&worldChunk->chunkName);
		if (worldChunk->field0_0x0 != (WorldChunkSub *)0x0) {
		worldChunk->field0_0x0->worldChunk = (WorldChunk *)0x0;
		}
		VirtualPool::FreeMemory(worldChunk);
		}
		}
		else {
		bVar2 = true;
		if (worldChunk->RM != (LevelHolderRM *)0x0) {
		bVar2 = (worldChunk->RM->parent).someNum == 4;
		}
		if (worldChunk->SM != (LevelHolderSM *)0x0) {
		bVar2 = (bool)(bVar2 & (worldChunk->SM->parent).someNum == 4);
		}
		if (bVar2) {
		uVar5 = this->flags;
		this->flags = ((uVar5 & 0xfffff000) + 0x1000 ^ uVar5) & 0xfff000 ^ uVar5;
		}
		}
		}
		if ((char)flagVal == '\0') {
		bVar2 = GameReaderStorage::FUN_0020e210(true);
		*flagPtr = bVar2;
		}
		else {
		GameReaderStorage::ReadStuff();
		*flagPtr = false;
		}
		uVar3 = this->flags;
		this->unkField5 = this->unkField5 + 1;
		bVar2 = ((uVar3 >> 0xc ^ uVar3) & 0xfff) == 0;
		if (((char)flagVal == '\0') || (!bVar1)) break;
		if (bVar2) {
		return false;
		}
		}
		if (bVar2) {
		return false;
		}
		if (*flagPtr == false) {
		return false;
		}
		return true;
		}
		
	*/
	return false;
}

World::World() {
	World(null, 0);
}

 World::World(SomeState* someState, int param_2) {
	 (this->restrictValue).value = (char*)0x0;
	 (this->restrictValue).strLength = 0;
	 (this->restrictValue).strSize = 0;
	 this->unkField5 = 0;
	 this->first = (WorldChunk*)0x0;
	 this->currentChunk = (WorldChunk*)0x0;
	 this->someState = someState;
	 (this->ctxPtr).refCounter = (InstanceContextRefCounter*)0x0;
	 this->flags = 0;
	 this->flags = this->flags ^ (param_2 << 0x18 ^ this->flags) & 0xf000000U;
}

void World::FreeLevel(int flag, UnkFamily16A* _default) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall World::FreeLevel(World *this,int flag,UnkFamily16A *default){
		int flagVal;
		bool bVar1;
		InstanceContextSmartPtr *smartPtr;
		WorldChunk *worldChunk;
		if ((this->flags & 0x40000000U) == 0) {
		smartPtr = &this->ctxPtr;
		this->flags = this->flags | 0x40000000;
		this->currentChunk = (WorldChunk *)0x0;
		if ((smartPtr->refCounter != (InstanceContextRefCounter *)0x0) &&(smartPtr->refCounter->ctx != (InstanceContext *)0x0)) {
		InstanceContextSmartPtr::Release(&smartPtr->refCounter);
		smartPtr->refCounter = (InstanceContextRefCounter *)0x0;
		}
		flagVal = flag;
		if ((char)flag != '\0') {
		SoundRelatedStuff();
		worldChunk = this->first;
		while (worldChunk != (WorldChunk *)0x0) {
		ProcessAndRead(this,flagVal,(bool *)&flag);
		DoMemoryTasks(false);
		worldChunk = this->first;
		}
		FUN_000f76c0();
		do {
		bVar1 = DoMemoryTasks(false);
		}
		 while (bVar1 != false);
		if (default != (UnkFamily16A *)0x0) {
		UnkFamily16Base::CleanUp(&default->parent);
		}
		this->flags = this->flags & 0xbfffffff;
		}
		}
		return;
		}
		
	*/
	return;
}

void World::FUN_00207280(TwinString* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall World::FUN_00207280(World *this,TwinString *param_1,int param_2){
		TwinString *pTVar1;
		WorldChunk *pWVar2;
		bool bVar3;
		pTVar1 = param_1;
		if ((this->flags & 0x40000000U) == 0) {
		pWVar2 = GetChunkByName(this,param_1);
		if (pWVar2 != (WorldChunk *)0x0) {
		bVar3 = true;
		if (pWVar2->RM != (LevelHolderRM *)0x0) {
		bVar3 = (pWVar2->RM->parent).someNum == 4;
		}
		if (pWVar2->SM != (LevelHolderSM *)0x0) {
		bVar3 = (bool)(bVar3 & (pWVar2->SM->parent).someNum == 4);
		}
		if (bVar3) {
		return;
		}
		}
		AddChunkByName(this,pTVar1,0);
		ProcessAndRead(this,param_2,(bool *)&param_1);
		}
		return;
		}
		
	*/
	return;
}

void World::ChunkTransition(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall World::ChunkTransition(World *this,InstanceContext *ctx){
		InstanceContextSmartPtr *this_00;
		WorldChunk *sameChunk;
		InstanceContext *currentctx;
		InstanceContextRefCounter *pIVar1;
		if ((this->flags & 0x40000000U) == 0) {
		sameChunk = FindSameCtxChunk(this,ctx);
		this_00 = &this->ctxPtr;
		currentctx = (InstanceContext *)this_00->refCounter;
		if (currentctx != (InstanceContext *)0x0) {
		currentctx = *(InstanceContext **)&currentctx->parent;
		}
		if (currentctx != ctx) {
		InstanceContextSmartPtr::Release(&this_00->refCounter);
		if (ctx == (InstanceContext *)0x0) {
		this_00->refCounter = (InstanceContextRefCounter *)0x0;
		}
		else {
		pIVar1 = (InstanceContextRefCounter *)InstanceContextSmartPtr::CreateRef(&ctx->smartPtr,ctx,0);
		this_00->refCounter = pIVar1;
		}
		}
		if (sameChunk != (WorldChunk *)0x0) {
		this->currentChunk = sameChunk;
		}
		}
		return;
		}
		
	*/
	return;
}

bool World::FUN_002040f0(WorldChunk* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall World::FUN_002040f0(World *this,WorldChunk *param_1){
		uint uVar1;
		int iVar2;
		if (((param_1->prev == (WorldChunk *)0x0) && (param_1->next == (WorldChunk *)0x0)) &&(this->first != param_1)) {
		return false;
		}
		if ((this->restrict).strLength != 0) {
		iVar2 = TwinString::FindSubstringEndPos(&param_1->chunkName,0,(this->restrict).value);
		if (iVar2 != 0) goto LAB_00204135;
		}
		uVar1 = this->flags;
		this->flags = (uVar1 - 1 ^ uVar1) & 0xfff ^ uVar1;
		LAB_00204135:WorldChunk::SetHackyShit(param_1,&this->first,0x30,0x2c);
		return true;
		}
		
	*/
	return false;
}

WorldChunk* World::AddChunkByName(TwinString* param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	WorldChunk * __thiscall World::AddChunkByName(World *this,TwinString *param_1,uint param_2){
		WorldChunk *worldChunk;
		uint uVar1;
		worldChunk = GetChunkByName(this,param_1);
		if (worldChunk == (WorldChunk *)0x0) {
		worldChunk = (WorldChunk *)VirtualPool::AllocateMemory(0x34);
		if (worldChunk == (WorldChunk *)0x0) {
		worldChunk = (WorldChunk *)0x0;
		}
		else {
		worldChunk = WorldChunk::Construct(worldChunk,param_1,this,param_2);
		}
		uVar1 = worldChunk->flags ^ (((uint)this->flags >> 0x1c) << 8 ^ worldChunk->flags) & 0x100;
		worldChunk->flags = uVar1;
		worldChunk->flags = (((uint)this->flags >> 0x1d) << 9 ^ uVar1) & 0x200 ^ uVar1;
		AddChunk(this,worldChunk);
		}
		else {
		worldChunk->flags = (param_2 & 0xf) << 4 | worldChunk->flags & 0xffffff00 | param_2 & 0xf;
		}
		if (param_2 == 0) {
		this->currentChunk = worldChunk;
		}
		return worldChunk;
		}
		
	*/
	return null;
}

