#include "headers/Known/AgentLab/ActionFactory/Actions/ActionTriggerAllNitroCrates.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionTriggerAllNitroCrates::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionTriggerAllNitroCrates::Dispose(ActionTriggerAllNitroCrates *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionTriggerAllNitroCrates::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionTriggerAllNitroCrates::Construct(ActionTriggerAllNitroCrates *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_TriggerAllNitroCrates;
		return;
		}
		
	*/
	return;
}

int ActionTriggerAllNitroCrates::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionTriggerAllNitroCrates::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionTriggerAllNitroCrates::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionTriggerAllNitroCrates::ExecuteFromCallContext(ActionTriggerAllNitroCrates *this,undefined4 time_clock,InstanceContext *ctx){
		uint uVar1;
		InstanceNodeAbstract *pIVar2;
		InstanceContext **ppIVar3;
		AutoClass14 local_224;
		InstanceContext *local_200 [128];
		local_224.array = local_200;
		local_224.field4_0xc = local_224.field4_0xc & 0xfffffffe | 2;
		local_224.field1_0x4 = 0;
		local_224.cnt = 0x80;
		local_224.field3_0x8 = FLOAT_0038ad18;
		local_224.field5_0x10 = 0;
		local_224.field6_0x14 = 1;
		local_224.field7_0x18 = 0;
		local_224.field9_0x20 = 0;
		local_224.field8_0x1c = 0;
		uVar1 = ChunkData::FillCtxList((((((ctx->parent).ctx)->parent).ctx)->parent).chunkData,0x2000,&local_224);
		if ((short)uVar1 != 0) {
		ppIVar3 = local_200;
		uVar1 = uVar1 & 0xffff;
		do {
		pIVar2 = InstanceDataList::GetNode(&(*ppIVar3)->nodes,Crate);
		NodeRelated2Abstract::FUN_001ac940((NodeRelated2Abstract *)pIVar2[1].vtable,0xd,(InstanceContextRefCounter *)0x0,false,false);
		ppIVar3 = ppIVar3 + 1;
		uVar1 = uVar1 - 1;
		}
		 while (uVar1 != 0);
		}
		return;
		}
		
	*/
	return;
}

