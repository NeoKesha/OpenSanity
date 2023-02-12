#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Misc/InstanceNodeCreature.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated2/NodeRelated2E.h"
void InstanceNodeCreature::Construct(NodeRelated2E* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeCreature * __thiscall InstanceNodeCreature::Construct(InstanceNodeCreature *this,NodeRelated2E *param_1){
		InstanceNodeAbstract::Contruct(&this->parent);
		this->field1_0x18 = param_1;
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_Creature;
		return this;
		}
		
	*/
	return;
}

void InstanceNodeCreature::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * __thiscall InstanceNodeCreature::Dispose(InstanceNodeCreature *this,byte param_1){
		NodeRelated2E *this_00;
		this_00 = this->field1_0x18;
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_A;
		if (this_00 != (NodeRelated2E *)0x0) {
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

byte InstanceNodeCreature::GetIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte InstanceNodeCreature::GetIndex(void){
		return 0xf;
		}
		
	*/
	return 0;
}

uint InstanceNodeCreature::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 InstanceNodeCreature::GetBuilderIndex(void){
		return 0x9004;
		}
		
	*/
	return 0;
}

