#include "headers/Known/AgentLab/ActionFactory/Actions/ActionOpenAllLinkedFurniture.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionOpenAllLinkedFurniture::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionOpenAllLinkedFurniture::Dispose(ActionOpenAllLinkedFurniture *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionOpenAllLinkedFurniture::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionOpenAllLinkedFurniture::Construct(ActionOpenAllLinkedFurniture *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_OpenAllLinkedFurniture;
		return;
		}
		
	*/
	return;
}

int ActionOpenAllLinkedFurniture::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionOpenAllLinkedFurniture::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionOpenAllLinkedFurniture::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionOpenAllLinkedFurniture::ExecuteFromCallContext(ActionOpenAllLinkedFurniture *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceNodeAbstract *pIVar2;
		InstanceNodeAbstract *pIVar3;
		InstanceNodeAbstract **ppIVar4;
		uint uVar5;
		pIVar1 = (((ctx->parent).ctx)->parent).ctx;
		pIVar2 = InstanceDataList::GetNode(&pIVar1->nodes,ObjectLink);
		if ((pIVar2 != (InstanceNodeAbstract *)0x0) && (uVar5 = 0, ((uint)pIVar2[1].vtable & 0x1f) != 0)){
		ppIVar4 = (InstanceNodeAbstract **)&pIVar2[1].field2_0x8;
		do {
		pIVar3 = InstanceDataList::GetNode((InstanceDataList *)((int)*ppIVar4 + 0xe4),Furniture);
		if (pIVar3 != (InstanceNodeAbstract *)0x0) {
		NodeRelated2Abstract::FUN_001ac940((NodeRelated2Abstract *)pIVar3[1].vtable,1,(InstanceContextRefCounter *)pIVar1,false,false);
		}
		uVar5 = uVar5 + 1;
		ppIVar4 = ppIVar4 + 1;
		}
		 while (uVar5 < ((uint)pIVar2[1].vtable & 0x1f));
		}
		return;
		}
		
	*/
	return;
}

