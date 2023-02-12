#include "headers/Known/AgentLab/ActionFactory/Actions/ActionContinueColliderMotion.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionContinueColliderMotion::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionContinueColliderMotion::Dispose(ActionContinueColliderMotion *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionContinueColliderMotion::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionContinueColliderMotion::ExecuteFromCallContext(ActionContinueColliderMotion *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		int iVar1;
		InstanceNodeAbstract_VTable *pIVar2;
		InstanceContext *pIVar3;
		InstanceNodeAbstract *pIVar4;
		InstanceTransform *transform;
		InstanceNodeAbstract *pIVar5;
		uint uVar6;
		uint this_00;
		Vector4 local_20;
		pIVar3 = (ctx->parent).ctx;
		pIVar4 = (pIVar3->nodes).array[0x11];
		pIVar4[5].field6_0x14 = pIVar4[5].field6_0x14 | 0x1000000;
		if ((*(byte *)&this->unlabelled12 & 1) != 0) {
		transform = (((pIVar3->parent).ctx)->parent).transform;
		InstanceTransform::FillMatrix(transform);
		pIVar5 = (pIVar3->nodes).array[0x10];
		InstanceTransform::FUN_000d3ed0(transform,&local_20);
		pIVar5[2].vtable = *(InstanceNodeAbstract_VTable **)&pIVar5[1].field2_0x8;
		pIVar5[2].ctx = (InstanceContext *)pIVar5[1].time;
		*(InstanceNodeAbstract **)&pIVar5[2].field2_0x8 = pIVar5[1].field5_0x10;
		pIVar5[2].time = pIVar5[1].field6_0x14;
		*(float *)&pIVar5[1].field2_0x8 = local_20.x;
		pIVar5[1].time = (uint)local_20.y;
		pIVar5[1].field5_0x10 = (InstanceNodeAbstract *)local_20.z;
		pIVar5[1].field6_0x14 = (uint)local_20.w;
		}
		if ((*(byte *)&this->unlabelled12 & 4) != 0) {
		iVar1 = this->unlabelled36;
		pIVar4[5].field6_0x14 = pIVar4[5].field6_0x14 | 0x4000;
		uVar6 = pIVar4[8].field6_0x14;
		*(int *)&pIVar4[7].field2_0x8 = iVar1;
		if (uVar6 != 0) {
		FUN_001dbcc0(uVar6,iVar1);
		}
		}
		if ((*(byte *)&this->unlabelled12 & 2) != 0) {
		uVar6 = pIVar4[8].field6_0x14;
		pIVar2 = (InstanceNodeAbstract_VTable *)this->unlabelled32;
		pIVar4[5].field6_0x14 = pIVar4[5].field6_0x14 | 0x2000;
		pIVar4[7].vtable = pIVar2;
		if (uVar6 != 0) {
		*(InstanceNodeAbstract_VTable **)(uVar6 + 0x31c) = pIVar2;
		}
		}
		if ((*(byte *)&this->unlabelled12 & 8) != 0) {
		uVar6 = this->unlabelled40;
		pIVar4[5].field6_0x14 = pIVar4[5].field6_0x14 | 0x8000;
		this_00 = pIVar4[8].field6_0x14;
		pIVar4[7].time = uVar6;
		if (this_00 != 0) {
		FUN_001dbc80(this_00,uVar6);
		}
		}
		if ((*(byte *)&this->unlabelled12 & 0x10) != 0) {
		pIVar2 = pIVar4[6].vtable;
		pIVar4[5].field6_0x14 = pIVar4[5].field6_0x14 | 0x2000000;
		pIVar4[6].vtable = (InstanceNodeAbstract_VTable *)((uint)pIVar2 & 0xffff87ff);
		}
		return;
		}
		
	*/
	return;
}

void ActionContinueColliderMotion::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionContinueColliderMotion * __fastcall ActionContinueColliderMotion::Construct(ActionContinueColliderMotion *this){
		uint uVar1;
		float fVar2;
		fVar2 = FLOAT_0038639c;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ContinueColliderMotion;
		this->unlabelled12 = uVar1 & 0xffffffe0;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		this->unlabelled24 = 0;
		this->unlabelled28 = (int)fVar2;
		this->unlabelled32 = 0;
		this->unlabelled36 = 0;
		this->unlabelled40 = 0;
		return this;
		}
		
	*/
	return;
}

int ActionContinueColliderMotion::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionContinueColliderMotion::GetSize(void){
		return 0x30;
		}
		
	*/
	return 0;
}

void ActionContinueColliderMotion::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionContinueColliderMotion::UnkMethod(ActionContinueColliderMotion *this,int *param_1){
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
		if (uVar1 < 0x4c) {
		if (uVar1 == 0x4b) {
		this->unlabelled24 = *(int *)(puVar3 + 2);
		uVar4 = this->unlabelled12 | 1;
		}
		else if (uVar1 == 0x3f) {
		this->unlabelled32 = *(int *)(puVar3 + 2);
		uVar4 = this->unlabelled12 | 2;
		}
		else if (uVar1 == 0x49) {
		this->unlabelled16 = *(int *)(puVar3 + 2);
		uVar4 = this->unlabelled12 | 1;
		}
		else {
		if (uVar1 != 0x4a) goto LAB_00161706;
		this->unlabelled20 = *(int *)(puVar3 + 2);
		uVar4 = this->unlabelled12 | 1;
		}
		LAB_00161703:this->unlabelled12 = uVar4;
		}
		else {
		if (uVar1 == 0x73) {
		this->unlabelled36 = *(int *)(puVar3 + 2);
		uVar4 = this->unlabelled12 | 4;
		goto LAB_00161703;
		}
		if (uVar1 == 0x74) {
		this->unlabelled40 = *(int *)(puVar3 + 2);
		uVar4 = this->unlabelled12 | 8;
		goto LAB_00161703;
		}
		if (((uVar1 == 0xffff) && (*(char *)(puVar3 + 1) == '\x04')) && (*(int *)(puVar3 + 2) == 0x42)) {
		uVar4 = this->unlabelled12 | 0x10;
		goto LAB_00161703;
		}
		}
		LAB_00161706:IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

