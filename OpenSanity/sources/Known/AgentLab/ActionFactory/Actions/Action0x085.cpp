#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x085.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x085::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x085::Dispose(Action0x085 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x085::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x085::Construct(Action0x085 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x085;
		return;
		}
		
	*/
	return;
}

int Action0x085::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x085::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x085::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x085::ExecuteFromCallContext(Action0x085 *this,undefined4 time_clock,InstanceContext *ctx){
		float fVar1;
		fVar1 = (((ctx->parent).ctx)->parent).field14_0x20.matrix2.m42;
		*(undefined4 *)((int)fVar1 + 0x40) = 0;
		*(undefined *)((int)fVar1 + 0x44) = 0;
		*(float *)((int)fVar1 + 0x30) = Vector4_0039ef70.x;
		*(float *)((int)fVar1 + 0x34) = Vector4_0039ef70.y;
		*(float *)((int)fVar1 + 0x38) = Vector4_0039ef70.z;
		*(float *)((int)fVar1 + 0x3c) = Vector4_0039ef70.w;
		return;
		}
		
	*/
	return;
}

