#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Misc/InstanceNodeAA.h"

void InstanceNodeAA::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * __thiscall InstanceNodeAA::Dispose(InstanceNodeAA *this,byte param_1){
		(this->parent).parent.vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_AA;
		InstanceNodeA::Dispose(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (InstanceNodeAbstract *)this;
		}
		
	*/
	return;
}

uint InstanceNodeAA::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 InstanceNodeAA::GetBuilderIndex(void){
		return 0x900c;
		}
		
	*/
	return 0;
}

bool InstanceNodeAA::Step() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool InstanceNodeAA::Step(void){
		return false;
		}
		
	*/
	return false;
}

void InstanceNodeAA::GetIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined InstanceNodeAA::GetIndex(void){
		return 0x14;
		}
		
	*/
	return;
}

void InstanceNodeAA::Construct(void** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAA * __thiscall InstanceNodeAA::Construct(InstanceNodeAA *this,undefined **param_1){
		InstanceNodeA::Construct(&this->parent,(NodeRelated2AA *)param_1);
		(this->parent).parent.vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_AA;
		return this;
		}
		
	*/
	return;
}

