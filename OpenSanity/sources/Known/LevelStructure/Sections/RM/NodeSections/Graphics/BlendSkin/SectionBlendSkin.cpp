#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Graphics/BlendSkin/SectionBlendSkin.h"

#include "headers/Known/LevelStructure/Data/GraphicsSectionData/BlendSkin/SectionDataBlendSkin.h"
#include "headers/Known/LevelStructure/Readers/Known/SectionReaderBlendSkin.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void SectionBlendSkin::DisposeData() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionBlendSkin::DisposeData(SectionBlendSkin *this){
		SectionDataBlendSkin *data;
		data = this->data;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_BlendSkin;
		SectionDataBlendSkin::Dispose(data);
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void SectionBlendSkin::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionBlendSkin * __thiscall SectionBlendSkin::Dispose(SectionBlendSkin *this,byte param_1){
		SectionDataBlendSkin *this_00;
		this_00 = this->data;
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_BlendSkin;
		SectionDataBlendSkin::Dispose(this_00);
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

byte SectionBlendSkin::ReturnNum() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte SectionBlendSkin::ReturnNum(void){
		return 3;
		}
		
	*/
	return 0;
}

bool SectionBlendSkin::IsOne(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool SectionBlendSkin::IsOne(int param_1){
		return param_1 == 3;
		}
		
	*/
	return false;
}

int SectionBlendSkin::GetElementCount(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall SectionBlendSkin::GetElementCount(SectionBlendSkin *this,int param_1){
		return (uint)(this->data->entries).cnt;
		}
		
	*/
	return 0;
}

SectionReaderBlendSkin* SectionBlendSkin::GetReader(uint param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionReaderBlendSkin * __thiscall SectionBlendSkin::GetReader(SectionBlendSkin *this,undefined4 param_1,uint param_2){
		SectionDataBlendSkin *pSVar1;
		bool bVar2;
		undefined3 extraout_var;
		TwinsanityBlendSkin *pTVar3;
		SectionReaderBlendSkin *puVar3;
		param_2 = *(uint *)(param_2 + 8);
		bVar2 = (*((this->data->parent).vtable)->Get)(&this->data->parent,&param_2);
		if ((TwinsanityBlendSkin *)CONCAT31(extraout_var,bVar2) != (TwinsanityBlendSkin *)0x0) {
		SectionDataBlendSkin::FUN_0011c090(this->data,(TwinsanityBlendSkin *)CONCAT31(extraout_var,bVar2));
		return (SectionReaderBlendSkin *)0x0;
		}
		pTVar3 = (TwinsanityBlendSkin *)VirtualPool::AllocateMemory(0x50);
		if (pTVar3 == (TwinsanityBlendSkin *)0x0) {
		pTVar3 = (TwinsanityBlendSkin *)0x0;
		}
		else {
		pTVar3 = TwinsanityBlendSkin::Construct(pTVar3,param_2);
		}
		SectionDataBlendSkin::FUN_0011c090(this->data,pTVar3);
		puVar3 = (SectionReaderBlendSkin *)VirtualPool::AllocateMemory(0xc);
		if (puVar3 != (SectionReaderBlendSkin *)0x0) {
		pSVar1 = this->data;
		puVar3->blendSkin = pTVar3;
		puVar3->data = pSVar1;
		(puVar3->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_BlendSkin;
		return puVar3;
		}
		return (SectionReaderBlendSkin *)0x0;
		}
		
	*/
	return null;
}

bool SectionBlendSkin::Write(MemoryStream* stream, uint* indexOut) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SectionBlendSkin::Write(SectionBlendSkin *this,MemoryStream *stream,uint *indexOut){
		TwinsanityBlendSkin *this_00;
		uint *in_stack_0000000c;
		if (*indexOut < (uint)(this->data->entries).cnt) {
		this_00 = (this->data->entries).elements[*indexOut].skinPtr;
		(*((this_00->parent).vtable)->Write)(&this_00->parent,stream);
		*indexOut = *indexOut + 1;
		*in_stack_0000000c = *(uint *)&this_00->parent;
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

void SectionBlendSkin::DisposeResources() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionBlendSkin::DisposeResources(SectionBlendSkin *this){
		SectionDataBlendSkin::CleanUp(this->data);
		return;
		}
		
	*/
	return;
}

void SectionBlendSkin::Construct(uint data) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SectionBlendSkin::Construct(SectionBlendSkin *this,SectionDataBlendSkin *data){
		(this->parent).vtable = (SectionAbstract_VTable *)&Section_VT_BlendSkin;
		this->data = data;
		return;
		}
		
	*/
	return;
}

