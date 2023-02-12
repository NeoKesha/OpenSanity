#include "headers/Known/LevelStructure/Data/GraphicsSectionData/BlendSkin/SectionDataBlendSkinA.h"

void SectionDataBlendSkinA::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataBlendSkinA::Dispose(SectionDataBlendSkinA *this){
		EntryDescriptorBlendSkin *pEVar1;
		TwinString::Dispose(&this->folder);
		(this->parent).parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_BlendSkin;
		SectionDataBlendSkin::CleanUp(&this->parent);
		pEVar1 = (this->parent).entries.elements;
		if (pEVar1 != (EntryDescriptorBlendSkin *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->parent).entries.elements = (EntryDescriptorBlendSkin *)0x0;
		(this->parent).entries.cnt = 0;
		(this->parent).entries.field2_0x6 = 0;
		return;
		}
		
	*/
	return;
}

void SectionDataBlendSkinA::Dispose_1(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataBlendSkinA * __thiscall SectionDataBlendSkinA::Dispose(SectionDataBlendSkinA *this,byte param_1){
		EntryDescriptorBlendSkin *pEVar1;
		TwinString::Dispose(&this->folder);
		(this->parent).parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_BlendSkin;
		SectionDataBlendSkin::CleanUp(&this->parent);
		pEVar1 = (this->parent).entries.elements;
		if (pEVar1 != (EntryDescriptorBlendSkin *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->parent).entries.elements = (EntryDescriptorBlendSkin *)0x0;
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

