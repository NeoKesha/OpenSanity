#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Texture/SectionDataTextureXbox.h"

void SectionDataTextureXbox::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataTextureXbox * __fastcall SectionDataTextureXbox::Construct(SectionDataTextureXbox *this){
		TwinString tmpStr1;
		TwinString *tmpStr;
		TwinString::Set(&tmpStr1,"TexturesXBox\\");
		(this->parent).parent.entries.elements = (EntryDescriptorTexture *)0x0;
		(this->parent).parent.entries.cnt = 0;
		(this->parent).parent.entries.field2_0x6 = 0;
		(this->parent).parent.entries.field3_0x8 = 0x40;
		(this->parent).parent.pool = (undefined *)0x0;
		(this->parent).parent.textureList = (ResourceListTwinsanityTexture *)0x0;
		tmpStr = &(this->parent).folder;
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Texture_A;
		tmpStr->value = (char *)0x0;
		(this->parent).folder.strLength = 0;
		(this->parent).folder.strSize = 0;
		TwinString::Copy(tmpStr,tmpStr1.value);
		TwinString::Dispose(&tmpStr1);
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Texture_XBox;
		return this;
		}
		
	*/
	return;
}

void SectionDataTextureXbox::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataTextureXbox::Dispose(SectionDataTextureXbox *this){
		EntryDescriptorTexture *pEVar1;
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Texture_XBox;
		TwinString::Dispose(&(this->parent).folder);
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Texture;
		SectionDataTexture::Dispose((SectionDataTexture *)this);
		pEVar1 = (this->parent).parent.entries.elements;
		if (pEVar1 != (EntryDescriptorTexture *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->parent).parent.entries.elements = (EntryDescriptorTexture *)0x0;
		(this->parent).parent.entries.cnt = 0;
		(this->parent).parent.entries.field2_0x6 = 0;
		return;
		}
		
	*/
	return;
}

void SectionDataTextureXbox::Dispose_2(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataTextureXbox * __thiscall SectionDataTextureXbox::Dispose(SectionDataTextureXbox *this,byte param_1){
		EntryDescriptorTexture *pEVar1;
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Texture_XBox;
		TwinString::Dispose(&(this->parent).folder);
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Texture;
		SectionDataTexture::Dispose((SectionDataTexture *)this);
		pEVar1 = (this->parent).parent.entries.elements;
		if (pEVar1 != (EntryDescriptorTexture *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->parent).parent.entries.elements = (EntryDescriptorTexture *)0x0;
		(this->parent).parent.entries.cnt = 0;
		(this->parent).parent.entries.field2_0x6 = 0;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

