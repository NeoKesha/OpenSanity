#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Graphics/Skin/SectionSkin.h"

#include "headers/Known/LevelStructure/Readers/Known/SectionReaderSkin.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Skin/SectionDataSkin.h"
void SectionSkin::DisposeData() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionSkin::DisposeData(SectionSkin *this){
		SectionDataSkin *data;
		data = this->data;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Skin;
		SectionDataSkin::Dispose(data);
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionSkin::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionSkin * __thiscall SectionSkin::Dispose(SectionSkin *this,byte param_1){
		SectionDataSkin *this_00;
		this_00 = this->data;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Skin;
		SectionDataSkin::Dispose(this_00);
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

byte SectionSkin::ReturnNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte SectionSkin::ReturnNum(void){
		return 3;
		}
		
	*/
	return 0;
}

bool SectionSkin::IsOne(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool SectionSkin::IsOne(int param_1){
		return param_1 == 3;
		}
		
	*/
	return false;
}

int SectionSkin::GetElementCount(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionSkin::GetElementCount(SectionSkin *this,int param_1){
		return (uint)(this->data->entries).cnt;
		}
		
	*/
	return 0;
}

SectionReaderSkin* SectionSkin::GetReader(uint param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderSkin * __thiscall SectionSkin::GetReader(SectionSkin *this,undefined4 param_1,uint param_2){
		bool bVar1;
		undefined3 extraout_var;
		TwinsanitySkin *skin;
		SectionReaderSkin *reader;
		SectionDataSkin *data;
		param_2 = *(uint *)(param_2 + 8);
		bVar1 = (*((this->data->parent).vtable)->Get)(&this->data->parent,&param_2);
		if ((TwinsanitySkin *)CONCAT31(extraout_var,bVar1) != (TwinsanitySkin *)0x0) {
		SectionDataSkin::FUN_0011bf60(this->data,(TwinsanitySkin *)CONCAT31(extraout_var,bVar1));
		return (SectionReaderSkin *)0x0;
		}
		skin = (TwinsanitySkin *)VirtualPool::AllocateMemory(0x4c);
		if (skin == (TwinsanitySkin *)0x0) {
		skin = (TwinsanitySkin *)0x0;
		}
		else {
		*(undefined2 *)&skin->field1_0x4 = 0;
		skin->id = param_2;
		skin->field1_0x4 = skin->field1_0x4 & 0xfffcffff;
		skin->vtable = &TwinsanityGraphics_VT_Skin;
		skin->materials = (TwinsanityMaterial **)0x0;
		*(undefined4 *)&skin->field_0x10 = 0;
		skin->field8_0x14 = false;
		skin->field_0x15 = 0;
		skin->field12_0x18 = (uint *)0x0;
		skin->vertexBufferData = (undefined **)0x0;
		skin->vertexBuffer = (D3DVertexBuffer8 **)0x0;
		skin->field16_0x28 = (uint *)0x0;
		skin->cnt3 = (uint *)0x0;
		skin->cnt = 0;
		skin->vertexBufferLength = (uint *)0x0;
		}
		SectionDataSkin::FUN_0011bf60(this->data,skin);
		reader = (SectionReaderSkin *)VirtualPool::AllocateMemory(0xc);
		if (reader != (SectionReaderSkin *)0x0) {
		data = this->data;
		reader->skin = skin;
		reader->data = data;
		(reader->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Skin;
		return reader;
		}
		return (SectionReaderSkin *)0x0;
		}
		
	*/
	return null;
}

bool SectionSkin::Write(MemoryStream* stream, uint* indexOut1, uint* indexOut2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionSkin::Write(SectionSkin *this,MemoryStream *stream,uint *indexOut1,uint *indexOut2){
		TwinsanitySkin *pTVar1;
		if (*indexOut1 < (uint)(this->data->entries).cnt) {
		pTVar1 = (this->data->entries).elements[*indexOut1].skinPtr;
		(*(code *)pTVar1->vtable[2])(stream);
		*indexOut1 = *indexOut1 + 1;
		*indexOut1 = pTVar1->id;
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

void SectionSkin::DisposeResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionSkin::DisposeResources(SectionSkin *this){
		SectionDataSkin::CleanUp(this->data);
		return;
		}
		
	*/
	return;
}

void SectionSkin::Construct(uint data) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionSkin::Construct(SectionSkin *this,SectionDataSkin *data){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Skin;
		this->data = data;
		return;
		}
		
	*/
	return;
}

