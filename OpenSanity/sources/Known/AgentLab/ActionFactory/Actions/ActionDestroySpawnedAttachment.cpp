#include "headers/Known/AgentLab/ActionFactory/Actions/ActionDestroySpawnedAttachment.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionDestroySpawnedAttachment::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionDestroySpawnedAttachment::Dispose(ActionDestroySpawnedAttachment *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionDestroySpawnedAttachment::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionDestroySpawnedAttachment * __fastcall ActionDestroySpawnedAttachment::Construct(ActionDestroySpawnedAttachment *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_DestroySpawnedAttachment;
		this->unlabelled12 = uVar1 & 0xfffffeff | 0xff;
		return this;
		}
		
	*/
	return;
}

int ActionDestroySpawnedAttachment::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionDestroySpawnedAttachment::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionDestroySpawnedAttachment::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDestroySpawnedAttachment::UnkMethod(ActionDestroySpawnedAttachment *this,int *param_1){
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
		else if (((*psVar2 == -1) && (*(char *)(psVar2 + 1) == '\x04')) &&(*(int *)(psVar2 + 2) == 0x3e)) {
		this->unlabelled12 = this->unlabelled12 | 0x100;
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionDestroySpawnedAttachment::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDestroySpawnedAttachment::ExecuteFromCallContext(ActionDestroySpawnedAttachment *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		char cVar1;
		InstanceNodeObjectLink *this_00;
		int *piVar2;
		InstanceNodeInstance *pIVar2;
		undefined extraout_DL;
		this_00 = (InstanceNodeObjectLink *)InstanceDataList::GetNode(&((((ctx->parent).ctx)->parent).ctx)->nodes,ObjectLink);
		if (this_00 != (InstanceNodeObjectLink *)0x0) {
		cVar1 = (char)this->unlabelled12;
		if (cVar1 == -1) {
		if ((this->unlabelled12 & 0x100U) != 0) {
		FUN_000fc750((int)this_00,'\x01');
		return;
		}
		if (this_00->field67_0x70 == (UNV009 *)0x0) {
		return;
		}
		piVar2 = (int *)FUN_000f8350((int)this_00->field67_0x70);
		if (piVar2 == (int *)0x0) {
		return;
		}
		if (piVar2[0x59] == -1) {
		return;
		}
		FUN_000fc190((int)this_00,extraout_DL,0);
		(**(code **)(*piVar2 + 8))();
		}
		else {
		if (this_00->field67_0x70 == (UNV009 *)0x0) {
		return;
		}
		piVar2 = (int *)FUN_000f8390((int)this_00->field67_0x70,cVar1);
		if (piVar2 == (int *)0x0) {
		return;
		}
		if (piVar2[0x59] == -1) {
		return;
		}
		FUN_000fc140((int)this_00,*(char *)&this->unlabelled12,0,'\0');
		(**(code **)(*piVar2 + 8))();
		}
		pIVar2 = (InstanceNodeInstance *)InstanceDataList::GetNode((InstanceDataList *)(piVar2 + 0x39),Instance);
		(*pIVar2->vtable->InstanceMethod0)(pIVar2);
		}
		return;
		}
		
	*/
	return;
}

