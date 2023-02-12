#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSwitchCharacter.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSwitchCharacter::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSwitchCharacter::ExecuteFromCallContext(ActionSwitchCharacter *this,undefined4 time_clock,InstanceContext *ctx){
		char cVar1;
		uint uVar2;
		InstanceContext *iVar3;
		InstanceNodeAbstract *pIVar4;
		int index;
		bool bVar1;
		bool cVar5;
		if (this->unlabelled16 != 6) {
		GameController::thunk_FUN_000bc6a0(GameController1,this->unlabelled16,true,true);
		return;
		}
		uVar2 = (uint)this->unlabelled12 >> 5 & 0xff;
		if (uVar2 == 0xff) {
		if ((this->unlabelled12 & 0x10U) == 0) {
		return;
		}
		pIVar4 = InstanceDataList::GetNode(&((((ctx->parent).ctx)->parent).ctx)->nodes,ObjectLink);
		if (pIVar4 == (InstanceNodeAbstract *)0x0) {
		return;
		}
		iVar3 = *(InstanceContext **)(&pIVar4[1].field2_0x8 + (this->unlabelled12 & 0xfU) * 2);
		}
		else {
		iVar3 = (ctx->parent).ctx;
		iVar3 = (*(iVar3->parent).vtable[7].Dispose)(iVar3,(byte)uVar2);
		}
		if ((((iVar3 != (InstanceContext *)0x0) &&(pIVar4 = InstanceDataList::GetNode(&iVar3->nodes,Instance),pIVar4 != (InstanceNodeAbstract *)0x0)) &&(cVar1 = (**(code **)(*(int *)pIVar4[5].time + 0x2c))(), cVar1 != '\0')) &&(pIVar4[5].time != 0)) {
		cVar5 = true;
		bVar1 = true;
		index = BlackboardAbstract::GetIntValue(*(BlackboardAbstract **)(pIVar4[5].time + 0x1c),0);
		GameController::thunk_FUN_000bc6a0(GameController1,index,bVar1,cVar5);
		}
		return;
		}
		
	*/
	return;
}

void ActionSwitchCharacter::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSwitchCharacter::Dispose(ActionSwitchCharacter *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSwitchCharacter::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSwitchCharacter * __fastcall ActionSwitchCharacter::Construct(ActionSwitchCharacter *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SwitchCharacter;
		this->unlabelled12 = uVar1 & 0xffffffef | 0x1fef;
		this->unlabelled16 = 6;
		return this;
		}
		
	*/
	return;
}

int ActionSwitchCharacter::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSwitchCharacter::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

void ActionSwitchCharacter::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSwitchCharacter::UnkMethod(ActionSwitchCharacter *this,int *param_1){
		char cVar1;
		short *psVar2;
		int iVar3;
		uint uVar4;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0x72) {
		uVar4 = (*(uint *)(psVar2 + 2) ^ this->unlabelled12) & 0xf ^ this->unlabelled12;
		this->unlabelled12 = uVar4 - 1 & 0xf | uVar4 & 0xfffffff0 | 0x10;
		}
		else if ((*psVar2 == -1) && (*(char *)(psVar2 + 1) == '\x04')) {
		iVar3 = *(int *)(psVar2 + 2);
		if (iVar3 == 0x1c) {
		this->unlabelled12 = this->unlabelled12 & 0xffffff7fU | 0x1f60;
		}
		else if (iVar3 == 0x74) {
		this->unlabelled12 = this->unlabelled12 & 0xffffff1fU | 0x1f00;
		}
		else {
		iVar3 = thunk_FUN_00066f00(iVar3);
		this->unlabelled16 = iVar3;
		}
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

