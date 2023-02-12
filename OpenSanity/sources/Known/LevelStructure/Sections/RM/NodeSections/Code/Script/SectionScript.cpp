#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Code/Script/SectionScript.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/LevelStructure/Readers/Known/SectionReaderScript.h"
#include "headers/Known/LevelStructure/Data/CodeSectionData/Script/SectionDataScriptBase.h"
SectionReaderScript* SectionScript::GetReader(uint param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderScript * __thiscall SectionScript::GetReader(SectionScript *this,undefined *param_1,int param_2){
		SectionDataScriptBase *pSVar1;
		uint uVar2;
		ScriptAbstract *pSVar3;
		int *piVar4;
		SectionReaderScript *pSVar5;
		pSVar1 = this->collection;
		if (pSVar1 == (SectionDataScriptBase *)0x0) {
		return (SectionReaderScript *)pSVar1;
		}
		uVar2 = *(uint *)(param_2 + 8);
		if (((short)uVar2 == -1) ||(pSVar3 = pSVar1->elements[uVar2 & 0x7fff], pSVar3 == (ScriptAbstract *)0x0)) {
		pSVar5 = (SectionReaderScript *)VirtualPool::AllocateMemory(0x14);
		if (pSVar5 != (SectionReaderScript *)0x0) {
		piVar4 = (int *)this->unkField;
		pSVar1 = this->collection;
		pSVar5->cnt = uVar2;
		pSVar5->data = pSVar1;
		(pSVar5->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Script;
		pSVar5->field2_0x8 = param_1;
		pSVar5->indexList = piVar4;
		return pSVar5;
		}
		}
		else if ((pSVar3->field1_0x4 & 0x20000) == 0) {
		pSVar3->field1_0x4 = pSVar3->field1_0x4 | 0x20000;
		}
		return (SectionReaderScript *)0x0;
		}
		
	*/
	return null;
}

byte SectionScript::ReturnNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte SectionScript::ReturnNum(void){
		return 1;
		}
		
	*/
	return 0;
}

bool SectionScript::IsOne(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool SectionScript::IsOne(int param_1){
		return param_1 == 1;
		}
		
	*/
	return false;
}

void SectionScript::Stub1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionScript::Stub1(SectionScript *this){
		if (this->collection != (SectionDataScriptBase *)0x0) {
		 WARNING: Could not recover jumptable at 0x001b9c6b. Too many branches  WARNING: Treating indirect jump as call (*((this->collection->parent).vtable)->Stub1)();
		return;
		}
		return;
		}
		
	*/
	return;
}

void SectionScript::UnkMethod3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionScript::UnkMethod3(SectionScript *this){
		if (this->collection != (SectionDataScriptBase *)0x0) {
		 WARNING: Could not recover jumptable at 0x001b9c8b. Too many branches  WARNING: Treating indirect jump as call (*((this->collection->parent).vtable)->Stub2)();
		return;
		}
		return;
		}
		
	*/
	return;
}

void SectionScript::Stub2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionScript::Stub2(SectionScript *this){
		if (this->collection != (SectionDataScriptBase *)0x0) {
		 WARNING: Could not recover jumptable at 0x001b9cab. Too many branches  WARNING: Treating indirect jump as call (*((this->collection->parent).vtable)->Stub3)();
		return;
		}
		return;
		}
		
	*/
	return;
}

void SectionScript::Stub3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionScript::Stub3(SectionScript *this){
		if (this->collection != (SectionDataScriptBase *)0x0) {
		 WARNING: Could not recover jumptable at 0x001b9ccb. Too many branches  WARNING: Treating indirect jump as call (*((this->collection->parent).vtable)->Stub4)();
		return;
		}
		return;
		}
		
	*/
	return;
}

void SectionScript::DisposeResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionScript::DisposeResources(SectionScript *this){
		 WARNING: Could not recover jumptable at 0x001b9ce5. Too many branches  WARNING: Treating indirect jump as call (*((this->collection->parent).vtable)->CleanUp)();
		return;
		}
		
	*/
	return;
}

void SectionScript::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionScript * __thiscall SectionScript::Dispose(SectionScript *this,byte param_1){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

int SectionScript::GetElementCount(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionScript::GetElementCount(SectionScript *this,int param_1){
		SectionDataScriptBase *pSVar1;
		int iVar2;
		ScriptAbstract **ppSVar3;
		uint uVar4;
		pSVar1 = this->collection;
		if (pSVar1 == (SectionDataScriptBase *)0x0) {
		return 0;
		}
		iVar2 = 0;
		uVar4 = pSVar1->flags & 0x3fff;
		if (uVar4 != 0) {
		ppSVar3 = pSVar1->elements;
		do {
		if (*ppSVar3 != (ScriptAbstract *)0x0) {
		iVar2 = iVar2 + 1;
		}
		ppSVar3 = ppSVar3 + 1;
		uVar4 = uVar4 - 1;
		}
		 while (uVar4 != 0);
		}
		return iVar2;
		}
		
	*/
	return 0;
}

bool SectionScript::Write(MemoryStream* stream, uint* indexOut1, uint* indexOut2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionScript::Write(SectionScript *this,MemoryStream *stream,uint *indexOut1,uint *indexOut2){
		uint uVar1;
		ScriptAbstract *this_00;
		uint uVar2;
		if (this->collection != (SectionDataScriptBase *)0x0) {
		uVar1 = this->collection->flags;
		uVar2 = *indexOut1;
		while (uVar2 < (uVar1 & 0x3fff)) {
		if ((*(ushort *)indexOut1 != 0xffff) &&(this_00 = this->collection->elements[*(ushort *)indexOut1 & 0x7fff],this_00 != (ScriptAbstract *)0x0)) {
		(*this_00->vtable->Write)(this_00,stream);
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

void SectionScript::Construct(uint collection, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionScript::Construct(SectionScript *this,SectionDataScriptBase *collection,int param_2){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Script;
		this->collection = collection;
		this->unkField = param_2;
		return;
		}
		
	*/
	return;
}

