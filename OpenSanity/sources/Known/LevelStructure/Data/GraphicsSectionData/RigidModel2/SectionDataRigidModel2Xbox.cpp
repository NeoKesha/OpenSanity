#include "headers/Known/LevelStructure/Data/GraphicsSectionData/RigidModel2/SectionDataRigidModel2Xbox.h"

void SectionDataRigidModel2Xbox::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataRigidModel2Xbox * __fastcall SectionDataRigidModel2Xbox::Construct(SectionDataRigidModel2Xbox *this){
		TwinString tmpStr1;
		TwinString *tmpStr;
		TwinString::Set(&tmpStr1,"RigidModelsXBox\\");
		(this->parent).parent.entries.elements = (EntryDescriptorRigidModel2 *)0x0;
		(this->parent).parent.entries.cnt = 0;
		(this->parent).parent.entries.field2_0x6 = 0;
		(this->parent).parent.entries.field3_0x8 = 0x40;
		(this->parent).parent.field3_0x10 = 0;
		(this->parent).parent.rigidModelList = (ResourceListTwinsanityRigidModel2 *)0x0;
		tmpStr = &(this->parent).folder;
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_RigidModel2_A;
		tmpStr->value = (char *)0x0;
		(this->parent).folder.strLength = 0;
		(this->parent).folder.strSize = 0;
		TwinString::Copy(tmpStr,tmpStr1.value);
		TwinString::Dispose(&tmpStr1);
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_RigidModel2_Xbox;
		return this;
		}
		
	*/
	return;
}

void SectionDataRigidModel2Xbox::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataRigidModel2Xbox::Dispose(SectionDataRigidModel2Xbox *this){
		EntryDescriptorRigidModel2 *pEVar1;
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_RigidModel2_Xbox;
		TwinString::Dispose(&(this->parent).folder);
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_RigidModel2;
		SectionDataRigidModel2::CleanUp((SectionDataRigidModel2 *)this);
		pEVar1 = (this->parent).parent.entries.elements;
		if (pEVar1 != (EntryDescriptorRigidModel2 *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->parent).parent.entries.elements = (EntryDescriptorRigidModel2 *)0x0;
		(this->parent).parent.entries.cnt = 0;
		(this->parent).parent.entries.field2_0x6 = 0;
		return;
		}
		
	*/
	return;
}

void SectionDataRigidModel2Xbox::Dispose_2(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataRigidModel2Xbox * __thiscall SectionDataRigidModel2Xbox::Dispose(SectionDataRigidModel2Xbox *this,byte param_1){
		EntryDescriptorRigidModel2 *pEVar1;
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_RigidModel2_Xbox;
		TwinString::Dispose(&(this->parent).folder);
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_RigidModel2;
		SectionDataRigidModel2::CleanUp((SectionDataRigidModel2 *)this);
		pEVar1 = (this->parent).parent.entries.elements;
		if (pEVar1 != (EntryDescriptorRigidModel2 *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->parent).parent.entries.elements = (EntryDescriptorRigidModel2 *)0x0;
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

