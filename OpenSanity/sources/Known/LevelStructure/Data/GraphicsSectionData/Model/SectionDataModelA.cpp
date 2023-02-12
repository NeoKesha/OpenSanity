#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Model/SectionDataModelA.h"

void SectionDataModelA::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataModelA::Dispose(SectionDataModelA *this){
		EntryDescriptorModel *pEVar1;
		TwinString::Dispose(&this->folder);
		(this->parent).parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Model;
		SectionDataModel::CleanUp(&this->parent);
		pEVar1 = (this->parent).entries.elements;
		if (pEVar1 != (EntryDescriptorModel *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->parent).entries.elements = (EntryDescriptorModel *)0x0;
		(this->parent).entries.cnt = 0;
		(this->parent).entries.field2_0x6 = 0;
		return;
		}
		
	*/
	return;
}

void SectionDataModelA::Dispose_1(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataModelA * __thiscall SectionDataModelA::Dispose(SectionDataModelA *this,byte param_1){
		EntryDescriptorModel *pEVar1;
		TwinString::Dispose(&this->folder);
		(this->parent).parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Model;
		SectionDataModel::CleanUp(&this->parent);
		pEVar1 = (this->parent).entries.elements;
		if (pEVar1 != (EntryDescriptorModel *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->parent).entries.elements = (EntryDescriptorModel *)0x0;
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

void SectionDataModelA::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataModelA::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataModelA::Construct(char** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataModelA * __thiscall SectionDataModelA::Construct(SectionDataModelA *this,char **param_1){
		(this->parent).entries.elements = (EntryDescriptorModel *)0x0;
		(this->parent).entries.cnt = 0;
		(this->parent).entries.field2_0x6 = 0;
		(this->parent).entries.field3_0x8 = 0x40;
		(this->parent).pool = (undefined *)0x0;
		(this->parent).modeList = (ResourceListTwinsanityModel *)0x0;
		(this->parent).parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Model_A;
		(this->folder).value = (char *)0x0;
		(this->folder).strLength = 0;
		(this->folder).strSize = 0;
		TwinString::Copy(&this->folder,*param_1);
		return this;
		}
		
	*/
	return;
}

