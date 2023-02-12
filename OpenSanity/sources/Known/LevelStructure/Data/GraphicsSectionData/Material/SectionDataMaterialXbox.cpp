#include "headers/Known/LevelStructure/Data/GraphicsSectionData/Material/SectionDataMaterialXbox.h"

void SectionDataMaterialXbox::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataMaterialXbox::Dispose(SectionDataMaterial *this){
		EntryDescriptorMaterial *pEVar1;
		(this->parent).vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Material_XBox;
		TwinString::Dispose((TwinString *)(this + 1));
		(this->parent).vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Material;
		SectionDataMaterial::FreeElements(this);
		pEVar1 = (this->entries).elements;
		if (pEVar1 != (EntryDescriptorMaterial *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->entries).elements = (EntryDescriptorMaterial *)0x0;
		(this->entries).cnt = 0;
		(this->entries).field2_0x6 = 0;
		return;
		}
		
	*/
	return;
}

void SectionDataMaterialXbox::Dispose_1(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataMaterialXbox * __thiscall SectionDataMaterialXbox::Dispose(SectionDataMaterialXbox *this,byte param_1){
		EntryDescriptorMaterial *pEVar1;
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Material_XBox;
		TwinString::Dispose(&(this->parent).folder);
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Material;
		SectionDataMaterial::FreeElements((SectionDataMaterial *)this);
		pEVar1 = (this->parent).parent.entries.elements;
		if (pEVar1 != (EntryDescriptorMaterial *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->parent).parent.entries.elements = (EntryDescriptorMaterial *)0x0;
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

void SectionDataMaterialXbox::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __fastcall SectionDataMaterialXbox::Construct(SectionDataMaterialXbox *this){
		TwinString tmpStr1;
		TwinString *tmpStr;
		TwinString::Set(&tmpStr1,"MaterialsXBox\\");
		(this->parent).parent.entries.elements = (EntryDescriptorMaterial *)0x0;
		(this->parent).parent.entries.cnt = 0;
		(this->parent).parent.entries.field2_0x6 = 0;
		(this->parent).parent.entries.field3_0x8 = 0x40;
		(this->parent).parent.pool = (undefined *)0x0;
		(this->parent).parent.materialList = (ResourceListTwinsanityMaterial *)0x0;
		tmpStr = &(this->parent).folder;
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Material_A;
		tmpStr->value = (char *)0x0;
		(this->parent).folder.strLength = 0;
		(this->parent).folder.strSize = 0;
		TwinString::Copy(tmpStr,tmpStr1.value);
		TwinString::Dispose(&tmpStr1);
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_Material_XBox;
		return (undefined4 *)this;
		}
		
	*/
	return;
}

