#include "headers/Known/AgentLab/ActionFactory/Actions/ActionRequestAttachmentFocus.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionRequestAttachmentFocus::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionRequestAttachmentFocus::Dispose(ActionRequestAttachmentFocus *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionRequestAttachmentFocus::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionRequestAttachmentFocus * __fastcall ActionRequestAttachmentFocus::Construct(ActionRequestAttachmentFocus *this){
		*(undefined *)&this->unlabelled12 = 0xff;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_RequestAttachmentFocus;
		return this;
		}
		
	*/
	return;
}

void ActionRequestAttachmentFocus::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionRequestAttachmentFocus::UnkMethod(ActionRequestAttachmentFocus *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0x12) {
		*(undefined *)&this->unlabelled12 = *(undefined *)(psVar2 + 2);
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionRequestAttachmentFocus::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionRequestAttachmentFocus::ExecuteFromCallContext(ActionRequestAttachmentFocus *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		UNV009 *this_00;
		float fVar2;
		InstanceNodeObjectLink *pIVar3;
		InstanceContext *pIVar4;
		pIVar1 = (ctx->parent).ctx;
		pIVar3 = (InstanceNodeObjectLink *)InstanceDataList::GetNode(&((pIVar1->parent).ctx)->nodes,ObjectLink);
		if ((pIVar3 != (InstanceNodeObjectLink *)0x0) &&(this_00 = pIVar3->field67_0x70, this_00 != (UNV009 *)0x0)) {
		if (*(char *)&this->unlabelled12 == -1) {
		pIVar4 = (InstanceContext *)FUN_000f8350((int)this_00);
		}
		else {
		pIVar4 = (InstanceContext *)FUN_000f8390((int)this_00,*(char *)&this->unlabelled12);
		}
		if (pIVar4 != (InstanceContext *)0x0) {
		fVar2 = (pIVar1->parent).field14_0x20.matrix2.m43;
		(pIVar1->parent).field14_0x20.field4_0x10 = pIVar4;
		(pIVar1->parent).field14_0x20.matrix2.m43 = (float)((uint)fVar2 & 0xfffffffd | 1);
		return;
		}
		}
		(pIVar1->parent).field14_0x20.matrix2.m43 =(float)((uint)(pIVar1->parent).field14_0x20.matrix2.m43 & 0xfffffffc);
		return;
		}
		
	*/
	return;
}

int ActionRequestAttachmentFocus::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionRequestAttachmentFocus::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

