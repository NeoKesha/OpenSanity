#include "headers/Known/LevelStructure/Data/GraphicsSectionData/RigidModel/SectionDataRigidModelA.h"

void SectionDataRigidModelA::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataRigidModelA::Dispose(SectionDataRigidModelA *this){
		EntryDescriptorRigidModel2 *pEVar1;
		TwinString::Dispose(&this->folder);
		(this->parent).parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_RigidModel;
		SectionDataRigidModel::CleanUp(&this->parent);
		pEVar1 = (this->parent).entries.elements;
		if (pEVar1 != (EntryDescriptorRigidModel2 *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->parent).entries.elements = (EntryDescriptorRigidModel2 *)0x0;
		(this->parent).entries.cnt = 0;
		(this->parent).entries.field2_0x6 = 0;
		return;
		}
		
	*/
	return;
}

void SectionDataRigidModelA::Dispose_1(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataRigidModelA * __thiscall SectionDataRigidModelA::Dispose(SectionDataRigidModelA *this,byte param_1){
		EntryDescriptorRigidModel2 *pEVar1;
		TwinString::Dispose(&this->folder);
		(this->parent).parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_RigidModel;
		SectionDataRigidModel::CleanUp(&this->parent);
		pEVar1 = (this->parent).entries.elements;
		if (pEVar1 != (EntryDescriptorRigidModel2 *)0x0) {
		VirtualPool::FreeMemory(&pEVar1[-1].id);
		}
		(this->parent).entries.elements = (EntryDescriptorRigidModel2 *)0x0;
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

