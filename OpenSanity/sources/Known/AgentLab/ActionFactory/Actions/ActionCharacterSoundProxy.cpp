#include "headers/Known/AgentLab/ActionFactory/Actions/ActionCharacterSoundProxy.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionCharacterSoundProxy::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionCharacterSoundProxy::Dispose(ActionCharacterSoundProxy *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionCharacterSoundProxy::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionCharacterSoundProxy * __fastcall ActionCharacterSoundProxy::Construct(ActionCharacterSoundProxy *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_CharacterSoundProxy;
		this->unlabelled12 = uVar1 & 0xfffffeff | 0xff;
		return this;
		}
		
	*/
	return;
}

int ActionCharacterSoundProxy::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionCharacterSoundProxy::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionCharacterSoundProxy::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall ActionCharacterSoundProxy::ExecuteFromCallContext(ActionCharacterSoundProxy *this,undefined4 time_clock,InstanceContext *ctx){
		uint uVar1;
		InstanceContext *pIVar2;
		InstanceNodeAbstract *this_00;
		int iVar3;
		if ((this->unlabelled12 & 0x100U) == 0) {
		uVar1 = this->unlabelled12 & 0xff;
		if (uVar1 == 6) {
		pIVar2 = (InstanceContext *)0x0;
		goto LAB_00046af4;
		}
		}
		else {
		uVar1 = (GameController1->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar1 == 6) {
		pIVar2 = (InstanceContext *)0x0;
		goto LAB_00046af4;
		}
		}
		pIVar2 = (InstanceContext *)(GameController1->chunkDescriptor).playerInstanceContexts[uVar1];
		if (pIVar2 != (InstanceContext *)0x0) {
		pIVar2 = *(InstanceContext **)&pIVar2->parent;
		}
		LAB_00046af4:if (pIVar2 != (InstanceContext *)0x0) {
		this_00 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar2->field27_0xe0 + 1),Instance);
		pIVar2 = (ctx->parent).ctx;
		iVar3 = (pIVar2->parent).field14_0x20.field27_0x78;
		if (iVar3 != 0) {
		iVar3 = FUN_00015286(iVar3);
		FUN_00172f40((int)this_00,iVar3);
		return;
		}
		FUN_00172f40((int)this_00,(int)(pIVar2->parent).field14_0x20.matrix2.m33);
		}
		return;
		}
		
	*/
	return;
}

