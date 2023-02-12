#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Skin/SectionDataSkinA.h"

void SectionDataSkinA::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataSkinA::Dispose(SectionDataSkinA *this){
		EntryDescriptorSkin *pEVar1;
		TwinString::Dispose(&this->folder);
		(this->parent).parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Skin;
		SectionDataSkin::CleanUp(&this->parent);
		pEVar1 = (this->parent).entries.elements;
		if (pEVar1 != (EntryDescriptorSkin *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->parent).entries.elements = (EntryDescriptorSkin *)0x0;
		(this->parent).entries.cnt = 0;
		(this->parent).entries.field2_0x6 = 0;
		return;
		}
		
	*/
	return;
}

void SectionDataSkinA::Dispose_1(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataSkinA * __thiscall SectionDataSkinA::Dispose(SectionDataSkinA *this,byte param_1){
		EntryDescriptorSkin *pEVar1;
		TwinString::Dispose(&this->folder);
		(this->parent).parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Skin;
		SectionDataSkin::CleanUp(&this->parent);
		pEVar1 = (this->parent).entries.elements;
		if (pEVar1 != (EntryDescriptorSkin *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->parent).entries.elements = (EntryDescriptorSkin *)0x0;
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

void SectionDataSkinA::Construct(char** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataSkinA * __thiscall SectionDataSkinA::Construct(SectionDataSkinA *this,char **param_1){
		(this->parent).entries.elements = (EntryDescriptorSkin *)0x0;
		(this->parent).entries.cnt = 0;
		(this->parent).entries.field2_0x6 = 0;
		(this->parent).entries.field3_0x8 = 0x40;
		(this->parent).pool = (undefined *)0x0;
		(this->parent).skinList = (ResourceListTwinsanitySkin *)0x0;
		(this->parent).parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Skin_A;
		(this->folder).value = (char *)0x0;
		(this->folder).strLength = 0;
		(this->folder).strSize = 0;
		TwinString::Copy(&this->folder,*param_1);
		return this;
		}
		
	*/
	return;
}

