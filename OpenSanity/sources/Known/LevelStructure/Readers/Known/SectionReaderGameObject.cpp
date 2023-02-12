#include "headers/Known/LevelStructure/Readers/Known/SectionReaderGameObject.h"

#include "headers/Unknown/IndexToIdList.h"
#include "headers/Known/LevelStructure/Data/CodeSectionData/GameObject/SectionDataGameObjectBase.h"
void SectionReaderGameObject::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderGameObject * __thiscall SectionReaderGameObject::Dispose(SectionReaderGameObject *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderGameObject::Read(void* buffer, size_t size, size_t offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderGameObject::Read(SectionReaderGameObject *this,void *buffer,size_t size,size_t offset){
		uint uVar1;
		GameObject *pGVar2;
		MemoryStream stream;
		ushort index;
		MemoryStream::Construct(&stream,buffer,size,0,0x40);
		index = *(ushort *)&this->cnt;
		if ((*(byte *)&this->cnt & 1) == 0) {
		pGVar2 = (GameObject *)VirtualPool::AllocateMemory(0x60);
		if (pGVar2 != (GameObject *)0x0) {
		pGVar2 = GameObject::Construct(pGVar2,&stream);
		goto LAB_001bf890;
		}
		}
		else {
		pGVar2 = (GameObject *)VirtualPool::AllocateMemory(0x60);
		if (pGVar2 != (GameObject *)0x0) {
		pGVar2 = GameObject::Construct(pGVar2,&stream);
		goto LAB_001bf890;
		}
		}
		pGVar2 = (GameObject *)0x0;
		LAB_001bf890:uVar1 = this->cnt;
		pGVar2->index = uVar1;
		SectionDataGameObjectBase::Add(this->collection,this->cnt_,uVar1 & 0xffff0000 | (uint)index,pGVar2,this->indexList);
		MemoryStream::Dispose(&stream);
		return;
		}
		
	*/
	return;
}

