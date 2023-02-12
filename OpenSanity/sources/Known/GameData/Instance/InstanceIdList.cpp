#include "headers/Known/GameData/Instance/InstanceIdList.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Unknown/NonVirtualClasses/UNV018.h"
InstanceIdList* InstanceIdList::Copy(InstanceIdList* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceIdList * __thiscall InstanceIdList::Copy(InstanceIdList *this,InstanceIdList *param_1){
		UNV018 *pUVar1;
		uint uVar2;
		this->cnt = param_1->cnt;
		this->allocation = param_1->allocation;
		this->related = param_1->related;
		VirtualPool::FreeMemory(this->list);
		pUVar1 = (UNV018 *)VirtualPool::AllocateMemory(this->allocation << 1);
		this->list = pUVar1;
		uVar2 = 0;
		if (this->cnt != 0) {
		do {
		*(undefined2 *)(&this->list->field_0x0 + uVar2 * 2) =*(undefined2 *)(&param_1->list->field_0x0 + uVar2 * 2);
		uVar2 = uVar2 + 1;
		}
		 while (uVar2 < (uint)this->cnt);
		}
		return this;
		}
		
	*/
	return null;
}

void InstanceIdList::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceIdList::Read(InstanceIdList *this,MemoryStream *stream){
		int *val;
		UNV018 *list;
		uint i;
		VirtualPool::FreeMemory(this->list);
		val = &this->cnt;
		(*stream->vtable->ReadUInt)(stream,(uint *)val);
		(*stream->vtable->ReadUInt)(stream,(uint *)&this->allocation);
		(*stream->vtable->ReadUInt)(stream,(uint *)&this->related);
		if (*val == 0) {
		list = (UNV018 *)0x0;
		}
		else {
		list = (UNV018 *)VirtualPool::AllocateMemory(this->allocation << 1);
		}
		this->list = list;
		i = 0;
		if (*val != 0) {
		do {
		(*stream->vtable->ReadShort2)(stream,(short *)(&this->list->field_0x0 + i * 2));
		i = i + 1;
		}
		 while (i < (uint)*val);
		}
		return;
		}
		
	*/
	return;
}

void InstanceIdList::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceIdList::Write(InstanceIdList *this,MemoryStream *stream){
		uint i;
		(*stream->vtable->WriteInt3)(stream,this->cnt);
		(*stream->vtable->WriteInt3)(stream,this->allocation);
		(*stream->vtable->WriteInt3)(stream,this->related);
		i = 0;
		if (this->cnt != 0) {
		do {
		(*stream->vtable->WriteShort2)(stream,*(short *)(&this->list->field_0x0 + i * 2));
		i = i + 1;
		}
		 while (i < (uint)this->cnt);
		}
		return;
		}
		
	*/
	return;
}

