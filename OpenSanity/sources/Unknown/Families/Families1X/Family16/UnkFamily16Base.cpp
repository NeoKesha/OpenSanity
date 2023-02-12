#include "headers/Unknown/Families/Families1X/Family16/UnkFamily16Base.h"

#include "headers/Known/Game/GameResources/GameResources.h"
#include "headers/Known/LevelStructure/Sections/RM/NodeSections/RM/SectionRM.h"
#include "headers/Unknown/IndexToIdList.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/Game/Chunks/ChunkData.h"
#include "headers/SortLater/AutoClass16.h"
#include "headers/Global.h"

UnkFamily16Base::UnkFamily16Base()
{
	Global* GLOBAL = Global::Get();
	this->rmSection = null;
	this->indexToIdList = null;
	this->gameResources = null;
	this->field2046_0x814 = null;
	this->unkStruct.InitSubStructArray();
	this->flags = 0;

	GLOBAL->RM = this;
	GLOBAL->UF16SUB = &this->unkStruct;
}

UnkFamily16Base::UnkFamily16Base(GameResources* gameResources, byte isRB, byte isWB)
{
	Global* GLOBAL = Global::Get();
	this->rmSection = (SectionRM*)0x0;
	this->indexToIdList = (IndexToIdList*)0x0;
	this->gameResources = gameResources;
	this->field2046_0x814 = null;
	this->unkStruct.InitSubStructArray();
	this->flags = 0;
	this->flags = ((isWB & 1) << 1 | isRB & 1) << 0x10;

	GLOBAL->RM = this;
	GLOBAL->UF16SUB = &this->unkStruct;
}

UnkFamily16Base::~UnkFamily16Base()
{
	CleanUp();
	if (rmSection != null) {
		delete rmSection;
	}
	delete indexToIdList;
}

AutoClass16* UnkFamily16Base::FindRecord(char* str) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	AutoClass16 * __thiscall UnkFamily16Base::FindRecord(UnkFamily16Base *this,char *str){
		char *strA;
		int diff;
		uint elementCnt;
		AutoClass16 **currentElement;
		bool less;
		uint i;
		char chrA2;
		byte chrA1;
		byte *strB;
		elementCnt = this->flags & 0xffff;
		i = 0;
		if (elementCnt != 0) {
		currentElement = this->recordArray;
		do {
		strA = ((*currentElement)->levelName).value;
		strB = (byte *)str;
		if ((byte *)strA == (byte *)0x0) {
		if (str == (char *)0x0) {
		LAB_001b3000:do {
		chrA1 = *strA;
		less = chrA1 < *strB;
		if (chrA1 != *strB) {
		cmp: less = false result = 0   less = true result = -1 diff = (1 - (uint)less) - (uint)(less != 0);
		goto continue;
		}
		if (chrA1 == 0) break;
		chrA2 = ((byte *)strA)[1];
		less = (byte)chrA2 < strB[1];
		if (chrA2 != strB[1]) goto cmp;
		strA = (char *)((byte *)strA + 2);
		strB = strB + 2;
		}
		 while (chrA2 != '\0');
		diff = 0;
		continue:if (diff == 0) {
		return *currentElement;
		}
		}
		}
		else if (str != (char *)0x0) goto LAB_001b3000;
		i = i + 1;
		currentElement = currentElement + 1;
		}
		 while (i < elementCnt);
		}
		return (AutoClass16 *)0x0;
		}
		
	*/
	return null;
}

void UnkFamily16Base::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily16Base::CleanUp(UnkFamily16Base *this){
		ChunkData *this_00;
		uint pAVar2;
		AutoClass16 **unkArray;
		uint i;
		ChunkDataRefCounter *smartPtr;
		AutoClass16 *unk;
		i = 0;
		if ((this->flags & 0xffffU) != 0) {
		unkArray = this->recordArray;
		do {
		unk = *unkArray;
		if (unk != (AutoClass16 *)0x0) {
		AutoClass16::CleanUp(unk);
		if (unk->field7_0x1c != (UnkFamily15A *)0x0) {
		(*(code *)((unk->field7_0x1c->parent).vtable)->Dispose)(1);
		}
		smartPtr = unk->chunkData;
		if (smartPtr != (ChunkDataRefCounter *)0x0) {
		pAVar2 = smartPtr->refCount;
		pAVar2 = (pAVar2 - 1 ^ pAVar2) & 0xffffff ^ pAVar2;
		smartPtr->refCount = pAVar2;
		if (((pAVar2 & 0xffffff) == 0) && ((pAVar2 & 0x1000000) != 0)) {
		this_00 = smartPtr->chunk;
		if (this_00 != (ChunkData *)0x0) {
		ChunkData::FreeMemory(this_00);
		VirtualPool::FreeMemory(this_00);
		}
		smartPtr->chunk = (ChunkData *)0x0;
		}
		if ((smartPtr->refCount & 0xffffffU) == 0) {
		ChunkDataRefCounter::Release(&unk->chunkData);
		}
		}
		TwinString::Dispose(&unk->levelName);
		VirtualPool::FreeMemory(unk);
		}
		i = i + 1;
		unkArray = unkArray + 1;
		}
		 while (i < (this->flags & 0xffffU));
		*(undefined2 *)&this->flags = 0;
		return;
		}
		*(undefined2 *)&this->flags = 0;
		return;
		}
		
	*/
	return;
}

void UnkFamily16Base::FUN_001b9260(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily16Base::FUN_001b9260(UnkFamily16Base *this,MemoryStream *stream){
		AutoClass16 *iVar1;
		uint i;
		uint cnt;
		TwinString chunkName;
		CleanUp(this);
		(*stream->vtable->ReadUInt)(stream,&cnt);
		i = 0;
		if (cnt != 0) {
		do {
		chunkName.value = (char *)0x0;
		chunkName.strLength = 0;
		chunkName.strSize = 0;
		TwinString::ReadFromFile(&chunkName,stream);
		iVar1 = (AutoClass16 *)(*(code *)this->vtable->AddChunk)(chunkName.value,0);
		(*stream->vtable->ReadByte)(stream,(byte *)&stream);
		if ((char)stream != '\0') {
		(*(code *)((iVar1->field7_0x1c->parent).vtable)->Read)(stream);
		}
		TwinString::Dispose(&chunkName);
		i = i + 1;
		}
		 while (i < cnt);
		}
		return;
		}
		
	*/
	return;
}

AutoClass16* UnkFamily16Base::AddNewRecord(char* name, ChunkData* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	AutoClass16 * __thiscall UnkFamily16Base::AddNewRecord(UnkFamily16Base *this,char *name,ChunkData *param_2){
		AutoClass16 *pAVar1;
		pAVar1 = FindRecord(this,name);
		if (pAVar1 == (AutoClass16 *)0x0) {
		pAVar1 = (AutoClass16 *)VirtualPool::AllocateMemory(0x38);
		if (pAVar1 == (AutoClass16 *)0x0) {
		pAVar1 = (AutoClass16 *)0x0;
		}
		else {
		pAVar1 = AutoClass16::Construct(pAVar1,name,*(short *)&this->flags,param_2,this,(UnkFamily15A *)0x0);
		}
		this->recordArray[this->flags & 0xffff] = pAVar1;
		*(short *)&this->flags = *(short *)&this->flags + 1;
		return pAVar1;
		}
		ChunkDataRefCounter::Unpack(&pAVar1->chunkData,param_2);
		return pAVar1;
		}
		
	*/
	return null;
}

bool UnkFamily16Base::CleanUpElement() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool UnkFamily16Base::CleanUpElement(AutoClass16 *this){
		AutoClass16::CleanUp(this);
		return true;
		}
		
	*/
	return false;
}

