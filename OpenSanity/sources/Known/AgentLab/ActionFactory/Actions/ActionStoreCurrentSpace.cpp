#include "headers/Known/AgentLab/ActionFactory/Actions/ActionStoreCurrentSpace.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionStoreCurrentSpace::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionStoreCurrentSpace::Dispose(ActionStoreCurrentSpace *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionStoreCurrentSpace::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionStoreCurrentSpace * __fastcall ActionStoreCurrentSpace::Construct(ActionStoreCurrentSpace *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_StoreCurrentSpace;
		this->unlabelled12 = uVar1 & 0xffe0ffff | 0xffff;
		return this;
		}
		
	*/
	return;
}

void ActionStoreCurrentSpace::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionStoreCurrentSpace::UnkMethod(ActionStoreCurrentSpace *this,int *param_1){
		short sVar1;
		char cVar2;
		short *psVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		while (cVar2 == '\0') {
		psVar3 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		sVar1 = *psVar3;
		if (sVar1 == 6) {
		*(undefined *)&this->unlabelled12 = *(undefined *)(psVar3 + 2);
		}
		else if (sVar1 == 7) {
		*(undefined *)((int)&this->unlabelled12 + 1) = *(undefined *)(psVar3 + 2);
		}
		else if (((sVar1 == -1) && (*(char *)(psVar3 + 1) == '\x04')) && (*(int *)(psVar3 + 2) == 0x1c)){
		*(undefined *)((int)&this->unlabelled12 + 1) = 0xfb;
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionStoreCurrentSpace::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionStoreCurrentSpace::ExecuteFromCallContext(ActionStoreCurrentSpace *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceTransform *transform;
		int local_c [3];
		transform = (InstanceTransform *)FUN_001722c0((int)ctx,*(byte *)((int)&this->unlabelled12 + 2) & 0xf,*(char *)((int)&this->unlabelled12 + 1),*(byte *)&this->unlabelled12);
		if (transform != (InstanceTransform *)0x0) {
		InstanceTransform::FillMatrix(transform);
		FUN_000e7d90(transform,local_c);
		}
		FUN_0016dd50((int)(ctx->parent).ctx,transform);
		return;
		}
		
	*/
	return;
}

int ActionStoreCurrentSpace::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionStoreCurrentSpace::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

