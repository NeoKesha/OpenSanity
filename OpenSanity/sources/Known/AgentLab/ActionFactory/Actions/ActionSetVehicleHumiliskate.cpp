#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetVehicleHumiliskate.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetVehicleHumiliskate::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetVehicleHumiliskate::Dispose(ActionSetVehicleHumiliskate *this,byte param_1){
		::EmptyFunction();
		::EmptyFunction();
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetVehicleHumiliskate::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetVehicleHumiliskate * __fastcall ActionSetVehicleHumiliskate::Construct(ActionSetVehicleHumiliskate *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetVehicleHumiliskate;
		*(undefined *)&this->unlabelled12 = 0;
		*(undefined *)((int)&this->unlabelled12 + 1) = 0;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		return this;
		}
		
	*/
	return;
}

int ActionSetVehicleHumiliskate::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetVehicleHumiliskate::GetSize(void){
		return 0x18;
		}
		
	*/
	return 0;
}

void ActionSetVehicleHumiliskate::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetVehicleHumiliskate::UnkMethod(ActionSetVehicleHumiliskate *this,int *param_1){
		int *this_00;
		int *this_01;
		ushort uVar1;
		char cVar2;
		ushort *this_02;
		undefined4 uVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		this_00 = &this->unlabelled16;
		*this_00 = this->unlabelled16 & 0xfffffffdU | 4;
		US002::FUN_00180430((US002 *)this_00,25.0);
		this_01 = &this->unlabelled20;
		*this_01 = this->unlabelled20 & 0xfffffffdU | 4;
		US002::FUN_00180430((US002 *)this_01,35.0);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		while (cVar2 == '\0') {
		this_02 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar1 = *this_02;
		if (uVar1 < 0x249) {
		if (uVar1 == 0x248) {
		uVar3 = thunk_FUN_00066f00(*(undefined4 *)(this_02 + 2));
		*(char *)((int)&this->unlabelled12 + 1) = (char)uVar3;
		}
		else if (uVar1 == 0x10b) {
		FUN_00180840(this_02,(US002 *)this_01);
		}
		else if (uVar1 == 0x10c) {
		FUN_00180840(this_02,(US002 *)this_00);
		}
		}
		else if (uVar1 == 0x249) {
		uVar3 = thunk_FUN_00066f00(*(undefined4 *)(this_02 + 2));
		*(char *)&this->unlabelled12 = (char)uVar3;
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionSetVehicleHumiliskate::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetVehicleHumiliskate::ExecuteFromCallContext(ActionSetVehicleHumiliskate *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContextRefCounter *pIVar1;
		InstanceContext *pIVar2;
		NodeRelated2C *this_00;
		InstanceNodeAbstract_VTable *pIVar3;
		undefined *puVar4;
		GameController *pGVar5;
		uint uVar6;
		void *pvVar7;
		InstanceNodeAbstract *pIVar8;
		InstanceNodeAbstract *pIVar9;
		int iVar10;
		InstanceContext *pIVar11;
		InstanceContext *pIVar12;
		float fVar13;
		float fVar14;
		if (*(byte *)&this->unlabelled12 == 6) {
		pIVar12 = (InstanceContext *)0x0;
		}
		else {
		pIVar1 = (GameController1->chunkDescriptor).playerInstanceContexts[*(byte *)&this->unlabelled12];
		if (pIVar1 == (InstanceContextRefCounter *)0x0) {
		pIVar12 = (InstanceContext *)0x0;
		}
		else {
		pIVar12 = pIVar1->ctx;
		}
		}
		uVar6 = (uint)*(byte *)((int)&this->unlabelled12 + 1);
		if (uVar6 == 6) {
		pIVar11 = (InstanceContext *)0x0;
		}
		else {
		pIVar1 = (GameController1->chunkDescriptor).playerInstanceContexts[uVar6];
		if (pIVar1 == (InstanceContextRefCounter *)0x0) {
		pIVar11 = (InstanceContext *)0x0;
		}
		else {
		pIVar11 = pIVar1->ctx;
		}
		}
		pIVar2 = (ctx->parent).ctx;
		iVar10 = (pIVar2->parent).field14_0x20.field27_0x78;
		if (iVar10 == 0) {
		pvVar7 = (void *)(pIVar2->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar7 = (void *)FUN_00017ba8(iVar10);
		}
		fVar13 = FUN_00180490(&this->unlabelled16,pvVar7);
		fVar14 = FUN_00180490(&this->unlabelled20,pvVar7);
		pIVar8 = InstanceDataList::GetNode(&pIVar12->nodes,Character);
		pIVar9 = InstanceDataList::GetNode(&pIVar11->nodes,Character);
		pGVar5 = GameController1;
		if ((pIVar8 != (InstanceNodeAbstract *)0x0) && (pIVar9 != (InstanceNodeAbstract *)0x0)) {
		this_00 = (NodeRelated2C *)pIVar8[1].vtable;
		pIVar3 = pIVar9[1].vtable;
		NodeRelated2C::thunk_FUN_00074060(this_00,3,(int)pIVar3,0);
		(pGVar5->chunkDescriptor).flags = (pGVar5->chunkDescriptor).flags & 0xffffff2f | 0x20;
		iVar10 = BlackboardAbstract::GetIntValue((this_00->parent).parent.blackboard,0);
		uVar6 = (pGVar5->chunkDescriptor).flags;
		(pGVar5->chunkDescriptor).flags = uVar6 ^ (iVar10 << 8 ^ uVar6) & 0xf00;
		iVar10 = BlackboardAbstract::GetIntValue((BlackboardAbstract *)pIVar3->Step,0);
		uVar6 = (pGVar5->chunkDescriptor).flags;
		(pGVar5->chunkDescriptor).flags = uVar6 ^ (iVar10 << 0xc ^ uVar6) & 0xf000;
		puVar4 = this_00->field22_0xb8;
		*(float *)(puVar4 + 0x278) = fVar13;
		*(float *)(puVar4 + 0x274) = fVar14;
		}
		return;
		}
		
	*/
	return;
}

