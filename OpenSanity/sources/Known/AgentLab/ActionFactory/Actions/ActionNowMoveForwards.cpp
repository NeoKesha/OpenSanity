#include "headers/Known/AgentLab/ActionFactory/Actions/ActionNowMoveForwards.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionNowMoveForwards::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionNowMoveForwards::Dispose(ActionNowMoveForwards *this,byte param_1){
		::EmptyFunction();
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionNowMoveForwards::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionNowMoveForwards::ExecuteFromCallContext(ActionNowMoveForwards *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceContext *this_00;
		int iVar2;
		void *pvVar3;
		undefined4 uVar4;
		float local_20;
		undefined4 local_1c;
		float local_18;
		float local_14;
		pIVar1 = (ctx->parent).ctx;
		this_00 = (pIVar1->parent).ctx;
		iVar2 = (pIVar1->parent).field14_0x20.field27_0x78;
		if (iVar2 == 0) {
		pvVar3 = (void *)(pIVar1->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar3 = (void *)FUN_00017ba8(iVar2);
		}
		local_18 = FUN_00180490(&this->unlabelled12,pvVar3);
		local_18 = deltaTimeSec * local_18;
		local_20 = 0.0;
		local_1c = 0;
		local_14 = FLOAT_0038639c;
		uVar4 = FUN_0018b6f0((this_00->parent).transform,&local_20);
		if ((char)uVar4 != '\0') {
		InstanceContext::RegisterCtxPtrToList(this_00);
		}
		return;
		}
		
	*/
	return;
}

void ActionNowMoveForwards::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionNowMoveForwards::Construct(ActionNowMoveForwards *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_NowMoveForwards;
		this->unlabelled12 = 0;
		return;
		}
		
	*/
	return;
}

int ActionNowMoveForwards::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionNowMoveForwards::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionNowMoveForwards::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionNowMoveForwards::UnkMethod(ActionNowMoveForwards *this,int *param_1){
		FUN_00181a50(param_1,(uint *)&this->unlabelled12);
		return;
		}
		
	*/
	return;
}

