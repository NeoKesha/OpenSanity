#include "headers/Known/GameData/Instance/Instance.h"

#include "headers/Known/Game/Chunks/ChunkMeta.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
#include "headers/Unknown/ParameterTable.h"
void Instance::FUN_00065d80(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void Instance::FUN_00065d80(Instance *this,InstanceContext *ctx){
		ushort uVar1;
		InstanceNodeInstance *nodeQ;
		InstanceNodeOGI *nodeN;
		undefined4 uVar2;
		nodeQ = (InstanceNodeInstance *)InstanceDataList::GetNode(&ctx->nodes,Instance);
		nodeN = (InstanceNodeOGI *)InstanceDataList::GetNode(&ctx->nodes,OGI);
		uVar2 = ParameterTable::GetInt(this->parameters,1);
		if ((char)uVar2 == '\0') {
		if (nodeQ != (InstanceNodeInstance *)0x0) {
		(nodeQ->body).parent.field2_0x6 = 0;
		}
		if (nodeN != (InstanceNodeOGI *)0x0) {
		(nodeN->parent).field3_0xa = 0;
		}
		}
		else if ((char)uVar2 == -1) {
		if (nodeQ != (InstanceNodeInstance *)0x0) {
		(nodeQ->body).parent.field2_0x6 = 0xffff;
		}
		if (nodeN != (InstanceNodeOGI *)0x0) {
		(nodeN->parent).field3_0xa = 0xffff;
		return;
		}
		}
		else {
		if (nodeQ != (InstanceNodeInstance *)0x0) {
		uVar1 = (ushort)uVar2 & 0xff;
		(nodeQ->body).parent.field2_0x6 = uVar1 * uVar1;
		}
		if (nodeN != (InstanceNodeOGI *)0x0) {
		uVar1 = (ushort)uVar2 & 0xff;
		(nodeN->parent).field3_0xa = uVar1 * uVar1;
		return;
		}
		}
		return;
		}
		
	*/
	return;
}

void Instance::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Instance * __fastcall Instance::Construct(Instance *this){
		UNV018 *pUVar1;
		(this->instances).cnt = 0;
		(this->instances).allocation = 10;
		(this->instances).related = 10;
		pUVar1 = (UNV018 *)VirtualPool::AllocateMemory(0x14);
		(this->instances).list = pUVar1;
		(this->positions).cnt = 0;
		(this->positions).allocation = 10;
		(this->positions).related = 10;
		pUVar1 = (UNV018 *)VirtualPool::AllocateMemory(0x14);
		(this->positions).list = pUVar1;
		(this->paths).cnt = 0;
		(this->paths).allocation = 10;
		(this->paths).related = 10;
		pUVar1 = (UNV018 *)VirtualPool::AllocateMemory(0x14);
		(this->paths).list = pUVar1;
		this->parameters = (ParameterTable *)0x0;
		this->objectId = -1;
		this->refListIndex = -1;
		this->onSpawnScriptId = -1;
		this->parametersInited = '\0';
		return this;
		}
		
	*/
	return;
}

void Instance::FUN_001aa8e0(ChunkMeta* chunkMeta, InstanceContext* ctx, char param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Instance::FUN_001aa8e0(Instance *this,ChunkMeta *chunkMeta,InstanceContext *ctx,char param_3){
		void *this_00;
		InstanceNodeInstance *pIVar1;
		uint uVar1;
		ushort *puVar2;
		int *piVar3;
		if ((this->positions).cnt != 0) {
		pIVar1 = (InstanceNodeInstance *)InstanceDataList::GetNode(&ctx->nodes,Instance);
		this_00 = (void *)pIVar1[1].body.field41_0x3c.vec2.y;
		uVar1 = 0;
		while ((-1 < (int)uVar1 && (uVar1 < (uint)(this->positions).cnt))) {
		puVar2 = (ushort *)(*(code *)PTR_Get_003949d4)();
		if (param_3 == '\0') {
		if (*(int **)&chunkMeta->field_0x2c == (int *)0x0) {
		FUN_001881d0(this_00,0);
		uVar1 = uVar1 + 1;
		}
		else {
		FUN_001881d0(this_00,*(undefined4 *)(**(int **)&chunkMeta->field_0x2c + (uint)*puVar2 * 4));
		uVar1 = uVar1 + 1;
		}
		}
		else {
		piVar3 = FUN_001b2ed0((int)chunkMeta,(uint)*puVar2);
		FUN_001881d0(this_00,piVar3);
		uVar1 = uVar1 + 1;
		}
		}
		}
		return;
		}
		
	*/
	return;
}

void Instance::FUN_001aa9a0(ChunkMeta* chunkMeta, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Instance::FUN_001aa9a0(Instance *this,ChunkMeta *chunkMeta,InstanceContext *ctx){
		float this_00;
		InstanceNodeInstance *pIVar1;
		uint uVar1;
		ushort *puVar2;
		if ((this->paths).cnt != 0) {
		pIVar1 = (InstanceNodeInstance *)InstanceDataList::GetNode(&ctx->nodes,Instance);
		this_00 = pIVar1[1].body.field41_0x3c.vec2.y;
		uVar1 = 0;
		while ((-1 < (int)uVar1 && (uVar1 < (uint)(this->paths).cnt))) {
		puVar2 = (ushort *)(*(code *)PTR_Get_003949d4)();
		if (*(int **)&chunkMeta->field_0x34 == (int *)0x0) {
		FUN_001881b0((int)this_00,0);
		uVar1 = uVar1 + 1;
		}
		else {
		FUN_001881b0((int)this_00,*(undefined4 *)(**(int **)&chunkMeta->field_0x34 + (uint)*puVar2 * 4));
		uVar1 = uVar1 + 1;
		}
		}
		}
		return;
		}
		
	*/
	return;
}

void Instance::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Instance::Read(Instance *this,MemoryStream *stream){
		ParameterTable *pPVar1;
		(*stream->vtable->Read)(stream,(int *)this,0x10,1);
		MemoryStream::ReadInt2(stream,&this->rotation);
		MemoryStream::ReadInt2(stream,&(this->rotation).y);
		MemoryStream::ReadInt2(stream,&(this->rotation).z);
		InstanceIdList::Read(&this->instances,stream);
		InstanceIdList::Read(&this->positions,stream);
		InstanceIdList::Read(&this->paths,stream);
		(*stream->vtable->ReadShort2)(stream,&this->objectId);
		(*stream->vtable->ReadShort2)(stream,&this->refListIndex);
		(*stream->vtable->ReadShort2)(stream,&this->onSpawnScriptId);
		if ((this->parametersInited != '\0') && (this->parameters != (ParameterTable *)0x0)) {
		(*(code *)*this->parameters->vtable)(1);
		}
		pPVar1 = (ParameterTable *)VirtualPool::AllocateMemory(0x24);
		if (pPVar1 != (ParameterTable *)0x0) {
		pPVar1 = ParameterTable::Construct(pPVar1,stream);
		this->parameters = pPVar1;
		this->parametersInited = '\x01';
		return;
		}
		this->parameters = (ParameterTable *)0x0;
		this->parametersInited = '\x01';
		return;
		}
		
	*/
	return;
}

void Instance::Construct_5(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Instance * __thiscall Instance::Construct(Instance *this,MemoryStream *stream){
		UNV018 *psVar1;
		UNV018 *pUVar1;
		(this->instances).cnt = 0;
		(this->instances).allocation = 10;
		(this->instances).related = 10;
		psVar1 = (UNV018 *)VirtualPool::AllocateMemory(0x14);
		(this->instances).list = psVar1;
		(this->positions).cnt = 0;
		(this->positions).allocation = 10;
		(this->positions).related = 10;
		pUVar1 = (UNV018 *)VirtualPool::AllocateMemory(0x14);
		(this->positions).list = pUVar1;
		(this->paths).cnt = 0;
		(this->paths).allocation = 10;
		(this->paths).related = 10;
		pUVar1 = (UNV018 *)VirtualPool::AllocateMemory(0x14);
		(this->paths).list = pUVar1;
		this->parameters = (ParameterTable *)0x0;
		this->objectId = -1;
		this->refListIndex = -1;
		this->onSpawnScriptId = -1;
		this->parametersInited = '\0';
		Read(this,stream);
		return this;
		}
		
	*/
	return;
}

void Instance::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Instance::Write(Instance *this,MemoryStream *stream){
		ParameterTable *pPVar1;
		(*stream->vtable->Write)(stream,(byte *)this,0x10);
		MemoryStream::WriteInt(stream,&this->rotation);
		MemoryStream::WriteInt(stream,&(this->rotation).y);
		MemoryStream::WriteInt(stream,&(this->rotation).z);
		InstanceIdList::Write(&this->instances,stream);
		InstanceIdList::Write(&this->positions,stream);
		InstanceIdList::Write(&this->paths,stream);
		(*stream->vtable->WriteShort2)(stream,this->objectId);
		(*stream->vtable->WriteShort2)(stream,this->refListIndex);
		(*stream->vtable->WriteShort2)(stream,this->onSpawnScriptId);
		pPVar1 = this->parameters;
		(*stream->vtable->WriteInt3)(stream,pPVar1->instancePropsHeader);
		(*stream->vtable->WriteInt3)(stream,pPVar1->unkInt);
		CollectionFractions::Write(&pPVar1->fractions,stream);
		CollectionFloats::Write(&pPVar1->floats,stream);
		CollectionInts::Write(&pPVar1->ints,stream);
		return;
		}
		
	*/
	return;
}

