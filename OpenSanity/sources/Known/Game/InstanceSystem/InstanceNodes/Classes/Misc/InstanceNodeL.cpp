#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Misc/InstanceNodeL.h"

void InstanceNodeL::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeL * __fastcall InstanceNodeL::Construct(InstanceNodeL *this){
		InstanceNodeAbstract::Contruct(&this->parent);
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_L;
		return this;
		}
		
	*/
	return;
}

void InstanceNodeL::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * __thiscall InstanceNodeL::Dispose(InstanceNodeL *this,byte param_1){
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_L;
		InstanceNodeAbstract::UnrollVtable(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

uint InstanceNodeL::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 InstanceNodeL::GetBuilderIndex(void){
		return 0x9001;
		}
		
	*/
	return 0;
}

void InstanceNodeL::Dispose_3(InstanceNodeL* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeL::Dispose(InstanceNodeL *param_1){
		(param_1->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_L;
		InstanceNodeAbstract::UnrollVtable(&param_1->parent);
		return;
		}
		
	*/
	return;
}

