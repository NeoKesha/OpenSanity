#include "headers/SortLater/CollisionData.h"

void CollisionData::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	CollisionData * __fastcall CollisionData::Construct(CollisionData *this){
		this->triggersIndex = -1;
		this->groupsIndex = -1;
		this->polysIndex = -1;
		this->vertexesIndex = -1;
		this->field_0x24 = 0;
		this->buffer = (undefined **)0xbb9;
		this->triggerCnt = 0;
		this->groupCnt = 0;
		this->polysCnt = 0;
		this->vertexCnt = 0;
		return this;
		}
		
	*/
	return;
}

void CollisionData::ReadCollisionData(int sectionOffset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CollisionData::ReadCollisionData(CollisionData *this,int sectionOffset){
		CollisionData *pCVar1;
		GameReaderStorage *this_00;
		SectionReaderCollisionData *collisionDataReader;
		FileResourceDescG *fileResourceDesc;
		this_00 = GAME_READER_STORAGE[0];
		collisionDataReader = (SectionReaderCollisionData *)VirtualPool::AllocateMemory(0x10);
		if (collisionDataReader == (SectionReaderCollisionData *)0x0) {
		collisionDataReader = (SectionReaderCollisionData *)0x0;
		}
		else {
		 Just collision data pointer pCVar1 = (CollisionData *)this->buffer;
		(collisionDataReader->parent).vtable =(SectionReaderAbstract_VTable *)&SectionReader_VT_CollisionData;
		collisionDataReader->unkField = 0;
		collisionDataReader->sectionOffset = sectionOffset;
		collisionDataReader->data = pCVar1;
		}
		fileResourceDesc = (FileResourceDescG *)VirtualPool::AllocateMemory(0x30);
		if (fileResourceDesc != (FileResourceDescG *)0x0) {
		fileResourceDesc =FileResourceDescG::Construct(fileResourceDesc,&collisionDataReader->parent,8,sectionOffset,0x14);
		GameReaderStorage::AddFileDesc(this_00,&fileResourceDesc->parent,0);
		return;
		}
		GameReaderStorage::AddFileDesc(this_00,(FileResourceDescAbstract *)0x0,0);
		return;
		}
		
	*/
	return;
}

