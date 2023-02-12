#include "headers/Known/AgentLab/ActionFactory/Actions/ActionRaycastFocusPosition.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionRaycastFocusPosition::UnkMethod(int* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionRaycastFocusPosition::UnkMethod(int this,int *param_2){
		ushort uVar1;
		int iVar2;
		char cVar3;
		ushort *this_00;
		uint uVar4;
		undefined4 local_18;
		undefined4 local_14;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_2);
		param_2 = (int *)0x0;
		local_18 = 0;
		local_14 = 0;
		IteratorE2::Rewind(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		while (cVar3 == '\0') {
		this_00 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar1 = *this_00;
		if (uVar1 < 0x3d) {
		if (uVar1 == 0x3c) {
		*(float *)(this + 0x20) = 0.0 - *(float *)(this_00 + 2);
		}
		else if (uVar1 == 0) {
		param_2 = *(int **)(this_00 + 2);
		}
		else if (uVar1 == 1) {
		local_18 = *(undefined4 *)(this_00 + 2);
		}
		else if (uVar1 == 2) {
		local_14 = *(undefined4 *)(this_00 + 2);
		}
		}
		else if (uVar1 == 0xcd) {
		*(undefined4 *)(this + 0x24) = *(undefined4 *)(this_00 + 2);
		}
		else if (uVar1 == 0x104) {
		uVar4 = FUN_0017f240(this_00,*(uint *)(this + 0x30) & 0xff);
		*(char *)(this + 0x30) = (char)uVar4;
		}
		else if ((uVar1 == 0xffff) && (*(char *)(this_00 + 1) == '\x04')) {
		iVar2 = *(int *)(this_00 + 2);
		if (iVar2 == 3) {
		*(undefined4 *)(this + 0x28) = 1;
		}
		else if (iVar2 == 4) {
		*(undefined4 *)(this + 0x28) = 2;
		}
		else if (iVar2 == 5) {
		*(undefined4 *)(this + 0x28) = 3;
		}
		else {
		*(undefined4 *)(this + 0x28) = 0;
		}
		}
		IteratorE2::Iterate(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		}
		*(int **)(this + 0x10) = param_2;
		*(undefined4 *)(this + 0x14) = local_18;
		*(undefined4 *)(this + 0x18) = local_14;
		*(float *)(this + 0x1c) = FLOAT_0038639c;
		return;
		}
		
	*/
	return;
}

void ActionRaycastFocusPosition::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionRaycastFocusPosition::ExecuteFromCallContext(ActionRaycastFocusPosition *this,undefined4 time_clock,InstanceContext *ctx){
		float fVar1;
		float fVar2;
		InstanceContext *this_00;
		InstanceTransform *pIVar3;
		bool bVar4;
		char cVar5;
		InstanceContext *pIVar6;
		float fVar7;
		InstanceContext *pIStack64;
		InstanceContext *pIStack56;
		float fStack52;
		float local_30;
		Matrix4 *local_2c;
		float local_28;
		float local_24;
		float local_20;
		float local_1c;
		float local_18;
		float local_14;
		this_00 = (ctx->parent).ctx;
		local_20 = Vector4_0039ef70.x;
		local_1c = Vector4_0039ef70.y;
		local_18 = Vector4_0039ef70.z;
		local_14 = FLOAT_0038639c;
		local_30 = Vector4_0039ef70.x;
		local_2c = (Matrix4 *)Vector4_0039ef70.y;
		local_28 = Vector4_0039ef70.z;
		local_24 = FLOAT_0038639c;
		pIStack56 = (*(this_00->parent).vtable[7].Dispose)(this_00,(byte)this->unlabelled48);
		pIVar6 = pIStack64;
		if (pIStack56 == (InstanceContext *)0x0) {
		pIStack56 = (this_00->parent).ctx;
		bVar4 = (*(this_00->parent).vtable[7].Method1)(this_00);
		if (bVar4 == false) {
		pIVar3 = (pIStack64->parent).transform;
		if ((*(byte *)&pIVar3->field3_0x60 & 4) != 0) {
		fVar7 = (pIVar3->matrix).m44;
		fVar1 = (pIVar3->matrix).m43;
		fVar2 = (pIVar3->matrix).m42;
		(pIVar3->position).x = (pIVar3->matrix).m41;
		(pIVar3->position).y = fVar2;
		(pIVar3->position).z = fVar1;
		(pIVar3->position).w = fVar7;
		pIVar3->field3_0x60 = (float)((uint)pIVar3->field3_0x60 & 0xfffffffa);
		}
		local_28 = (pIVar3->position).x;
		local_24 = (pIVar3->position).y;
		local_20 = (pIVar3->position).z;
		local_1c = (pIVar3->position).w;
		}
		}
		else {
		pIVar3 = (pIStack56->parent).transform;
		if ((*(byte *)&pIVar3->field3_0x60 & 4) != 0) {
		fVar7 = (pIVar3->matrix).m44;
		fVar1 = (pIVar3->matrix).m43;
		fVar2 = (pIVar3->matrix).m42;
		(pIVar3->position).x = (pIVar3->matrix).m41;
		(pIVar3->position).y = fVar2;
		(pIVar3->position).z = fVar1;
		(pIVar3->position).w = fVar7;
		pIVar3->field3_0x60 = (float)((uint)pIVar3->field3_0x60 & 0xfffffffa);
		}
		local_20 = (pIVar3->position).x;
		local_1c = (pIVar3->position).y;
		local_18 = (pIVar3->position).z;
		local_14 = (pIVar3->position).w;
		pIVar6 = pIStack56;
		}
		if ((this->unlabelled40 < 2) || (3 < this->unlabelled40)) {
		pIStack56 = (InstanceContext *)this->unlabelled16;
		fStack52 = (float)this->unlabelled20;
		local_30 = (float)this->unlabelled24;
		local_2c = (Matrix4 *)this->unlabelled28;
		}
		else {
		pIVar3 = (pIVar6->parent).transform;
		InstanceTransform::FillMatrix(pIVar3);
		pIStack56 = (InstanceContext *)((pIVar3->matrix).m31 * (float)this->unlabelled24 +(pIVar3->matrix).m21 * (float)this->unlabelled20 +(float)this->unlabelled16 * (pIVar3->matrix).m11 + (float)pIStack56);
		fStack52 = fStack52 +(pIVar3->matrix).m12 * (float)this->unlabelled16 +(pIVar3->matrix).m32 * (float)this->unlabelled24 +(pIVar3->matrix).m22 * (float)this->unlabelled20;
		local_30 = local_30 +(pIVar3->matrix).m13 * (float)this->unlabelled16 +(pIVar3->matrix).m33 * (float)this->unlabelled24 +(pIVar3->matrix).m23 * (float)this->unlabelled20;
		pIVar6 = pIStack64;
		}
		cVar5 = FUN_001eb7a0((int)(pIVar6->parent).chunkData,&local_28,(float *)&pIStack56,0x40,(void *)0x0,0x15b010);
		if (cVar5 != '\0') {
		pIStack56 = (InstanceContext *)((float)pIStack56 + local_28);
		fStack52 = fStack52 + local_24;
		local_30 = local_30 + local_20;
		if ((float)this->unlabelled32 != FLOAT_00386394) {
		fVar7 = SQRT(local_30 * local_30 + fStack52 * fStack52 + (float)pIStack56 * (float)pIStack56);
		fVar7 = (fVar7 - (float)this->unlabelled32) / fVar7;
		fStack52 = fStack52 * fVar7;
		pIStack56 = (InstanceContext *)(fVar7 * (float)pIStack56);
		local_30 = local_30 * fVar7;
		}
		(this_00->parent).field14_0x20.field4_0x10 = pIStack56;
		(this_00->parent).field14_0x20.field5_0x14 = fStack52;
		(this_00->parent).field14_0x20.field6_0x18 = local_30;
		(this_00->parent).field14_0x20.matrix1 = local_2c;
		(this_00->parent).field14_0x20.matrix2.m43 =(float)((uint)(this_00->parent).field14_0x20.matrix2.m43 & 0xfffffffe | 2);
		}
		return;
		}
		
	*/
	return;
}

void ActionRaycastFocusPosition::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionRaycastFocusPosition::Dispose(ActionRaycastFocusPosition *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionRaycastFocusPosition::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionRaycastFocusPosition * __fastcall ActionRaycastFocusPosition::Construct(ActionRaycastFocusPosition *this){
		uint uVar1;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		this->unlabelled44 = 0;
		uVar1 = this->unlabelled48;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_RaycastFocusPosition;
		this->unlabelled32 = 0;
		this->unlabelled36 = 0;
		this->unlabelled48 = uVar1 | 0xff;
		return this;
		}
		
	*/
	return;
}

int ActionRaycastFocusPosition::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionRaycastFocusPosition::GetSize(void){
		return 0x40;
		}
		
	*/
	return 0;
}

