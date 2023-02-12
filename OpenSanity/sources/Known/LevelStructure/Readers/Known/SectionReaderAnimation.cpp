#include "headers/Known/LevelStructure/Readers/Known/SectionReaderAnimation.h"

#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Code/Animation/SectionAnimation.h"
#include "headers/Known/LevelStructure/Data/CodeSectionData/Animation/SectionDataAnimationBase.h"
void SectionReaderAnimation::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderAnimation * __thiscall SectionReaderAnimation::Dispose(SectionReaderAnimation *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderAnimation::Read(void* buffer, size_t size, size_t offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderAnimation::Read(SectionReaderAnimation *this,void *buffer,size_t size,size_t offset){
		uint uVar1;
		Animation *pAVar2;
		MemoryStream stream;
		ushort index;
		MemoryStream::Construct(&stream,buffer,size,0,0x40);
		index = *(ushort *)&this->cnt;
		if ((*(byte *)&this->cnt & 1) == 0) {
		pAVar2 = (Animation *)VirtualPool::AllocateMemory(0x24);
		if (pAVar2 != (Animation *)0x0) {
		pAVar2 = Animation::Construct(pAVar2,&stream);
		goto LAB_001bfa60;
		}
		}
		else {
		pAVar2 = (Animation *)VirtualPool::AllocateMemory(0x24);
		if (pAVar2 != (Animation *)0x0) {
		pAVar2 = Animation::Construct(pAVar2,&stream);
		goto LAB_001bfa60;
		}
		}
		pAVar2 = (Animation *)0x0;
		LAB_001bfa60:uVar1 = this->cnt;
		pAVar2->index = uVar1;
		SectionDataAnimationBase::AddAnimation(this->collection,this->cnt_,uVar1 & 0xffff0000 | (uint)index,(int)pAVar2,this->section);
		MemoryStream::Dispose(&stream);
		return;
		}
		
	*/
	return;
}

