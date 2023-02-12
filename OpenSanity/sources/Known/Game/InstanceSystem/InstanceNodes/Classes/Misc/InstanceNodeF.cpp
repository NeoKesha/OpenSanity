#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Misc/InstanceNodeF.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated2/NodeRelated2F.h"
void InstanceNodeF::Construct(NodeRelated2F* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeF * __thiscall InstanceNodeF::Construct(InstanceNodeF *this,NodeRelated2F *param_1){
		InstanceNodeAbstract::Contruct(&this->parent);
		this->field1_0x18 = param_1;
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_F;
		return this;
		}
		
	*/
	return;
}

void InstanceNodeF::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * __thiscall InstanceNodeF::Dispose(InstanceNodeF *this,byte param_1){
		NodeRelated2F *this_00;
		this_00 = this->field1_0x18;
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_A;
		if (this_00 != (NodeRelated2F *)0x0) {
		(*((this_00->parent).parent.vtable)->Dispose)((NodeRelated2Abstract *)this_00,1);
		}
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

byte InstanceNodeF::GetIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte InstanceNodeF::GetIndex(void){
		return 0x13;
		}
		
	*/
	return 0;
}

uint InstanceNodeF::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 InstanceNodeF::GetBuilderIndex(void){
		return 0x900b;
		}
		
	*/
	return 0;
}

