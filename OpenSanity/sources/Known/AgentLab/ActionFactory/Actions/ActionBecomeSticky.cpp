#include "headers/Known/AgentLab/ActionFactory/Actions/ActionBecomeSticky.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionBecomeSticky::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionBecomeSticky::Dispose(ActionBecomeSticky *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionBecomeSticky::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionBecomeSticky::ExecuteFromCallContext(ActionBecomeSticky *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		AutoClass28 *pAVar2;
		int *piVar3;
		pIVar1 = (ctx->parent).ctx;
		pAVar2 = (AutoClass28 *)(pIVar1->nodes).array[0xe];
		if (pAVar2 == (AutoClass28 *)0x0) {
		pAVar2 = (AutoClass28 *)VirtualPool::AllocateMemory(0x88);
		if (pAVar2 == (AutoClass28 *)0x0) {
		pAVar2 = (AutoClass28 *)0x0;
		}
		else {
		pAVar2 = AutoClass28::Construct(pAVar2,'\0','\0');
		}
		piVar3 = &(((pIVar1->parent).ctx)->parent).flags;
		(pIVar1->nodes).array[0xe] = (InstanceNodeAbstract *)pAVar2;
		*piVar3 = *piVar3 | 0x8000;
		(pIVar1->nodes).array[0xe][5].time = (uint)pIVar1;
		}
		pIVar1 = (pIVar1->parent).ctx;
		(pIVar1->parent).flags = (pIVar1->parent).flags | 0x8000;
		pAVar2->field15_0x6c = pAVar2->field15_0x6c | 0x2000;
		pAVar2->field16_0x70 = pAVar2->field16_0x70 | this->unlabelled12;
		pAVar2->field17_0x74 = this->unlabelled16;
		pAVar2->field19_0x7c = this->unlabelled24;
		if (*(short *)&this->unlabelled20 != 0) {
		pAVar2->field20_0x80 = *(short *)&this->unlabelled20;
		}
		return;
		}
		
	*/
	return;
}

void ActionBecomeSticky::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionBecomeSticky * __fastcall ActionBecomeSticky::Construct(ActionBecomeSticky *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_BecomeSticky;
		this->unlabelled12 = 0;
		this->unlabelled16 = 0;
		*(undefined2 *)&this->unlabelled20 = 0;
		this->unlabelled24 = 0;
		return this;
		}
		
	*/
	return;
}

int ActionBecomeSticky::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionBecomeSticky::GetSize(void){
		return 0x1c;
		}
		
	*/
	return 0;
}

void ActionBecomeSticky::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionBecomeSticky::UnkMethod(ActionBecomeSticky *this,int *param_1){
		ushort uVar1;
		char cVar2;
		ushort *puVar3;
		uint uVar4;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar2 != '\0') {
		return;
		}
		puVar3 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar1 = *puVar3;
		if (uVar1 < 0x23b) {
		if (uVar1 == 0x23a) {
		this->unlabelled16 = *(int *)(puVar3 + 2);
		}
		else if (uVar1 == 0x10) {
		*(ushort *)&this->unlabelled20 = puVar3[2];
		}
		else if (uVar1 == 0x6d) {
		this->unlabelled24 = *(int *)(puVar3 + 2);
		}
		}
		else if ((uVar1 == 0xffff) && (*(char *)(puVar3 + 1) == '\x04')) {
		switch(*(undefined4 *)(puVar3 + 2)) {
		case 0x20d:uVar4 = this->unlabelled12 | 0x2000;
		break;
		case 0x20e:uVar4 = this->unlabelled12 | 0x8000;
		break;
		case 0x20f:uVar4 = this->unlabelled12 | 0x1000;
		break;
		case 0x210:uVar4 = this->unlabelled12 | 0x10000;
		break;
		default:goto switchD_0003f547_caseD_4;
		}
		this->unlabelled12 = uVar4;
		}
		switchD_0003f547_caseD_4:IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

