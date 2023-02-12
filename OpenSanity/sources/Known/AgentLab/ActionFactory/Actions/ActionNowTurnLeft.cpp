#include "headers/Known/AgentLab/ActionFactory/Actions/ActionNowTurnLeft.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionNowTurnLeft::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionNowTurnLeft::Dispose(ActionNowTurnLeft *this,byte param_1){
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

void ActionNowTurnLeft::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionNowTurnLeft::Construct(ActionNowTurnLeft *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_NowTurnLeft;
		this->unlabelled12 = 0;
		return;
		}
		
	*/
	return;
}

int ActionNowTurnLeft::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionNowTurnLeft::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionNowTurnLeft::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionNowTurnLeft::UnkMethod(ActionNowTurnLeft *this,int *param_1){
		FUN_00181a50(param_1,(uint *)&this->unlabelled12);
		return;
		}
		
	*/
	return;
}

void ActionNowTurnLeft::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionNowTurnLeft::ExecuteFromCallContext(ActionNowTurnLeft *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceContext *this_00;
		int iVar2;
		bool bVar3;
		void *pvVar4;
		pIVar1 = (ctx->parent).ctx;
		this_00 = (pIVar1->parent).ctx;
		iVar2 = (pIVar1->parent).field14_0x20.field27_0x78;
		if (iVar2 == 0) {
		pvVar4 = (void *)(pIVar1->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar4 = (void *)FUN_00017ba8(iVar2);
		}
		FUN_001818b0(&this->unlabelled12,(int *)&ctx,pvVar4);
		ctx = (InstanceContext *)(int)(0.0 - (float)(int)ctx * deltaTimeSec);
		bVar3 = InstanceTransform::thunk_FUN_00064660((this_00->parent).transform,(int)ctx);
		if (bVar3 != false) {
		InstanceContext::RegisterCtxPtrToList(this_00);
		}
		return;
		}
		
	*/
	return;
}

