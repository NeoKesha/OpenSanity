#include "headers/Known/LevelStructure/Data/CodeSectionData/CodeModel/SectionDataCodeModel.h"

void SectionDataCodeModel::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataCodeModel * __thiscall SectionDataCodeModel::Dispose(SectionDataCodeModel *this,byte param_1){
		(this->parent).parent.vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_CodeModel_Base;
		SectionDataCodeModelBase::CleanUp(&this->parent);
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

