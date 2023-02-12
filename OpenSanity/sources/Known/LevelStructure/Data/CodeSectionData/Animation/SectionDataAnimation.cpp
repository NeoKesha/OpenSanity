#include "headers/Known/LevelStructure/Data/CodeSectionData/Animation/SectionDataAnimation.h"

void SectionDataAnimation::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataAnimation * __thiscall SectionDataAnimation::Dispose(SectionDataAnimation *this,byte param_1){
		(this->parent).parent.vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_Animation_Base;
		SectionDataAnimationBase::CleanUp(&this->parent);
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

