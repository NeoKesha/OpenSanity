#include "headers/Known/LevelStructure/Sections/RM/SectionAbstract/SectionAbstract.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void SectionAbstract::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __cdecl SectionAbstract::Write(SectionAbstract *this,MemoryStream *stream){
		byte bVar1;
		char cVar2;
		undefined3 extraout_var;
		uint elements;
		size_t amount;
		size_t amount_00;
		int unaff_EBX;
		uint i;
		uint unaff_retaddr;
		uint uStack32;
		int position1;
		size_t position;
		size_t sStack20;
		size_t sStack16;
		int iStack12 [3];
		position = (*stream->vtable->GetPosition)(stream);
		bVar1 = (*this->vtable->GetNum)();
		elements = (*this->vtable->GetElementCount)(this);
		position1 = 0;
		iStack12[0] = -1;
		iStack12[1] = -1;
		iStack12[2] = -1;
		(*stream->vtable->WriteInt3)(stream,CONCAT31(extraout_var,bVar1) + 0x10000);
		(*stream->vtable->WriteInt3)(stream,elements);
		sStack20 = (*stream->vtable->GetPosition)(stream);
		(*stream->vtable->WriteInt3)(stream,0);
		(*stream->vtable->GetPosition)(stream);
		for (i = elements;
		 i != 0;
		 i = i - 1) {
		(*stream->vtable->Write)(stream,(byte *)iStack12,0xc);
		}
		amount = (*stream->vtable->GetPosition)(stream);
		sStack16 = amount;
		(*this->vtable->field9_0x24)(elements);
		cVar2 = (*this->vtable->Write)(this,stream,&uStack32,(int *)&stack0xffffffdc);
		i = elements;
		while (cVar2 != '\0') {
		amount_00 = (*stream->vtable->GetPosition)(stream);
		sStack16 = amount - position1;
		iStack12[0] = amount_00 - amount;
		iStack12[1] = unaff_EBX;
		(*stream->vtable->SeekFromStart)(stream,elements);
		(*stream->vtable->Write)(stream,(byte *)&sStack16,0xc);
		(*stream->vtable->SeekFromStart)(stream,amount_00);
		elements = elements + 0xc;
		cVar2 = (*this->vtable->Write)(this,stream,&uStack32,(int *)&stack0xffffffdc);
		amount = amount_00;
		i = unaff_retaddr;
		}
		(*stream->vtable->SeekFromStart)(stream,position);
		(*stream->vtable->WriteInt3)(stream,amount - sStack20);
		(*stream->vtable->SeekFromStart)(stream,amount);
		(*this->vtable->field10_0x28)(i,stream);
		return;
		}
		
	*/
	return;
}

void SectionAbstract::Write_1(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionAbstract::Write(SectionAbstract *this,MemoryStream *stream){
		Write(this,stream);
		return;
		}
		
	*/
	return;
}

void SectionAbstract::Unroll() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionAbstract::Unroll(SectionAbstract *this){
		this->vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionAbstract::Unroll_3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionAbstract::Unroll(SectionAbstract *this){
		this->vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionAbstract::Unroll_4() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionAbstract::Unroll(SectionAbstract *this){
		this->vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionAbstract::Unroll_5() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionAbstract::Unroll(SectionAbstract *this){
		this->vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionAbstract::Unroll_6() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionAbstract::Unroll(SectionAbstract *this){
		this->vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionAbstract::Unroll_7() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionAbstract::Unroll(SectionAbstract *this){
		this->vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionAbstract::Unroll_8() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionAbstract::Unroll(SectionAbstract *this){
		this->vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionAbstract::Unroll_9() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionAbstract::Unroll(SectionAbstract *this){
		this->vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionAbstract::Unroll_10() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionAbstract::Unroll(SectionAbstract *this){
		this->vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionAbstract::Unroll_11() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionAbstract::Unroll(SectionAbstract *this){
		this->vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionAbstract::Unroll_12() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionAbstract::Unroll(SectionAbstract *this){
		this->vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionAbstract::Unroll_13() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionAbstract::Unroll(SectionAbstract *this){
		this->vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionAbstract::Unroll_14() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionAbstract::Unroll(SectionAbstract *this){
		this->vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionAbstract::Unroll_15() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionAbstract::Unroll(SectionAbstract *this){
		this->vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionAbstract::Unroll_16() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionAbstract::Unroll(SectionAbstract *this){
		this->vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionAbstract::Unroll_17() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionAbstract::Unroll(SectionAbstract *this){
		this->vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionAbstract::Unroll_18() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionAbstract::Unroll(SectionAbstract *this){
		this->vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionAbstract::AddToReader(char* levelName, bool flag) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionAbstract::AddToReader(SectionAbstract *this,char *levelName,bool flag){
		SectionReaderSM *reader;
		FileResourceDescG *fileDesc;
		FileResourceDescA *this_00;
		FileResourceDescAbstract *pFVar1;
		uint i;
		GameReaderStorage *readerStorage;
		readerStorage = GAME_READER_STORAGE[0];
		reader = (SectionReaderSM *)VirtualPool::AllocateMemory(0x10);
		if (reader == (SectionReaderSM *)0x0) {
		reader = (SectionReaderSM *)0x0;
		}
		else {
		reader->section = this;
		(reader->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_SM;
		reader->size = 0;
		reader->flag = flag;
		}
		fileDesc = (FileResourceDescG *)VirtualPool::AllocateMemory(0x30);
		if (fileDesc != (FileResourceDescG *)0x0) {
		fileDesc = FileResourceDescG::Construct(fileDesc,levelName,reader,(uint)(flag != false) * 2 + 0x28,0,0xc);
		if (fileDesc != (FileResourceDescG *)0x0) {
		if ((*(byte *)&readerStorage->index & 8) == 0) {
		i = readerStorage->bufferIndex + readerStorage->bufferSpaceUsed;
		if ((uint)readerStorage->bufferSpaceTotal <= i) {
		i = i - readerStorage->bufferSpaceTotal;
		}
		readerStorage->readerBuffer[i] = &fileDesc->parent;
		readerStorage->bufferSpaceUsed = readerStorage->bufferSpaceUsed + 1;
		}
		else {
		readerStorage->readerStorage[(ushort)readerStorage->storageSpaceUsed] = &fileDesc->parent;
		readerStorage->storageSpaceUsed = readerStorage->storageSpaceUsed + 1;
		}
		}
		}
		if (flag == false) {
		this_00 = (FileResourceDescA *)VirtualPool::AllocateMemory(8);
		if (this_00 != (FileResourceDescA *)0x0) {
		pFVar1 = (FileResourceDescAbstract *)FileResourceDescA::Construct(this_00,0);
		if (pFVar1 != (FileResourceDescAbstract *)0x0) {
		if ((*(byte *)&readerStorage->index & 8) != 0) {
		readerStorage->readerStorage[(ushort)readerStorage->storageSpaceUsed] = pFVar1;
		readerStorage->storageSpaceUsed = readerStorage->storageSpaceUsed + 1;
		return;
		}
		i = readerStorage->bufferIndex + readerStorage->bufferSpaceUsed;
		if ((uint)readerStorage->bufferSpaceTotal <= i) {
		i = i - readerStorage->bufferSpaceTotal;
		}
		readerStorage->readerBuffer[i] = pFVar1;
		readerStorage->bufferSpaceUsed = readerStorage->bufferSpaceUsed + 1;
		}
		}
		}
		return;
		}
		
	*/
	return;
}

void SectionAbstract::AddToReadQueue(int size) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionAbstract::AddToReadQueue(SectionAbstract *this,int size){
		GameReaderStorage *pGVar1;
		SectionReaderSM *reader;
		FileResourceDescG *pFVar2;
		uint uVar3;
		pGVar1 = GAME_READER_STORAGE[0];
		reader = (SectionReaderSM *)VirtualPool::AllocateMemory(0x10);
		if (reader == (SectionReaderSM *)0x0) {
		reader = (SectionReaderSM *)0x0;
		}
		else {
		reader->section = this;
		(reader->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_SM;
		reader->size = size;
		reader->flag = false;
		}
		pFVar2 = (FileResourceDescG *)VirtualPool::AllocateMemory(0x30);
		if (pFVar2 != (FileResourceDescG *)0x0) {
		pFVar2 = FileResourceDescG::Construct(pFVar2,&reader->parent,8,size,0xc);
		if (pFVar2 != (FileResourceDescG *)0x0) {
		if ((*(byte *)&pGVar1->index & 8) != 0) {
		pGVar1->readerStorage[(ushort)pGVar1->storageSpaceUsed] = &pFVar2->parent;
		pGVar1->storageSpaceUsed = pGVar1->storageSpaceUsed + 1;
		return;
		}
		uVar3 = pGVar1->bufferIndex + pGVar1->bufferSpaceUsed;
		if ((uint)pGVar1->bufferSpaceTotal <= uVar3) {
		uVar3 = uVar3 - pGVar1->bufferSpaceTotal;
		}
		pGVar1->readerBuffer[uVar3] = &pFVar2->parent;
		pGVar1->bufferSpaceUsed = pGVar1->bufferSpaceUsed + 1;
		}
		}
		return;
		}
		
	*/
	return;
}

