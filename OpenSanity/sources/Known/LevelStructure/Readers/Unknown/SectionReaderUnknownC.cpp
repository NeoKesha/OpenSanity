#include "headers/Known/LevelStructure/Readers/Unknown/SectionReaderUnknownC.h"

void SectionReaderUnknownC::Construct(uint param_1, int param_2, char* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownC * __thiscall SectionReaderUnknownC::Construct(SectionReaderUnknownC *this,undefined *param_1,int param_2,char *param_3){
		this->field1_0x4 = param_1;
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_C;
		this->field2_0x8 = *(int *)(param_2 + 4);
		this->field3_0xc = *(int *)(param_2 + 8);
		this->field4_0x10 = 0;
		TwinString::Set(&this->str,param_3);
		return this;
		}
		
	*/
	return;
}

void SectionReaderUnknownC::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall SectionReaderUnknownC::Dispose(SectionReaderUnknownC *this,byte param_1){
		TwinString::Dispose(&this->str);
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void SectionReaderUnknownC::Read(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderUnknownC::Read(SectionReaderUnknownC *this,int *param_1){
		undefined *puVar1;
		GameReaderStorage *pGVar2;
		SectionReaderAbstract *reader;
		FileResourceDescG *pFVar3;
		SectionReaderUnknownB *puVar4;
		FileResourceDescB *pFVar4;
		uint uVar5;
		int *piVar6;
		int iVar7;
		int unaff_retaddr;
		uint uStack24;
		GameReaderStorage *pGStack20;
		GameReaderStorage *local_10;
		int iStack12;
		int iStack8;
		pGVar2 = GAME_READER_STORAGE[0];
		local_10 = GAME_READER_STORAGE[0];
		if (param_1 == (int *)0x0) {
		iVar7 = this->field4_0x10;
		}
		else {
		iVar7 = *param_1 + this->field4_0x10;
		}
		(**(code **)(*(int *)this->field1_0x4 + 0x18))(this->field2_0x8);
		uStack24 = 0;
		if (this->field2_0x8 != 0) {
		piVar6 = param_1 + 2;
		do {
		iStack8 = *piVar6;
		iVar7 = piVar6[-1];
		pGVar2 = (GameReaderStorage *)(piVar6[-2] + this->field4_0x10);
		local_10 = pGVar2;
		iStack12 = iVar7;
		reader = (SectionReaderAbstract *)(**(code **)(*(int *)this->field1_0x4 + 0x10))(unaff_retaddr,&local_10,&stack0xffffffe4);
		if (reader != (SectionReaderAbstract *)0x0) {
		if ((this->str).strLength == 0) {
		pFVar3 = (FileResourceDescG *)VirtualPool::AllocateMemory(0x30);
		if (pFVar3 != (FileResourceDescG *)0x0) {
		pFVar3 = FileResourceDescG::Construct(pFVar3,reader,8,(int)pGVar2,iVar7);
		LAB_0020eae7:if (pFVar3 != (FileResourceDescG *)0x0) {
		if ((*(byte *)&pGStack20->index & 8) == 0) {
		uVar5 = pGStack20->bufferIndex + pGStack20->bufferSpaceUsed;
		if ((uint)pGStack20->bufferSpaceTotal <= uVar5) {
		uVar5 = uVar5 - pGStack20->bufferSpaceTotal;
		}
		pGStack20->readerBuffer[uVar5] = &pFVar3->parent;
		pGStack20->bufferSpaceUsed = pGStack20->bufferSpaceUsed + 1;
		}
		else {
		pGStack20->readerStorage[(ushort)pGStack20->storageSpaceUsed] = &pFVar3->parent;
		pGStack20->storageSpaceUsed = pGStack20->storageSpaceUsed + 1;
		}
		}
		}
		}
		else {
		pFVar3 = (FileResourceDescG *)VirtualPool::AllocateMemory(0x30);
		if (pFVar3 != (FileResourceDescG *)0x0) {
		pFVar3 = FileResourceDescG::Construct(pFVar3,(this->str).value,reader,8,pGVar2,iVar7);
		goto LAB_0020eae7;
		}
		}
		unaff_retaddr = unaff_retaddr + 1;
		}
		iVar7 = (int)&pGVar2->index + iStack12;
		uStack24 = uStack24 + 1;
		piVar6 = piVar6 + 3;
		pGVar2 = pGStack20;
		}
		 while (uStack24 < (uint)this->field2_0x8);
		}
		puVar4 = (SectionReaderUnknownB *)VirtualPool::AllocateMemory(0x14);
		if (puVar4 == (SectionReaderUnknownB *)0x0) {
		puVar4 = (SectionReaderUnknownB *)0x0;
		}
		else {
		puVar1 = this->field1_0x4;
		puVar4->field2_0x8 = this->field2_0x8;
		puVar4->field1_0x4 = puVar1;
		(puVar4->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_B;
		puVar4->field3_0xc = unaff_retaddr;
		puVar4->field4_0x10 = iVar7;
		}
		pFVar4 = (FileResourceDescB *)VirtualPool::AllocateMemory(0x10);
		if ((pFVar4 != (FileResourceDescB *)0x0) &&(pFVar4 = FileResourceDescB::Construct(pFVar4,&puVar4->parent,0,0),pFVar4 != (FileResourceDescB *)0x0)) {
		if ((*(byte *)&pGVar2->index & 8) != 0) {
		pGVar2->readerStorage[(ushort)pGVar2->storageSpaceUsed] = &pFVar4->parent;
		pGVar2->storageSpaceUsed = pGVar2->storageSpaceUsed + 1;
		return;
		}
		uVar5 = pGVar2->bufferIndex + pGVar2->bufferSpaceUsed;
		if ((uint)pGVar2->bufferSpaceTotal <= uVar5) {
		uVar5 = uVar5 - pGVar2->bufferSpaceTotal;
		}
		pGVar2->readerBuffer[uVar5] = &pFVar4->parent;
		pGVar2->bufferSpaceUsed = pGVar2->bufferSpaceUsed + 1;
		}
		return;
		}
		
	*/
	return;
}

void SectionReaderUnknownC::Construct_3(uint param_1, int param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderUnknownC::Construct(SectionReaderUnknownC *this,undefined *param_1,int param_2,int param_3){
		this->field1_0x4 = param_1;
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_C;
		this->field2_0x8 = *(int *)(param_2 + 4);
		this->field3_0xc = *(int *)(param_2 + 8);
		this->field4_0x10 = param_3;
		(this->str).value = (char *)0x0;
		(this->str).strLength = 0;
		(this->str).strSize = 0;
		return;
		}
		
	*/
	return;
}

