#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated2/NodeRelated2F.h"

void NodeRelated2F::Update() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall NodeRelated2F::Update(NodeRelated2F *this){
		UnkFamily3EA *notthis;
		undefined4 *puVar1;
		if (this->field1_0x60 == 0) {
		notthis = (UnkFamily3EA *)VirtualPool::AllocateMemory(0x120);
		if (notthis == (UnkFamily3EA *)0x0) {
		puVar1 = (undefined4 *)0x0;
		}
		else {
		puVar1 = UnkFamily3EA::Construct(notthis,(int)(this->parent).parent.ctx,0x3f800000);
		}
		this->field1_0x60 = (int)puVar1;
		FUN_000f4bb0((int *)this->field1_0x60);
		}
		return;
		}
		
	*/
	return;
}

void NodeRelated2F::FUN_0006b3b0(byte* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2F::FUN_0006b3b0(NodeRelated2F *this,byte *param_1){
		undefined *puVar1;
		InstanceContext *pIVar2;
		bool bVar3;
		float fVar4;
		float fVar5;
		Vector4 local_150;
		InstanceTransform *local_140;
		InstanceContext *local_13c;
		float local_138;
		undefined *local_134;
		undefined2 local_130;
		undefined2 local_12e;
		undefined4 local_12c;
		uint local_128;
		undefined4 local_124;
		undefined4 local_120;
		undefined4 local_11c;
		undefined4 local_118;
		undefined4 local_114;
		BoundingBox local_110;
		Vector4 local_f0;
		Vector4 local_e0;
		Matrix4 local_d0;
		undefined local_90 [140];
		local_150.w = *(float *)&this->field_0x7c;
		local_150.z = *(float *)&this->field_0x78 - *(float *)&this->field_0x88;
		local_150.y = *(float *)&this->field_0x74 - *(float *)&this->field_0x84;
		puVar1 = &this->field_0x80;
		local_12c = DAT_0038ade0;
		local_150.x = *(float *)&this->field_0x70 - *(float *)puVar1;
		local_134 = local_90;
		local_128 = local_128 & 0xfffffffe | 2;
		local_130 = 0;
		local_12e = 0x20;
		local_124 = 0x10;
		local_120 = 1;
		local_11c = 0;
		local_114 = 0;
		local_118 = 0;
		local_138 = SQRT(local_150.z * local_150.z + local_150.y * local_150.y + local_150.x * local_150.x);
		fVar5 = 0.0 - local_138;
		if (0.0 <= local_138) {
		fVar5 = local_138;
		}
		if (DAT_0039daa0 < fVar5) {
		pIVar2 = (this->parent).parent.ctx;
		local_140 = (pIVar2->parent).transform;
		InstanceTransform::FillMatrix(local_140);
		local_d0.m11 = (local_140->matrix).m11;
		local_d0.m12 = (local_140->matrix).m12;
		local_d0.m13 = (local_140->matrix).m13;
		local_d0.m14 = (local_140->matrix).m14;
		local_d0.m21 = (local_140->matrix).m21;
		local_d0.m22 = (local_140->matrix).m22;
		local_d0.m23 = (local_140->matrix).m23;
		local_d0.m24 = (local_140->matrix).m24;
		local_d0.m31 = (local_140->matrix).m31;
		local_d0.m32 = (local_140->matrix).m32;
		local_d0.m33 = (local_140->matrix).m33;
		local_d0.m34 = (local_140->matrix).m34;
		local_d0.m41 = (local_140->matrix).m41;
		local_d0.m42 = (local_140->matrix).m42;
		local_d0.m43 = (local_140->matrix).m43;
		local_d0.m44 = (local_140->matrix).m44;
		FUN_001eb7a0((int)(((this->parent).parent.ctx)->parent).chunkData,(float *)puVar1,&local_150.x,0x10,&local_134,0x15b010);
		local_140 = (InstanceTransform *)(local_150.z * local_150.z + local_150.y * local_150.y + local_150.x * local_150.x);
		fVar4 = SQRT((float)local_140);
		fVar5 = 0.0 - fVar4;
		if (0.0 <= fVar4) {
		fVar5 = fVar4;
		}
		if (DAT_0039daa0 < fVar5) {
		fVar5 = FLOAT_0038a928;
		if (FLOAT_0038b580 <= fVar4) {
		fVar5 = fVar4 - FLOAT_00386ab4;
		}
		fVar5 = fVar5 / fVar4;
		}
		else {
		local_150.w = *(float *)&this->field_0x7c;
		local_150.x = *(float *)&this->field_0x70 - *(float *)puVar1;
		local_150.y = *(float *)&this->field_0x74 - *(float *)&this->field_0x84;
		local_150.z = *(float *)&this->field_0x78 - *(float *)&this->field_0x88;
		fVar5 = FLOAT_0038a928 / local_138;
		}
		local_13c = (this->parent).parent.ctx;
		local_150.x = *(float *)puVar1 + local_150.x * fVar5;
		local_150.y = *(float *)&this->field_0x84 + local_150.y * fVar5;
		local_150.z = *(float *)&this->field_0x88 + local_150.z * fVar5;
		bVar3 = InstanceTransform::SetupPosition((local_13c->parent).transform,&local_150);
		if (bVar3 != false) {
		InstanceContext::RegisterCtxPtrToList(local_13c);
		}
		thunk_FUN_00083030(this->field1_0x60,param_1,(float *)&DAT_0039db10,&local_150.x,(float *)puVar1);
		Matrix4::FUN_000d4180(&local_d0);
		Matrix4::FUN_000d4000(&local_d0,(Vector4 *)(*(int *)(*(int *)(this->field1_0x60 + 0x110) + 0x1c) + 0x10),&local_f0);
		Matrix4::FUN_000d4000(&local_d0,(Vector4 *)(*(int *)(*(int *)(this->field1_0x60 + 0x110) + 0x18) + 0x10),&local_e0);
		BoundingBox::SetInfiniteSizes(&local_110);
		FUN_001472c0(&local_110,&local_f0.x);
		FUN_001472c0(&local_110,&local_e0.x);
		BoundingBox::Expand(&local_110,0.5);
		(pIVar2->parent).field14_0x20.matrix2.m31 = local_110.v1.x;
		(pIVar2->parent).field14_0x20.matrix2.m32 = local_110.v1.y;
		(pIVar2->parent).field14_0x20.matrix2.m33 = local_110.v1.z;
		(pIVar2->parent).field14_0x20.matrix2.m34 = local_110.v1.w;
		(pIVar2->parent).field14_0x20.matrix2.m41 = local_110.v2.x;
		(pIVar2->parent).field14_0x20.matrix2.m42 = local_110.v2.y;
		(pIVar2->parent).field14_0x20.matrix2.m43 = local_110.v2.z;
		(pIVar2->parent).field14_0x20.matrix2.m44 = local_110.v2.w;
		}
		return;
		}
		
	*/
	return;
}

void NodeRelated2F::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall NodeRelated2F::Dispose(NodeRelated2F *this){
		undefined4 *puVar1;
		NodeRelated1Abstract *pNVar2;
		BlackboardAbstract *blackboard;
		puVar1 = (undefined4 *)this->field1_0x60;
		(this->parent).parent.vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_F;
		if (puVar1 != (undefined4 *)0x0) {
		(**(code **)*puVar1)(1);
		}
		blackboard = (this->parent).parent.blackboard;
		(this->parent).parent.vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_J;
		if (blackboard != (BlackboardAbstract *)0x0) {
		(*blackboard->vtable->Dispose)(blackboard,1);
		}
		pNVar2 = (this->parent).parent.related;
		if (pNVar2 != (NodeRelated1Abstract *)0x0) {
		(*(code *)*pNVar2->vtable)(1);
		}
		NodeRelated2Abstract::CleanUp((NodeRelated2Abstract *)this);
		return;
		}
		
	*/
	return;
}

void NodeRelated2F::Dispose_3(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeRelated2F * __thiscall NodeRelated2F::Dispose(NodeRelated2F *this,byte param_1){
		undefined4 *puVar1;
		BlackboardAbstract *this_00;
		NodeRelated1Abstract *pNVar2;
		puVar1 = (undefined4 *)this->field1_0x60;
		(this->parent).parent.vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_F;
		if (puVar1 != (undefined4 *)0x0) {
		(**(code **)*puVar1)(1);
		}
		this_00 = (this->parent).parent.blackboard;
		(this->parent).parent.vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_J;
		if (this_00 != (BlackboardAbstract *)0x0) {
		(*this_00->vtable->Dispose)(this_00,1);
		}
		pNVar2 = (this->parent).parent.related;
		if (pNVar2 != (NodeRelated1Abstract *)0x0) {
		(*(code *)*pNVar2->vtable)(1);
		}
		NodeRelated2Abstract::CleanUp((NodeRelated2Abstract *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void NodeRelated2F::FUN_0006b7c0(byte* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2F::FUN_0006b7c0(NodeRelated2F *this,byte *param_1){
		if (((((this->parent).parent.ctx)->parent).flags & 0x400U) != 0) {
		FUN_0006b3b0(this,param_1);
		return;
		}
		return;
		}
		
	*/
	return;
}

void NodeRelated2F::IsC() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined NodeRelated2F::IsC(void){
		return 0;
		}
		
	*/
	return;
}

void NodeRelated2F::Construct(int* param_1, uint param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeRelated2F * __thiscall NodeRelated2F::Construct(NodeRelated2F *this,int *param_1,BlackboardAbstract *param_2,NodeRelated1Abstract *param_3){
		NodeRelated2Abstract::Construct((NodeRelated2Abstract *)this,(InstanceMasterInfo *)param_1,param_2,param_3);
		(this->parent).parent.vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_F;
		this->field1_0x60 = 0;
		return this;
		}
		
	*/
	return;
}

