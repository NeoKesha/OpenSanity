#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Lod/SectionDataLodA.h"

void SectionDataLodA::Dispose(SectionDataLodA* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataLodA::Dispose(SectionDataLodA *param_1){
		EntryDescriptorLod *pEVar1;
		TwinString::Dispose(&param_1->folder);
		(param_1->parent).parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Lod;
		SectionDataLod::CleanUp(&param_1->parent);
		pEVar1 = (param_1->parent).entries.elements;
		if (pEVar1 != (EntryDescriptorLod *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(param_1->parent).entries.elements = (EntryDescriptorLod *)0x0;
		(param_1->parent).entries.cnt = 0;
		(param_1->parent).entries.field2_0x6 = 0;
		return;
		}
		
	*/
	return;
}

void SectionDataLodA::Dispose_1(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataLodA * __thiscall SectionDataLodA::Dispose(SectionDataLodA *this,byte param_1){
		EntryDescriptorLod *pEVar1;
		TwinString::Dispose(&this->folder);
		(this->parent).parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Lod;
		SectionDataLod::CleanUp(&this->parent);
		pEVar1 = (this->parent).entries.elements;
		if (pEVar1 != (EntryDescriptorLod *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->parent).entries.elements = (EntryDescriptorLod *)0x0;
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

void SectionDataLodA::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataLodA::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataLodA::Construct(char** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataLodA * __thiscall SectionDataLodA::Construct(SectionDataLodA *this,char **param_1){
		(this->parent).entries.elements = (EntryDescriptorLod *)0x0;
		(this->parent).entries.cnt = 0;
		(this->parent).entries.field2_0x6 = 0;
		(this->parent).entries.field3_0x8 = 0x40;
		(this->parent).pool = (undefined *)0x0;
		(this->parent).lodList = (ResourceListTwinsanityLod *)0x0;
		(this->parent).parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Lod_A;
		(this->folder).value = (char *)0x0;
		(this->folder).strLength = 0;
		(this->folder).strSize = 0;
		TwinString::Copy(&this->folder,*param_1);
		return this;
		}
		
	*/
	return;
}

