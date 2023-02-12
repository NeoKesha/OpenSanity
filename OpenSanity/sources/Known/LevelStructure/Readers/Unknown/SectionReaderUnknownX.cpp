#include "headers/Known/LevelStructure/Readers/Unknown/SectionReaderUnknownX.h"

#include "headers/Known/Oleg/Oleg.h"
void SectionReaderUnknownX::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownX * __thiscall SectionReaderUnknownX::Dispose(SectionReaderUnknownX *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderUnknownX::Dispose_1(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderUnknownX * __thiscall SectionReaderUnknownX::Dispose(SectionReaderUnknownX *this,byte param_1){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionReaderUnknownX::Read(void* buffer, size_t size) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderUnknownX::Read(SectionReaderUnknownX *this,void *buffer,size_t size){
		MemoryStream stream;
		MemoryStream::Construct(&stream,buffer,size,0,0x40);
		Oleg::ReadUI(this->oleg,this->someIndex,&stream);
		MemoryStream::Dispose(&stream);
		return;
		}
		
	*/
	return;
}

void SectionReaderUnknownX::Construct(uint param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionReaderUnknownX::Construct(SectionReaderUnknownX *this,int param_1,Oleg *param_2){
		(this->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_X;
		this->someIndex = param_1;
		this->oleg = param_2;
		return;
		}
		
	*/
	return;
}

