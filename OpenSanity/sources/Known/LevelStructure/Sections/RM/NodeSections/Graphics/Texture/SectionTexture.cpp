#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Graphics/Texture/SectionTexture.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/LevelStructure/Readers/Known/SectionReaderTexture.h"
#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Texture/SectionDataTexture.h"
void SectionTexture::DisposeData() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionTexture::DisposeData(SectionTexture *this){
		SectionDataTexture *data;
		data = this->data;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Texture;
		SectionDataTexture::Dispose(data);
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionTexture::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionTexture * __thiscall SectionTexture::Dispose(SectionTexture *this,byte param_1){
		SectionDataTexture *this_00;
		this_00 = this->data;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Texture;
		SectionDataTexture::Dispose(this_00);
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

SectionReaderTexture* SectionTexture::GetReader(uint id, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderTexture * __thiscall SectionTexture::GetReader(SectionTexture *this,uint id,int param_2){
		bool bVar1;
		undefined3 extraout_var;
		TwinsanityTexture *texture;
		SectionReaderTexture *reader;
		SectionDataTexture *data;
		param_2 = *(uint *)(param_2 + 8);
		bVar1 = (*((this->data->parent).vtable)->Get)(&this->data->parent,(uint *)&param_2);
		if ((TwinsanityTexture *)CONCAT31(extraout_var,bVar1) != (TwinsanityTexture *)0x0) {
		SectionDataTexture::FUN_0011bb70(this->data,(TwinsanityTexture *)CONCAT31(extraout_var,bVar1));
		return (SectionReaderTexture *)0x0;
		}
		texture = (TwinsanityTexture *)VirtualPool::AllocateMemory(0x74);
		if (texture == (TwinsanityTexture *)0x0) {
		texture = (TwinsanityTexture *)0x0;
		}
		else {
		*(undefined2 *)&texture->index = 0;
		texture->id = param_2;
		texture->index = texture->index & 0xfffcffff;
		texture->field91_0x68 = -1;
		texture->field93_0x70 = 0;
		texture->field92_0x6c = 0;
		texture->field94_0x72 = 0;
		texture->d3dTexture = (D3DTexture *)0x0;
		texture->field5_0xe = 2;
		}
		SectionDataTexture::FUN_0011bb70(this->data,texture);
		reader = (SectionReaderTexture *)VirtualPool::AllocateMemory(0xc);
		if (reader != (SectionReaderTexture *)0x0) {
		data = this->data;
		reader->texture = texture;
		reader->data = data;
		(reader->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Texture;
		return reader;
		}
		return (SectionReaderTexture *)0x0;
		}
		
	*/
	return null;
}

int SectionTexture::GetElementCount(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionTexture::GetElementCount(SectionTexture *this,int param_1){
		return (uint)(this->data->entries).cnt;
		}
		
	*/
	return 0;
}

byte SectionTexture::ReturnNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte SectionTexture::ReturnNum(void){
		return 3;
		}
		
	*/
	return 0;
}

bool SectionTexture::IsOne(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool SectionTexture::IsOne(int param_1){
		return param_1 == 3;
		}
		
	*/
	return false;
}

void SectionTexture::DisposeResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionTexture::DisposeResources(SectionTexture *this){
		SectionDataTexture::Dispose(this->data);
		return;
		}
		
	*/
	return;
}

bool SectionTexture::Write(MemoryStream* stream, uint* indexOut1, uint* indexOut2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionTexture::Write(SectionTexture *this,MemoryStream *stream,uint *indexOut1,uint *indexOut2){
		TwinsanityTexture *this_00;
		if (*indexOut1 < (uint)(this->data->entries).cnt) {
		this_00 = (this->data->entries).elements[*indexOut1].texPtr;
		TwinsanityTexture::Write(this_00,stream);
		*indexOut1 = *indexOut1 + 1;
		*indexOut2 = this_00->id;
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

void SectionTexture::Construct(uint data) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionTexture::Construct(SectionTexture *this,SectionDataTexture *data){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Texture;
		this->data = data;
		return;
		}
		
	*/
	return;
}

