#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Model/SectionDataModelXbox.h"

void SectionDataModelXbox::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataModelXbox * __fastcall SectionDataModelXbox::Construct(SectionDataModelXbox *this){
		TwinString tmpStr1;
		TwinString *tmpStr;
		TwinString::Set(&tmpStr1,"ModelsXBox\\");
		(this->parent).parent.entries.elements = (EntryDescriptorModel *)0x0;
		(this->parent).parent.entries.cnt = 0;
		(this->parent).parent.entries.field2_0x6 = 0;
		(this->parent).parent.entries.field3_0x8 = 0x40;
		(this->parent).parent.pool = (undefined *)0x0;
		(this->parent).parent.modeList = (ResourceListTwinsanityModel *)0x0;
		tmpStr = &(this->parent).folder;
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Model_A;
		tmpStr->value = (char *)0x0;
		(this->parent).folder.strLength = 0;
		(this->parent).folder.strSize = 0;
		TwinString::Copy(tmpStr,tmpStr1.value);
		TwinString::Dispose(&tmpStr1);
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Model_XBox;
		return this;
		}
		
	*/
	return;
}

void SectionDataModelXbox::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataModelXbox::Dispose(SectionDataModelXbox *this){
		EntryDescriptorModel *pEVar1;
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Model_XBox;
		TwinString::Dispose(&(this->parent).folder);
		(this->parent).parent.parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Model;
		SectionDataModel::CleanUp((SectionDataModel *)this);
		pEVar1 = (this->parent).parent.entries.elements;
		if (pEVar1 != (EntryDescriptorModel *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->parent).parent.entries.elements = (EntryDescriptorModel *)0x0;
		(this->parent).parent.entries.cnt = 0;
		(this->parent).parent.entries.field2_0x6 = 0;
		return;
		}
		
	*/
	return;
}

void SectionDataModelXbox::Dispose_2(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataModelXbox * __thiscall SectionDataModelXbox::Dispose(SectionDataModelXbox *this,byte param_1){
		EntryDescriptorModel *pEVar1;
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Model_XBox;
		TwinString::Dispose(&(this->parent).folder);
		(this->parent).parent.parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Model;
		SectionDataModel::CleanUp((SectionDataModel *)this);
		pEVar1 = (this->parent).parent.entries.elements;
		if (pEVar1 != (EntryDescriptorModel *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->parent).parent.entries.elements = (EntryDescriptorModel *)0x0;
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

