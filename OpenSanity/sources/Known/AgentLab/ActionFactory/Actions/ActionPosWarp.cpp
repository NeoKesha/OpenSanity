#include "headers/Known/AgentLab/ActionFactory/Actions/ActionPosWarp.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionPosWarp::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionPosWarp::Dispose(ActionPosWarp *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionPosWarp::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionPosWarp::ExecuteFromCallContext(ActionPosWarp *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		float fVar1;
		float fVar2;
		float fVar3;
		InstanceContext *pIVar4;
		InstanceContext *this_00;
		uint uVar5;
		InstanceTransform *pIVar6;
		bool bVar7;
		int *piVar8;
		undefined *puVar9;
		ChunkData *pCVar10;
		InstanceNodeAbstract *pIVar11;
		Vector4 local_30;
		Vector4 local_20;
		pIVar4 = (ctx->parent).ctx;
		this_00 = (pIVar4->parent).ctx;
		if ((this->unlabelled12 & 0x400000U) == 0) {
		pIVar6 = (this_00->parent).transform;
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
		local_30.x = (pIVar6->position).x;
		local_30.y = (pIVar6->position).y;
		local_30.z = (pIVar6->position).z;
		local_30.w = (pIVar6->position).w;
		}
		else {
		InstanceContext::thunk_FUN_0005a4c0(this_00,&local_30,&local_20);
		local_30.x = local_20.x + local_30.x;
		local_30.y = local_20.y + local_30.y;
		local_30.z = local_20.z + local_30.z;
		}
		uVar5 = this->unlabelled12;
		if ((uVar5 & 0x1000000) == 0) {
		if ((uVar5 & 0x200000) == 0) {
		piVar8 = (int *)0x0;
		}
		else {
		piVar8 = &this->unlabelled16;
		}
		FUN_00176960(&local_30.x,*(byte *)((int)&this->unlabelled12 + 2) & 0xf,(int)ctx,(float *)piVar8,*(byte *)((int)&this->unlabelled12 + 1),*(byte *)&this->unlabelled12);
		}
		else {
		local_30.x = (float)(pIVar4->nodes).array[0x16];
		local_30.y = (float)(pIVar4->nodes).array[0x17];
		local_30.z = (float)pIVar4->findMe;
		local_30.w = (float)pIVar4->subPtr;
		pCVar10 = (ChunkData *)local_30.x;
		if (local_30.x < 0.0) {
		pCVar10 = (ChunkData *)(0.0 - local_30.x);
		}
		if ((float)pCVar10 <= DAT_004962d0) {
		pIVar11 = (InstanceNodeAbstract *)local_30.y;
		if (local_30.y < 0.0) {
		pIVar11 = (InstanceNodeAbstract *)(0.0 - local_30.y);
		}
		if ((float)pIVar11 <= DAT_004962d0) {
		puVar9 = (undefined *)(0.0 - local_30.z);
		if (0.0 <= local_30.z) {
		puVar9 = (undefined *)local_30.z;
		}
		if ((float)puVar9 <= DAT_004962d0) {
		pIVar6 = (this_00->parent).transform;
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
		local_30.x = (pIVar6->position).x;
		local_30.z = (pIVar6->position).z;
		local_30.y = (pIVar6->position).y + FLOAT_00392918;
		local_30.w = (pIVar6->position).w;
		goto LAB_0018dc68;
		}
		}
		}
		if ((uVar5 & 0x200000) != 0) {
		pIVar6 = (this_00->parent).transform;
		InstanceTransform::FillMatrix(pIVar6);
		local_30.x = (pIVar6->matrix).m21 * (float)this->unlabelled20 +(pIVar6->matrix).m31 * (float)this->unlabelled24 +(float)this->unlabelled16 * (pIVar6->matrix).m11 + local_30.x;
		local_30.y = local_30.y +(pIVar6->matrix).m12 * (float)this->unlabelled16 +(pIVar6->matrix).m22 * (float)this->unlabelled20 +(pIVar6->matrix).m32 * (float)this->unlabelled24;
		local_30.z = local_30.z +(pIVar6->matrix).m13 * (float)this->unlabelled16 +(pIVar6->matrix).m23 * (float)this->unlabelled20 +(pIVar6->matrix).m33 * (float)this->unlabelled24;
		}
		}
		LAB_0018dc68:if ((this->unlabelled12 & 0x400000U) == 0) {
		bVar7 = InstanceTransform::SetupPosition((this_00->parent).transform,&local_30);
		if (bVar7 != false) {
		InstanceContext::RegisterCtxPtrToList(this_00);
		}
		(pIVar4->parent).chunkData = (ChunkData *)local_30.x;
		*(float *)&pIVar4->field_0xb4 = local_30.y;
		*(float *)&pIVar4->field_0xb8 = local_30.z;
		*(float *)&pIVar4->field_0xbc = local_30.w;
		return;
		}
		if ((this->unlabelled12 & 0x800000U) == 0) {
		FUN_00171f20((int)this_00,&local_30.x,1.0,0.0,90.0);
		return;
		}
		FUN_00171380((int)this_00,&local_30.x,1.0,0.0,0x42b40000,'\x01');
		return;
		}
		
	*/
	return;
}

void ActionPosWarp::Construct(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionPosWarp * __thiscall ActionPosWarp::Construct(ActionPosWarp *this,byte param_1){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_PosWarp;
		this->unlabelled12 = (param_1 & 1) << 0x16 | uVar1 & 0xfe00ffff | 0xffff;
		return this;
		}
		
	*/
	return;
}

int ActionPosWarp::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionPosWarp::GetSize(void){
		return 0x20;
		}
		
	*/
	return 0;
}

void ActionPosWarp::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionPosWarp::UnkMethod(ActionPosWarp *this,int *param_1){
		ushort uVar1;
		char cVar2;
		ushort *this_00;
		uint uVar3;
		float fVar4;
		float fVar5;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		this->unlabelled12 = this->unlabelled12 & 0xffc0ffffU | 0xffff;
		this->unlabelled16 = (int)Vector4_0039ef70.x;
		this->unlabelled20 = (int)Vector4_0039ef70.y;
		this->unlabelled24 = (int)Vector4_0039ef70.z;
		this->unlabelled28 = (int)FLOAT_0038639c;
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar2 != '\0') {
		fVar5 = (float)this->unlabelled16;
		if (fVar5 < 0.0) {
		fVar5 = 0.0 - fVar5;
		}
		if (fVar5 <= DAT_004962d0) {
		fVar5 = (float)this->unlabelled20;
		if (fVar5 < 0.0) {
		fVar5 = 0.0 - fVar5;
		}
		if (fVar5 <= DAT_004962d0) {
		fVar5 = (float)this->unlabelled24;
		fVar4 = 0.0 - fVar5;
		if (0.0 <= fVar5) {
		fVar4 = fVar5;
		}
		if (fVar4 <= DAT_004962d0) {
		return;
		}
		}
		}
		this->unlabelled12 = this->unlabelled12 | 0x200000;
		return;
		}
		this_00 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar3 = FUN_0017f240(this_00,(uint)*(byte *)((int)&this->unlabelled12 + 1));
		*(char *)((int)&this->unlabelled12 + 1) = (char)uVar3;
		uVar1 = *this_00;
		if (uVar1 < 0x59) {
		switch(uVar1) {
		case 0:this->unlabelled16 = *(int *)(this_00 + 2);
		break;
		case 1:this->unlabelled20 = *(int *)(this_00 + 2);
		break;
		case 2:this->unlabelled24 = *(int *)(this_00 + 2);
		break;
		case 3:case 4:case 5:break;
		case 7:*(char *)((int)&this->unlabelled12 + 1) = *(char *)(this_00 + 2) + -1;
		break;
		default:this->unlabelled12 = this->unlabelled12 | 0x100000;
		cVar2 = *(char *)((int)&this->unlabelled12 + 1);
		if (cVar2 != -1) {
		*(char *)((int)&this->unlabelled12 + 1) = cVar2 + '\x01';
		}
		case 6:*(undefined *)&this->unlabelled12 = *(undefined *)(this_00 + 2);
		}
		}
		else if ((uVar1 == 0xffff) && (*(char *)(this_00 + 1) == '\x04')) {
		uVar3 = *(uint *)(this_00 + 2);
		if (uVar3 < 6) {
		if (uVar3 == 5) {
		this->unlabelled12 = this->unlabelled12 & 0xfff3ffffU | 0x30000;
		}
		else {
		if (uVar3 == 2) {
		uVar3 = this->unlabelled12 & 0xfff0ffff;
		goto LAB_00193535;
		}
		if (uVar3 == 3) {
		this->unlabelled12 = this->unlabelled12 & 0xfff1ffffU | 0x10000;
		}
		else if (uVar3 == 4) {
		uVar3 = this->unlabelled12 & 0xfff2ffffU | 0x20000;
		goto LAB_00193535;
		}
		}
		}
		else {
		if (uVar3 == 0x1b) {
		uVar3 = this->unlabelled12 | 0x800000;
		}
		else if (uVar3 == 0x21) {
		uVar3 = this->unlabelled12 & 0xfff7ffffU | 0x70000;
		}
		else {
		if (uVar3 != 0x113) goto switchD_00193444_caseD_3;
		uVar3 = this->unlabelled12 | 0x1000000;
		}
		LAB_00193535:this->unlabelled12 = uVar3;
		}
		}
		switchD_00193444_caseD_3:IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

