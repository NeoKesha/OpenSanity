#include "headers/Known/AgentLab/ActionFactory/Actions/ActionForceVolumeController.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionForceVolumeController::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionForceVolumeController::Dispose(ActionForceVolumeController *this,byte param_1){
		thunk_FUN_00056070(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionForceVolumeController::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionForceVolumeController * __fastcall ActionForceVolumeController::Construct(ActionForceVolumeController *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ForceVolumeController;
		this->unlabelled12 = 0;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		this->unlabelled32 = 0;
		this->unlabelled36 = 0;
		this->unlabelled40 = 0;
		this->unlabelled44 = (int)FLOAT_0038639c;
		*(byte *)&this->unlabelled48 = *(byte *)&this->unlabelled48 & 0xfc;
		return this;
		}
		
	*/
	return;
}

int ActionForceVolumeController::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionForceVolumeController::GetSize(void){
		return 0x40;
		}
		
	*/
	return 0;
}

void ActionForceVolumeController::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionForceVolumeController::UnkMethod(ActionForceVolumeController *this,int *param_1){
		int *this_00;
		int *this_01;
		int *this_02;
		ushort uVar1;
		char cVar2;
		ushort *this_03;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		this_00 = &this->unlabelled12;
		*this_00 = this->unlabelled12 & 0xfffffffdU | 4;
		US002::FUN_00180430((US002 *)this_00,0.0);
		this_01 = &this->unlabelled16;
		*this_01 = this->unlabelled16 & 0xfffffffdU | 4;
		US002::FUN_00180430((US002 *)this_01,0.0);
		this_02 = &this->unlabelled20;
		*this_02 = this->unlabelled20 & 0xfffffffdU | 4;
		US002::FUN_00180430((US002 *)this_02,0.0);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		while (cVar2 == '\0') {
		this_03 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar1 = *this_03;
		if (uVar1 < 3) {
		if (uVar1 == 2) {
		FUN_00180840(this_03,(US002 *)this_02);
		}
		else if (uVar1 == 0) {
		FUN_00180840(this_03,(US002 *)this_00);
		}
		else if (uVar1 == 1) {
		FUN_00180840(this_03,(US002 *)this_01);
		}
		}
		else if ((uVar1 == 0xffff) && (*(char *)(this_03 + 1) == '\x04')) {
		if (*(int *)(this_03 + 2) == 0) {
		*(byte *)&this->unlabelled48 = *(byte *)&this->unlabelled48 & 0xfd | 1;
		}
		else if (*(int *)(this_03 + 2) == 1) {
		*(byte *)&this->unlabelled48 = *(byte *)&this->unlabelled48 & 0xfe | 2;
		}
		else {
		*(byte *)&this->unlabelled48 = *(byte *)&this->unlabelled48 & 0xfc;
		}
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionForceVolumeController::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionForceVolumeController::ExecuteFromCallContext(ActionForceVolumeController *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		int iVar2;
		void *pvVar3;
		uint uVar4;
		InstanceNodeAbstract *pIVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		int *local_a4;
		undefined2 local_a0;
		undefined2 local_9e;
		float local_9c;
		uint local_98;
		undefined4 local_94;
		undefined4 local_90;
		undefined4 local_8c;
		undefined4 local_88;
		undefined4 local_84;
		int local_80 [32];
		pIVar1 = (ctx->parent).ctx;
		iVar2 = (pIVar1->parent).field14_0x20.field27_0x78;
		if (iVar2 == 0) {
		pvVar3 = (void *)(pIVar1->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar3 = (void *)FUN_00017ba8(iVar2);
		}
		fVar6 = FUN_00180490(&this->unlabelled20,pvVar3);
		fVar7 = FUN_00180490(&this->unlabelled16,pvVar3);
		fVar8 = FUN_00180490(&this->unlabelled12,pvVar3);
		this->unlabelled32 = (int)fVar8;
		fVar8 = FLOAT_0038639c;
		this->unlabelled40 = (int)fVar6;
		this->unlabelled44 = (int)fVar8;
		local_9c = FLOAT_00393c64;
		this->unlabelled36 = (int)fVar7;
		pIVar1 = (((ctx->parent).ctx)->parent).ctx;
		local_98 = local_98 & 0xfffffffe | 2;
		local_a4 = local_80;
		local_a0 = 0;
		local_9e = 0x20;
		local_94 = 0;
		local_90 = 1;
		local_8c = 0;
		local_84 = 0;
		local_88 = 0;
		uVar4 = ChunkData::FUN_0013e2c0((pIVar1->parent).chunkData,&(pIVar1->parent).field14_0x20.matrix2.m11,0x80,&local_a4);
		if ((short)uVar4 != 0) {
		pIVar5 = InstanceDataList::GetNode((InstanceDataList *)(local_80[0] + 0xe4),Trigger);
		*(int *)&pIVar5[0xf].field2_0x8 = this->unlabelled32;
		pIVar5[0xf].time = this->unlabelled36;
		pIVar5[0xf].field5_0x10 = (InstanceNodeAbstract *)this->unlabelled40;
		pIVar5[0xf].field6_0x14 = this->unlabelled44;
		if ((*(byte *)&this->unlabelled48 & 1) != 0) {
		*(byte *)&pIVar5[0x10].vtable = *(byte *)&pIVar5[0x10].vtable | 1;
		return;
		}
		if ((*(byte *)&this->unlabelled48 & 2) != 0) {
		*(byte *)&pIVar5[0x10].vtable = *(byte *)&pIVar5[0x10].vtable & 0xfe;
		}
		}
		return;
		}
		
	*/
	return;
}

