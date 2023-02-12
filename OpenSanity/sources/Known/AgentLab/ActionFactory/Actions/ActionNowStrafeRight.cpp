#include "headers/Known/AgentLab/ActionFactory/Actions/ActionNowStrafeRight.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionNowStrafeRight::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionNowStrafeRight::Dispose(ActionNowStrafeRight *this,byte param_1){
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

void ActionNowStrafeRight::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionNowStrafeRight::ExecuteFromCallContext(ActionNowStrafeRight *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceContext *this_00;
		int iVar2;
		void *pvVar3;
		undefined4 uVar4;
		float local_20;
		undefined4 local_1c;
		undefined4 local_18;
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
		local_20 = FUN_00180490(&this->unlabelled12,pvVar3);
		local_20 = deltaTimeSec * local_20;
		local_1c = 0;
		local_18 = 0;
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

void ActionNowStrafeRight::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionNowStrafeRight::Construct(ActionNowStrafeRight *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_NowStrafeRight;
		this->unlabelled12 = 0;
		return;
		}
		
	*/
	return;
}

int ActionNowStrafeRight::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionNowStrafeRight::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionNowStrafeRight::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionNowStrafeRight::UnkMethod(ActionNowStrafeRight *this,int *param_1){
		FUN_00181a50(param_1,(uint *)&this->unlabelled12);
		return;
		}
		
	*/
	return;
}

