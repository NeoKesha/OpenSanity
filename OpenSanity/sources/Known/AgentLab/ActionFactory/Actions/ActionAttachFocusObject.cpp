#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAttachFocusObject.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionAttachFocusObject::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionAttachFocusObject::Dispose(ActionAttachFocusObject *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionAttachFocusObject::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionAttachFocusObject::ExecuteFromCallContext(ActionAttachFocusObject *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		int *piVar1;
		undefined *puVar2;
		ActionAttachFocusObject *pAVar3;
		bool bVar4;
		char cVar5;
		InstanceNodeAbstract *pIVar6;
		InstanceContext *pIVar7;
		InstanceNodeInstanceD *pIVar8;
		uint uVar9;
		uint uVar10;
		InstanceContext *pIVar11;
		Matrix4 *pMVar12;
		InstanceContext *local_5c;
		InstanceContext *local_58;
		ActionAttachFocusObject *local_54;
		Matrix4 MStack80;
		uVar9 = this->unlabelled12;
		local_5c = (InstanceContext *)0x0;
		local_58 = (InstanceContext *)0x0;
		local_54 = this;
		if ((uVar9 & 0x1e0000) == 0x1e0000) {
		uVar10 = uVar9 & 7;
		if (uVar10 == 0) {
		if ((uVar9 & 0x800000) == 0) {
		pIVar7 = (ctx->parent).ctx;
		pIVar11 = (pIVar7->parent).ctx;
		InstanceContext::thunk_FUN_00054ce0(pIVar7,(int *)&local_58);
		pIVar7 = local_58;
		}
		else {
		pIVar11 = (ctx->parent).ctx;
		pIVar7 = (pIVar11->parent).ctx;
		InstanceContext::thunk_FUN_00054ce0(pIVar11,(int *)&local_5c);
		pIVar11 = local_5c;
		}
		}
		else if (uVar10 == 1) {
		pIVar7 = (ctx->parent).ctx;
		pIVar6 = (pIVar7->nodes).array[0xc];
		pIVar11 = (pIVar7->parent).ctx;
		if ((pIVar6 != (InstanceNodeAbstract *)0x0) && ((*(byte *)&pIVar6->field6_0x14 & 1) != 0)) {
		(pIVar7->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		}
		pIVar7 = (InstanceContext *)(pIVar7->nodes).array[0xc];
		}
		else {
		if (uVar10 != 2) {
		return;
		}
		pIVar7 = (ctx->parent).ctx;
		pIVar11 = (pIVar7->parent).ctx;
		pIVar7 = (InstanceContext *)thunk_FUN_00054db0((int)pIVar7);
		}
		}
		else {
		pIVar11 = (((ctx->parent).ctx)->parent).ctx;
		pIVar6 = InstanceDataList::GetNode(&pIVar11->nodes,ObjectLink);
		if (pIVar6 == (InstanceNodeAbstract *)0x0) {
		return;
		}
		uVar9 = (uint)this->unlabelled12 >> 0x11 & 0xf;
		if (((uint)pIVar6[1].vtable & 0x1f) <= uVar9) {
		return;
		}
		pIVar7 = *(InstanceContext **)(&pIVar6[1].field2_0x8 + uVar9 * 2);
		}
		if ((pIVar11 != (InstanceContext *)0x0) && (pIVar7 != (InstanceContext *)0x0)) {
		local_5c = (InstanceContext *)&pIVar11->nodes;
		local_58 = (InstanceContext *)InstanceDataList::GetNode((InstanceDataList *)local_5c,Instance);
		if ((local_58 != (InstanceContext *)0x0) &&((pIVar8 = (InstanceNodeInstanceD *)InstanceDataList::GetNode(&pIVar7->nodes,Instance),pIVar8 != (InstanceNodeInstanceD *)0x0 &&(local_58 = (InstanceContext *)(local_58->parent).field14_0x20.matrix2.m42,(*(byte *)&(pIVar7->parent).flags & 0x40) == 0)))) {
		bVar4 = (*pIVar8->vtable->IsC)();
		if (bVar4 != false) {
		puVar2 = (pIVar8->body).field71_0x128;
		if (puVar2 != (undefined *)0x0) {
		FUN_00163190((int)puVar2);
		}
		InstanceNodeInstanceD::FUN_00179910(pIVar8);
		FUN_00179970((int *)pIVar8);
		}
		pAVar3 = local_54;
		uVar9 = local_54->unlabelled12;
		if ((uVar9 & 0x18000) == 0) {
		pMVar12 = (Matrix4 *)0x0;
		}
		else {
		if ((uVar9 & 0x10000) == 0) {
		Matrix4::Construct1(&MStack80);
		}
		else {
		FUN_00136010(&MStack80,(float *)&local_54->unlabelled32);
		}
		MStack80.m41 = (float)pAVar3->unlabelled16;
		uVar9 = pAVar3->unlabelled12;
		MStack80.m42 = (float)pAVar3->unlabelled20;
		MStack80.m43 = (float)pAVar3->unlabelled24;
		pMVar12 = &MStack80;
		MStack80.m44 = (float)pAVar3->unlabelled28;
		}
		cVar5 = FUN_001a7c70((int)local_58,(int **)pIVar7,1,(byte)(uVar9 >> 3),&pMVar12->m11);
		if (cVar5 != '\0') {
		piVar1 = &(pIVar11->parent).flags;
		*piVar1 = *piVar1 | 0x80;
		(pIVar7->parent).field14_0x20.field6_0x18 = pIVar11;
		(pIVar11->parent).field14_0x20.field6_0x18 = pIVar7;
		if ((pAVar3->unlabelled12 & 0x400000U) != 0) {
		piVar1 = &(pIVar7->parent).flags;
		*piVar1 = *piVar1 | 0x100;
		}
		piVar1 = &(pIVar7->parent).flags;
		*piVar1 = *piVar1 | 0x40;
		pIVar7->field27_0xe0 = (int)pIVar11;
		if (((pAVar3->unlabelled12 & 0x7800U) != 0) &&(pIVar6 = InstanceDataList::GetNode((InstanceDataList *)local_5c,ObjectLink),pIVar6 != (InstanceNodeAbstract *)0x0)) {
		if ((((uint)pAVar3->unlabelled12 >> 0xb & 0xf) == 2) && (DAT_003ea704 != 0)) {
		*(uint *)(DAT_003ea704 + 0xb8) = *(uint *)(DAT_003ea704 + 0xb8) & 0xffffff8f;
		}
		FUN_000f6f90((uint)pAVar3->unlabelled12 >> 0xb & 0xf);
		}
		}
		}
		}
		return;
		}
		
	*/
	return;
}

void ActionAttachFocusObject::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAttachFocusObject * __thiscall ActionAttachFocusObject::Construct(ActionAttachFocusObject *this,uint param_1){
		uint uVar1;
		int iVar2;
		float fVar3;
		fVar3 = FLOAT_0038639c;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_AttachFocusObject;
		this->unlabelled12 = uVar1 & 0xff1e07f8 | param_1 & 7 | 0x1e07f8;
		this->unlabelled28 = (int)fVar3;
		fVar3 = FLOAT_003863a8 / FLOAT_0039d7e8;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		this->unlabelled24 = 0;
		iVar2 = (int)(fVar3 * 0.0);
		this->unlabelled32 = iVar2;
		this->unlabelled36 = iVar2;
		this->unlabelled40 = iVar2;
		return this;
		}
		
	*/
	return;
}

void ActionAttachFocusObject::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionAttachFocusObject::UnkMethod(ActionAttachFocusObject *this,int *param_1){
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
		if (uVar1 < 0x13) {
		switch(uVar1) {
		case 0:this->unlabelled16 = *(int *)(puVar3 + 2);
		this->unlabelled12 = this->unlabelled12 | 0x8000;
		break;
		case 1:this->unlabelled20 = *(int *)(puVar3 + 2);
		this->unlabelled12 = this->unlabelled12 | 0x8000;
		break;
		case 2:this->unlabelled24 = *(int *)(puVar3 + 2);
		switchD_00165713_caseD_4f:this->unlabelled12 = this->unlabelled12 | 0x8000;
		break;
		case 3:this->unlabelled32 = (int)(*(float *)(puVar3 + 2) * FLOAT_003863a4);
		this->unlabelled12 = this->unlabelled12 | 0x10000;
		break;
		case 4:this->unlabelled36 = (int)(*(float *)(puVar3 + 2) * FLOAT_003863a4);
		this->unlabelled12 = this->unlabelled12 | 0x10000;
		break;
		case 5:this->unlabelled40 = (int)(*(float *)(puVar3 + 2) * FLOAT_003863a4);
		this->unlabelled12 = this->unlabelled12 | 0x10000;
		break;
		default:this->unlabelled12 = (uint)*(byte *)(puVar3 + 2) << 3 | this->unlabelled12 & 0xfffff807U;
		break;
		case 0xbad1abe1:break;
		}
		}
		else if (uVar1 == 0x72) {
		uVar4 = this->unlabelled12 ^((uint)(byte)(*(char *)(puVar3 + 2) - 1) << 0x11 ^ this->unlabelled12) & 0x1e0000;
		LAB_00165778:this->unlabelled12 = uVar4;
		}
		else if ((uVar1 == 0xffff) && (*(char *)(puVar3 + 1) == '\x04')) {
		switch(*(undefined4 *)(puVar3 + 2)) {
		case 0x3d:this->unlabelled12 = this->unlabelled12 & 0xffe1ffff;
		break;
		case 0x4d:this->unlabelled12 = this->unlabelled12 | 0x400000;
		break;
		case 0x4f:goto switchD_00165713_caseD_4f;
		case 0x50:this->unlabelled12 = this->unlabelled12 & 0xffff8fffU | 0x800;
		break;
		case 0x51:uVar4 = this->unlabelled12 & 0xffff97ffU | 0x1000;
		goto LAB_00165778;
		case 0x7b:this->unlabelled12 = this->unlabelled12 | 0x200000;
		break;
		case 0xa0:this->unlabelled12 = this->unlabelled12 | 0x800000;
		}
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

int ActionAttachFocusObject::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionAttachFocusObject::GetSize(void){
		return 0x30;
		}
		
	*/
	return 0;
}

