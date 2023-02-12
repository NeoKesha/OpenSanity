#include "headers/Known/LevelStructure/Data/CodeSectionData/GameObject/SectionDataGameObject.h"

void SectionDataGameObject::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataGameObject * __thiscall SectionDataGameObject::Dispose(SectionDataGameObject *this,byte param_1){
		(this->parent).parent.vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_GameObject_Base;
		SectionDataGameObjectBase::CleanUp(this);
		VirtualPool::FreeMemory((this->parent).elements);
		VirtualPool::FreeMemory((this->parent).indexes);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

