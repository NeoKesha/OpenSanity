#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x288.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x288::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x288::Dispose(Action0x288 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x288::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x288 * __fastcall Action0x288::Construct(Action0x288 *this){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x288;
		this->unlabelled12 = (int)fVar1;
		return this;
		}
		
	*/
	return;
}

int Action0x288::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x288::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void Action0x288::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x288::ExecuteFromCallContext(Action0x288 *this,undefined4 time_clock,InstanceContext *ctx){
		float fVar1;
		float fVar2;
		InstanceContext *pIVar3;
		float fVar4;
		fVar4 = FLOAT_0038639c;
		pIVar3 = (ctx->parent).ctx;
		fVar1 = (float)this->unlabelled12;
		fVar2 = *(float *)&pIVar3[1].parent.field_0x8;
		*(float *)&pIVar3[1].parent.field_0x8 = fVar1;
		if (fVar4 < fVar1) {
		*(float *)&pIVar3[1].parent.field_0x8 = fVar4;
		}
		if (fVar2 < FLOAT_0038a7e8) {
		INT_00495d20 = INT_00495d20 + 1;
		}
		return;
		}
		
	*/
	return;
}

