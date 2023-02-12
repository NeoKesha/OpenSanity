#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Code/OGI/SectionOGI.h"

#include "headers/Known/LevelStructure/Data/CodeSectionData/OGI/SectionDataOGIBase.h"
#include "headers/Known/LevelStructure/Readers/Known/SectionReaderOGI.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
SectionReaderOGI* SectionOGI::GetReader(uint param_2, int param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderOGI * __thiscall SectionOGI::GetReader(int this,undefined *param_2,int param_3){
		uint uVar1;
		uint *puVar2;
		SectionOGI *pSVar3;
		undefined *puVar4;
		SectionReaderOGI *pSVar5;
		pSVar5 = *(SectionReaderOGI **)(this + 4);
		if (pSVar5 == (SectionReaderOGI *)0x0) {
		return pSVar5;
		}
		uVar1 = *(uint *)(param_3 + 8);
		if (((short)uVar1 == -1) ||(puVar2 = *(uint **)(pSVar5->field2_0x8 + (uVar1 & 0x7fff) * 4), puVar2 == (uint *)0x0)) {
		pSVar5 = (SectionReaderOGI *)VirtualPool::AllocateMemory(0x14);
		if (pSVar5 != (SectionReaderOGI *)0x0) {
		pSVar3 = *(SectionOGI **)(this + 8);
		puVar4 = *(undefined **)(this + 4);
		pSVar5->cnt = uVar1;
		pSVar5->field3_0xc = puVar4;
		(pSVar5->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_OGI;
		pSVar5->field2_0x8 = param_2;
		pSVar5->data = pSVar3;
		return pSVar5;
		}
		}
		else if ((*puVar2 & 0x20000) == 0) {
		*puVar2 = *puVar2 | 0x20000;
		}
		return (SectionReaderOGI *)0x0;
		}
		
	*/
	return null;
}

byte SectionOGI::ReturnNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte SectionOGI::ReturnNum(void){
		return 1;
		}
		
	*/
	return 0;
}

bool SectionOGI::IsOne(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool SectionOGI::IsOne(int param_1){
		return param_1 == 1;
		}
		
	*/
	return false;
}

void SectionOGI::Stub1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionOGI::Stub1(SectionOGI *this){
		if (this->collection != (SectionDataOGIBase *)0x0) {
		 WARNING: Could not recover jumptable at 0x001b9e0b. Too many branches  WARNING: Treating indirect jump as call (*((this->collection->parent).vtable)->Stub1)();
		return;
		}
		return;
		}
		
	*/
	return;
}

void SectionOGI::UnkMethod3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionOGI::UnkMethod3(SectionOGI *this){
		if (this->collection != (SectionDataOGIBase *)0x0) {
		 WARNING: Could not recover jumptable at 0x001b9e2b. Too many branches  WARNING: Treating indirect jump as call (*((this->collection->parent).vtable)->Stub2)();
		return;
		}
		return;
		}
		
	*/
	return;
}

void SectionOGI::Stub2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionOGI::Stub2(SectionOGI *this){
		if (this->collection != (SectionDataOGIBase *)0x0) {
		 WARNING: Could not recover jumptable at 0x001b9e4b. Too many branches  WARNING: Treating indirect jump as call (*((this->collection->parent).vtable)->Stub3)();
		return;
		}
		return;
		}
		
	*/
	return;
}

void SectionOGI::Stub3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionOGI::Stub3(SectionOGI *this){
		if (this->collection != (SectionDataOGIBase *)0x0) {
		 WARNING: Could not recover jumptable at 0x001b9e6b. Too many branches  WARNING: Treating indirect jump as call (*((this->collection->parent).vtable)->Stub4)();
		return;
		}
		return;
		}
		
	*/
	return;
}

void SectionOGI::DisposeResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionOGI::DisposeResources(SectionOGI *this){
		 WARNING: Could not recover jumptable at 0x001b9e85. Too many branches  WARNING: Treating indirect jump as call (*((this->collection->parent).vtable)->CleanUp)();
		return;
		}
		
	*/
	return;
}

void SectionOGI::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionOGI * __thiscall SectionOGI::Dispose(SectionOGI *this,byte param_1){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

int SectionOGI::GetElementCount(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionOGI::GetElementCount(SectionOGI *this,int param_1){
		SectionDataOGIBase *pSVar1;
		int iVar2;
		OGI **ppOVar3;
		uint uVar4;
		pSVar1 = this->collection;
		if (pSVar1 == (SectionDataOGIBase *)0x0) {
		return 0;
		}
		iVar2 = 0;
		uVar4 = pSVar1->flags & 0x3fff;
		if (uVar4 != 0) {
		ppOVar3 = pSVar1->elements;
		do {
		if (*ppOVar3 != (OGI *)0x0) {
		iVar2 = iVar2 + 1;
		}
		ppOVar3 = ppOVar3 + 1;
		uVar4 = uVar4 - 1;
		}
		 while (uVar4 != 0);
		}
		return iVar2;
		}
		
	*/
	return 0;
}

bool SectionOGI::Write(MemoryStream* stream, uint* indexOut1, uint* indexOut2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionOGI::Write(SectionOGI *this,MemoryStream *stream,uint *indexOut1,uint *indexOut2){
		uint uVar1;
		OGI *this_00;
		uint uVar2;
		if (this->collection != (SectionDataOGIBase *)0x0) {
		uVar1 = this->collection->flags;
		uVar2 = *indexOut1;
		while (uVar2 < (uVar1 & 0x3fff)) {
		if ((*(ushort *)indexOut1 != 0xffff) &&(this_00 = this->collection->elements[*(ushort *)indexOut1 & 0x7fff], this_00 != (OGI *)0x0)) {
		OGI::Write(this_00,stream);
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

void SectionOGI::Construct(uint collection, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionOGI::Construct(SectionOGI *this,SectionDataOGIBase *collection,int param_2){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_OGI;
		this->collection = collection;
		this->unkField = param_2;
		return;
		}
		
	*/
	return;
}

