#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetKeyNearestPlayer.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetKeyNearestPlayer::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall ActionSetKeyNearestPlayer::ExecuteFromCallContext(ActionSetKeyNearestPlayer *this,undefined4 time_clock,InstanceContext *ctx){
		byte bVar1;
		InstanceContextRefCounter *pIVar2;
		InstanceContext *pIVar3;
		InstanceNodeAbstract *pIVar4;
		float *pfVar5;
		InstanceTransform *pIVar6;
		InstanceNodeAbstract_VTable *pIVar7;
		uint uVar8;
		InstanceNodeAbstract *pIVar9;
		InstanceContext *pIVar10;
		float *pfVar11;
		uint uVar12;
		float fVar13;
		float fVar14;
		float fVar15;
		float fVar16;
		uint uStack76;
		float local_40;
		float local_3c;
		float local_38;
		GetIndex *local_30;
		Method5 *local_2c;
		UpdateTime *local_28;
		uVar8 = (GameController1->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar8 == 6) {
		pIVar10 = (InstanceContext *)0x0;
		}
		else {
		pIVar2 = (GameController1->chunkDescriptor).playerInstanceContexts[uVar8];
		if (pIVar2 == (InstanceContextRefCounter *)0x0) {
		pIVar10 = (InstanceContext *)0x0;
		}
		else {
		pIVar10 = pIVar2->ctx;
		}
		}
		if (pIVar10 != (InstanceContext *)0x0) {
		pIVar3 = (ctx->parent).ctx;
		pIVar4 = (pIVar3->nodes).array[0xf];
		pIVar3 = (pIVar3->parent).ctx;
		pfVar5 = (float *)(&pIVar4->vtable->DisposeSomething)[*(byte *)&pIVar4[2].field6_0x14];
		pIVar6 = (pIVar10->parent).transform;
		if ((*(byte *)&pIVar6->field3_0x60 & 4) != 0) {
		fVar14 = (pIVar6->matrix).m44;
		fVar13 = (pIVar6->matrix).m43;
		fVar15 = (pIVar6->matrix).m42;
		(pIVar6->position).x = (pIVar6->matrix).m41;
		(pIVar6->position).y = fVar15;
		(pIVar6->position).z = fVar13;
		(pIVar6->position).w = fVar14;
		pIVar6->field3_0x60 = (float)((uint)pIVar6->field3_0x60 & 0xfffffffa);
		}
		local_40 = (pIVar6->position).x;
		local_3c = (pIVar6->position).y;
		local_38 = (pIVar6->position).z;
		pIVar9 = InstanceDataList::GetNode(&pIVar10->nodes,Character);
		pIVar7 = pIVar9[1].vtable;
		if ((int *)pIVar7[4].UpdateTime == (int *)0x0) {
		local_30 = pIVar7[2].GetIndex;
		local_2c = pIVar7[2].Method5;
		local_28 = pIVar7[2].UpdateTime;
		}
		else {
		(**(code **)(*(int *)pIVar7[4].UpdateTime + 0x20))(&local_30);
		}
		fVar13 = FLOAT_00386648;
		fVar14 = (float)this->unlabelled16;
		if (POPCOUNT((fVar14 == 0.0) << 6) == '\0') {
		local_40 = fVar14 * (float)local_30 + local_40;
		local_3c = (float)local_2c * fVar14 + local_3c;
		local_38 = (float)local_28 * fVar14 + local_38;
		}
		uStack76 = 0xffffffff;
		if ((float)this->unlabelled12 == 0.0) {
		bVar1 = *(byte *)((int)&pIVar4[2].field5_0x10 + 1);
		uVar12 = (uint)bVar1;
		uVar8 = 0;
		if (uVar12 == 0) {
		return;
		}
		fVar14 = FLOAT_00386648;
		do {
		if (((this->unlabelled24 & 0xffU) <= uVar8) &&(uVar8 <= *(byte *)((int)&this->unlabelled24 + 1))) {
		if (bVar1 == 0) {
		pfVar11 = (float *)0x0;
		}
		else if ((int)uVar8 < (int)uVar12) {
		pfVar11 = (float *)(&pIVar4->vtable->DisposeSomething)[uVar8];
		}
		else {
		pfVar11 = (float *)0x0;
		}
		if (((*(char *)&this->unlabelled20 != '\0') || (pfVar11 != pfVar5)) &&(fVar13 = (pfVar11[2] - local_38) * (pfVar11[2] - local_38) +(pfVar11[1] - local_3c) * (pfVar11[1] - local_3c) +(*pfVar11 - local_40) * (*pfVar11 - local_40), fVar13 < fVar14)) {
		fVar14 = fVar13;
		uStack76 = uVar8;
		}
		}
		uVar8 = uVar8 + 1;
		}
		 while (uVar8 < *(byte *)((int)&pIVar4[2].field5_0x10 + 1));
		}
		else {
		pIVar6 = (pIVar3->parent).transform;
		if ((*(byte *)&pIVar6->field3_0x60 & 4) != 0) {
		fVar14 = (pIVar6->matrix).m44;
		fVar15 = (pIVar6->matrix).m43;
		fVar16 = (pIVar6->matrix).m42;
		(pIVar6->position).x = (pIVar6->matrix).m41;
		(pIVar6->position).y = fVar16;
		(pIVar6->position).z = fVar15;
		(pIVar6->position).w = fVar14;
		pIVar6->field3_0x60 = (float)((uint)pIVar6->field3_0x60 & 0xfffffffa);
		}
		bVar1 = *(byte *)((int)&pIVar4[2].field5_0x10 + 1);
		uVar12 = (uint)bVar1;
		uVar8 = 0;
		if (uVar12 == 0) {
		return;
		}
		do {
		if (((this->unlabelled24 & 0xffU) <= uVar8) &&(uVar8 <= *(byte *)((int)&this->unlabelled24 + 1))) {
		if (bVar1 == 0) {
		pfVar11 = (float *)0x0;
		}
		else if ((int)uVar8 < (int)uVar12) {
		pfVar11 = (float *)(&pIVar4->vtable->DisposeSomething)[uVar8];
		}
		else {
		pfVar11 = (float *)0x0;
		}
		if ((((*(char *)&this->unlabelled20 != '\0') || (pfVar11 != pfVar5)) &&(fVar16 = pfVar11[2] - local_38, fVar15 = pfVar11[1] - local_3c,fVar14 = *pfVar11 - local_40,fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14 < (float)this->unlabelled12)) &&(fVar15 = pfVar11[1] - (pIVar6->position).y, fVar16 = pfVar11[2] - (pIVar6->position).z, fVar14 = *pfVar11 - (pIVar6->position).x,fVar14 = fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14, fVar14 < fVar13)) {
		fVar13 = fVar14;
		uStack76 = uVar8;
		}
		}
		uVar8 = uVar8 + 1;
		}
		 while (uVar8 < *(byte *)((int)&pIVar4[2].field5_0x10 + 1));
		}
		if (uStack76 != 0xffffffff) {
		*(byte *)&pIVar4[2].field5_0x10 =*(byte *)&pIVar4[2].field5_0x10 ^((uStack76 == uVar12) << 3 ^ *(byte *)&pIVar4[2].field5_0x10) & 8;
		if ((int)uVar12 <= (int)uStack76) {
		uStack76 = uStack76 - uVar12;
		}
		*(char *)&pIVar4[2].field6_0x14 = (char)uStack76;
		}
		}
		return;
		}
		
	*/
	return;
}

void ActionSetKeyNearestPlayer::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetKeyNearestPlayer::Dispose(ActionSetKeyNearestPlayer *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetKeyNearestPlayer::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetKeyNearestPlayer * __fastcall ActionSetKeyNearestPlayer::Construct(ActionSetKeyNearestPlayer *this){
		uint uVar1;
		*(undefined *)&this->unlabelled24 = 0;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		*(undefined *)&this->unlabelled20 = 0;
		uVar1 = this->unlabelled24;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetKeyNearestPlayer;
		this->unlabelled12 = 0;
		this->unlabelled16 = 0;
		this->unlabelled24 = uVar1 | 0xff00;
		return this;
		}
		
	*/
	return;
}

void ActionSetKeyNearestPlayer::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetKeyNearestPlayer::UnkMethod(ActionSetKeyNearestPlayer *this,int *param_1){
		float fVar1;
		ushort uVar2;
		char cVar3;
		ushort *puVar4;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		while (cVar3 == '\0') {
		puVar4 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar2 = *puVar4;
		if (uVar2 < 0x5c) {
		if (uVar2 == 0x5b) {
		*(char *)((int)&this->unlabelled24 + 1) = *(char *)(puVar4 + 2) + -1;
		}
		else if (uVar2 == 0x3c) {
		fVar1 = *(float *)(puVar4 + 2);
		if (FLOAT_0038aba8 < fVar1) {
		this->unlabelled12 = (int)(fVar1 * fVar1);
		}
		}
		else if (uVar2 == 0x5a) {
		*(char *)&this->unlabelled24 = *(char *)(puVar4 + 2) + -1;
		}
		}
		else if (uVar2 == 0x11b) {
		this->unlabelled16 = *(int *)(puVar4 + 2);
		}
		else if ((uVar2 == 0xffff) && (*(int *)(puVar4 + 2) == 0x252)) {
		*(undefined *)&this->unlabelled20 = 1;
		}
		IteratorE2::Iterate(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

int ActionSetKeyNearestPlayer::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetKeyNearestPlayer::GetSize(void){
		return 0x1c;
		}
		
	*/
	return 0;
}

