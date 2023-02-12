#include "headers/Known/LevelStructure/Readers/Unknown/SectionReaderUnknownP.h"

void SectionReaderUnknownP::Read(uint* param_1, uint* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderUnknownP::Read(SectionReaderUnknownP *this,undefined4 *param_1,undefined4 *param_2){
		int iVar1;
		GameReaderStorage *this_00;
		SectionReaderUnknownF *pSVar2;
		FileResourceDescB *this_01;
		FileResourceDescB *desc;
		undefined4 *puVar3;
		MemoryStream local_14;
		iVar1 = *(int *)(this->field3_0xc + 0x14);
		switch(this->field1_0x4) {
		case (undefined *)0x0:pSVar2 = (SectionReaderUnknownF *)VirtualPool::AllocateMemory(0xc);
		if (pSVar2 == (SectionReaderUnknownF *)0x0) {
		pSVar2 = (SectionReaderUnknownF *)0x0;
		}
		else {
		pSVar2 = SectionReaderUnknownF::Construct(pSVar2,param_1,param_2);
		}
		this_01 = (FileResourceDescB *)VirtualPool::AllocateMemory(0x10);
		if (this_01 == (FileResourceDescB *)0x0) {
		desc = (FileResourceDescB *)0x0;
		}
		else {
		desc = FileResourceDescB::Construct(this_01,&pSVar2->parent,0,0);
		}
		this_00 = GAME_READER_STORAGE[0];
		puVar3 = *(undefined4 **)(iVar1 + 0x1c);
		if (puVar3 != (undefined4 *)0x0) {
		puVar3 = (undefined4 *)*puVar3;
		}
		FUN_0013f550((int)puVar3,pSVar2->field1_0x4);
		GameReaderStorage::AddFileDesc(this_00,&desc->parent,0);
		return;
		case (undefined *)0x4:MemoryStream::Construct(&local_14,param_1,(size_t)param_2,0,0x40);
		puVar3 = *(undefined4 **)(iVar1 + 0x1c);
		if (puVar3 != (undefined4 *)0x0) {
		puVar3 = (undefined4 *)*puVar3;
		}
		puVar3 = FUN_00138150((int)puVar3);
		FUN_00151b30(puVar3,(int *)&local_14);
		MemoryStream::Dispose(&local_14);
		return;
		case (undefined *)0x5:MemoryStream::Construct(&local_14,param_1,(size_t)param_2,0,0x40);
		::Read(*(void **)(iVar1 + 4),&local_14);
		MemoryStream::Dispose(&local_14);
		break;
		case (undefined *)0x6:SectionAbstract::AddToReadQueue((SectionAbstract *)(this->field3_0xc + 0x18),(int)this->field2_0x8);
		return;
		}
		return;
		}
		
	*/
	return;
}

void SectionReaderUnknownP::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownP * __thiscall SectionReaderUnknownP::Dispose(SectionReaderUnknownP *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderUnknownP::Construct(uint param_1, uint param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownP * __thiscall SectionReaderUnknownP::Construct(SectionReaderUnknownP *this,undefined *param_1,undefined *param_2,undefined *param_3){
		this->field1_0x4 = param_1;
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_P;
		this->field2_0x8 = param_2;
		this->field3_0xc = param_3;
		return this;
		}
		
	*/
	return;
}

