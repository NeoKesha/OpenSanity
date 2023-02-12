#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Misc/InstanceNodePayGate.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated2/NodeRelated2H.h"
void InstanceNodePayGate::Construct(NodeRelated2H* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodePayGate * __thiscall InstanceNodePayGate::Construct(InstanceNodePayGate *this,NodeRelated2H *param_1){
		InstanceNodeAbstract::Contruct(&this->parent);
		this->field1_0x18 = param_1;
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_PayGate;
		return this;
		}
		
	*/
	return;
}

void InstanceNodePayGate::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * __thiscall InstanceNodePayGate::Dispose(InstanceNodePayGate *this,byte param_1){
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

void InstanceNodePayGate::SetCtx(uint ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodePayGate::SetCtx(InstanceNodePayGate *this,InstanceContext *ctx){
		NodeRelated2Abstract *this_00;
		uint uVar1;
		NodeRelated1H *pNVar1;
		this_00 = (NodeRelated2Abstract *)this->field1_0x18;
		InstanceNodeAbstract::SetCtx(&this->parent,ctx);
		NodeRelated2Abstract::FUN_001accf0(this_00);
		pNVar1 = (NodeRelated1H *)(this->field1_0x18->parent).related;
		uVar1 = BlackboardAbstract::GetIntValue((this->field1_0x18->parent).blackboard,2);
		pNVar1->field1_0x14 = pNVar1->field1_0x14 ^ (pNVar1->field1_0x14 ^ uVar1) & 0xfff;
		return;
		}
		
	*/
	return;
}

void InstanceNodePayGate::UpdateTime(int param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodePayGate::UpdateTime(InstanceNodePayGate *this,int param_1,int param_2){
		uint uVar1;
		NodeRelated1H *pNVar1;
		NodeRelated2Abstract::UpdateTime((NodeRelated2Abstract *)this->field1_0x18,GameController5->gameResources,(UnkTimePack *)param_1,param_2);
		(this->parent).time = *(uint *)(param_1 + 4);
		pNVar1 = (NodeRelated1H *)(this->field1_0x18->parent).related;
		uVar1 = BlackboardAbstract::GetIntValue((this->field1_0x18->parent).blackboard,2);
		pNVar1->field1_0x14 = pNVar1->field1_0x14 ^ (pNVar1->field1_0x14 ^ uVar1) & 0xfff;
		return;
		}
		
	*/
	return;
}

byte InstanceNodePayGate::GetIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte InstanceNodePayGate::GetIndex(void){
		return 0x12;
		}
		
	*/
	return 0;
}

uint InstanceNodePayGate::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 InstanceNodePayGate::GetBuilderIndex(void){
		return 0x900a;
		}
		
	*/
	return 0;
}

