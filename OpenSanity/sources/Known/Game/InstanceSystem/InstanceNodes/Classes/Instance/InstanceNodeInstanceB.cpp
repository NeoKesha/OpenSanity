#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Instance/InstanceNodeInstanceB.h"

#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/InstanceNodeKSubA.h"
#include "headers/Known/Time/UnkTimePack.h"
void InstanceNodeInstanceB::FUN_0004c5a0(UnkTimePack* time, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeInstanceB::FUN_0004c5a0(InstanceNodeInstanceB *this,UnkTimePack *time,uint param_2){
		Vector4 *pVVar1;
		float fVar2;
		float fVar3;
		InstanceNodeInstance_VTable *pIVar4;
		InstanceContext *pIVar5;
		uint uVar6;
		uVar6 = (this->body).parent.field63_0xbc;
		fVar3 = Float9Array[uVar6 >> 10 & 0x1f];
		if ((uVar6 & 0x1f) != param_2) {
		uVar6 = (uVar6 & 0xfffffc1f | (uVar6 & 0x1f) << 5) ^ (uVar6 ^ param_2) & 0x1f;
		(this->body).parent.field63_0xbc = uVar6;
		switch(uVar6 & 0x1f) {
		case 0:pIVar4 = this->vtable;
		(this->body).parent.parent.field2_0x6 = 0;
		(*pIVar4->InstanceMethod0)((InstanceNodeInstance *)this);
		pIVar5 = (this->body).parent.parent.ctx;
		(*((pIVar5->parent).vtable)->Method2)(pIVar5);
		return;
		case 2:if ((uVar6 & 0x80000) == 0) {
		pIVar5 = (this->body).parent.parent.ctx;
		pVVar1 = &(this->body).parent.field61_0x9c;
		(this->body).field3_0xd4 = *(int *)((int)fVar3 + 4);
		thunk_FUN_00026e50((int)pIVar5,pVVar1);
		fVar2 = (float)(this->body).field3_0xd4;
		pVVar1->x = pVVar1->x * fVar2;
		(this->body).parent.field61_0x9c.y = (this->body).parent.field61_0x9c.y * fVar2;
		(this->body).parent.field61_0x9c.z = (this->body).parent.field61_0x9c.z * fVar2;
		}
		(this->body).parent.field63_0xbc = (this->body).parent.field63_0xbc & 0xffffffe3 | 3;
		(this->body).field4_0xd8 = 0;
		(this->body).field1_0xcc = time->time1;
		if ((*(uint *)((int)fVar3 + 0x1c) & 0x200) != 0) {
		thunk_FUN_0004bd70(this);
		}
		break;
		case 0xb:pIVar5 = (this->body).parent.parent.ctx;
		(this->body).field1_0xcc = time->time1;
		(pIVar5->parent).flags = (pIVar5->parent).flags & 0xfffffbff;
		pIVar5 = (this->body).parent.parent.ctx;
		(pIVar5->parent).flags = (pIVar5->parent).flags & 0xffffffef;
		(*this->vtable->InstanceMethod13)((InstanceNodeInstance *)this);
		break;
		case 0xc:thunk_FUN_0003ed80(this,time);
		(this->body).parent.field63_0xbc = (this->body).parent.field63_0xbc & 0xffffffe3 | 3;
		}
		}
		uVar6 = (this->body).parent.field63_0xbc;
		GameObjectScriptPack::Execute(SCRIPT_PACK_ARRAY_2[uVar6 >> 10 & 0x1f] + (uVar6 & 0x1f),(InstanceNodeInstance *)this);
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceB::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeInstanceB * __fastcall InstanceNodeInstanceB::Construct(InstanceNodeInstanceB *this){
		uint *puVar1;
		float fVar2;
		InstanceNodeInstance::Construct((InstanceNodeInstance *)this);
		fVar2 = FLOAT_0038639c;
		this->vtable = (InstanceNodeInstance_VTable *)&InstanceNode_VT_Instance_B;
		(this->body).parent.field61_0x9c.x = 0.0;
		(this->body).parent.field61_0x9c.y = 0.0;
		(this->body).parent.field61_0x9c.z = 0.0;
		(this->body).parent.field61_0x9c.w = fVar2;
		puVar1 = &(this->body).parent.field63_0xbc;
		*puVar1 = *puVar1 & 0xffc7fc00;
		*(undefined2 *)&(this->body).parent.field_0xc0 = 0xffff;
		*(undefined4 *)&(this->body).parent.field_0xc4 = 0;
		*(undefined4 *)&(this->body).parent.field_0xc8 = 0;
		(this->body).field1_0xcc = (int)(TicksPerTime * 0.0);
		(this->body).field3_0xd4 = 0;
		(this->body).field4_0xd8 = 0;
		fVar2 = FLOAT_0038a830;
		(this->body).field2_0xd0 = 0;
		(this->body).field9_0xe0 = fVar2;
		return this;
		}
		
	*/
	return;
}

void InstanceNodeInstanceB::FUN_0003e9f0(UnkTimePack* time, int param_2, float* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __thiscall InstanceNodeInstanceB::FUN_0003e9f0(InstanceNodeInstanceB *this,UnkTimePack *time,int param_2,float *param_3){
		Vector4 *this_00;
		uint *puVar1;
		uint uVar2;
		InstanceTransform *transform;
		InstanceContext *pIVar3;
		bool bVar4;
		undefined4 uVar5;
		float fVar6;
		float fVar7;
		Vector4 local_b0;
		float local_98;
		float local_94;
		float local_90;
		float local_8c;
		float local_88;
		float local_84;
		float local_74;
		float local_70 [4];
		float local_60 [4];
		undefined local_50 [76];
		fVar6 = (float)time->time1 * TimePerTick1;
		if (FLOAT_00386660 < fVar6 - (float)(this->body).field4_0xd8) {
		uVar2 = (this->body).parent.field63_0xbc;
		(this->body).field4_0xd8 = (int)fVar6;
		GameObjectScriptPack::Execute(SCRIPT_PACK_ARRAY_2[uVar2 >> 10 & 0x1f] + 0xc,(InstanceNodeInstance *)this);
		transform = (((this->body).parent.parent.ctx)->parent).transform;
		InstanceTransform::FillMatrix(transform);
		local_b0.x = (transform->matrix).m31;
		local_84 = param_3[3];
		local_b0.y = (transform->matrix).m32;
		local_b0.z = (transform->matrix).m33;
		local_b0.w = (transform->matrix).m34;
		local_90 = *param_3 -(*(float *)(param_2 + 0x50) +(*(float *)(param_2 + 0x60) - *(float *)(param_2 + 0x50)) * FLOAT_00386ab4);
		local_8c = param_3[1] -(*(float *)(param_2 + 0x54) +(*(float *)(param_2 + 100) - *(float *)(param_2 + 0x54)) * FLOAT_00386ab4);
		local_88 = param_3[2] -(*(float *)(param_2 + 0x58) +(*(float *)(param_2 + 0x68) - *(float *)(param_2 + 0x58)) * FLOAT_00386ab4);
		local_94 = FUN_000d4440(ENV_FLOAT_23);
		local_94 = local_94 + FLOAT_00386618;
		local_98 = FUN_000d4440(ENV_FLOAT_23);
		local_98 = local_98 + FLOAT_00386618;
		local_74 = FUN_000d4440(ENV_FLOAT_23);
		local_74 = local_74 + FLOAT_00386618;
		local_8c = local_8c * local_98;
		local_88 = local_88 * local_94;
		local_90 = local_74 * local_90;
		fVar6 = local_88 * local_88 + local_8c * local_8c + local_90 * local_90;
		if (fVar6 <= _DAT_0039d860) {
		fVar7 = 0.0;
		}
		else {
		local_98 = SQRT(fVar6);
		fVar7 = FLOAT_0038639c / local_98;
		local_94 = fVar6;
		}
		this_00 = &(this->body).parent.field61_0x9c;
		local_90 = fVar7 * local_90;
		local_8c = local_8c * fVar7;
		local_88 = local_88 * fVar7;
		FUN_000dbc80(this_00,&local_90,'\0');
		local_b0.y = (this->body).parent.field61_0x9c.y;
		local_b0.z = (this->body).parent.field61_0x9c.z;
		local_b0.w = (this->body).parent.field61_0x9c.w;
		local_b0.x = this_00->x;
		fVar6 = local_b0.z * local_b0.z + local_b0.y * local_b0.y + local_b0.x * local_b0.x;
		if (fVar6 <= _DAT_0039d860) {
		fVar7 = 0.0;
		}
		else {
		local_98 = SQRT(fVar6);
		fVar7 = FLOAT_0038639c / local_98;
		local_94 = fVar6;
		}
		local_b0.x = fVar7 * local_b0.x;
		local_b0.y = local_b0.y * fVar7;
		local_b0.z = local_b0.z * fVar7;
		FUN_000eb6b0(&local_b0,local_60,local_70);
		FUN_000d7ec0(local_50,local_60,local_70,&local_b0.x);
		pIVar3 = (this->body).parent.parent.ctx;
		bVar4 = InstanceTransform::thunk_FUN_00026aa0((pIVar3->parent).transform,(InstanceTransform *)local_50);
		if (bVar4 != false) {
		InstanceContext::RegisterCtxPtrToList(pIVar3);
		}
		fVar6 = (float)time->time2 * TimePerTick1 * (float)(this->body).field3_0xd4;
		pIVar3 = (this->body).parent.parent.ctx;
		local_b0.x = fVar6 * local_b0.x;
		local_b0.y = local_b0.y * fVar6;
		local_b0.z = local_b0.z * fVar6;
		uVar5 = InstanceTransform::thunk_FUN_00026880((pIVar3->parent).transform,&local_b0);
		if ((char)uVar5 != '\0') {
		InstanceContext::RegisterCtxPtrToList(pIVar3);
		}
		puVar1 = &(this->body).parent.field63_0xbc;
		*puVar1 = *puVar1 & 0xffefffff;
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceB::FUN_0004bd70(InstanceNodeInstanceB* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling  WARNING: Globals starting with '_' overlap smaller symbols at the same address void __fastcall InstanceNodeInstanceB::FUN_0004bd70(InstanceNodeInstanceB *param_1){
		float fVar1;
		float fVar2;
		NodeRelated2C *pNVar3;
		US001 *this;
		InstanceTransform *pIVar4;
		uint *puVar5;
		bool bVar6;
		InstanceNodeCharacter *nodeChar;
		undefined4 uVar7;
		InstanceContext *pIVar8;
		InstanceContext *pIVar9;
		InstanceContextRefCounter *pIVar10;
		InstanceNodeInstance *pIVar7;
		uint uVar11;
		InstanceContextSmartPtr *this_00;
		InstanceContext *pIVar12;
		float fVar13;
		Vector4 local_70;
		float local_60;
		float fStack92;
		float fStack88;
		float fStack84;
		undefined auStack80 [76];
		pIVar12 = (InstanceContext *)(((param_1->body).parent.parent.ctx)->parent).field14_0x20.field6_0x18;
		pIVar9 = (InstanceContext *)pIVar12->field27_0xe0;
		if (pIVar9 == (InstanceContext *)0x0) {
		pIVar9 = (InstanceContext *)CTX_PTR;
		if (CTX_PTR != (InstanceContextRefCounter *)0x0) {
		pIVar9 = CTX_PTR->ctx;
		}
		if (pIVar9 != pIVar12) {
		InstanceContextSmartPtr::Release(&CTX_PTR.refCounter);
		CTX_PTR = (InstanceContextRefCounter *)InstanceContextSmartPtr::CreateRef(&pIVar12->smartPtr,pIVar12,0);
		}
		}
		else {
		pIVar8 = (InstanceContext *)CTX_PTR;
		if (CTX_PTR != (InstanceContextRefCounter *)0x0) {
		pIVar8 = CTX_PTR->ctx;
		}
		pIVar12 = pIVar9;
		if (pIVar8 != pIVar9) {
		InstanceContextSmartPtr::Release(&CTX_PTR.refCounter);
		CTX_PTR = (InstanceContextRefCounter *)InstanceContextSmartPtr::CreateRef(&pIVar9->smartPtr,pIVar9,0);
		}
		}
		nodeChar = (InstanceNodeCharacter *)InstanceDataList::GetNode(&pIVar12->nodes,Character);
		pNVar3 = nodeChar->field1_0x18;
		this = pNVar3->data;
		if ((int *)pNVar3->field22_0xb8 != (int *)0x0) {
		(**(code **)(*(int *)pNVar3->field22_0xb8 + 0x20))(&local_70);
		(param_1->body).parent.field61_0x9c.x = local_70.x + (param_1->body).parent.field61_0x9c.x;
		(param_1->body).parent.field61_0x9c.y = (param_1->body).parent.field61_0x9c.y + local_70.y;
		(param_1->body).parent.field61_0x9c.z = (param_1->body).parent.field61_0x9c.z + local_70.z;
		}
		uVar7 = thunk_FUN_000965d0(this,&local_60);
		if ((char)uVar7 == '\0') {
		pIVar4 = (pIVar12->parent).transform;
		puVar5 = (uint *)pNVar3->field13_0xa0;
		if ((*(byte *)&pIVar4->field3_0x60 & 8) != 0) {
		Vector4::FUN_000db0d0(&pIVar4->rotation,&pIVar4->matrix);
		pIVar4->field3_0x60 = (float)((uint)pIVar4->field3_0x60 & 0xfffffff5);
		}
		local_70.x = (pIVar4->rotation).x;
		local_70.y = (pIVar4->rotation).y;
		local_70.z = (pIVar4->rotation).z;
		local_70.w = (pIVar4->rotation).w;
		pIVar12 = (param_1->body).parent.parent.ctx;
		bVar6 = InstanceTransform::thunk_FUN_000269f0((pIVar12->parent).transform,&local_70);
		if (bVar6 != false) {
		InstanceContext::RegisterCtxPtrToList(pIVar12);
		}
		if ((puVar5 != (uint *)0x0) &&(((uVar11 = *puVar5 & 0x1f, uVar11 == 0xc || (uVar11 == 0xd)) || (uVar11 == 0xe)))) {
		pIVar12 = (param_1->body).parent.parent.ctx;
		bVar6 = thunk_FUN_00026b70((pIVar12->parent).transform,0x4000);
		if (bVar6 != false) {
		InstanceContext::RegisterCtxPtrToList(pIVar12);
		}
		}
		return;
		}
		local_70.w = fStack84;
		pIVar4 = (((param_1->body).parent.parent.ctx)->parent).transform;
		if ((*(byte *)&pIVar4->field3_0x60 & 4) != 0) {
		fVar13 = (pIVar4->matrix).m44;
		fVar1 = (pIVar4->matrix).m43;
		fVar2 = (pIVar4->matrix).m42;
		(pIVar4->position).x = (pIVar4->matrix).m41;
		(pIVar4->position).y = fVar2;
		(pIVar4->position).z = fVar1;
		(pIVar4->position).w = fVar13;
		pIVar4->field3_0x60 = (float)((uint)pIVar4->field3_0x60 & 0xfffffffa);
		}
		local_70.x = local_60 - (pIVar4->position).x;
		local_70.y = fStack92 - (pIVar4->position).y;
		local_70.z = fStack88 - (pIVar4->position).z;
		fVar13 = local_70.z * local_70.z + local_70.y * local_70.y + local_70.x * local_70.x;
		if (FLOAT_0038acf0 < fVar13) {
		if (fVar13 <= _DAT_0039d860) {
		fVar13 = 0.0;
		}
		else {
		fVar13 = FLOAT_0038639c / SQRT(fVar13);
		}
		local_70.x = fVar13 * local_70.x;
		local_70.y = local_70.y * fVar13;
		local_70.z = local_70.z * fVar13;
		FUN_000e8990(auStack80,&local_70.x);
		pIVar9 = (param_1->body).parent.parent.ctx;
		bVar6 = InstanceTransform::thunk_FUN_00026aa0((pIVar9->parent).transform,(InstanceTransform *)auStack80);
		if (bVar6 != false) {
		InstanceContext::RegisterCtxPtrToList(pIVar9);
		}
		}
		pIVar8 = (InstanceContext *)thunk_FUN_00091bb0((int *)this);
		this_00 = (InstanceContextSmartPtr *)&(param_1->body).parent.field_0xc4;
		pIVar9 = (InstanceContext *)this_00->refCounter;
		if (pIVar9 != (InstanceContext *)0x0) {
		pIVar9 = (InstanceContext *)(pIVar9->parent).vtable;
		}
		if (pIVar9 != pIVar8) {
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)this_00);
		if (pIVar8 == (InstanceContext *)0x0) {
		this_00->refCounter = (InstanceContextRefCounter *)0x0;
		}
		else {
		pIVar10 = (InstanceContextRefCounter *)InstanceContextSmartPtr::CreateRef(&pIVar8->smartPtr,pIVar8,0);
		this_00->refCounter = pIVar10;
		}
		}
		if (((this_00->refCounter == (InstanceContextRefCounter *)0x0) ||(this_00->refCounter->ctx == (InstanceContext *)0x0)) &&(pIVar7 = (InstanceNodeInstance *)InstanceDataList::GetNode(&pIVar12->nodes,Instance),pIVar7 != (InstanceNodeInstance *)0x0)) {
		fVar13 = pIVar7[1].body.field41_0x3c.vec1.z;
		if ((fVar13 != 0.0) && ((*(byte *)((int)fVar13 + 0x14) & 1) != 0)) {
		pIVar7[1].body.field41_0x3c.vec1.z = 0.0;
		}
		InstanceContextSmartPtr::thunk_FUN_00059e80(this_00,(int *)pIVar7[1].body.field41_0x3c.vec1.z);
		}
		pIVar12 = (InstanceContext *)this_00->refCounter;
		if (pIVar12 != (InstanceContext *)0x0) {
		pIVar12 = *(InstanceContext **)&pIVar12->parent;
		}
		uVar11 = (param_1->body).parent.field63_0xbc;
		(param_1->body).parent.field63_0xbc =uVar11 ^ ((uint)(pIVar12 != (InstanceContext *)0x0) << 0x14 ^ uVar11) & 0x100000;
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceB::FUN_0003ed80(UnkTimePack* time) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeInstanceB::FUN_0003ed80(InstanceNodeInstanceB *this,UnkTimePack *time){
		float fVar1;
		float fVar2;
		float fVar3;
		uint uVar4;
		int iVar5;
		InstanceTransform *pIVar6;
		Vector4 local_20;
		uVar4 = (this->body).parent.field50_0x84;
		if (((uVar4 & 1) != 0) && (iVar5 = *(int *)&(this->body).parent.field_0x2c, iVar5 != 0)) {
		if ((*(byte *)(iVar5 + 0x14) & 1) != 0) {
		*(undefined4 *)&(this->body).parent.field_0x2c = 0;
		(this->body).parent.field50_0x84 = uVar4 & 0xfffffffc;
		return;
		}
		pIVar6 = (((this->body).parent.parent.ctx)->parent).transform;
		if ((*(byte *)&pIVar6->field3_0x60 & 4) != 0) {
		fVar1 = (pIVar6->matrix).m44;
		fVar2 = (pIVar6->matrix).m43;
		fVar3 = (pIVar6->matrix).m42;
		(pIVar6->position).x = (pIVar6->matrix).m41;
		(pIVar6->position).y = fVar3;
		(pIVar6->position).z = fVar2;
		(pIVar6->position).w = fVar1;
		pIVar6->field3_0x60 = (float)((uint)pIVar6->field3_0x60 & 0xfffffffa);
		}
		local_20.x = (pIVar6->position).x;
		local_20.y = (pIVar6->position).y;
		local_20.z = (pIVar6->position).z;
		local_20.w = (pIVar6->position).w;
		thunk_FUN_0003e9f0(this,time,iVar5,&local_20.x);
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceB::UpdateTime(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeInstanceB::UpdateTime(InstanceNodeInstanceB *this,int param_1){
		(*this->vtable->InstanceMethod13)((InstanceNodeInstance *)this);
		(this->body).parent.parent.time = *(uint *)(param_1 + 4);
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceB::InstanceMethod12(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeInstanceB::InstanceMethod12(InstanceNodeInstanceB *this,undefined4 *param_1){
		InstanceNodeInstanceASub *pIVar1;
		if ((this->body).field2_0xd0 == 0) {
		pIVar1 = (InstanceNodeInstanceASub *)VirtualPool::AllocateMemory(0x6c);
		if (pIVar1 == (InstanceNodeInstanceASub *)0x0) {
		pIVar1 = (InstanceNodeInstanceASub *)0x0;
		}
		else {
		pIVar1 = InstanceNodeInstanceASub::FUN_00176000(pIVar1);
		}
		(this->body).field2_0xd0 = (int)pIVar1;
		}
		InstanceNodeInstanceASub::FUN_00170550((InstanceNodeInstanceASub *)(this->body).field2_0xd0,param_1);
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceB::InstanceMethod13() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeInstanceB::InstanceMethod13(InstanceNodeInstanceB *this){
		void *ptr;
		ptr = (void *)(this->body).field2_0xd0;
		if (ptr != (void *)0x0) {
		FUN_00170510((int)ptr);
		VirtualPool::FreeMemory(ptr);
		(this->body).field2_0xd0 = 0;
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceB::FUN_0004bca0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeInstanceB::FUN_0004bca0(InstanceNodeInstanceB *this){
		this->vtable = (InstanceNodeInstance_VTable *)&InstanceNode_VT_Instance_B;
		if (DAT_00491bc1 == '\0') {
		(*(code *)PTR_InstanceMethod13_0038ac7c)();
		}
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)&(this->body).parent.field_0xc8);
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)&(this->body).parent.field_0xc4);
		InstanceNodeInstance::Dispose((InstanceNodeInstance *)this);
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceB::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeInstanceB * __thiscall InstanceNodeInstanceB::Dispose(InstanceNodeInstanceB *this,byte param_1){
		this->vtable = (InstanceNodeInstance_VTable *)&InstanceNode_VT_Instance_B;
		if (DAT_00491bc1 == '\0') {
		(*(code *)PTR_InstanceMethod13_0038ac7c)();
		}
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)&(this->body).parent.field_0xc8);
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)&(this->body).parent.field_0xc4);
		InstanceNodeInstance::Dispose((InstanceNodeInstance *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void InstanceNodeInstanceB::InstanceMethod0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeInstanceB::InstanceMethod0(InstanceNodeInstanceB *this){
		if (DAT_00491bc1 == '\0') {
		(*this->vtable->InstanceMethod13)((InstanceNodeInstance *)this);
		return;
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceB::InstanceMethod1(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeInstanceB::InstanceMethod1(InstanceNodeInstanceB *this,int param_1){
		BlackboardAbstract *this_00;
		uint uVar1;
		int iVar2;
		InstanceNodeInstance::InstanceMethod1((InstanceNodeInstance *)this,(undefined *)param_1);
		this_00 = (BlackboardAbstract *)(this->body).parent.field48_0x7c;
		if (this_00 != (BlackboardAbstract *)0x0) {
		iVar2 = BlackboardAbstract::GetIntValue(this_00,0);
		uVar1 = (this->body).parent.field63_0xbc;
		(this->body).parent.field63_0xbc = uVar1 ^ (iVar2 << 10 ^ uVar1) & 0x7c00;
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceB::InstanceMethod15(Vector4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeInstanceB::InstanceMethod15(InstanceNodeInstanceB *this,Vector4 *param_1){
		uint uVar1;
		(this->body).parent.field61_0x9c.x = param_1->x;
		(this->body).parent.field61_0x9c.y = param_1->y;
		(this->body).parent.field61_0x9c.z = param_1->z;
		(this->body).parent.field61_0x9c.w = param_1->w;
		uVar1 = (this->body).parent.field63_0xbc;
		(this->body).field3_0xd4 =(int)SQRT(param_1->y * param_1->y + param_1->z * param_1->z + param_1->x * param_1->x);
		(this->body).parent.field63_0xbc = uVar1 | 0x80000;
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceB::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceNodeInstanceB::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceB::IsA(uint param_1, InstanceNodeKSubA* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined __thiscall InstanceNodeInstanceB::IsA(InstanceNodeInstanceB *this,undefined4 param_1,InstanceNodeKSubA *param_2){
		InstanceNodeKSubA::FUN_00139650(param_2,&(this->body).parent.field61_0x9c,false);
		return 1;
		}
		
	*/
	return;
}

void InstanceNodeInstanceB::DisposeSomething(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeInstanceB::DisposeSomething(InstanceNodeInstanceB *this,int *param_1){
		uint *puVar1;
		InstanceContext *this_00;
		uint uVar2;
		UnkTimePack *time;
		ushort uVar3;
		int iVar4;
		if (param_1 == (int *)0x0) {
		iVar4 = 0;
		}
		else {
		iVar4 = *param_1;
		}
		if (*(short *)(iVar4 + 8) == 0x100) {
		uVar3 = 0;
		while (*(ushort *)(DAT_003cfec4 + (uint)uVar3 * 2) != (*(ushort *)(*param_1 + 0x14) & 0x7fff)) {
		uVar3 = uVar3 + 1;
		if (0xc < uVar3) {
		InstanceNodeAbstract::UnkMethod1((undefined *)&param_1);
		return;
		}
		}
		iVar4 = *(int *)(*param_1 + 0x1c);
		*(int *)&(this->body).parent.field_0x2c = iVar4;
		if (iVar4 != 0) {
		puVar1 = &(this->body).parent.field50_0x84;
		*puVar1 = *puVar1 | 1;
		}
		uVar2 = (uint)uVar3;
		this_00 = (this->body).parent.parent.ctx;
		(this->body).parent.field50_0x84 = (this->body).parent.field50_0x84 & 0xfffffffd;
		time = (UnkTimePack *)InstanceContext::FUN_000f7220(this_00);
		thunk_FUN_0004c5a0(this,time,uVar2);
		}
		InstanceNodeAbstract::UnkMethod1((undefined *)&param_1);
		return;
		}
		
	*/
	return;
}

bool InstanceNodeInstanceB::Step(UnkTimePack* time) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodeInstanceB::Step(InstanceNodeInstanceB *this,UnkTimePack *time){
		int iVar1;
		bool bVar2;
		uint uVar3;
		if ((*(byte *)&time->flags & 1) == 0) goto switchD_0004cdb2_caseD_9;
		switch((this->body).parent.field63_0xbc & 0x1f) {
		case 2:iVar1 = (this->body).field2_0xd0;
		if (iVar1 != 0) {
		FUN_00176030(iVar1,(InstanceNodeInstance *)this);
		bVar2 = InstanceNodeAbstract::Step((InstanceNodeAbstract *)this,time);
		return bVar2;
		}
		goto switchD_0004cdb2_caseD_9;
		case 3:iVar1 = (this->body).field2_0xd0;
		if (iVar1 != 0) {
		FUN_00176030(iVar1,(InstanceNodeInstance *)this);
		}
		thunk_FUN_0004c750(this,time);
		bVar2 = InstanceNodeAbstract::Step((InstanceNodeAbstract *)this,time);
		return bVar2;
		case 4:case 5:case 6:case 7:case 8:uVar3 = 0xb;
		break;
		default:goto switchD_0004cdb2_caseD_9;
		case 0xb:if ((float)(time->time1 - (this->body).field1_0xcc) * TimePerTick1 <= FLOAT_00386ab4)goto switchD_0004cdb2_caseD_9;
		uVar3 = 0;
		}
		thunk_FUN_0004c5a0(this,time,uVar3);
		switchD_0004cdb2_caseD_9:bVar2 = InstanceNodeAbstract::Step((InstanceNodeAbstract *)this,time);
		return bVar2;
		}
		
	*/
	return false;
}

void InstanceNodeInstanceB::InstanceMethod31() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined InstanceNodeInstanceB::InstanceMethod31(void){
		return 0;
		}
		
	*/
	return;
}

bool InstanceNodeInstanceB::IsB() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool InstanceNodeInstanceB::IsB(void){
		return false;
		}
		
	*/
	return false;
}

bool InstanceNodeInstanceB::IsC() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool InstanceNodeInstanceB::IsC(void){
		return false;
		}
		
	*/
	return false;
}

void InstanceNodeInstanceB::EmptyFunction_20() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceNodeInstanceB::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

uint InstanceNodeInstanceB::GetIndex2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 InstanceNodeInstanceB::GetIndex2(void){
		return 0x12;
		}
		
	*/
	return 0;
}

uint InstanceNodeInstanceB::InstanceMethod14() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __fastcall InstanceNodeInstanceB::InstanceMethod14(InstanceNodeInstanceB *this){
		return (this->body).parent.field63_0xbc >> 10 & 0x1f;
		}
		
	*/
	return 0;
}

uint InstanceNodeInstanceB::Passthrough(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __fastcall InstanceNodeInstanceB::Passthrough(undefined4 param_1){
		return param_1;
		}
		
	*/
	return 0;
}

