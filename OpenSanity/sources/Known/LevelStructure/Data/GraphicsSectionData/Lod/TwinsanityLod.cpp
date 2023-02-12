#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Lod/TwinsanityLod.h"

#include "headers/Known/Graphics/Assets/TwinsanityRigidModel.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void TwinsanityLod::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Could not reconcile some variable overlaps void __thiscall TwinsanityLod::Read(TwinsanityLod *this,MemoryStream *stream){
		uint *val;
		uint uVar1;
		TwinsanityRigidModel **arr1;
		TwinsanityRigidModel *model;
		uint *puVar2;
		int i;
		int cnt1;
		uint id;
		uint uStack4;
		MemoryStream *_stream;
		_stream = stream;
		(*stream->vtable->ReadUInt)(stream,(uint *)&stream);
		if (stream == (MemoryStream *)0x1001) {
		(*_stream->vtable->ReadInt2)(_stream,&cnt1);
		*(byte *)&this->cnt = (byte)cnt1;
		arr1 = (TwinsanityRigidModel **)VirtualPool::AllocateMemory((uint)(byte)cnt1 << 2);
		this->rigidModelArray = arr1;
		puVar2 = &this->field4_0x10;
		(*_stream->vtable->ReadUInt)(_stream,puVar2);
		val = &this->field5_0x14;
		(*_stream->vtable->ReadUInt)(_stream,val);
		uVar1 = *val;
		*puVar2 = *puVar2 * *puVar2;
		if (uVar1 != 0xffffffff) {
		*val = uVar1 * uVar1;
		}
		puVar2 = this->field6_0x18;
		i = 3;
		do {
		(*_stream->vtable->ReadUInt)(_stream,puVar2);
		*puVar2 = *puVar2 * *puVar2;
		puVar2 = puVar2 + 1;
		i = i + -1;
		}
		 while (i != 0);
		(*_stream->vtable->ReadUInt)(_stream,&uStack4);
		i = 0;
		if (*(char *)&this->cnt != '\0') {
		do {
		(*_stream->vtable->ReadUInt)(_stream,&id);
		model = (TwinsanityRigidModel *)(*(ENV_CLASS_178_SECTION_RMODELS2.parent)->Create)(&ENV_CLASS_178_SECTION_RMODELS2.parent,(undefined *)&id,0);
		this->rigidModelArray[i] = model;
		i = i + 1;
		}
		 while (i < (int)(uint)*(byte *)&this->cnt);
		return;
		}
		}
		else if (stream == (MemoryStream *)0x1002) {
		puVar2 = &this->cnt;
		(*_stream->vtable->ReadByte3)(_stream,(byte *)puVar2);
		arr1 = (TwinsanityRigidModel **)VirtualPool::AllocateMemory((uint)*(byte *)puVar2 << 2);
		this->rigidModelArray = arr1;
		(*_stream->vtable->ReadUInt)(_stream,&this->field4_0x10);
		(*_stream->vtable->ReadUInt)(_stream,&this->field5_0x14);
		(*_stream->vtable->Read)(_stream,(int *)this->field6_0x18,0xc,1);
		i = 0;
		if (*(char *)puVar2 != '\0') {
		do {
		(*_stream->vtable->ReadUInt)(_stream,&id);
		model = (TwinsanityRigidModel *)(*(ENV_CLASS_178_SECTION_RMODELS2.parent)->Create)(&ENV_CLASS_178_SECTION_RMODELS2.parent,(undefined *)&id,0);
		this->rigidModelArray[i] = model;
		i = i + 1;
		}
		 while (i < (int)(uint)*(byte *)puVar2);
		}
		}
		return;
		}
		
	*/
	return;
}

void TwinsanityLod::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall TwinsanityLod::Dispose(TwinsanityLod *this){
		TwinsanityRigidModel *this_00;
		int iVar1;
		if (*(char *)&this->cnt != '\0') {
		iVar1 = 0;
		do {
		this_00 = this->rigidModelArray[iVar1];
		if (this_00->id == 0xffffffff) {
		TwinsanityRigidModel2::Dispose((TwinsanityRigidModel2 *)this_00);
		VirtualPool::FreeMemory(this_00);
		}
		else {
		(*(ENV_CLASS_178_SECTION_RMODELS2.parent)->Method4)(&ENV_CLASS_178_SECTION_RMODELS2.parent,(undefined *)this_00);
		}
		iVar1 = iVar1 + 1;
		}
		 while (iVar1 < (int)(uint)*(byte *)&this->cnt);
		}
		VirtualPool::FreeMemory(this->rigidModelArray);
		return;
		}
		
	*/
	return;
}

