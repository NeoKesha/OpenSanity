#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Graphics/Skydome/SectionSkydome.h"

#include "headers/Known/LevelStructure/Readers/Known/SectionReaderSkydome.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Skydome/SectionDataSkydome.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void SectionSkydome::DisposeData() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionSkydome::DisposeData(SectionSkydome *this){
		SectionDataSkydome *data;
		data = this->data;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Skydome;
		SectionDataSkydome::Dispose(data);
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionSkydome::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionSkydome * __thiscall SectionSkydome::Dispose(SectionSkydome *this,byte param_1){
		SectionDataSkydome *this_00;
		this_00 = this->data;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Skydome;
		SectionDataSkydome::Dispose(this_00);
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

byte SectionSkydome::ReturnNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte SectionSkydome::ReturnNum(void){
		return 3;
		}
		
	*/
	return 0;
}

bool SectionSkydome::IsOne(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool SectionSkydome::IsOne(int param_1){
		return param_1 == 3;
		}
		
	*/
	return false;
}

int SectionSkydome::GetElementCount(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionSkydome::GetElementCount(SectionSkydome *this,int param_1){
		return (uint)(this->data->entries).cnt;
		}
		
	*/
	return 0;
}

SectionReaderSkydome* SectionSkydome::GetReader(uint id, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderSkydome * __thiscall SectionSkydome::GetReader(SectionSkydome *this,undefined4 id,uint param_2){
		bool bVar1;
		undefined3 extraout_var;
		TwinsanitySkydome *skydome;
		SectionReaderSkydome *reader;
		SectionDataSkydome *data;
		param_2 = *(uint *)(param_2 + 8);
		bVar1 = (*((this->data->parent).vtable)->Get)(&this->data->parent,&param_2);
		if ((TwinsanitySkydome *)CONCAT31(extraout_var,bVar1) != (TwinsanitySkydome *)0x0) {
		SectionDataSkydome::FUN_0011c1d0(this->data,(TwinsanitySkydome *)CONCAT31(extraout_var,bVar1));
		return (SectionReaderSkydome *)0x0;
		}
		skydome = (TwinsanitySkydome *)VirtualPool::AllocateMemory(0x50);
		if (skydome == (TwinsanitySkydome *)0x0) {
		skydome = (TwinsanitySkydome *)0x0;
		}
		else {
		*(undefined2 *)&skydome->field0_0x0 = 0;
		skydome->field0_0x0 = skydome->field0_0x0 & 0xfffcffff;
		skydome->id = param_2;
		skydome->cnt = 0;
		skydome->rigidModels = (TwinsanityRigidModel2 **)0x0;
		}
		SectionDataSkydome::FUN_0011c1d0(this->data,skydome);
		reader = (SectionReaderSkydome *)VirtualPool::AllocateMemory(0xc);
		if (reader != (SectionReaderSkydome *)0x0) {
		data = this->data;
		reader->skydome = skydome;
		reader->data = data;
		(reader->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Skydome;
		return reader;
		}
		return (SectionReaderSkydome *)0x0;
		}
		
	*/
	return null;
}

bool SectionSkydome::Write(MemoryStream* stream, uint* indexOut1, uint* indexOut2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionSkydome::Write(SectionSkydome *this,MemoryStream *stream,uint *indexOut1,uint *indexOut2){
		int this_00;
		if (*indexOut1 < (uint)(this->data->entries).cnt) {
		this_00 = *(int *)((this->data->entries).elements + *indexOut1 * 8);
		FUN_0010bc10(this_00,(int *)stream);
		*indexOut1 = *indexOut1 + 1;
		*indexOut2 = *(uint *)(this_00 + 4);
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

void SectionSkydome::DisposeResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionSkydome::DisposeResources(SectionSkydome *this){
		SectionDataSkydome::CleanUp(this->data);
		return;
		}
		
	*/
	return;
}

void SectionSkydome::Construct(uint data) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionSkydome::Construct(SectionSkydome *this,SectionDataSkydome *data){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Skydome;
		this->data = data;
		return;
		}
		
	*/
	return;
}

