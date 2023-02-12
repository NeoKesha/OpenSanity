#include "headers/Known/AgentLab/ActionFactory/Actions/ActionBecomeNormal.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionBecomeNormal::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionBecomeNormal::Dispose(ActionBecomeNormal *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionBecomeNormal::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionBecomeNormal * __fastcall ActionBecomeNormal::Construct(ActionBecomeNormal *this){
		byte bVar1;
		bVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_BecomeNormal;
		this->unlabelled12 = bVar1 & 0xfe;
		return this;
		}
		
	*/
	return;
}

int ActionBecomeNormal::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionBecomeNormal::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionBecomeNormal::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionBecomeNormal::UnkMethod(ActionBecomeNormal *this,int *param_1){
		char cVar1;
		byte bVar2;
		short *psVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar1 != '\0') {
		return;
		}
		psVar3 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if ((*psVar3 == -1) && (*(char *)(psVar3 + 1) == '\x04')) {
		if (*(int *)(psVar3 + 2) == 0) {
		bVar2 = this->unlabelled12 | 1;
		}
		else {
		if (*(int *)(psVar3 + 2) != 1) goto LAB_0003f6b2;
		bVar2 = this->unlabelled12 & 0xfe;
		}
		this->unlabelled12 = bVar2;
		}
		LAB_0003f6b2:IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

void ActionBecomeNormal::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionBecomeNormal::ExecuteFromCallContext(ActionBecomeNormal *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceNodeI *pIVar2;
		pIVar1 = (ctx->parent).ctx;
		if ((pIVar1 != (InstanceContext *)0x0) &&(pIVar2 = (InstanceNodeI *)(pIVar1->nodes).array[0xe], pIVar2 != (InstanceNodeI *)0x0)) {
		pIVar2[3].field1_0x18 =(NodeRelated2I *)((uint)pIVar2[3].field1_0x18 ^((uint)((this->unlabelled12 & 1) == 1) * 0x2000 ^ (uint)pIVar2[3].field1_0x18) & 0x2000);
		if ((this->unlabelled12 & 1) == 0) {
		FUN_0016ffa0((int)pIVar2);
		}
		}
		return;
		}
		
	*/
	return;
}

