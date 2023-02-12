#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x23D.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x23D::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x23D::ExecuteFromCallContext(Action0x23D *this,undefined4 time_clock,InstanceContext *ctx){
		float fVar1;
		float fVar2;
		float fVar3;
		InstanceContext *pIVar4;
		InstanceTransform *pIVar5;
		int this_00;
		float *pfVar6;
		uint uVar7;
		float local_20;
		float local_1c;
		float local_18;
		float local_14;
		pIVar4 = (((ctx->parent).ctx)->parent).ctx;
		this_00 = UnkFamily16A::FUN_001b3ac0(PTR_DefaultRM,pIVar4);
		pIVar5 = (pIVar4->parent).transform;
		if ((*(byte *)&pIVar5->field3_0x60 & 4) != 0) {
		fVar1 = (pIVar5->matrix).m44;
		fVar2 = (pIVar5->matrix).m43;
		fVar3 = (pIVar5->matrix).m42;
		(pIVar5->position).x = (pIVar5->matrix).m41;
		(pIVar5->position).y = fVar3;
		(pIVar5->position).z = fVar2;
		(pIVar5->position).w = fVar1;
		pIVar5->field3_0x60 = (float)((uint)pIVar5->field3_0x60 & 0xfffffffa);
		}
		local_20 = (pIVar5->position).x;
		local_1c = (pIVar5->position).y;
		local_18 = (pIVar5->position).z;
		local_14 = (pIVar5->position).w;
		pfVar6 = FUN_001b1cc0(this_00,&local_20,(ushort *)0x0);
		if (pfVar6 != (float *)0x0) {
		uVar7 = this->unlabelled12 & 3;
		if (uVar7 == 1) {
		*(byte *)(pfVar6 + 7) = *(byte *)(pfVar6 + 7) & 0xfe;
		}
		else if (uVar7 == 2) {
		*(byte *)(pfVar6 + 7) = *(byte *)(pfVar6 + 7) | 1;
		}
		uVar7 = (uint)this->unlabelled12 >> 2 & 3;
		if (uVar7 == 1) {
		*(byte *)(pfVar6 + 7) = *(byte *)(pfVar6 + 7) | 2;
		}
		else if (uVar7 == 2) {
		*(byte *)(pfVar6 + 7) = *(byte *)(pfVar6 + 7) & 0xfd;
		}
		uVar7 = (uint)this->unlabelled12 >> 4 & 3;
		if (uVar7 == 1) {
		*(byte *)(pfVar6 + 7) = *(byte *)(pfVar6 + 7) | 4;
		}
		else if (uVar7 == 2) {
		*(byte *)(pfVar6 + 7) = *(byte *)(pfVar6 + 7) & 0xfb;
		return;
		}
		}
		return;
		}
		
	*/
	return;
}

void Action0x23D::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x23D::Dispose(Action0x23D *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x23D::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x23D * __fastcall Action0x23D::Construct(Action0x23D *this){
		uint uVar1;
		float fVar2;
		fVar2 = FLOAT_0038639c;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x23D;
		this->unlabelled12 = uVar1 & 0xffffff80;
		this->unlabelled16 = (int)fVar2;
		this->unlabelled20 = (int)fVar2;
		return this;
		}
		
	*/
	return;
}

int Action0x23D::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x23D::GetSize(void){
		return 0x18;
		}
		
	*/
	return 0;
}

void Action0x23D::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x23D::UnkMethod(Action0x23D *this,int *param_1){
		ushort uVar1;
		char cVar2;
		bool bVar3;
		ushort *puVar4;
		uint uVar5;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar2 != '\0') {
		return;
		}
		puVar4 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar1 = *puVar4;
		if (uVar1 < 0xb1) {
		if (uVar1 == 0xb0) {
		bVar3 = FUN_0017ef90((int)puVar4);
		uVar5 = this->unlabelled12 ^ (((bVar3 == false) + 1) * 4 ^ this->unlabelled12) & 0xc;
		}
		else if (uVar1 == 0x65) {
		this->unlabelled16 = *(int *)(puVar4 + 2);
		uVar5 = this->unlabelled12 | 0x40;
		}
		else if (uVar1 == 0xae) {
		this->unlabelled20 = *(int *)(puVar4 + 2);
		uVar5 = this->unlabelled12 | 0x40;
		}
		else {
		if (uVar1 != 0xaf) goto LAB_000440ed;
		bVar3 = FUN_0017ef90((int)puVar4);
		uVar5 = this->unlabelled12 ^ ((bVar3 == false) + 1 ^ this->unlabelled12) & 3;
		}
		LAB_000440ea:this->unlabelled12 = uVar5;
		}
		else if (uVar1 == 0xb1) {
		bVar3 = FUN_0017ef90((int)puVar4);
		uVar5 = this->unlabelled12 ^ (((bVar3 == false) + 1) * 0x10 ^ this->unlabelled12) & 0x30;
		goto LAB_000440ea;
		}
		LAB_000440ed:IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

