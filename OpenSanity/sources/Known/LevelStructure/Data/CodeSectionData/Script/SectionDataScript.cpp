#include "headers/Known/LevelStructure/Data/CodeSectionData/Script/SectionDataScript.h"

void SectionDataScript::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataScript * __thiscall SectionDataScript::Dispose(SectionDataScript *this,byte param_1){
		(this->parent).parent.vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_Script_Base;
		SectionDataScriptBase::CleanUp(&this->parent);
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

void SectionDataScript::Construct(uint cnt) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SectionDataScript * __thiscall SectionDataScript::Construct(SectionDataScript *this,uint cnt){
		short *psVar1;
		SectionDataScriptBase::Construct(&this->parent,cnt,1);
		(this->parent).parent.vtable = (CodeSectionDataAbstract_VTable *)&SectionData_VT_Script;
		psVar1 = (short *)VirtualPool::AllocateMemory(cnt * 2);
		(this->parent).indexes = psVar1;
		return this;
		}
		
	*/
	return;
}

