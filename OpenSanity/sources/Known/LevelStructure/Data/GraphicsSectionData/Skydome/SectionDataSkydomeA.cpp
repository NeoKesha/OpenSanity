#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Skydome/SectionDataSkydomeA.h"

void SectionDataSkydomeA::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataSkydomeA::Dispose(SectionDataSkydomeA *this){
		undefined *puVar1;
		TwinString::Dispose(&this->folder);
		(this->parent).parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Skydome;
		SectionDataSkydome::CleanUp(&this->parent);
		puVar1 = (this->parent).entries.elements;
		if (puVar1 != (undefined *)0x0) {
		VirtualPool::FreeMemory(puVar1 + -4);
		}
		(this->parent).entries.elements = (undefined *)0x0;
		(this->parent).entries.cnt = 0;
		(this->parent).entries.field2_0x6 = 0;
		return;
		}
		
	*/
	return;
}

void SectionDataSkydomeA::Dispose_1(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataSkydomeA * __thiscall SectionDataSkydomeA::Dispose(SectionDataSkydomeA *this,byte param_1){
		undefined *puVar1;
		TwinString::Dispose(&this->folder);
		(this->parent).parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Skydome;
		SectionDataSkydome::CleanUp(&this->parent);
		puVar1 = (this->parent).entries.elements;
		if (puVar1 != (undefined *)0x0) {
		VirtualPool::FreeMemory(puVar1 + -4);
		}
		(this->parent).entries.elements = (undefined *)0x0;
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

void SectionDataSkydomeA::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataSkydomeA::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataSkydomeA::Construct(char** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataSkydomeA * __thiscall SectionDataSkydomeA::Construct(SectionDataSkydomeA *this,char **param_1){
		(this->parent).entries.elements = (undefined *)0x0;
		(this->parent).entries.cnt = 0;
		(this->parent).entries.field2_0x6 = 0;
		(this->parent).entries.field3_0x8 = 0x40;
		(this->parent).pool = (undefined *)0x0;
		(this->parent).skydomeList = (ResourceListTwinsanitySkydome *)0x0;
		(this->parent).parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Skydome_A;
		(this->folder).value = (char *)0x0;
		(this->folder).strLength = 0;
		(this->folder).strSize = 0;
		TwinString::Copy(&this->folder,*param_1);
		return this;
		}
		
	*/
	return;
}

