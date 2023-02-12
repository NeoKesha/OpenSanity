#include "headers/Known/LevelStructure/Data/GraphicsSectionData/RigidModel2/SectionDataRigidModel2A.h"

void SectionDataRigidModel2A::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SectionDataRigidModel2A::Dispose(SectionDataRigidModel2A *this){
		EntryDescriptorRigidModel2 *pEVar1;
		TwinString::Dispose(&this->folder);
		(this->parent).parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_RigidModel2;
		SectionDataRigidModel2::CleanUp(&this->parent);
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

void SectionDataRigidModel2A::Dispose_1(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataRigidModel2A * __thiscall SectionDataRigidModel2A::Dispose(SectionDataRigidModel2A *this,byte param_1){
		EntryDescriptorRigidModel2 *pEVar1;
		TwinString::Dispose(&this->folder);
		(this->parent).parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_RigidModel2;
		SectionDataRigidModel2::CleanUp(&this->parent);
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

void SectionDataRigidModel2A::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SectionDataRigidModel2A::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SectionDataRigidModel2A::Construct(char** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataRigidModel2A * __thiscall SectionDataRigidModel2A::Construct(SectionDataRigidModel2A *this,char **param_1){
		(this->parent).entries.elements = (EntryDescriptorRigidModel2 *)0x0;
		(this->parent).entries.cnt = 0;
		(this->parent).entries.field2_0x6 = 0;
		(this->parent).entries.field3_0x8 = 0x40;
		(this->parent).field3_0x10 = 0;
		(this->parent).rigidModelList = (ResourceListTwinsanityRigidModel2 *)0x0;
		(this->parent).parent.vtable = (GraphicsSectionDataAbstract_VTable *)&SectionData_VT_RigidModel2_A;
		(this->folder).value = (char *)0x0;
		(this->folder).strLength = 0;
		(this->folder).strSize = 0;
		TwinString::Copy(&this->folder,*param_1);
		return this;
		}
		
	*/
	return;
}

