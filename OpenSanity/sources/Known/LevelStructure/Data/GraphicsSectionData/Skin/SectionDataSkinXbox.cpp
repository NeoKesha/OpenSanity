#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Skin/SectionDataSkinXbox.h"

void SectionDataSkinXbox::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataSkinXbox * __fastcall SectionDataSkinXbox::Construct(SectionDataSkinXbox *this){
		TwinString tmpStr1;
		TwinString *tmpStr;
		TwinString::Set(&tmpStr1,"SkinsXBox\\");
		(this->parent).parent.entries.elements = (EntryDescriptorSkin *)0x0;
		(this->parent).parent.entries.cnt = 0;
		(this->parent).parent.entries.field2_0x6 = 0;
		(this->parent).parent.entries.field3_0x8 = 0x40;
		(this->parent).parent.pool = (undefined *)0x0;
		(this->parent).parent.skinList = (ResourceListTwinsanitySkin *)0x0;
		tmpStr = &(this->parent).folder;
		(this->parent).parent.parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Skin_A;
		tmpStr->value = (char *)0x0;
		(this->parent).folder.strLength = 0;
		(this->parent).folder.strSize = 0;
		TwinString::Copy(tmpStr,tmpStr1.value);
		TwinString::Dispose(&tmpStr1);
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Skin_XBox;
		return this;
		}
		
	*/
	return;
}

void SectionDataSkinXbox::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataSkinXbox::Dispose(SectionDataSkinXbox *this){
		EntryDescriptorSkin *pEVar1;
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Skin_XBox;
		TwinString::Dispose(&(this->parent).folder);
		(this->parent).parent.parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Skin;
		SectionDataSkin::CleanUp((SectionDataSkin *)this);
		pEVar1 = (this->parent).parent.entries.elements;
		if (pEVar1 != (EntryDescriptorSkin *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->parent).parent.entries.elements = (EntryDescriptorSkin *)0x0;
		(this->parent).parent.entries.cnt = 0;
		(this->parent).parent.entries.field2_0x6 = 0;
		return;
		}
		
	*/
	return;
}

void SectionDataSkinXbox::Dispose_2(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataSkinXbox * __thiscall SectionDataSkinXbox::Dispose(SectionDataSkinXbox *this,byte param_1){
		EntryDescriptorSkin *pEVar1;
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Skin_XBox;
		TwinString::Dispose(&(this->parent).folder);
		(this->parent).parent.parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Skin;
		SectionDataSkin::CleanUp((SectionDataSkin *)this);
		pEVar1 = (this->parent).parent.entries.elements;
		if (pEVar1 != (EntryDescriptorSkin *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->parent).parent.entries.elements = (EntryDescriptorSkin *)0x0;
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

