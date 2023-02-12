#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x237.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x237::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x237::ExecuteFromCallContext(Action0x237 *this,undefined4 time_clock,InstanceContext *ctx){
		float fVar1;
		float fVar2;
		float fVar3;
		InstanceContext *pIVar4;
		InstanceContext *this_00;
		InstanceTransform *pIVar5;
		char cVar6;
		float fStack32;
		float fStack28;
		float fStack24;
		float fStack20;
		if ((PTR_00496350 != (InstanceContextRefCounter *)0x0) &&(pIVar4 = PTR_00496350->ctx, pIVar4 != (InstanceContext *)0x0)) {
		this_00 = (ctx->parent).ctx;
		cVar6 = (*(this_00->parent).vtable[2].Method4)(this_00);
		if (cVar6 != '\0') {
		pIVar5 = (pIVar4->parent).transform;
		if ((*(byte *)&pIVar5->field3_0x60 & 4) != 0) {
		fVar1 = (pIVar5->matrix).m44;
		fVar2 = (pIVar5->matrix).m43;
		fVar3 = (pIVar5->matrix).m42;
		(pIVar5->position).x = (pIVar5->matrix).m41;
		(pIVar5->position).y = fVar3;
		(pIVar5->position).z = fVar2;
		(pIVar5->position).w = fVar1;
		pIVar5->field3_0x60 = (float)((uint)pIVar5->field3_0x60 & 0xfffffffa);
		}
		fStack32 = (pIVar5->position).x;
		fStack28 = (pIVar5->position).y;
		fStack24 = (pIVar5->position).z;
		fStack20 = (pIVar5->position).w;
		InstanceContext::FUN_0016dda0(this_00,&fStack32);
		}
		}
		return;
		}
		
	*/
	return;
}

void Action0x237::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x237::Dispose(Action0x237 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x237::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x237::Construct(Action0x237 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x237;
		return;
		}
		
	*/
	return;
}

int Action0x237::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x237::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

