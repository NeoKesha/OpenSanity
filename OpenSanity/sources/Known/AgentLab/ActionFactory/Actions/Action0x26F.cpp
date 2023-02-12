#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x26F.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x26F::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x26F::Dispose(Action0x26F *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x26F::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x26F::Construct(Action0x26F *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x26F;
		return;
		}
		
	*/
	return;
}

int Action0x26F::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x26F::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x26F::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall Action0x26F::ExecuteFromCallContext(Action0x26F *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		uint uVar2;
		InstanceContext *pIVar3;
		InstanceNodeAbstract *pIVar4;
		uVar2 = (GameController1->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar2 == 6) {
		pIVar3 = (InstanceContext *)0x0;
		}
		else {
		pIVar3 = (InstanceContext *)(GameController1->chunkDescriptor).playerInstanceContexts[uVar2];
		if (pIVar3 != (InstanceContext *)0x0) {
		pIVar3 = *(InstanceContext **)&pIVar3->parent;
		}
		}
		pIVar1 = (((ctx->parent).ctx)->parent).ctx;
		pIVar4 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar3->field27_0xe0 + 1),Camera);
		if ((pIVar4 != (InstanceNodeAbstract *)0x0) && (((uint)pIVar4[2].vtable >> 7 & 1) == 0)) {
		thunk_FUN_00099440((int)&pIVar4[3].field2_0x8,(int **)pIVar1);
		}
		return;
		}
		
	*/
	return;
}

