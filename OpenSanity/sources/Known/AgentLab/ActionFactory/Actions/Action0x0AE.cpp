#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0AE.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0AE::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0AE::Dispose(Action0x0AE *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x0AE::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x0AE::Construct(Action0x0AE *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0AE;
		return;
		}
		
	*/
	return;
}

int Action0x0AE::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0AE::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x0AE::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0AE::ExecuteFromCallContext(Action0x0AE *this,undefined4 time_clock,InstanceContext *ctx){
		float *pfVar1;
		InstanceContext *pIVar2;
		int iVar3;
		InstanceContext *pIVar4;
		pIVar2 = (ctx->parent).ctx;
		iVar3 = (pIVar2->parent).field14_0x20.field27_0x78;
		if (iVar3 != 0) {
		pIVar4 = *(InstanceContext **)(iVar3 + 4);
		(pIVar2->parent).field14_0x20.field4_0x10 = pIVar4;
		if (pIVar4 != (InstanceContext *)0x0) {
		pfVar1 = &(pIVar2->parent).field14_0x20.matrix2.m43;
		*pfVar1 = (float)((uint)*pfVar1 | 1);
		}
		pfVar1 = &(pIVar2->parent).field14_0x20.matrix2.m43;
		*pfVar1 = (float)((uint)*pfVar1 & 0xfffffffd);
		}
		return;
		}
		
	*/
	return;
}

