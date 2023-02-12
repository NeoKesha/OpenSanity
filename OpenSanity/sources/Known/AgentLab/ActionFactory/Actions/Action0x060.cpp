#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x060.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x060::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x060::Dispose(Action0x060 *this,byte param_1){
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

void Action0x060::UnkMethod(int* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x060::UnkMethod(int this,int *param_2){
		ushort uVar1;
		bool bVar2;
		ushort *this_00;
		uint uVar3;
		int iVar4;
		float fVar5;
		float fVar6;
		IteratorE2 local_10;
		FUN_00181ae0(param_2,(undefined4 *)(this + 0x20));
		FUN_00181a50(param_2,(uint *)(this + 0xb0));
		IteratorE2::Construct(&local_10,param_2);
		IteratorE2::Rewind(&local_10);
		bVar2 = IteratorE2::IsEnd(&local_10);
		if (bVar2 == false) {
		do {
		this_00 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar3 = FUN_0017f240(this_00,*(uint *)(this + 0xa8) >> 0x14 & 0xff);
		uVar3 = *(uint *)(this + 0xa8) ^ (uVar3 << 0x14 ^ *(uint *)(this + 0xa8)) & 0xff00000;
		*(uint *)(this + 0xa8) = uVar3;
		iVar4 = FUN_00180820(this_00,uVar3 >> 8 & 0xf);
		*(uint *)(this + 0xa8) =*(uint *)(this + 0xa8) ^ (iVar4 << 8 ^ *(uint *)(this + 0xa8)) & 0xf00;
		FUN_0017f260(this_00,(uint *)(this + 0x10));
		uVar1 = *this_00;
		if (uVar1 < 0x59) {
		if (uVar1 == 0x58) {
		*(uint *)(this + 0xac) = *(uint *)(this + 0xac) | 1;
		uVar3 = *(uint *)(this + 0xa8);
		if ((uVar3 & 0xff00000) != 0xff00000) {
		*(uint *)(this + 0xa8) = ((uVar3 & 0xfff00000) + 0x100000 ^ uVar3) & 0xff00000 ^ uVar3;
		}
		}
		else if (uVar1 == 6) {
		*(uint *)(this + 0xa8) =(uint)*(byte *)(this_00 + 2) << 0xc | *(uint *)(this + 0xa8) & 0xfff00fff;
		}
		else if (uVar1 == 0x12) {
		*(undefined *)(this + 0xa8) = *(undefined *)(this_00 + 2);
		}
		else if (uVar1 == 0x3c) {
		*(undefined4 *)(this + 0xb4) = *(undefined4 *)(this_00 + 2);
		*(uint *)(this + 0xac) = *(uint *)(this + 0xac) | 4;
		}
		}
		else if (uVar1 == 0x9f) {
		*(undefined4 *)(this + 0xbc) = *(undefined4 *)(this_00 + 2);
		}
		else if (uVar1 == 0xa0) {
		*(undefined4 *)(this + 0xb8) = *(undefined4 *)(this_00 + 2);
		}
		else if ((uVar1 == 0xffff) && (*(char *)(this_00 + 1) == '\x04')) {
		iVar4 = *(int *)(this_00 + 2);
		if (iVar4 == 0x4e) {
		*(uint *)(this + 0xac) = *(uint *)(this + 0xac) | 8;
		}
		else if (iVar4 == 0x76) {
		*(uint *)(this + 0xac) = *(uint *)(this + 0xac) | 0x40;
		}
		else if (iVar4 == 0x79) {
		*(uint *)(this + 0xac) = *(uint *)(this + 0xac) | 0x80;
		}
		}
		IteratorE2::Iterate(&local_10);
		bVar2 = IteratorE2::IsEnd(&local_10);
		}
		 while (bVar2 == false);
		}
		fVar6 = *(float *)(this + 0x10);
		if (fVar6 < 0.0) {
		fVar6 = 0.0 - fVar6;
		}
		if (fVar6 <= FLOAT_003a35c8) {
		fVar6 = *(float *)(this + 0x14);
		if (fVar6 < 0.0) {
		fVar6 = 0.0 - fVar6;
		}
		if (fVar6 <= FLOAT_003a35c8) {
		fVar6 = *(float *)(this + 0x18);
		fVar5 = 0.0 - fVar6;
		if (0.0 <= fVar6) {
		fVar5 = fVar6;
		}
		if (fVar5 <= FLOAT_003a35c8) goto LAB_0016692a;
		}
		}
		*(uint *)(this + 0xac) = *(uint *)(this + 0xac) | 2;
		LAB_0016692a:*(uint *)(this + 0x8c) = *(uint *)(this + 0x8c) | 0x4000;
		return;
		}
		
	*/
	return;
}

void Action0x060::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x060::ExecuteFromCallContext(Action0x060 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceNodeAbstract *pIVar2;
		InstanceContext *pIVar3;
		InstanceNodeAbstract_VTable *pIVar4;
		int iVar5;
		InstanceNodeAbstract *pIVar6;
		InstanceNodeObjectLink *this_00;
		uint uVar7;
		InstanceNodeAbstract *this_01;
		void *pvVar8;
		int *piVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		float local_30;
		float local_2c;
		float local_28;
		float local_24;
		float local_20;
		float local_1c;
		float local_18;
		float local_14;
		pIVar1 = (ctx->parent).ctx;
		pIVar2 = (pIVar1->nodes).array[0xd];
		pIVar3 = (pIVar1->parent).ctx;
		if (((pIVar2 != (InstanceNodeAbstract *)0x0) && ((*(byte *)&pIVar2->field6_0x14 & 1) != 0)) &&((~(byte)((uint)(pIVar1->parent).field14_0x20.matrix2.m43 >> 0x14) & 1) != 0)) {
		(pIVar1->nodes).array[0xd] = (InstanceNodeAbstract *)0x0;
		}
		pIVar2 = (pIVar1->nodes).array[0xd];
		if (pIVar2 != (InstanceNodeAbstract *)0x0) {
		if (*(char *)&(pIVar3->parent).flags < '\0') {
		this_00 = (InstanceNodeObjectLink *)InstanceDataList::GetNode(&pIVar3->nodes,ObjectLink);
		uVar7 = InstanceNodeObjectLink::FUN_000fc0b0(this_00,&pIVar2->vtable,0,'\x01','\0');
		if (((char)uVar7 != '\0') && ((*(byte *)&this_00->field7_0x18 & 0x1f) == 0)) {
		piVar9 = &(pIVar3->parent).flags;
		*piVar9 = *piVar9 & 0xffffff7f;
		}
		}
		if ((*(byte *)&this->unlabelled172 & 8) != 0) {
		pIVar2->field6_0x14 = pIVar2->field6_0x14 & 0xfffffeff;
		}
		pIVar2->field6_0x14 = pIVar2->field6_0x14 & 0xffffffbf;
		*(undefined4 *)&pIVar2[9].field2_0x8 = 0;
		this_01 = InstanceDataList::GetNode((InstanceDataList *)&pIVar2[9].time,Instance);
		if (this_01 != (InstanceNodeAbstract *)0x0) {
		local_30 = 0.0;
		local_2c = 0.0;
		local_28 = 0.0;
		local_24 = FLOAT_0038639c;
		if ((*(byte *)&this->unlabelled172 & 2) == 0) {
		piVar9 = (int *)0x0;
		}
		else {
		piVar9 = &this->unlabelled16;
		}
		uVar7 = this->unlabelled168;
		FUN_00176960(&local_30,uVar7 >> 8 & 0xf,(int)ctx,(float *)piVar9,(byte)(uVar7 >> 0x14),(byte)(uVar7 >> 0xc));
		if ((*(byte *)&this->unlabelled172 & 4) != 0) {
		FUN_0016d590(&local_30,(float)this->unlabelled180,1.0,1.0,1.0);
		}
		pIVar4 = pIVar2[1].vtable;
		if ((*(byte *)&pIVar4[2].GetIndex & 4) != 0) {
		pIVar4[1].UpdateTime = (UpdateTime *)pIVar4[1].SetCtx;
		pIVar4[1].Step = (Step *)pIVar4[1].IsA;
		pIVar4[1].Method8 = (Method8 *)pIVar4[1].GetIndex;
		pIVar4[1].GetBuilderIndex = (GetBuilderIndex *)pIVar4[1].Method5;
		pIVar4[2].GetIndex = (GetIndex *)((uint)pIVar4[2].GetIndex & 0xfffffffa);
		}
		local_14 = local_24;
		local_20 = local_30 - (float)pIVar4[1].UpdateTime;
		local_18 = local_28 - (float)pIVar4[1].Method8;
		local_1c = 0.0;
		fVar10 = SQRT(local_18 * local_18 + local_20 * local_20);
		iVar5 = (pIVar1->parent).field14_0x20.field27_0x78;
		fVar11 = local_2c - (float)pIVar4[1].Step;
		if (iVar5 == 0) {
		pvVar8 = (void *)(pIVar1->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar8 = (void *)FUN_00017ba8(iVar5);
		}
		fVar12 = FUN_00180490(&this->unlabelled176,pvVar8);
		local_1c = fVar10 / fVar12;
		fVar12 = fVar12 / fVar10;
		local_20 = fVar12 * local_20;
		local_18 = local_18 * fVar12;
		local_1c = ((float)this->unlabelled44 * local_1c * local_1c * FLOAT_00386ab4 + fVar11) /local_1c;
		fVar10 = (float)this->unlabelled184;
		if (*(char *)&this->unlabelled172 < '\0') {
		pIVar6 = (pIVar1->nodes).array[0xc];
		if ((pIVar6 != (InstanceNodeAbstract *)0x0) && ((*(byte *)&pIVar6->field6_0x14 & 1) != 0)) {
		(pIVar1->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		}
		pIVar6 = (pIVar1->nodes).array[0xc];
		this_01[0xb].field5_0x10 = pIVar6;
		if (pIVar6 != (InstanceNodeAbstract *)0x0) {
		*(InstanceNodeAbstract **)&pIVar6[2].field2_0x8 = pIVar2;
		}
		}
		FUN_0017b050(this_01,(int)&this->unlabelled32,&local_20,(float)this->unlabelled188,fVar10);
		}
		}
		return;
		}
		
	*/
	return;
}

void Action0x060::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x060 * __fastcall Action0x060::Construct(Action0x060 *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x060;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		this->unlabelled24 = 0;
		this->unlabelled28 = (int)FLOAT_0038639c;
		AutoClass28::Construct((AutoClass28 *)&this->unlabelled32,'\x01','\0');
		this->unlabelled172 = this->unlabelled172 & 0xffffff00;
		this->unlabelled168 = this->unlabelled168 & 0xfffff0ffU | 0xffff0ff;
		FUN_00180380(&this->unlabelled176,0x3f800000);
		this->unlabelled180 = 0;
		this->unlabelled184 = 0;
		this->unlabelled188 = 0;
		return this;
		}
		
	*/
	return;
}

int Action0x060::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x060::GetSize(void){
		return 0xc0;
		}
		
	*/
	return 0;
}

