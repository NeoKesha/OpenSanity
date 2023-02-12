#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Misc/InstanceNodeCrate.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated2/NodeRelated2D.h"
void InstanceNodeCrate::Construct(NodeRelated2D* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeCrate * __thiscall InstanceNodeCrate::Construct(InstanceNodeCrate *this,NodeRelated2D *param_1){
		InstanceNodeAbstract::Contruct(&this->parent);
		this->field1_0x18 = param_1;
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_Crate;
		return this;
		}
		
	*/
	return;
}

void InstanceNodeCrate::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * __thiscall InstanceNodeCrate::Dispose(InstanceNodeCrate *this,byte param_1){
		NodeRelated2D *this_00;
		this_00 = this->field1_0x18;
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_A;
		if (this_00 != (NodeRelated2D *)0x0) {
		(*((this_00->parent).vtable)->Dispose)(&this_00->parent,1);
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

byte InstanceNodeCrate::GetIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte InstanceNodeCrate::GetIndex(void){
		return 0xd;
		}
		
	*/
	return 0;
}

uint InstanceNodeCrate::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 InstanceNodeCrate::GetBuilderIndex(void){
		return 0x9003;
		}
		
	*/
	return 0;
}

