#include "headers/Known/LevelStructure/Readers/Known/SectionReaderCodeModel.h"

#include "headers/Known/LevelStructure/Data/CodeSectionData/CodeModel/SectionDataCodeModelBase.h"
void SectionReaderCodeModel::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderCodeModel * __thiscall SectionReaderCodeModel::Dispose(SectionReaderCodeModel *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderCodeModel::Read(void* buffer, size_t size, size_t offset) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderCodeModel::Read(SectionReaderCodeModel *this,void *buffer,size_t size,size_t offset){
		CodeModel *element;
		MemoryStream stream;
		ushort index;
		MemoryStream::Construct(&stream,buffer,size,0,0x40);
		index = *(ushort *)&this->cnt;
		if ((index & 1) == 0) {
		element = (CodeModel *)VirtualPool::AllocateMemory(0x18);
		if (element != (CodeModel *)0x0) {
		*(undefined2 *)&element->field0_0x0 = 0;
		element->field0_0x0 = element->field0_0x0 & 0xfffcffff;
		element->index = 0xffffffff;
		CodeModel::Construct(element,&stream);
		goto LAB_001bfcad;
		}
		}
		else {
		element = (CodeModel *)VirtualPool::AllocateMemory(0x18);
		if (element != (CodeModel *)0x0) {
		*(undefined2 *)&element->field0_0x0 = 0;
		element->field0_0x0 = element->field0_0x0 & 0xfffcffff;
		element->index = 0xffffffff;
		CodeModel::Construct(element,&stream);
		goto LAB_001bfcad;
		}
		}
		element = (CodeModel *)0x0;
		LAB_001bfcad:element->index = this->cnt;
		SectionDataCodeModelBase::Add(this->data,(int)this->field2_0x8,(uint)this->idArray & 0xffff0000 | (uint)index,element,this->idArray);
		MemoryStream::Dispose(&stream);
		return;
		}
		
	*/
	return;
}

