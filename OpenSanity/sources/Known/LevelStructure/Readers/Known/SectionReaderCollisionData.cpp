#include "headers/Known/LevelStructure/Readers/Known/SectionReaderCollisionData.h"

#include "headers/SortLater/CollisionData.h"
void SectionReaderCollisionData::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderCollisionData * __thiscall SectionReaderCollisionData::Dispose(SectionReaderCollisionData *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderCollisionData::Read(CollisionData* buffer, size_t size, size_t offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderCollisionData::Read(SectionReaderCollisionData *this,CollisionData *buffer,size_t size,size_t offset){
		byte bVar1;
		int iVar2;
		CollisionData *pCVar3;
		GameReaderStorage *this_00;
		FileResourceDescG *pFVar4;
		int iVar5;
		int iVar6;
		this_00 = GAME_READER_STORAGE[0];
		iVar6 = this->sectionOffset;
		bVar1 = this->unkField;
		pCVar3 = this->data;
		pCVar3->buffer = buffer->buffer;
		pCVar3->triggerCnt = buffer->triggerCnt;
		pCVar3->groupCnt = buffer->groupCnt;
		pCVar3->polysCnt = buffer->polysCnt;
		pCVar3->vertexCnt = buffer->vertexCnt;
		iVar6 = iVar6 + 0x14;
		iVar5 = pCVar3->triggerCnt * 0x20;
		pFVar4 = (FileResourceDescG *)VirtualPool::AllocateMemory(0x30);
		if (pFVar4 == (FileResourceDescG *)0x0) {
		pFVar4 = (FileResourceDescG *)0x0;
		}
		else {
		pFVar4 = FileResourceDescG::Construct(pFVar4,&pCVar3->triggersIndex,1,iVar6,iVar5);
		}
		GameReaderStorage::AddFileDesc(this_00,&pFVar4->parent,0);
		iVar6 = iVar6 + iVar5;
		iVar5 = pCVar3->groupCnt * 8;
		pFVar4 = (FileResourceDescG *)VirtualPool::AllocateMemory(0x30);
		if (pFVar4 == (FileResourceDescG *)0x0) {
		pFVar4 = (FileResourceDescG *)0x0;
		}
		else {
		pFVar4 = FileResourceDescG::Construct(pFVar4,&pCVar3->groupsIndex,1,iVar6,iVar5);
		}
		GameReaderStorage::AddFileDesc(this_00,&pFVar4->parent,0);
		iVar6 = iVar6 + iVar5;
		iVar5 = pCVar3->polysCnt * 8;
		pFVar4 = (FileResourceDescG *)VirtualPool::AllocateMemory(0x30);
		if (pFVar4 == (FileResourceDescG *)0x0) {
		pFVar4 = (FileResourceDescG *)0x0;
		}
		else {
		pFVar4 = FileResourceDescG::Construct(pFVar4,&pCVar3->polysIndex,1,iVar6,iVar5);
		}
		GameReaderStorage::AddFileDesc(this_00,&pFVar4->parent,0);
		iVar2 = pCVar3->vertexCnt;
		pFVar4 = (FileResourceDescG *)VirtualPool::AllocateMemory(0x30);
		if (pFVar4 == (FileResourceDescG *)0x0) {
		pFVar4 = (FileResourceDescG *)0x0;
		}
		else {
		pFVar4 = FileResourceDescG::Construct(pFVar4,&pCVar3->vertexesIndex,(uint)(bVar1 != 0) * 4 + 1,iVar6 + iVar5,iVar2 << 4);
		}
		GameReaderStorage::AddFileDesc(this_00,&pFVar4->parent,0);
		pCVar3->field_0x24 = 1;
		return;
		}
		
	*/
	return;
}

void SectionReaderCollisionData::Construct(byte param_1, uint param_2, uint data) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderCollisionData::Construct(SectionReaderCollisionData *this,byte param_1,int param_2,CollisionData *data){
		this->unkField = param_1;
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_CollisionData;
		this->sectionOffset = param_2;
		this->data = data;
		return;
		}
		
	*/
	return;
}

