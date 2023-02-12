#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetState.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetState::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetState::Dispose(ActionSetState *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetState::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionSetState::Construct(ActionSetState *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetState;
		*(undefined *)&this->unlabelled12 = 0;
		return;
		}
		
	*/
	return;
}

int ActionSetState::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetState::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionSetState::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetState::UnkMethod(ActionSetState *this,int *param_1){
		char cVar1;
		bool bVar2;
		short *psVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar3 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar3 == 0x61) {
		bVar2 = FUN_0017ef90((int)psVar3);
		*(bool *)&this->unlabelled12 = bVar2;
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionSetState::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetState::ExecuteFromCallContext(ActionSetState *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
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
		UnkFamily15A::SetResetBit(this_00,(uint)uVar1,*(bool *)&this->unlabelled12);
		}
		}
		return;
		}
		
	*/
	return;
}

