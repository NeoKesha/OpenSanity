#include "headers/Known/AgentLab/ActionFactory/Actions/ActionToggleState.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionToggleState::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionToggleState::Dispose(ActionToggleState *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionToggleState::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionToggleState::Construct(ActionToggleState *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ToggleState;
		return;
		}
		
	*/
	return;
}

int ActionToggleState::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionToggleState::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionToggleState::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionToggleState::ExecuteFromCallContext(ActionToggleState *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		ushort uVar1;
		float fVar2;
		int iVar3;
		AutoClass16 *pAVar4;
		UnkFamily15A *this_00;
		fVar2 = (((ctx->parent).ctx)->parent).field14_0x20.matrix2.m42;
		iVar3 = *(int *)((int)fVar2 + 0x1c);
		if ((*(byte *)(iVar3 + 4) & 0x40) != 0) {
		uVar1 = *(ushort *)((int)fVar2 + 0x26);
		pAVar4 = UnkFamily16A::FUN_001b1e00(PTR_DefaultRM,*(short *)((int)fVar2 + 0x24));
		if (*(char *)(iVar3 + 4) < '\0') {
		this_00 = pAVar4->field7_0x1c;
		}
		else {
		this_00 = pAVar4->field8_0x20;
		}
		if (this_00 != (UnkFamily15A *)0x0) {
		FUN_001b1f90(this_00,(uint)uVar1);
		}
		}
		return;
		}
		
	*/
	return;
}

