#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Graphics/Lod/SectionLod.h"

#include "headers/Known/LevelStructure/Readers/Known/SectionReaderLod.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Lod/SectionDataLod.h"
void SectionLod::DisposeData() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionLod::DisposeData(SectionLod *this){
		SectionDataLod *data;
		data = this->data;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Lod;
		SectionDataLod::Dispose(data);
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionLod::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionLod * __thiscall SectionLod::Dispose(SectionLod *this,byte param_1){
		SectionDataLod *this_00;
		this_00 = this->data;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Lod;
		SectionDataLod::Dispose(this_00);
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

byte SectionLod::ReturnNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte SectionLod::ReturnNum(void){
		return 3;
		}
		
	*/
	return 0;
}

bool SectionLod::IsOne(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool SectionLod::IsOne(int param_1){
		return param_1 == 3;
		}
		
	*/
	return false;
}

int SectionLod::GetElementCount(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionLod::GetElementCount(SectionLod *this,int param_1){
		return (uint)(this->data->entries).cnt;
		}
		
	*/
	return 0;
}

SectionReaderLod* SectionLod::GetReader(uint id, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderLod * __thiscall SectionLod::GetReader(SectionLod *this,undefined4 id,uint param_2){
		bool bVar1;
		undefined3 extraout_var;
		TwinsanityLod *lod;
		SectionReaderLod *reader;
		SectionDataLod *data;
		param_2 = *(uint *)(param_2 + 8);
		bVar1 = (*((this->data->parent).vtable)->Get)(&this->data->parent,&param_2);
		if ((TwinsanityLod *)CONCAT31(extraout_var,bVar1) != (TwinsanityLod *)0x0) {
		SectionDataLod::FUN_0011c440(this->data,(TwinsanityLod *)CONCAT31(extraout_var,bVar1));
		return (SectionReaderLod *)0x0;
		}
		lod = (TwinsanityLod *)VirtualPool::AllocateMemory(0x24);
		if (lod == (TwinsanityLod *)0x0) {
		lod = (TwinsanityLod *)0x0;
		}
		else {
		*(undefined2 *)&lod->field0_0x0 = 0;
		lod->field0_0x0 = lod->field0_0x0 & 0xfffcffff;
		lod->id = param_2;
		lod->rigidModelArray = (TwinsanityRigidModel **)0x0;
		*(undefined *)&lod->cnt = 0;
		}
		SectionDataLod::FUN_0011c440(this->data,lod);
		reader = (SectionReaderLod *)VirtualPool::AllocateMemory(0xc);
		if (reader != (SectionReaderLod *)0x0) {
		data = this->data;
		reader->lod = lod;
		reader->data = data;
		(reader->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Lod;
		return reader;
		}
		return (SectionReaderLod *)0x0;
		}
		
	*/
	return null;
}

bool SectionLod::Write(MemoryStream* stream, uint* indexOut1, uint* indexOut2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionLod::Write(SectionLod *this,MemoryStream *stream,uint *indexOut1,uint *indexOut2){
		TwinsanityLod *this_00;
		if (*indexOut1 < (uint)(this->data->entries).cnt) {
		this_00 = (this->data->entries).elements[*indexOut1].lodPtr;
		FUN_00105df0((int)this_00,(int *)stream);
		*indexOut1 = *indexOut1 + 1;
		*indexOut2 = this_00->id;
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

void SectionLod::DisposeResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionLod::DisposeResources(SectionLod *this){
		SectionDataLod::CleanUp(this->data);
		return;
		}
		
	*/
	return;
}

void SectionLod::Construct(uint data) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionLod::Construct(SectionLod *this,SectionDataLod *data){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Lod;
		this->data = data;
		return;
		}
		
	*/
	return;
}

