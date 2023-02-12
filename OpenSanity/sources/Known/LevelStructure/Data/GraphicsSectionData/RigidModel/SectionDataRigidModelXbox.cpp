#include "headers/Known/LevelStructure/Data/GraphicsSectionData/RigidModel/SectionDataRigidModelXbox.h"

void SectionDataRigidModelXbox::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataRigidModelXbox * __fastcall SectionDataRigidModelXbox::Construct(SectionDataRigidModelXbox *this){
		TwinString tmpStr1;
		TwinString *tmpStr;
		TwinString::Set(&tmpStr1,"RigidModelsXBox\\");
		(this->parent).parent.entries.elements = (EntryDescriptorRigidModel2 *)0x0;
		(this->parent).parent.entries.cnt = 0;
		(this->parent).parent.entries.field2_0x6 = 0;
		(this->parent).parent.entries.field3_0x8 = 0x40;
		(this->parent).parent.pool = (undefined *)0x0;
		(this->parent).parent.rigidModelList = (ResourceListTwinsanityRigidModel *)0x0;
		tmpStr = &(this->parent).folder;
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_RigidModel_A;
		tmpStr->value = (char *)0x0;
		(this->parent).folder.strLength = 0;
		(this->parent).folder.strSize = 0;
		TwinString::Copy(tmpStr,tmpStr1.value);
		TwinString::Dispose(&tmpStr1);
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_RigidModel_XBox;
		return this;
		}
		
	*/
	return;
}

void SectionDataRigidModelXbox::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataRigidModelXbox::Dispose(SectionDataRigidModelXbox *this){
		EntryDescriptorRigidModel2 *pEVar1;
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_RigidModel_XBox;
		TwinString::Dispose(&(this->parent).folder);
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_RigidModel;
		SectionDataRigidModel::CleanUp((SectionDataRigidModel *)this);
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

void SectionDataRigidModelXbox::Dispose_2(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataRigidModelXbox * __thiscall SectionDataRigidModelXbox::Dispose(SectionDataRigidModelXbox *this,byte param_1){
		EntryDescriptorRigidModel2 *pEVar1;
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_RigidModel_XBox;
		TwinString::Dispose(&(this->parent).folder);
		(this->parent).parent.parent.vtable =(GraphicsSectionDataAbstract_VTable *)&SectionData_VT_RigidModel;
		SectionDataRigidModel::CleanUp((SectionDataRigidModel *)this);
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

