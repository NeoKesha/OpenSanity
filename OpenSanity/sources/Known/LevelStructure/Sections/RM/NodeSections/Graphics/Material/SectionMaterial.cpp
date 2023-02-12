#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Graphics/Material/SectionMaterial.h"

#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Material/SectionDataMaterial.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Known/LevelStructure/Readers/Known/SectionReaderMaterial.h"
void SectionMaterial::DisposeData() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionMaterial::DisposeData(SectionMaterial *this){
		SectionDataMaterial *data;
		data = this->data;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Material;
		SectionDataMaterial::Dispose(data);
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionMaterial::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionMaterial * __thiscall SectionMaterial::Dispose(SectionMaterial *this,byte param_1){
		SectionDataMaterial *this_00;
		this_00 = this->data;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Material;
		SectionDataMaterial::Dispose(this_00);
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

int SectionMaterial::GetElementCount() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionMaterial::GetElementCount(SectionMaterial *this){
		return (uint)(this->data->entries).cnt;
		}
		
	*/
	return 0;
}

byte SectionMaterial::ReturnNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte SectionMaterial::ReturnNum(void){
		return 3;
		}
		
	*/
	return 0;
}

bool SectionMaterial::IsA(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool SectionMaterial::IsA(int param_1){
		return param_1 == 3;
		}
		
	*/
	return false;
}

SectionReaderMaterial* SectionMaterial::GetReader(uint param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderMaterial * __thiscall SectionMaterial::GetReader(SectionMaterial *this,uint param_1,int param_2){
		bool bVar1;
		undefined3 extraout_var;
		TwinsanityMaterial *material;
		SectionReaderMaterial *reader;
		SectionDataMaterial *data;
		param_2 = *(uint *)(param_2 + 8);
		bVar1 = (*((this->data->parent).vtable)->Get)(&this->data->parent,(uint *)&param_2);
		if ((TwinsanityMaterial *)CONCAT31(extraout_var,bVar1) != (TwinsanityMaterial *)0x0) {
		SectionDataMaterial::FUN_0011ba20(this->data,(TwinsanityMaterial *)CONCAT31(extraout_var,bVar1));
		return (SectionReaderMaterial *)0x0;
		}
		material = (TwinsanityMaterial *)VirtualPool::AllocateMemory(0x10);
		if (material == (TwinsanityMaterial *)0x0) {
		material = (TwinsanityMaterial *)0x0;
		}
		else {
		material->field0_0x0 = 0;
		*(uint *)material = *(uint *)material & 0xfffcffff;
		material->id = param_2;
		material->shader = (TwinsanityMaterialShader *)0x0;
		*(undefined *)&material->field4_0xc = 0;
		}
		SectionDataMaterial::FUN_0011ba20(this->data,material);
		reader = (SectionReaderMaterial *)VirtualPool::AllocateMemory(0xc);
		if (reader != (SectionReaderMaterial *)0x0) {
		data = this->data;
		reader->material = material;
		reader->data = data;
		(reader->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Material;
		return reader;
		}
		return (SectionReaderMaterial *)0x0;
		}
		
	*/
	return null;
}

void SectionMaterial::DisposeResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionMaterial::DisposeResources(SectionMaterial *this){
		SectionDataMaterial::FreeElements(this->data);
		return;
		}
		
	*/
	return;
}

bool SectionMaterial::Write(MemoryStream* stream, uint* indexOut1, uint* indexOut2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionMaterial::Write(SectionMaterial *this,MemoryStream *stream,uint *indexOut1,uint *indexOut2){
		TwinsanityMaterial *pTVar1;
		if (*indexOut1 < (uint)(this->data->entries).cnt) {
		pTVar1 = (this->data->entries).elements[*indexOut1].matPtr;
		TwinsanityMaterialShader::Write(pTVar1->shader,stream);
		*indexOut1 = *indexOut1 + 1;
		*indexOut2 = pTVar1->id;
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

void SectionMaterial::Construct(uint data) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionMaterial::Construct(SectionMaterial *this,SectionDataMaterial *data){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Material;
		this->data = data;
		return;
		}
		
	*/
	return;
}

