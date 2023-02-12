#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Misc/InstanceNodeChiChi.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated2/NodeRelated2B.h"
void InstanceNodeChiChi::Construct(NodeRelated2B* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeChiChi * __thiscall InstanceNodeChiChi::Construct(InstanceNodeChiChi *this,NodeRelated2B *param_1){
		InstanceNodeAbstract::Contruct(&this->parent);
		this->field1_0x18 = param_1;
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_ChiChi;
		return this;
		}
		
	*/
	return;
}

void InstanceNodeChiChi::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * __thiscall InstanceNodeChiChi::Dispose(InstanceNodeChiChi *this,byte param_1){
		InstanceNodeA::Dispose((InstanceNodeA *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void InstanceNodeChiChi::GetIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined InstanceNodeChiChi::GetIndex(void){
		return 0x11;
		}
		
	*/
	return;
}

uint InstanceNodeChiChi::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 InstanceNodeChiChi::GetBuilderIndex(void){
		return 0x9008;
		}
		
	*/
	return 0;
}

