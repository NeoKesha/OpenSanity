#include "headers/Known/AgentLab/ActionFactory/Actions/ActionPickUpHealth.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionPickUpHealth::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionPickUpHealth::Dispose(ActionPickUpHealth *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionPickUpHealth::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionPickUpHealth::Construct(ActionPickUpHealth *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_PickUpHealth;
		return;
		}
		
	*/
	return;
}

int ActionPickUpHealth::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionPickUpHealth::GetSize(void){
		return 0xc;
		}
		
	*/
	return 0;
}

void ActionPickUpHealth::Execute(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall ActionPickUpHealth::Execute(ActionPickUpHealth *this,InstanceContext *ctx){
		uint uVar1;
		uint playerIndex;
		InstanceContext *pIVar1;
		InstanceNodeCharacter *nodeC;
		NodeRelated1C *pNVar1;
		NodeRelated1C *temp_5f52a261cf;
		playerIndex = (GameController1->chunkDescriptor).flags >> 8 & 0xf;
		if (playerIndex == 6) {
		pIVar1 = (InstanceContext *)0x0;
		}
		else {
		pIVar1 = (InstanceContext *)(GameController1->chunkDescriptor).playerInstanceContexts[playerIndex];
		if (pIVar1 != (InstanceContext *)0x0) {
		pIVar1 = *(InstanceContext **)&pIVar1->parent;
		}
		}
		if (pIVar1 != (InstanceContext *)0x0) {
		nodeC = (InstanceNodeCharacter *)InstanceDataList::GetNode((InstanceDataList *)(&pIVar1->field27_0xe0 + 1),Character);
		pNVar1 = (NodeRelated1C *)(nodeC->field1_0x18->parent).parent.related;
		playerIndex = ((uint)(pNVar1->parent).field1_0x14 >> 6 & 0xff) + 1;
		if (3 < playerIndex) {
		NodeRelated2C::thunk_FUN_00066b30(nodeC->field1_0x18,1);
		playerIndex = 3;
		}
		uVar1 = (pNVar1->parent).field1_0x14;
		(pNVar1->parent).field1_0x14 = uVar1 ^ (playerIndex << 6 ^ uVar1) & 0x3fc0;
		}
		return;
		}
		
	*/
	return;
}

void ActionPickUpHealth::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionPickUpHealth::ExecuteFromCallContext(ActionPickUpHealth *this,undefined4 time_clock,InstanceContext *ctx){
		(*((this->parent).vtable)->Execute)(&this->parent,(ctx->parent).ctx);
		return;
		}
		
	*/
	return;
}

