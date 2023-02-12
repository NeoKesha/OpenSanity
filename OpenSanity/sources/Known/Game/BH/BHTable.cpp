#include "headers/Known/Game/BH/BHTable.h"

#include "headers/Known/Game/BH/BHRecord.h"
#include "headers/Unknown/GameReaderStorage.h"
void BHTable::Init(char* packageName, bool read, GameReaderStorage* readerStorage) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall BHTable::Init(BHTable *this,char *packageName,bool read,GameReaderStorage *readerStorage){
		SectionReaderBH *reader;
		FileResourceDescG *descG;
		FileResourceDescF *memptr;
		FileResourceDescF *descF;
		uint slotIndex1;
		int slotIndex2;
		TwinString dataName;
		TwinString headerName;
		TwinString tmpString;
		TwinString::Set(&headerName,packageName);
		TwinString::Set(&dataName,packageName);
		TwinString::Append(&headerName,".BH");
		TwinString::Append(&dataName,".BD");
		reader = (SectionReaderBH *)VirtualPool::AllocateMemory(0x14);
		if (reader == (SectionReaderBH *)0x0) {
		reader = (SectionReaderBH *)0x0;
		}
		else {
		TwinString::Set(&tmpString,packageName);
		(reader->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_BH;
		reader->bhTable = this;
		(reader->packageName).value = (char *)0x0;
		(reader->packageName).strLength = 0;
		(reader->packageName).strSize = 0;
		TwinString::Copy(&reader->packageName,tmpString.value);
		TwinString::Dispose(&tmpString);
		}
		descG = (FileResourceDescG *)VirtualPool::AllocateMemory(0x30);
		if ((descG != (FileResourceDescG *)0x0) &&(descG = FileResourceDescG::Construct(descG,headerName.value,&reader->parent,5),descG != (FileResourceDescG *)0x0)) {
		if ((*(byte *)&readerStorage->index & 8) == 0) {
		slotIndex1 = readerStorage->bufferIndex + readerStorage->bufferSpaceUsed;
		if ((uint)readerStorage->bufferSpaceTotal <= slotIndex1) {
		slotIndex1 = slotIndex1 - readerStorage->bufferSpaceTotal;
		}
		readerStorage->readerBuffer[slotIndex1] = &descG->parent;
		readerStorage->bufferSpaceUsed = readerStorage->bufferSpaceUsed + 1;
		}
		else {
		readerStorage->readerStorage[(ushort)readerStorage->storageSpaceUsed] = &descG->parent;
		readerStorage->storageSpaceUsed = readerStorage->storageSpaceUsed + 1;
		}
		}
		memptr = (FileResourceDescF *)VirtualPool::AllocateMemory(0x18);
		if ((memptr != (FileResourceDescF *)0x0) &&(descF = FileResourceDescF::Construct(memptr,&dataName,0,false,true),descF != (FileResourceDescF *)0x0)) {
		if ((*(byte *)&readerStorage->index & 8) == 0) {
		slotIndex2 = readerStorage->bufferIndex + readerStorage->bufferSpaceUsed;
		if ((uint)readerStorage->bufferSpaceTotal <= (uint)slotIndex2) {
		slotIndex2 = slotIndex2 - readerStorage->bufferSpaceTotal;
		}
		readerStorage->readerBuffer[slotIndex2] = &descF->parent;
		readerStorage->bufferSpaceUsed = readerStorage->bufferSpaceUsed + 1;
		}
		else {
		readerStorage->readerStorage[(ushort)readerStorage->storageSpaceUsed] = &descF->parent;
		readerStorage->storageSpaceUsed = readerStorage->storageSpaceUsed + 1;
		}
		}
		if (read != false) {
		GameReaderStorage::ReadStuff();
		}
		TwinString::Dispose(&dataName);
		TwinString::Dispose(&headerName);
		return;
		}
		
	*/
	return;
}

bool BHTable::AddFile(BHRecord* record, char* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall BHTable::AddFile(BHTable *this,BHRecord *record,char *param_2){
		TwinString *this_00;
		uint *puVar1;
		undefined4 uVar2;
		uint uVar3;
		BHRecord *startPtr;
		uint capacity;
		char *pcVar4;
		TwinString fname;
		BHRecord *rec;
		if (this->cnt == 0) {
		this->cnt = 1;
		if (this->collection == (BHRecord *)0x0) {
		capacity = (uint)(ushort)this->step;
		this->field2_0x6 = this->step;
		puVar1 = (uint *)VirtualPool::AllocateMemory(capacity * 0x14 + 4);
		if (puVar1 == (uint *)0x0) {
		startPtr = (BHRecord *)0x0;
		}
		else {
		startPtr = (BHRecord *)(puVar1 + 1);
		*puVar1 = capacity;
		ForEach(startPtr,0x14,capacity,BHRecord::Fill);
		}
		this->collection = startPtr;
		}
		fname.value = (char *)0x0;
		fname.strLength = 0;
		fname.strSize = 0;
		TwinString::Copy(&fname,param_2);
		rec = this->collection;
		rec->offset = record->offset;
		rec->length = record->length;
		TwinString::Copy(&rec->fname,fname.value);
		TwinString::Dispose(&fname);
		TwinString::Dispose((TwinString *)&param_2);
		return false;
		}
		capacity = FUN_00211df0(this,(byte **)&param_2);
		this_00 = &this->collection[capacity].fname;
		uVar2 = TwinString::FUN_00135e40(this_00,param_2);
		if ((char)uVar2 == '\0') {
		fname.value = (char *)0x0;
		fname.strLength = 0;
		fname.strSize = 0;
		TwinString::Copy(&fname,param_2);
		rec = this->collection + capacity;
		rec->offset = record->offset;
		rec->length = record->length;
		TwinString::Copy(&rec->fname,fname.value);
		TwinString::Dispose(&fname);
		TwinString::Dispose((TwinString *)&param_2);
		return true;
		}
		uVar3 = FUN_00157f50((byte **)this_00,(byte **)&param_2);
		if ((char)uVar3 == '\0') {
		capacity = capacity + 1;
		}
		pcVar4 = (char *)0x0;
		TwinString::Copy((TwinString *)&stack0xffffffd4,param_2);
		FUN_00211ed0(this,capacity,&record->offset,pcVar4);
		TwinString::Dispose((TwinString *)&param_2);
		return false;
		}
		
	*/
	return false;
}

