#include "headers/Known/AgentLab/ActionFactory/Actions/ActionNowTransformJoint.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionNowTransformJoint::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionNowTransformJoint::Dispose(ActionNowTransformJoint *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionNowTransformJoint::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionNowTransformJoint * __thiscall ActionNowTransformJoint::Construct(ActionNowTransformJoint *this,uint param_1){
		uint uVar1;
		uint uVar2;
		uVar1 = this->unlabelled12;
		uVar2 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_NowTransformJoint;
		this->unlabelled12 = uVar2 ^ (uVar1 ^ param_1) & 7;
		return this;
		}
		
	*/
	return;
}

int ActionNowTransformJoint::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionNowTransformJoint::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionNowTransformJoint::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionNowTransformJoint::ExecuteFromCallContext(ActionNowTransformJoint *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceNodeAbstract *pIVar2;
		InstanceNodeObjectLink *this_00;
		uint uVar3;
		InstanceContext *pIVar4;
		pIVar4 = (ctx->parent).ctx;
		uVar3 = this->unlabelled12 & 7;
		pIVar1 = (pIVar4->parent).ctx;
		if (uVar3 == 0) {
		InstanceContext::thunk_FUN_00054ce0(pIVar4,(int *)&ctx);
		pIVar4 = ctx;
		}
		else if (uVar3 == 1) {
		pIVar2 = (pIVar4->nodes).array[0xc];
		if ((pIVar2 != (InstanceNodeAbstract *)0x0) && ((*(byte *)&pIVar2->field6_0x14 & 1) != 0)) {
		(pIVar4->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		}
		pIVar4 = (InstanceContext *)(pIVar4->nodes).array[0xc];
		}
		else if (uVar3 == 2) {
		pIVar2 = (pIVar4->nodes).array[0xd];
		if (((pIVar2 != (InstanceNodeAbstract *)0x0) && ((*(byte *)&pIVar2->field6_0x14 & 1) != 0)) &&((~(byte)((uint)(pIVar4->parent).field14_0x20.matrix2.m43 >> 0x14) & 1) != 0)) {
		(pIVar4->nodes).array[0xd] = (InstanceNodeAbstract *)0x0;
		}
		pIVar4 = (InstanceContext *)(pIVar4->nodes).array[0xd];
		}
		else {
		pIVar4 = (InstanceContext *)0x0;
		}
		if ((pIVar1 != (InstanceContext *)0x0) && (pIVar4 != (InstanceContext *)0x0)) {
		this_00 = InstanceNodeObjectLink::Build((int)pIVar1);
		InstanceNodeObjectLink::FUN_000f6cd0(this_00,(int)pIVar4,'\0');
		}
		return;
		}
		
	*/
	return;
}

