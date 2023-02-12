#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Code/CodeModel/SectionCodeModel.h"

#include "headers/Known/LevelStructure/Readers/Known/SectionReaderCodeModel.h"
#include "headers/Known/LevelStructure/Data/CodeSectionData/CodeModel/SectionDataCodeModelBase.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
SectionReaderCodeModel* SectionCodeModel::GetReader(uint param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderCodeModel * __thiscall SectionCodeModel::GetReader(SectionCodeModel *this,undefined *param_1,int param_2){
		SectionDataCodeModelBase *pSVar1;
		uint uVar2;
		CodeModel *pCVar3;
		int *piVar4;
		SectionReaderCodeModel *pSVar5;
		pSVar1 = this->collection;
		if (pSVar1 == (SectionDataCodeModelBase *)0x0) {
		return (SectionReaderCodeModel *)pSVar1;
		}
		uVar2 = *(uint *)(param_2 + 8);
		if (((short)uVar2 == -1) ||(pCVar3 = pSVar1->elements[uVar2 & 0x7fff], pCVar3 == (CodeModel *)0x0)) {
		pSVar5 = (SectionReaderCodeModel *)VirtualPool::AllocateMemory(0x14);
		if (pSVar5 != (SectionReaderCodeModel *)0x0) {
		piVar4 = (int *)this->unkField;
		pSVar1 = this->collection;
		pSVar5->cnt = uVar2;
		pSVar5->data = pSVar1;
		(pSVar5->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_CodeModel;
		pSVar5->field2_0x8 = param_1;
		pSVar5->idArray = piVar4;
		return pSVar5;
		}
		}
		else if ((pCVar3->field0_0x0 & 0x20000) == 0) {
		pCVar3->field0_0x0 = pCVar3->field0_0x0 | 0x20000;
		}
		return (SectionReaderCodeModel *)0x0;
		}
		
	*/
	return null;
}

byte SectionCodeModel::ReturnNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte SectionCodeModel::ReturnNum(void){
		return 1;
		}
		
	*/
	return 0;
}

bool SectionCodeModel::IsOne(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool SectionCodeModel::IsOne(int param_1){
		return param_1 == 1;
		}
		
	*/
	return false;
}

void SectionCodeModel::Stub1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionCodeModel::Stub1(SectionCodeModel *this){
		if (this->collection != (SectionDataCodeModelBase *)0x0) {
		 WARNING: Could not recover jumptable at 0x001b9edb. Too many branches  WARNING: Treating indirect jump as call (*((this->collection->parent).vtable)->Stub1)();
		return;
		}
		return;
		}
		
	*/
	return;
}

void SectionCodeModel::UnkMethod3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionCodeModel::UnkMethod3(SectionCodeModel *this){
		if (this->collection != (SectionDataCodeModelBase *)0x0) {
		 WARNING: Could not recover jumptable at 0x001b9efb. Too many branches  WARNING: Treating indirect jump as call (*((this->collection->parent).vtable)->Stub2)();
		return;
		}
		return;
		}
		
	*/
	return;
}

void SectionCodeModel::Stub2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionCodeModel::Stub2(SectionCodeModel *this){
		if (this->collection != (SectionDataCodeModelBase *)0x0) {
		 WARNING: Could not recover jumptable at 0x001b9f1b. Too many branches  WARNING: Treating indirect jump as call (*((this->collection->parent).vtable)->Stub3)();
		return;
		}
		return;
		}
		
	*/
	return;
}

void SectionCodeModel::Stub3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionCodeModel::Stub3(SectionCodeModel *this){
		if (this->collection != (SectionDataCodeModelBase *)0x0) {
		 WARNING: Could not recover jumptable at 0x001b9f3b. Too many branches  WARNING: Treating indirect jump as call (*((this->collection->parent).vtable)->Stub4)();
		return;
		}
		return;
		}
		
	*/
	return;
}

void SectionCodeModel::DisposeResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionCodeModel::DisposeResources(SectionCodeModel *this){
		 WARNING: Could not recover jumptable at 0x001b9f55. Too many branches  WARNING: Treating indirect jump as call (*((this->collection->parent).vtable)->CleanUp)();
		return;
		}
		
	*/
	return;
}

void SectionCodeModel::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionCodeModel * __thiscall SectionCodeModel::Dispose(SectionCodeModel *this,byte param_1){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

int SectionCodeModel::GetElementCount(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionCodeModel::GetElementCount(SectionCodeModel *this,int param_1){
		SectionDataCodeModelBase *pSVar1;
		int iVar2;
		CodeModel **ppCVar3;
		uint uVar4;
		pSVar1 = this->collection;
		if (pSVar1 == (SectionDataCodeModelBase *)0x0) {
		return 0;
		}
		iVar2 = 0;
		uVar4 = pSVar1->flags & 0x3fff;
		if (uVar4 != 0) {
		ppCVar3 = pSVar1->elements;
		do {
		if (*ppCVar3 != (CodeModel *)0x0) {
		iVar2 = iVar2 + 1;
		}
		ppCVar3 = ppCVar3 + 1;
		uVar4 = uVar4 - 1;
		}
		 while (uVar4 != 0);
		}
		return iVar2;
		}
		
	*/
	return 0;
}

bool SectionCodeModel::Write(MemoryStream* stream, uint* indexOut1, uint* indexOut2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionCodeModel::Write(SectionCodeModel *this,MemoryStream *stream,uint *indexOut1,uint *indexOut2){
		uint uVar1;
		CodeModel *this_00;
		uint uVar2;
		if (this->collection != (SectionDataCodeModelBase *)0x0) {
		uVar1 = this->collection->flags;
		uVar2 = *indexOut1;
		while (uVar2 < (uVar1 & 0x3fff)) {
		if ((*(ushort *)indexOut1 != 0xffff) &&(this_00 = this->collection->elements[*(ushort *)indexOut1 & 0x7fff],this_00 != (CodeModel *)0x0)) {
		CodeModel::Write(this_00,stream);
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

void SectionCodeModel::Construct(uint collection, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionCodeModel::Construct(SectionCodeModel *this,SectionDataCodeModelBase *collection,int param_2){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_CodeModel;
		this->collection = collection;
		this->unkField = param_2;
		return;
		}
		
	*/
	return;
}

