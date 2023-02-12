#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Code/Animation/SectionAnimation.h"

#include "headers/Known/LevelStructure/Readers/Known/SectionReaderAnimation.h"
#include "headers/Known/LevelStructure/Data/CodeSectionData/Animation/SectionDataAnimationBase.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
SectionReaderAnimation* SectionAnimation::GetReader(int id, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderAnimation * __thiscall SectionAnimation::GetReader(SectionAnimation *this,int id,int param_2){
		uint uVar1;
		Animation *pAVar2;
		SectionReaderAnimation *reader;
		SectionDataAnimationBase *data;
		SectionAnimation *section;
		data = this->collection;
		if (data == (SectionDataAnimationBase *)0x0) {
		return (SectionReaderAnimation *)data;
		}
		uVar1 = *(uint *)(param_2 + 8);
		if (((short)uVar1 == -1) || (pAVar2 = data->elements[uVar1 & 0x7fff], pAVar2 == (Animation *)0x0)){
		reader = (SectionReaderAnimation *)VirtualPool::AllocateMemory(0x14);
		if (reader != (SectionReaderAnimation *)0x0) {
		section = this->section;
		data = this->collection;
		reader->cnt = uVar1;
		reader->collection = data;
		(reader->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Animation;
		reader->cnt_ = id;
		reader->section = section;
		return reader;
		}
		}
		else if ((pAVar2->field0_0x0 & 0x20000) == 0) {
		pAVar2->field0_0x0 = pAVar2->field0_0x0 | 0x20000;
		}
		return (SectionReaderAnimation *)0x0;
		}
		
	*/
	return null;
}

byte SectionAnimation::ReturnNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte SectionAnimation::ReturnNum(void){
		return 1;
		}
		
	*/
	return 0;
}

bool SectionAnimation::IsOne(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool SectionAnimation::IsOne(int param_1){
		return param_1 == 1;
		}
		
	*/
	return false;
}

void SectionAnimation::Stub1() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionAnimation::Stub1(SectionAnimation *this){
		if (this->collection != (SectionDataAnimationBase *)0x0) {
		 WARNING: Could not recover jumptable at 0x001b9d3b. Too many branches  WARNING: Treating indirect jump as call (*((this->collection->parent).vtable)->Stub1)();
		return;
		}
		return;
		}
		
	*/
	return;
}

void SectionAnimation::UnkMethod3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionAnimation::UnkMethod3(SectionAnimation *this){
		if (this->collection != (SectionDataAnimationBase *)0x0) {
		 WARNING: Could not recover jumptable at 0x001b9d5b. Too many branches  WARNING: Treating indirect jump as call (*((this->collection->parent).vtable)->Stub2)();
		return;
		}
		return;
		}
		
	*/
	return;
}

void SectionAnimation::Stub2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionAnimation::Stub2(SectionAnimation *this){
		if (this->collection != (SectionDataAnimationBase *)0x0) {
		 WARNING: Could not recover jumptable at 0x001b9d7b. Too many branches  WARNING: Treating indirect jump as call (*((this->collection->parent).vtable)->Stub3)();
		return;
		}
		return;
		}
		
	*/
	return;
}

void SectionAnimation::Stub3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionAnimation::Stub3(SectionAnimation *this){
		if (this->collection != (SectionDataAnimationBase *)0x0) {
		 WARNING: Could not recover jumptable at 0x001b9d9b. Too many branches  WARNING: Treating indirect jump as call (*((this->collection->parent).vtable)->Stub4)();
		return;
		}
		return;
		}
		
	*/
	return;
}

void SectionAnimation::DisposeResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Exceeded maximum restarts with more pending void __thiscall SectionAnimation::DisposeResources(SectionAnimation *this){
		 WARNING: Could not recover jumptable at 0x001b9db5. Too many branches  WARNING: Treating indirect jump as call (*((this->collection->parent).vtable)->CleanUp)();
		return;
		}
		
	*/
	return;
}

void SectionAnimation::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionAnimation * __thiscall SectionAnimation::Dispose(SectionAnimation *this,byte param_1){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

int SectionAnimation::GetElementCount(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionAnimation::GetElementCount(SectionAnimation *this,int param_1){
		SectionDataAnimationBase *pSVar1;
		int iVar2;
		Animation **ppAVar3;
		uint uVar4;
		pSVar1 = this->collection;
		if (pSVar1 == (SectionDataAnimationBase *)0x0) {
		return 0;
		}
		iVar2 = 0;
		uVar4 = pSVar1->flags & 0x3fff;
		if (uVar4 != 0) {
		ppAVar3 = pSVar1->elements;
		do {
		if (*ppAVar3 != (Animation *)0x0) {
		iVar2 = iVar2 + 1;
		}
		ppAVar3 = ppAVar3 + 1;
		uVar4 = uVar4 - 1;
		}
		 while (uVar4 != 0);
		}
		return iVar2;
		}
		
	*/
	return 0;
}

bool SectionAnimation::Write(MemoryStream* stream, uint* indexOut1, uint* indexOut2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionAnimation::Write(SectionAnimation *this,MemoryStream *stream,uint *indexOut1,uint *indexOut2){
		uint uVar1;
		uint i;
		Animation *anim;
		if (this->collection != (SectionDataAnimationBase *)0x0) {
		uVar1 = this->collection->flags;
		i = *indexOut1;
		while (i < (uVar1 & 0x3fff)) {
		if ((*(ushort *)indexOut1 != 0xffff) &&(anim = this->collection->elements[*(ushort *)indexOut1 & 0x7fff], anim != (Animation *)0x0)) {
		Animation::Write(anim,stream);
		*indexOut2 = anim->index;
		*indexOut1 = *indexOut1 + 1;
		return true;
		}
		i = *indexOut1 + 1;
		*indexOut1 = i;
		}
		}
		return false;
		}
		
	*/
	return false;
}

void SectionAnimation::Construct(uint collection, uint section) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionAnimation::Construct(SectionAnimation *this,SectionDataAnimationBase *collection,SectionAnimation *section){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Animation;
		this->collection = collection;
		this->section = section;
		return;
		}
		
	*/
	return;
}

