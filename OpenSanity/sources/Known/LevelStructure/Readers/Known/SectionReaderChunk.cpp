#include "headers/Known/LevelStructure/Readers/Known/SectionReaderChunk.h"

#include "headers/Known/Game/Chunks/ChunkDataRefCounter.h"
#include "headers/Known/Game/Chunks/ChunkData.h"
void SectionReaderChunk::Construct(uint param_1, ChunkData* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderChunk * __thiscall SectionReaderChunk::Construct(SectionReaderChunk *this,uint param_1,ChunkData *param_2){
		ChunkDataRefCounter *pCVar1;
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Chunk;
		if (param_2 == (ChunkData *)0x0) {
		this->chunkDataRef = (ChunkDataRefCounter *)0x0;
		this->someID = param_1;
		return this;
		}
		pCVar1 = ChunkData::CreateRefCounter(param_2,param_2,0);
		this->chunkDataRef = pCVar1;
		this->someID = param_1;
		return this;
		}
		
	*/
	return;
}

void SectionReaderChunk::Read(ChunkData* buffer, size_t size, size_t offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __thiscall SectionReaderChunk::Read(SectionReaderChunk *this,ChunkData *buffer,size_t size,size_t offset){
		int *piVar1;
		ChunkData *pCVar2;
		if ((this->chunkDataRef != (ChunkDataRefCounter *)0x0) &&(this->chunkDataRef->chunk != (ChunkData *)0x0)) {
		switch(this->someID) {
		case 0:if (this->chunkDataRef == (ChunkDataRefCounter *)0x0) {
		_DAT_00000124 = _DAT_00000124 + 1;
		return;
		}
		piVar1 = &this->chunkDataRef->chunk->field16_0x124;
		*piVar1 = *piVar1 + 1;
		return;
		case 1:if (this->chunkDataRef == (ChunkDataRefCounter *)0x0) {
		_DAT_00000124 = _DAT_00000124 + -1;
		return;
		}
		piVar1 = &this->chunkDataRef->chunk->field16_0x124;
		*piVar1 = *piVar1 + -1;
		return;
		case 3:if (this->chunkDataRef == (ChunkDataRefCounter *)0x0) {
		ChunkData::DisposeCollision((ChunkData *)0x0);
		return;
		}
		ChunkData::DisposeCollision(this->chunkDataRef->chunk);
		return;
		case 4:if (this->chunkDataRef == (ChunkDataRefCounter *)0x0) {
		ChunkData::DisposeLight((ChunkData *)0x0);
		return;
		}
		ChunkData::DisposeLight(this->chunkDataRef->chunk);
		return;
		case 5:if (this->chunkDataRef == (ChunkDataRefCounter *)0x0) {
		FUN_001382d0((ChunkData *)0x0);
		return;
		}
		FUN_001382d0(this->chunkDataRef->chunk);
		return;
		case 6:if (this->chunkDataRef == (ChunkDataRefCounter *)0x0) {
		FUN_00138300((ChunkData *)0x0);
		return;
		}
		FUN_00138300(this->chunkDataRef->chunk);
		return;
		case 8:pCVar2 = (ChunkData *)this->chunkDataRef;
		if (pCVar2 != (ChunkData *)0x0) {
		pCVar2 = (ChunkData *)pCVar2->chunkRef;
		}
		if (*(int **)(&pCVar2->chunkName2 + 1) != (int *)0x0) {
		(**(code **)(**(int **)(&pCVar2->chunkName2 + 1) + 4))(1,0);
		return;
		}
		break;
		case 9:if (this->chunkDataRef == (ChunkDataRefCounter *)0x0) {
		pCVar2 = (ChunkData *)0x0;
		}
		else {
		pCVar2 = this->chunkDataRef->chunk;
		}
		if ((int *)pCVar2->sceneryRoot != (int *)0x0) {
		 WARNING: Load size is inaccurate (**(code **)(*pCVar2->sceneryRoot + 4))(1,1);
		pCVar2->sceneryRoot = (void *)0x0;
		return;
		}
		break;
		case 10:if (this->chunkDataRef == (ChunkDataRefCounter *)0x0) {
		FUN_001380d0((ChunkData *)0x0);
		return;
		}
		FUN_001380d0(this->chunkDataRef->chunk);
		}
		}
		return;
		}
		
	*/
	return;
}

void SectionReaderChunk::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderChunk * __thiscall SectionReaderChunk::Dispose(SectionReaderChunk *this,byte param_1){
		FUN_00143950(&this->chunkDataRef);
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

