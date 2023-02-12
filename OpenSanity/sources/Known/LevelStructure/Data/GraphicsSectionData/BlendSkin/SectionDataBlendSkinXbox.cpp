#include "headers/Known/LevelStructure/Data/GraphicsSectionData/BlendSkin/SectionDataBlendSkinXbox.h"

void SectionDataBlendSkinXbox::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataBlendSkinXbox * __fastcall SectionDataBlendSkinXbox::Construct(SectionDataBlendSkinXbox *this){
		TwinString tmpStr1;
		TwinString *tmpStr;
		TwinString::Set(&tmpStr1,"BlendSkinsXBox\\");
		(this->parent).parent.entries.elements = (EntryDescriptorBlendSkin *)0x0;
		(this->parent).parent.entries.cnt = 0;
		(this->parent).parent.entries.field2_0x6 = 0;
		(this->parent).parent.entries.field3_0x8 = 0x40;
		(this->parent).parent.ids = (int *)0x0;
		(this->parent).parent.blendSkinLlist = (ResourceListTwinsanityBlendSkin *)0x0;
		tmpStr = &(this->parent).folder;
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_BlendSkin_A;
		tmpStr->value = (char *)0x0;
		(this->parent).folder.strLength = 0;
		(this->parent).folder.strSize = 0;
		TwinString::Copy(tmpStr,tmpStr1.value);
		TwinString::Dispose(&tmpStr1);
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_BlendSkin_XBox;
		return this;
		}
		
	*/
	return;
}

void SectionDataBlendSkinXbox::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataBlendSkinXbox::Dispose(SectionDataBlendSkinXbox *this){
		EntryDescriptorBlendSkin *pEVar1;
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_BlendSkin_XBox;
		TwinString::Dispose(&(this->parent).folder);
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_BlendSkin;
		SectionDataBlendSkin::CleanUp((SectionDataBlendSkin *)this);
		pEVar1 = (this->parent).parent.entries.elements;
		if (pEVar1 != (EntryDescriptorBlendSkin *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->parent).parent.entries.elements = (EntryDescriptorBlendSkin *)0x0;
		(this->parent).parent.entries.cnt = 0;
		(this->parent).parent.entries.field2_0x6 = 0;
		return;
		}
		
	*/
	return;
}

void SectionDataBlendSkinXbox::Dispose_2(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall SectionDataBlendSkinXbox::Dispose(SectionDataBlendSkinXbox *this,byte param_1){
		EntryDescriptorBlendSkin *pEVar1;
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_BlendSkin_XBox;
		TwinString::Dispose(&(this->parent).folder);
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_BlendSkin;
		SectionDataBlendSkin::CleanUp((SectionDataBlendSkin *)this);
		pEVar1 = (this->parent).parent.entries.elements;
		if (pEVar1 != (EntryDescriptorBlendSkin *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->parent).parent.entries.elements = (EntryDescriptorBlendSkin *)0x0;
		(this->parent).parent.entries.cnt = 0;
		(this->parent).parent.entries.field2_0x6 = 0;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

