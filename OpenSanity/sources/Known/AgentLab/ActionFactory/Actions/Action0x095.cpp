#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x095.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x095::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x095::Dispose(Action0x095 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x095::ExecuteFromCallContext(int time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x095::ExecuteFromCallContext(Action0x095 *this,int time_clock,InstanceContext *ctx){
		float fVar1;
		float fVar2;
		float fVar3;
		byte bVar4;
		int iVar5;
		InstanceTransform *pIVar6;
		InstanceContext *pIVar7;
		bool bVar8;
		InstanceNodeAbstract *pIVar9;
		int iVar10;
		undefined4 uVar11;
		float fVar12;
		float fVar13;
		float fVar14;
		float fVar15;
		float fVar16;
		iVar10 = ((((ctx->parent).ctx)->parent).ctx)->field27_0xe0;
		if (iVar10 != 0) {
		pIVar9 = InstanceDataList::GetNode((InstanceDataList *)(iVar10 + 0xe4),Instance);
		iVar5 = *(int *)&pIVar9[0xc].field2_0x8;
		fVar1 = *(float *)(iVar5 + 0x20);
		fVar2 = *(float *)(iVar5 + 0x24);
		fVar3 = *(float *)(iVar5 + 0x28);
		bVar4 = *(byte *)&this->unlabelled16;
		if ((bVar4 & 8) == 0) {
		if ((bVar4 & 0x10) == 0) {
		fVar13 = fVar3;
		fVar14 = fVar2;
		fVar16 = fVar1;
		if ((bVar4 & 0x20) != 0) {
		pIVar6 = *(InstanceTransform **)(iVar10 + 0x18);
		InstanceTransform::FillMatrix(pIVar6);
		fVar13 = (pIVar6->matrix).m33;
		fVar14 = (pIVar6->matrix).m32;
		fVar16 = (pIVar6->matrix).m31;
		}
		}
		else {
		pIVar6 = *(InstanceTransform **)(iVar10 + 0x18);
		InstanceTransform::FillMatrix(pIVar6);
		fVar13 = (pIVar6->matrix).m23;
		fVar14 = (pIVar6->matrix).m22;
		fVar16 = (pIVar6->matrix).m21;
		}
		}
		else {
		pIVar6 = *(InstanceTransform **)(iVar10 + 0x18);
		InstanceTransform::FillMatrix(pIVar6);
		fVar13 = (pIVar6->matrix).m13;
		fVar14 = (pIVar6->matrix).m12;
		fVar16 = (pIVar6->matrix).m11;
		}
		fVar12 = fVar13 * fVar13 + fVar14 * fVar14 + fVar16 * fVar16;
		if (fVar12 <= FLOAT_003a35c0) {
		fVar12 = 0.0;
		}
		else {
		fVar12 = FLOAT_0038639c / SQRT(fVar12);
		}
		pIVar7 = (ctx->parent).ctx;
		iVar10 = *(int *)&(pIVar7->parent).field_0xc;
		if (iVar10 == 0) {
		fVar15 = 0.0;
		}
		else {
		fVar15 = (float)(*(int *)(time_clock + 4) - iVar10) * TimePerTick1;
		}
		bVar4 = *(byte *)&this->unlabelled16;
		iVar10 = (int)((float)this->unlabelled12 * fVar15 *(fVar13 * fVar12 * fVar3 + fVar14 * fVar12 * fVar2 + fVar16 * fVar12 * fVar1) *FLOAT_003863a4);
		if ((bVar4 & 1) == 0) {
		if ((bVar4 & 2) == 0) {
		if ((bVar4 & 4) != 0) {
		FUN_0016bb50((int)(((ctx->parent).ctx)->parent).ctx,iVar10);
		}
		}
		else {
		pIVar7 = (pIVar7->parent).ctx;
		uVar11 = FUN_0016b940((pIVar7->parent).transform,iVar10);
		if ((char)uVar11 != '\0') {
		InstanceContext::RegisterCtxPtrToList(pIVar7);
		return;
		}
		}
		}
		else {
		pIVar7 = (pIVar7->parent).ctx;
		bVar8 = thunk_FUN_00026b70((pIVar7->parent).transform,iVar10);
		if (bVar8 != false) {
		InstanceContext::RegisterCtxPtrToList(pIVar7);
		return;
		}
		}
		}
		return;
		}
		
	*/
	return;
}

void Action0x095::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x095 * __fastcall Action0x095::Construct(Action0x095 *this){
		byte bVar1;
		float fVar2;
		fVar2 = FLOAT_0038639c;
		bVar1 = *(byte *)&this->unlabelled16;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x095;
		this->unlabelled12 = (int)fVar2;
		*(byte *)&this->unlabelled16 = bVar1 & 0xe4 | 0x24;
		return this;
		}
		
	*/
	return;
}

int Action0x095::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x095::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

void Action0x095::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x095::UnkMethod(Action0x095 *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0xd6) {
		this->unlabelled12 = *(int *)(psVar2 + 2);
		}
		else if ((*psVar2 == -1) && (*(char *)(psVar2 + 1) == '\x04')) {
		switch(*(undefined4 *)(psVar2 + 2)) {
		case 0x99:*(byte *)&this->unlabelled16 = *(byte *)&this->unlabelled16 & 0xf9 | 1;
		break;
		case 0x9a:*(byte *)&this->unlabelled16 = *(byte *)&this->unlabelled16 & 0xfa | 2;
		break;
		case 0x9b:*(byte *)&this->unlabelled16 = *(byte *)&this->unlabelled16 & 0xfc | 4;
		break;
		case 0xbf:*(byte *)&this->unlabelled16 = *(byte *)&this->unlabelled16 & 0xcf | 8;
		break;
		case 0xc0:*(byte *)&this->unlabelled16 = *(byte *)&this->unlabelled16 & 0xd7 | 0x10;
		break;
		case 0xc1:*(byte *)&this->unlabelled16 = *(byte *)&this->unlabelled16 & 0xe7 | 0x20;
		}
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

