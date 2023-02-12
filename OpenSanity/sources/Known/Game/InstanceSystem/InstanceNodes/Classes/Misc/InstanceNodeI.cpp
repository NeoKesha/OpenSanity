#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Misc/InstanceNodeI.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated2/NodeRelated2I.h"
void InstanceNodeI::Construct(NodeRelated2I* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeI * __thiscall InstanceNodeI::Construct(InstanceNodeI *this,NodeRelated2I *param_1){
		InstanceNodeAbstract::Contruct(&this->parent);
		this->field1_0x18 = param_1;
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_I;
		return this;
		}
		
	*/
	return;
}

void InstanceNodeI::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * __thiscall InstanceNodeI::Dispose(InstanceNodeI *this,byte param_1){
		NodeRelated2Abstract *this_00;
		this_00 = (NodeRelated2Abstract *)this->field1_0x18;
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_A;
		if (this_00 != (NodeRelated2Abstract *)0x0) {
		(*this_00->vtable->Dispose)(this_00,1);
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

byte InstanceNodeI::GetIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte InstanceNodeI::GetIndex(void){
		return 0xe;
		}
		
	*/
	return 0;
}

uint InstanceNodeI::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 InstanceNodeI::GetBuilderIndex(void){
		return 0x9005;
		}
		
	*/
	return 0;
}

