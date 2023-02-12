#include "headers/Known/AgentLab/ActionFactory/Actions/ActionShoot.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionShoot::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionShoot::Dispose(ActionShoot *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionShoot::Execute(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionShoot::Execute(int this,InstanceContext *ctx){
		uint *puVar1;
		float fVar2;
		InstanceContext *ctx_00;
		int *piVar3;
		InstanceTransform *transform;
		InstanceNodeInstance_VTable *pIVar4;
		GameResourceManager *this_00;
		bool bVar5;
		ChunkMeta *pCVar6;
		InstanceNodeAbstract *pIVar7;
		Matrix4 *pMVar8;
		InstanceContext *this_01;
		InstanceNodeInstanceB *this_02;
		InstanceContext *pIVar9;
		UnkTimePack *time;
		UnkFamily5AB *this_03;
		UnkFamily5AA *pUVar10;
		InstanceContextSmartPtr IVar11;
		uint uVar12;
		undefined4 uVar13;
		int local_6c [3];
		float local_60;
		float local_5c;
		float local_58;
		float local_54;
		Matrix4 local_50;
		ctx_00 = (ctx->parent).ctx;
		pCVar6 = (ChunkMeta *)UnkFamily16A::FUN_001b3ac0(PTR_DefaultRM,ctx_00);
		this_00 = ResourceManager;
		GameResourceManager::FUN_001a79d0(ResourceManager);
		GameResourceManager::FUN_001a79c0(this_00);
		FUN_001a7970((int)this_00);
		FUN_001a7a00((int)this_00);
		FUN_001a7a20((int)this_00);
		(this_00->parent).field1_0x4 = 0;
		if (*(char *)(this + 0x26) == -1) {
		transform = (ctx_00->parent).transform;
		InstanceTransform::FillMatrix(transform);
		local_50.m11 = (transform->matrix).m11;
		local_50.m12 = (transform->matrix).m12;
		local_50.m13 = (transform->matrix).m13;
		local_50.m14 = (transform->matrix).m14;
		local_50.m21 = (transform->matrix).m21;
		local_50.m22 = (transform->matrix).m22;
		local_50.m23 = (transform->matrix).m23;
		local_50.m24 = (transform->matrix).m24;
		local_50.m31 = (transform->matrix).m31;
		local_50.m32 = (transform->matrix).m32;
		local_50.m33 = (transform->matrix).m33;
		local_50.m34 = (transform->matrix).m34;
		local_50.m41 = (transform->matrix).m41;
		local_50.m42 = (transform->matrix).m42;
		local_50.m43 = (transform->matrix).m43;
		local_50.m44 = (transform->matrix).m44;
		}
		else {
		pIVar7 = InstanceDataList::GetNode(&ctx_00->nodes,OGI);
		if (((pIVar7[1].time == 0) || (piVar3 = *(int **)(pIVar7[1].time + 0x10), piVar3 == (int *)0x0))|| (pMVar8 = *(Matrix4 **)(*piVar3 + (uint)*(byte *)(this + 0x26) * 4),pMVar8 == (Matrix4 *)0x0)) {
		Matrix4::Construct1(&local_50);
		}
		else {
		pMVar8 = FUN_001f8be0(pMVar8);
		local_50.m11 = pMVar8->m11;
		local_50.m12 = pMVar8->m12;
		local_50.m13 = pMVar8->m13;
		local_50.m14 = pMVar8->m14;
		local_50.m21 = pMVar8->m21;
		local_50.m22 = pMVar8->m22;
		local_50.m23 = pMVar8->m23;
		local_50.m24 = pMVar8->m24;
		local_50.m31 = pMVar8->m31;
		local_50.m32 = pMVar8->m32;
		local_50.m33 = pMVar8->m33;
		local_50.m34 = pMVar8->m34;
		local_50.m41 = pMVar8->m41;
		local_50.m42 = pMVar8->m42;
		local_50.m43 = pMVar8->m43;
		local_50.m44 = pMVar8->m44;
		thunk_FUN_000543a0(&local_50.m11);
		thunk_FUN_000543a0(&local_50.m21);
		thunk_FUN_000543a0(&local_50.m31);
		}
		}
		if ((*(uint *)(this + 0x24) & 0x8000000) == 0) {
		local_60 = local_50.m41;
		local_5c = local_50.m42;
		local_58 = local_50.m43;
		}
		else {
		fVar2 = *(float *)(this + 0x10);
		local_60 = local_50.m41 +*(float *)(this + 0x14) * local_50.m21 + *(float *)(this + 0x18) * local_50.m31 +fVar2 * local_50.m11;
		local_5c = local_50.m42 +*(float *)(this + 0x14) * local_50.m22 + *(float *)(this + 0x18) * local_50.m32 +local_50.m12 * fVar2;
		local_58 = local_50.m43 +*(float *)(this + 0x14) * local_50.m23 + *(float *)(this + 0x18) * local_50.m33 +local_50.m13 * fVar2;
		}
		local_54 = local_50.m44;
		FUN_000e7d90(&local_50,local_6c);
		this_01 = (InstanceContext *)FUN_001a9c40(this_00,pCVar6,*(ushort *)(this + 0x20) & 0x7fff,&local_60,local_6c);
		this_02 = (InstanceNodeInstanceB *)InstanceDataList::GetNode(&this_01->nodes,Instance);
		if ((*(uint *)(this + 0x24) & 0x20000000) != 0) {
		local_54 = local_50.m34;
		local_58 = *(float *)(this + 0x28);
		local_60 = local_50.m31 * local_58;
		local_5c = local_50.m32 * local_58;
		local_58 = local_50.m33 * local_58;
		(*this_02->vtable->InstanceMethod15)((InstanceNodeInstance *)this_02,&local_60,-1.0);
		}
		pIVar4 = this_02->vtable;
		(this_02->body).parent.parent.field2_0x6 = 0xffff;
		bVar5 = (*pIVar4->IsC)();
		if (bVar5 == false) {
		if ((*(uint *)(this + 0x24) & 0x40000000) != 0) {
		pIVar7 = (ctx->nodes).array[0xc];
		if ((pIVar7 != (InstanceNodeAbstract *)0x0) && ((*(byte *)&pIVar7->field6_0x14 & 1) != 0)) {
		(ctx->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		}
		thunk_FUN_000640c0((int)this_02,&(ctx->nodes).array[0xc]->vtable);
		}
		pIVar9 = *(InstanceContext **)&(this_02->body).parent.field_0xc8;
		if (pIVar9 != (InstanceContext *)0x0) {
		pIVar9 = (InstanceContext *)(pIVar9->parent).vtable;
		}
		if (pIVar9 != ctx_00) {
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)&(this_02->body).parent.field_0xc8);
		if (ctx_00 == (InstanceContext *)0x0) {
		*(undefined4 *)&(this_02->body).parent.field_0xc8 = 0;
		}
		else {
		uVar13 = InstanceContextSmartPtr::CreateRef(&ctx_00->smartPtr,ctx_00,0);
		*(undefined4 *)&(this_02->body).parent.field_0xc8 = uVar13;
		}
		}
		(this_01->parent).field14_0x20.field6_0x18 = ctx_00;
		*(undefined2 *)&(this_02->body).parent.field_0xc0 = *(undefined2 *)(this + 0x24);
		if (*(int *)(this + 0x24) < 0) {
		puVar1 = &(this_02->body).parent.field63_0xbc;
		*puVar1 = *puVar1 | 0x200000;
		}
		uVar12 = 2;
		time = (UnkTimePack *)InstanceContext::FUN_000f7220(this_01);
		InstanceNodeInstanceB::thunk_FUN_0004c5a0(this_02,time,uVar12);
		}
		if ((this_01 != (InstanceContext *)0x0) && ((*(uint *)(this + 0x24) & 0xffff) != 0xffff)) {
		this_03 = (UnkFamily5AB *)VirtualPool::AllocateMemory(0x14);
		if (this_03 == (UnkFamily5AB *)0x0) {
		pUVar10 = (UnkFamily5AA *)0x0;
		}
		else {
		uVar13 = 2;
		if (ctx_00 == (InstanceContext *)0x0) {
		pUVar10 = (UnkFamily5AA *)UnkFamily5AB::Construct(this_03,*(undefined2 *)(this + 0x24),(InstanceContextSmartPtr)0x0,2);
		}
		else {
		IVar11 = (InstanceContextSmartPtr)InstanceContextSmartPtr::CreateRef(&ctx_00->smartPtr,ctx_00,0);
		pUVar10 = (UnkFamily5AA *)UnkFamily5AB::Construct(this_03,*(undefined2 *)(this + 0x24),IVar11,uVar13);
		}
		}
		if (pUVar10 != (UnkFamily5AA *)0x0) {
		pUVar10 = (UnkFamily5AA *)UnkFamily5SomeStruct::CreatePayload(&(pUVar10->parent).parent.someStruct,pUVar10,1);
		}
		InstanceContext::FUN_000fa200(this_01,(char)pUVar10);
		}
		FUN_001a7a10((int)this_00);
		return;
		}
		
	*/
	return;
}

void ActionShoot::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionShoot * __fastcall ActionShoot::Construct(ActionShoot *this){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_Shoot;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		this->unlabelled24 = 0;
		this->unlabelled28 = (int)fVar1;
		*(undefined2 *)&this->unlabelled32 = 0xffff;
		this->unlabelled36 = 0x12ffffff;
		this->unlabelled40 = 0;
		return this;
		}
		
	*/
	return;
}

void ActionShoot::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionShoot::UnkMethod(ActionShoot *this,int *param_1){
		ushort uVar1;
		uint uVar2;
		char cVar3;
		ushort *this_00;
		float fVar4;
		float fVar5;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		while (cVar3 == '\0') {
		this_00 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		FUN_0017f260(this_00,(uint *)&this->unlabelled16);
		uVar1 = *this_00;
		if (uVar1 < 0x6e) {
		if (uVar1 == 0x6d) {
		*(ushort *)&this->unlabelled36 = this_00[2];
		}
		else if (uVar1 == 0x12) {
		*(undefined *)((int)&this->unlabelled36 + 2) = *(undefined *)(this_00 + 2);
		}
		else if (uVar1 == 0x39) {
		this->unlabelled40 = *(int *)(this_00 + 2);
		this->unlabelled36 = this->unlabelled36 | 0x20000000;
		}
		}
		else if (uVar1 == 0x89) {
		*(ushort *)&this->unlabelled32 = this_00[2];
		}
		else if ((uVar1 == 0xffff) && (*(char *)(this_00 + 1) == '\x04')) {
		uVar2 = *(uint *)(this_00 + 2);
		if (uVar2 < 0x2a) {
		switch(uVar2) {
		case 0x17:this->unlabelled36 = this->unlabelled36 | 0x10000000;
		break;
		case 0x18:case 0x19:case 0x1a:case 0x1b:case 0x1c:case 0x1d:case 0x1e:case 0x1f:case 0x20:case 0x21:case 0x22:case 0x23:case 0x24:case 0x25:break;
		case 0x26:this->unlabelled36 = this->unlabelled36 & 0xfaffffffU | 0x2000000;
		break;
		case 0x27:this->unlabelled36 = this->unlabelled36 & 0xfbffffffU | 0x3000000;
		break;
		case 0x28:this->unlabelled36 = this->unlabelled36 & 0xfcffffffU | 0x4000000;
		break;
		default:this->unlabelled36 = this->unlabelled36 & 0xfdffffffU | 0x5000000;
		}
		}
		else if (uVar2 < 0x7a) {
		if (uVar2 == 0x79) {
		this->unlabelled36 = this->unlabelled36 | 0x40000000;
		}
		else if (uVar2 == 0x2a) {
		this->unlabelled36 = this->unlabelled36 & 0xf8ffffff;
		}
		else if (uVar2 == 0x2b) {
		this->unlabelled36 = this->unlabelled36 & 0xf9ffffffU | 0x1000000;
		}
		}
		else if (uVar2 == 0x299) {
		this->unlabelled36 = this->unlabelled36 | 0x80000000;
		}
		}
		IteratorE2::Iterate(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		}
		fVar5 = (float)this->unlabelled16;
		if (fVar5 < 0.0) {
		fVar5 = 0.0 - fVar5;
		}
		if (fVar5 <= DAT_0039d980) {
		fVar5 = (float)this->unlabelled20;
		if (fVar5 < 0.0) {
		fVar5 = 0.0 - fVar5;
		}
		if (fVar5 <= DAT_0039d980) {
		fVar5 = (float)this->unlabelled24;
		fVar4 = 0.0 - fVar5;
		if (0.0 <= fVar5) {
		fVar4 = fVar5;
		}
		if (fVar4 <= DAT_0039d980) {
		return;
		}
		}
		}
		this->unlabelled36 = this->unlabelled36 | 0x8000000;
		return;
		}
		
	*/
	return;
}

void ActionShoot::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionShoot::ExecuteFromCallContext(ActionShoot *this,undefined4 time_clock,InstanceContext *ctx){
		(*((this->parent).vtable)->Execute)(&this->parent,(ctx->parent).ctx);
		return;
		}
		
	*/
	return;
}

int ActionShoot::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionShoot::GetSize(void){
		return 0x30;
		}
		
	*/
	return 0;
}

