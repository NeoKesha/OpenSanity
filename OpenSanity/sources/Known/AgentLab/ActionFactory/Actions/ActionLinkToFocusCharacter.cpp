#include "headers/Known/AgentLab/ActionFactory/Actions/ActionLinkToFocusCharacter.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionLinkToFocusCharacter::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionLinkToFocusCharacter::Dispose(ActionLinkToFocusCharacter *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionLinkToFocusCharacter::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionLinkToFocusCharacter::Construct(ActionLinkToFocusCharacter *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_LinkToFocusCharacter;
		return;
		}
		
	*/
	return;
}

int ActionLinkToFocusCharacter::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionLinkToFocusCharacter::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionLinkToFocusCharacter::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionLinkToFocusCharacter::UnkMethod(ActionLinkToFocusCharacter *this,int *param_1){
		char cVar1;
		short *psVar2;
		uint uVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar1 != '\0') {
		return;
		}
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0x8a) {
		if (*(int *)(psVar2 + 2) == 0x56) {
		uVar3 = this->unlabelled12 & 0xfffffffe;
		}
		else {
		if (*(int *)(psVar2 + 2) != 0x57) goto LAB_0004595e;
		uVar3 = this->unlabelled12 | 1;
		}
		this->unlabelled12 = uVar3;
		}
		LAB_0004595e:IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

void ActionLinkToFocusCharacter::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionLinkToFocusCharacter::ExecuteFromCallContext(ActionLinkToFocusCharacter *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		float fVar2;
		InstanceContext *pIVar3;
		NodeRelated2C *this_00;
		InstanceNodeAbstract *pIVar4;
		pIVar1 = (ctx->parent).ctx;
		fVar2 = (pIVar1->parent).field14_0x20.matrix2.m43;
		if ((((uint)fVar2 & 1) != 0) &&(pIVar3 = (pIVar1->parent).field14_0x20.field4_0x10, pIVar3 != (InstanceContext *)0x0)) {
		if ((*(byte *)&(pIVar3->parent).flags & 1) != 0) {
		(pIVar1->parent).field14_0x20.field4_0x10 = (InstanceContext *)0x0;
		(pIVar1->parent).field14_0x20.matrix2.m43 = (float)((uint)fVar2 & 0xfffffffc);
		return;
		}
		pIVar4 = InstanceDataList::GetNode(&((pIVar1->parent).ctx)->nodes,Character);
		if (pIVar4 != (InstanceNodeAbstract *)0x0) {
		this_00 = (NodeRelated2C *)pIVar4[1].vtable;
		pIVar4 = InstanceDataList::GetNode(&pIVar3->nodes,Character);
		if (pIVar4 != (InstanceNodeAbstract *)0x0) {
		if ((*(byte *)&this->unlabelled12 & 1) != 0) {
		NodeRelated2C::Connect((NodeRelated2C *)pIVar4[1].vtable,this_00);
		return;
		}
		NodeRelated2C::Connect(this_00,(NodeRelated2C *)pIVar4[1].vtable);
		}
		}
		}
		return;
		}
		
	*/
	return;
}

