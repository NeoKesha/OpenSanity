#include "headers/Known/AgentLab/ActionFactory/Actions/ActionApplyVelocityToSelf.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionApplyVelocityToSelf::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionApplyVelocityToSelf * __fastcall ActionApplyVelocityToSelf::Construct(ActionApplyVelocityToSelf *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ApplyVelocityToSelf;
		FUN_00180380(&this->unlabelled12,0x42480000);
		FUN_00180380(&this->unlabelled16,0);
		FUN_00180380(&this->unlabelled20,0);
		FUN_00180380(&this->unlabelled24,0);
		FUN_00180380(&this->unlabelled28,0);
		FUN_00180380(&this->unlabelled32,0);
		FUN_00180380(&this->unlabelled36,0);
		this->unlabelled40 = this->unlabelled40 & 0xfffffff0;
		return this;
		}
		
	*/
	return;
}

void ActionApplyVelocityToSelf::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionApplyVelocityToSelf::Dispose(ActionApplyVelocityToSelf *this,byte param_1){
		::EmptyFunction();
		::EmptyFunction();
		::EmptyFunction();
		::EmptyFunction();
		::EmptyFunction();
		::EmptyFunction();
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

int ActionApplyVelocityToSelf::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionApplyVelocityToSelf::GetSize(void){
		return 0x2c;
		}
		
	*/
	return 0;
}

void ActionApplyVelocityToSelf::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionApplyVelocityToSelf::ExecuteFromCallContext(ActionApplyVelocityToSelf *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *ctx1;
		ctx1 = (((ctx->parent).ctx)->parent).ctx;
		thunk_FUN_00037610((int)this,ctx1,ctx1);
		return;
		}
		
	*/
	return;
}

