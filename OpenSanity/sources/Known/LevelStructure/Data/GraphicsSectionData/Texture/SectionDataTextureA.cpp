#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Texture/SectionDataTextureA.h"

#include "headers/Known/TwinString.h"
void SectionDataTextureA::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataTextureA::Dispose(SectionDataTextureA *this){
		EntryDescriptorTexture *pEVar1;
		TwinString::Dispose(&this->folder);
		(this->parent).parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Texture;
		SectionDataTexture::Dispose(&this->parent);
		pEVar1 = (this->parent).entries.elements;
		if (pEVar1 != (EntryDescriptorTexture *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->parent).entries.elements = (EntryDescriptorTexture *)0x0;
		(this->parent).entries.cnt = 0;
		(this->parent).entries.field2_0x6 = 0;
		return;
		}
		
	*/
	return;
}

void SectionDataTextureA::Dispose_1(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataTextureA * __thiscall SectionDataTextureA::Dispose(SectionDataTextureA *this,byte param_1){
		EntryDescriptorTexture *pEVar1;
		TwinString::Dispose(&this->folder);
		(this->parent).parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Texture;
		SectionDataTexture::Dispose(&this->parent);
		pEVar1 = (this->parent).entries.elements;
		if (pEVar1 != (EntryDescriptorTexture *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->parent).entries.elements = (EntryDescriptorTexture *)0x0;
		(this->parent).entries.cnt = 0;
		(this->parent).entries.field2_0x6 = 0;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SectionDataTextureA::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataTextureA::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataTextureA::Construct(TwinString* name) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataTextureA * __thiscall SectionDataTextureA::Construct(SectionDataTextureA *this,TwinString *name){
		(this->parent).entries.elements = (EntryDescriptorTexture *)0x0;
		(this->parent).entries.cnt = 0;
		(this->parent).entries.field2_0x6 = 0;
		(this->parent).entries.field3_0x8 = 0x40;
		(this->parent).pool = (undefined *)0x0;
		(this->parent).textureList = (ResourceListTwinsanityTexture *)0x0;
		(this->parent).parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Texture_A;
		(this->folder).value = (char *)0x0;
		(this->folder).strLength = 0;
		(this->folder).strSize = 0;
		TwinString::Copy(&this->folder,name->value);
		return this;
		}
		
	*/
	return;
}

