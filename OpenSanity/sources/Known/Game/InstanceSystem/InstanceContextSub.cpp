#include "headers/Known/Game/InstanceSystem/InstanceContextSub.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
#include "headers/Known/Game/Chunks/ChunkData.h"
uint InstanceContextSub::FUN_000f7300() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __fastcall InstanceContextSub::FUN_000f7300(InstanceContextSub *this){
		ChunkList *chunkList;
		ChunkData *chunkData;
		uint uVar1;
		uint uVar2;
		AutoClass52 *other;
		uint i;
		TwinString *chunkName;
		AutoClass52 *local_4;
		uVar2 = 0;
		i = 0;
		if (this->cnt != 0) {
		other = this->field2_0x10;
		local_4 = other;
		do {
		chunkName = &other->chunkName;
		chunkList = ChunkList::GetInstance();
		chunkData = ChunkList::GetDataByName(chunkList,chunkName);
		if (((chunkData != (ChunkData *)0x0) &&(uVar1 = chunkData->sceneryFlags >> 0x12 & 0xf, uVar1 != 2)) && (uVar1 != 3)) {
		if (uVar2 < i) {
		AutoClass52::Copy(local_4,other);
		}
		uVar2 = uVar2 + 1;
		local_4 = local_4 + 1;
		}
		i = i + 1;
		other = other + 1;
		}
		 while (i < this->cnt);
		}
		this->cnt = uVar2;
		return uVar2;
		}
		
	*/
	return 0;
}

void InstanceContextSub::Construct(InstanceContext* ctx, ChunkData* chunkData) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceContextSub * __thiscall InstanceContextSub::Construct(InstanceContextSub *this,InstanceContext *ctx,ChunkData *chunkData){
		uint uVar1;
		AutoClass52 *element;
		int i;
		this->cnt = 0;
		(this->chunkName).value = (char *)0x0;
		(this->chunkName).strLength = 0;
		(this->chunkName).strSize = 0;
		TwinString::Copy(&this->chunkName,(chunkData->chunkName2).value);
		element = (AutoClass52 *)&this->field2_0x10[0].chunkName.strSize;
		i = 8;
		do {
		element[-1].chunkName.strLength = 0;
		element[-1].chunkName.strSize = 0;
		(element->vec1).x = 0.0;
		element[-1].chunkName.value = (char *)0x0;
		element = element + 1;
		i = i + -1;
		}
		 while (i != 0);
		uVar1 = this->cnt;
		this->cnt = uVar1 + 1;
		AutoClass52::FUN_000f6b70(this->field2_0x10 + uVar1,ctx,chunkData,0);
		return this;
		}
		
	*/
	return;
}

bool InstanceContextSub::FUN_000f8c80(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceContextSub::FUN_000f8c80(InstanceContextSub *this,InstanceContext *ctx){
		ChunkData *this_00;
		uint uVar1;
		int iVar2;
		InstanceNodeInstance *node;
		uVar1 = FUN_000f7300(this);
		if (uVar1 == 0) {
		return true;
		}
		this_00 = (ctx->parent).chunkData;
		if (this_00 != (ChunkData *)0x0) {
		iVar2 = FUN_000f7380(this,(int)this_00);
		if (iVar2 == 0) {
		return true;
		}
		}
		node = (InstanceNodeInstance *)(ctx->nodes).array[1];
		AutoClass52::Copy(&(node->body).field41_0x3c,this->field2_0x10);
		InstanceNodeInstance::Dispose(node);
		if (this_00 == (ChunkData *)0x0) {
		(*((ctx->parent).vtable)->Method2)(ctx);
		FUN_000f7670(1,(int)ctx);
		return false;
		}
		FUN_0013bb40(this_00,'\0',1,ctx);
		TwinString::Copy(&this->chunkName,(node->body).field41_0x3c.chunkName.value);
		return false;
		}
		
	*/
	return false;
}

