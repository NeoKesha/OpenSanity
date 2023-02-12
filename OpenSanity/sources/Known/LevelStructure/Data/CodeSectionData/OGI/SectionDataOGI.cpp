#include "headers/Known/LevelStructure/Data/CodeSectionData/OGI/SectionDataOGI.h"

void SectionDataOGI::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataOGI * __thiscall SectionDataOGI::Dispose(SectionDataOGI *this,byte param_1){
		(this->parent).parent.vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_OGI_Base;
		SectionDataOGIBase::CleanUp(&this->parent);
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

