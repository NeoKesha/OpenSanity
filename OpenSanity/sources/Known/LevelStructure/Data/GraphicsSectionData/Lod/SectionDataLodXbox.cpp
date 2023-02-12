#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Lod/SectionDataLodXbox.h"

void SectionDataLodXbox::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataLodXbox * __fastcall SectionDataLodXbox::Construct(SectionDataLodXbox *this){
		TwinString tmpStr1;
		TwinString *tmpStr;
		TwinString::Set(&tmpStr1,"LODs\\");
		(this->parent).parent.entries.elements = (EntryDescriptorLod *)0x0;
		(this->parent).parent.entries.cnt = 0;
		(this->parent).parent.entries.field2_0x6 = 0;
		(this->parent).parent.entries.field3_0x8 = 0x40;
		(this->parent).parent.pool = (undefined *)0x0;
		(this->parent).parent.lodList = (ResourceListTwinsanityLod *)0x0;
		tmpStr = &(this->parent).folder;
		(this->parent).parent.parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Lod_A;
		tmpStr->value = (char *)0x0;
		(this->parent).folder.strLength = 0;
		(this->parent).folder.strSize = 0;
		TwinString::Copy(tmpStr,tmpStr1.value);
		TwinString::Dispose(&tmpStr1);
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Lod_XBox;
		return this;
		}
		
	*/
	return;
}

void SectionDataLodXbox::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataLodXbox * __thiscall SectionDataLodXbox::Dispose(SectionDataLodXbox *this,byte param_1){
		EntryDescriptorLod *pEVar1;
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Lod_XBox;
		TwinString::Dispose(&(this->parent).folder);
		(this->parent).parent.parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Lod;
		SectionDataLod::CleanUp((SectionDataLod *)this);
		pEVar1 = (this->parent).parent.entries.elements;
		if (pEVar1 != (EntryDescriptorLod *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->parent).parent.entries.elements = (EntryDescriptorLod *)0x0;
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

void SectionDataLodXbox::Dispose_2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataLodXbox::Dispose(SectionDataLodXbox *this){
		EntryDescriptorLod *pEVar1;
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Lod_XBox;
		TwinString::Dispose(&(this->parent).folder);
		(this->parent).parent.parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Lod;
		SectionDataLod::CleanUp((SectionDataLod *)this);
		pEVar1 = (this->parent).parent.entries.elements;
		if (pEVar1 != (EntryDescriptorLod *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->parent).parent.entries.elements = (EntryDescriptorLod *)0x0;
		(this->parent).parent.entries.cnt = 0;
		(this->parent).parent.entries.field2_0x6 = 0;
		return;
		}
		
	*/
	return;
}

