#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0CA.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0CA::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0CA::Dispose(Action0x0CA *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x0CA::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Action0x0CA::Construct(Action0x0CA *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0CA;
		return;
		}
		
	*/
	return;
}

int Action0x0CA::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0CA::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void Action0x0CA::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0CA::ExecuteFromCallContext(Action0x0CA *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		uint uVar2;
		int **local_a4;
		undefined2 local_a0;
		undefined2 local_9e;
		float local_9c;
		uint local_98;
		undefined4 local_94;
		undefined4 local_90;
		undefined4 local_8c;
		undefined4 local_88;
		undefined4 local_84;
		int *local_80 [32];
		pIVar1 = (((ctx->parent).ctx)->parent).ctx;
		local_a4 = local_80;
		local_98 = local_98 & 0xfffffffe | 2;
		local_a0 = 0;
		local_9e = 0x20;
		local_9c = FLOAT_00393c64;
		local_94 = 0;
		local_90 = 1;
		local_8c = 0;
		local_84 = 0;
		local_88 = 0;
		uVar2 = ChunkData::FUN_0013e2c0((pIVar1->parent).chunkData,&(pIVar1->parent).field14_0x20.matrix2.m11,0x100,&local_a4);
		if ((short)uVar2 != 0) {
		(**(code **)(*local_80[0] + 8))();
		}
		return;
		}
		
	*/
	return;
}

