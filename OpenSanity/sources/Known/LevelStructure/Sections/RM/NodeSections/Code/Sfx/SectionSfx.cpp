#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Code/Sfx/SectionSfx.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/LevelStructure/Data/CodeSectionData/Sfx/SfxData/SectionDataSfx.h"
#include "headers/Known/LevelStructure/Readers/Known/SectionReaderSfx.h"
SectionReaderSfx* SectionSfx::GetReader(uint param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderSfx * __thiscall SectionSfx::GetReader(SectionSfx *this,undefined *param_1,int param_2){
		SectionDataSfx *pSVar1;
		uint uVar2;
		Sfx *pSVar3;
		int *piVar4;
		SectionReaderSfx *pSVar5;
		pSVar1 = this->sfxData;
		if (pSVar1 == (SectionDataSfx *)0x0) {
		return (SectionReaderSfx *)pSVar1;
		}
		uVar2 = *(uint *)(param_2 + 8);
		if (((short)uVar2 == -1) ||(pSVar3 = (pSVar1->parent).elements[uVar2 & 0x7fff], pSVar3 == (Sfx *)0x0)) {
		pSVar5 = (SectionReaderSfx *)VirtualPool::AllocateMemory(0x14);
		if (pSVar5 != (SectionReaderSfx *)0x0) {
		piVar4 = this->ptr;
		pSVar1 = this->sfxData;
		pSVar5->cnt = uVar2;
		pSVar5->sounds = pSVar1;
		(pSVar5->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Sfx;
		pSVar5->field2_0x8 = param_1;
		pSVar5->ptr = piVar4;
		return pSVar5;
		}
		}
		else if ((pSVar3->flags & 0x20000) == 0) {
		pSVar3->flags = pSVar3->flags | 0x20000;
		}
		return (SectionReaderSfx *)0x0;
		}
		
	*/
	return null;
}

void SectionSfx::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionSfx * __thiscall SectionSfx::Dispose(SectionSfx *this,byte param_1){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

int SectionSfx::GetElementCount(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionSfx::GetElementCount(SectionSfx *this,int param_1){
		int iVar1;
		if (this->sfxData == (SectionDataSfx *)0x0) {
		return 0;
		}
		iVar1 = thunk_FUN_000c48c0((int)this->sfxData);
		return iVar1;
		}
		
	*/
	return 0;
}

byte SectionSfx::ReturnNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte SectionSfx::ReturnNum(void){
		return 1;
		}
		
	*/
	return 0;
}

bool SectionSfx::IsOne(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool SectionSfx::IsOne(int param_1){
		return param_1 == 1;
		}
		
	*/
	return false;
}

void SectionSfx::Stub1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionSfx::Stub1(SectionSfx *this){
		if (this->sfxData != (SectionDataSfx *)0x0) {
		 WARNING: Could not recover jumptable at 0x000c372b. Too many branches  WARNING: Treating indirect jump as call (*((this->sfxData->parent).parent.vtable)->Stub1)();
		return;
		}
		return;
		}
		
	*/
	return;
}

void SectionSfx::DisposeResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionSfx::DisposeResources(SectionSfx *this){
		 WARNING: Could not recover jumptable at 0x000c37a5. Too many branches  WARNING: Treating indirect jump as call (*((this->sfxData->parent).parent.vtable)->CleanUp)();
		return;
		}
		
	*/
	return;
}

void SectionSfx::UnkMethod3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionSfx::UnkMethod3(SectionSfx *this){
		if (this->sfxData != (SectionDataSfx *)0x0) {
		 WARNING: Could not recover jumptable at 0x000c374b. Too many branches  WARNING: Treating indirect jump as call (*((this->sfxData->parent).parent.vtable)->Stub2)();
		return;
		}
		return;
		}
		
	*/
	return;
}

bool SectionSfx::UnkMethod4(MemoryStream* stream, uint* indexOut1, uint* indexOut2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionSfx::UnkMethod4(SectionSfx *this,MemoryStream *stream,uint *indexOut1,uint *indexOut2){
		uint uVar1;
		Sfx *this_00;
		uint uVar2;
		if (this->sfxData != (SectionDataSfx *)0x0) {
		uVar1 = (this->sfxData->parent).flags;
		uVar2 = *indexOut1;
		while (uVar2 < (uVar1 & 0x3fff)) {
		if ((*(ushort *)indexOut1 != 0xffff) &&(this_00 = (this->sfxData->parent).elements[*(ushort *)indexOut1 & 0x7fff],this_00 != (Sfx *)0x0)) {
		Sfx::Write(this_00,stream);
		*indexOut2 = this_00->index;
		*indexOut1 = *indexOut1 + 1;
		return true;
		}
		uVar2 = *indexOut1 + 1;
		*indexOut1 = uVar2;
		}
		}
		return false;
		}
		
	*/
	return false;
}

void SectionSfx::Stub2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionSfx::Stub2(SectionSfx *this){
		if (this->sfxData != (SectionDataSfx *)0x0) {
		 WARNING: Could not recover jumptable at 0x000c376b. Too many branches  WARNING: Treating indirect jump as call (*((this->sfxData->parent).parent.vtable)->Stub3)();
		return;
		}
		return;
		}
		
	*/
	return;
}

void SectionSfx::Stub3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionSfx::Stub3(SectionSfx *this){
		if (this->sfxData != (SectionDataSfx *)0x0) {
		 WARNING: Could not recover jumptable at 0x000c378b. Too many branches  WARNING: Treating indirect jump as call (*((this->sfxData->parent).parent.vtable)->Stub4)();
		return;
		}
		return;
		}
		
	*/
	return;
}

void SectionSfx::Construct(uint data, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionSfx::Construct(SectionSfx *this,SectionDataSfx *data,int *param_2){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Sfx;
		this->sfxData = data;
		this->ptr = param_2;
		return;
		}
		
	*/
	return;
}

