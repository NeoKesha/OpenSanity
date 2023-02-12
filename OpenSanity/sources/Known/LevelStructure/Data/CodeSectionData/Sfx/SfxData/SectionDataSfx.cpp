#include "headers/Known/LevelStructure/Data/CodeSectionData/Sfx/SfxData/SectionDataSfx.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/GameData/Sfx/Sfx.h"
MemoryStream* SectionDataSfx::InitMemoryStreamBuffer() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	MemoryStream * __fastcall SectionDataSfx::InitMemoryStreamBuffer(SectionDataSfx *this){
		PhysicalPool *pool;
		void *buffer;
		MemoryStream *streamMemPtr;
		MemoryStream *stream;
		SectionDataSfx **bufferOut;
		bool bVar1;
		bool bVar2;
		uint *length_00;
		SectionDataSfx *local_4;
		uint length;
		local_4 = this;
		pool = PhysicalPool::GetPool();
		PhysicalPool::UnkMethod2(pool);
		bVar2 = false;
		bVar1 = true;
		bufferOut = &local_4;
		length = 0x380000;
		pool = PhysicalPool::GetPool();
		PhysicalPool::CreateBuffer(pool,(int *)bufferOut,length,bVar1,bVar2);
		length_00 = &this->field2_0x1c;
		*length_00 = (uint)pool->alignedStart;
		pool = PhysicalPool::GetPool();
		buffer = PhysicalPool::Allocate(pool,length_00);
		streamMemPtr = (MemoryStream *)VirtualPool::AllocateMemory(0x14);
		if (streamMemPtr != (MemoryStream *)0x0) {
		stream = MemoryStream::Construct(streamMemPtr,buffer,0x380000,0,1);
		this->waveData = stream;
		return stream;
		}
		this->waveData = (MemoryStream *)0x0;
		return (MemoryStream *)0x0;
		}
		
	*/
	return null;
}

void SectionDataSfx::WriteToStream(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataSfx::WriteToStream(SectionDataSfx *this,MemoryStream *stream){
		size_t amount;
		amount = (*this->waveData->vtable->GetPosition)(this->waveData);
		(*stream->vtable->Write)(stream,this->waveData->startPtr,amount);
		return;
		}
		
	*/
	return;
}

SectionDataSfx::SectionDataSfx() : SectionDataSfxBase() {
	short* memptr;
	this->field2_0x1c = -1;
	this->waveData = (MemoryStream*)0x0;
}

SectionDataSfx::SectionDataSfx(uint elementCount) : SectionDataSfxBase(elementCount, 1){
	short* memptr;
	this->field2_0x1c = -1;
	this->waveData = (MemoryStream*)0x0;
}

SectionDataSfx::~SectionDataSfx() {
	CleanUp();
}

void SectionDataSfx::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataSfx::CleanUp(SectionDataSfx *this){
		MemoryStream *this_00;
		PhysicalPool *physicalPool;
		void *ptr;
		this_00 = this->waveData;
		(this->parent).parent.vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_Sfx;
		if (this_00 != (MemoryStream *)0x0) {
		(*this_00->vtable->Dispose)(this_00,1);
		ptr = &this->field2_0x1c;
		this->waveData = (MemoryStream *)0x0;
		physicalPool = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(physicalPool,ptr);
		physicalPool = PhysicalPool::GetPool();
		PhysicalPool::UnkMethod2(physicalPool);
		}
		(this->parent).parent.vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_Sfx_Base;
		::SectionDataSfxBase::CleanUp(&this->parent);
		VirtualPool::FreeMemory((this->parent).elements);
		VirtualPool::FreeMemory((this->parent).indexes);
		return;
		}
		
	*/
	return;
}

void SectionDataSfx::FUN_001b2210(uint cnt, uint param_2, int param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unable to use type for symbol unkClassPtr void __thiscall SectionDataSfx::FUN_001b2210(SectionDataSfx *this,uint cnt,uint param_2,int param_3){
		Sfx *this_00;
		uint uVar1;
		FileResourceDescE *memptr;
		uint j;
		uint i;
		GameReaderStorage *unkClassPtr;
		Sfx *value;
		unkClassPtr = GAME_READER_STORAGE[0];
		if (((this->parent).flags & 0x4000) == 0) {
		i = 0;
		if (cnt != 0) {
		do {
		value = (this->parent).elements[(ushort)(this->parent).indexes[i]];
		if ((value != (Sfx *)0x0) && (j = value->dataSize, j != 0)) {
		uVar1 = value->streamPosition;
		memptr = (FileResourceDescE *)VirtualPool::AllocateMemory(0x28);
		if (memptr == (FileResourceDescE *)0x0) {
		memptr = (FileResourceDescE *)0x0;
		}
		else {
		memptr = FileResourceDescE::Construct(memptr,value,uVar1 + param_3,j);
		}
		GameReaderStorage::AddFileDesc(unkClassPtr,&memptr->parent,0);
		}
		i = i + 1;
		}
		 while (i < cnt);
		}
		}
		else {
		if ((DAT_004964c8 != '\0') && (this->waveData == (MemoryStream *)0x0)) {
		InitMemoryStreamBuffer(this);
		}
		j = 0;
		if (cnt != 0) {
		do {
		this_00 = (this->parent).elements[(ushort)(this->parent).indexes[j]];
		if (this_00 != (Sfx *)0x0) {
		Sfx::InitData(this_00,this->waveData);
		}
		j = j + 1;
		}
		 while (j < cnt);
		return;
		}
		}
		return;
		}
		
	*/
	return;
}

void SectionDataSfx::FUN_001b22f0(uint unused, void* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataSfx::FUN_001b22f0(SectionDataSfx *this,uint unused,void *other){
		MemoryStream *this_00;
		size_t sVar1;
		this_00 = this->waveData;
		if ((this_00 != (MemoryStream *)0x0) && (other != (void *)0x0)) {
		sVar1 = (*this_00->vtable->GetPosition)(this_00);
		 WARNING: Load size is inaccurate (**(code **)(*other + 0xc))(this->waveData->startPtr,sVar1);
		}
		return;
		}
		
	*/
	return;
}

void SectionDataSfx::DisposeStream() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataSfx::DisposeStream(SectionDataSfx *this){
		PhysicalPool *pPVar1;
		void *ptr;
		MemoryStream *stream;
		stream = this->waveData;
		if (stream != (MemoryStream *)0x0) {
		(*stream->vtable->Dispose)(stream,1);
		ptr = &this->field2_0x1c;
		this->waveData = (MemoryStream *)0x0;
		pPVar1 = PhysicalPool::GetPool();
		PhysicalPool::FreeBufferByIndex(pPVar1,ptr);
		pPVar1 = PhysicalPool::GetPool();
		PhysicalPool::UnkMethod2(pPVar1);
		}
		::SectionDataSfxBase::CleanUp(&this->parent);
		return;
		}
		
	*/
	return;
}

void SectionDataSfx::Add(int param_1, uint index, Sfx* element, uint* ptr) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionDataSfx::Add(SectionDataSfx *this,int param_1,uint index,Sfx *element,undefined4 *ptr){
		ushort actualIndex;
		(this->parent).elements[index & 0x7fff] = element;
		actualIndex = (ushort)index & 0x7fff;
		(this->parent).indexes[param_1] = actualIndex;
		if (ptr != (undefined4 *)0x0) {
		*(ushort *)((int)ptr + *ptr * 2 + 4) = actualIndex;
		*ptr = *ptr + 1;
		}
		return;
		}
		
	*/
	return;
}

