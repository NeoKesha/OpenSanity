#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0B1.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0B1::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0B1::Dispose(Action0x0B1 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x0B1::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0B1::ExecuteFromCallContext(Action0x0B1 *this,undefined4 time_clock,InstanceContext *ctx){
		float fVar1;
		float fVar2;
		float fVar3;
		byte bVar4;
		InstanceTransform *pIVar5;
		bool bVar6;
		uint uVar7;
		int iVar8;
		InstanceContext *this_00;
		InstanceNodeInstance *pIVar9;
		int *piVar9;
		Vector4 local_30;
		Vector4 local_20;
		pIVar9 = (InstanceNodeInstance *)(ctx->parent).ctx;
		this_00 = (((InstanceNodeInstanceBody *)&(((InstanceContext *)pIVar9)->parent).ctx)->parent).ctx;
		if ((this->unlabelled12 & 0x400000U) == 0) {
		pIVar5 = (this_00->parent).transform;
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
		local_30.x = (pIVar5->position).x;
		local_30.y = (pIVar5->position).y;
		local_30.z = (pIVar5->position).z;
		local_30.w = (pIVar5->position).w;
		}
		else {
		InstanceContext::thunk_FUN_0005a4c0(this_00,&local_30,&local_20);
		local_30.x = local_20.x + local_30.x;
		local_30.y = local_20.y + local_30.y;
		local_30.z = local_20.z + local_30.z;
		}
		uVar7 = this->unlabelled16 & 0xff;
		if (uVar7 == 0xff) {
		if ((this->unlabelled12 & 0x200000U) == 0) {
		piVar9 = (int *)0x0;
		}
		else {
		piVar9 = &this->unlabelled32;
		}
		FUN_00176960(&local_30.x,*(byte *)((int)&this->unlabelled12 + 2) & 0xf,(int)ctx,(float *)piVar9,*(byte *)((int)&this->unlabelled12 + 1),*(byte *)&this->unlabelled12);
		}
		else {
		iVar8 = (*((InstanceNodeInstance_VTable *)(((InstanceContext *)pIVar9)->parent).vtable)->InstanceMethod25)(pIVar9,uVar7);
		if (iVar8 == 0) {
		(*((InstanceNodeInstance_VTable *)(((InstanceContext *)pIVar9)->parent).vtable)->InstanceMethod26)(pIVar9,this->unlabelled16 & 0xff,&local_30.x);
		}
		else {
		iVar8 = *(int *)(iVar8 + 0x18);
		if ((*(byte *)(iVar8 + 0x60) & 4) != 0) {
		*(undefined4 *)(iVar8 + 0x40) = *(undefined4 *)(iVar8 + 0x30);
		*(undefined4 *)(iVar8 + 0x44) = *(undefined4 *)(iVar8 + 0x34);
		*(undefined4 *)(iVar8 + 0x48) = *(undefined4 *)(iVar8 + 0x38);
		*(undefined4 *)(iVar8 + 0x4c) = *(undefined4 *)(iVar8 + 0x3c);
		*(uint *)(iVar8 + 0x60) = *(uint *)(iVar8 + 0x60) & 0xfffffffa;
		}
		local_30.x = *(float *)(iVar8 + 0x40);
		local_30.y = *(float *)(iVar8 + 0x44);
		local_30.z = *(float *)(iVar8 + 0x48);
		local_30.w = *(float *)(iVar8 + 0x4c);
		}
		}
		bVar4 = *(byte *)((int)&this->unlabelled12 + 3);
		if (bVar4 != 0xff) {
		this_00 = (InstanceContext *)(*((InstanceNodeInstance_VTable *)(((InstanceContext *)pIVar9)->parent).vtable)->InstanceMethod25)(pIVar9,(uint)bVar4);
		if (this_00 != (InstanceContext *)0x0) {
		pIVar9 = (InstanceNodeInstance *)InstanceDataList::GetNode(&this_00->nodes,Instance);
		}
		}
		if ((this->unlabelled12 & 0x400000U) != 0) {
		if ((this->unlabelled12 & 0x800000U) != 0) {
		FUN_00171380((int)this_00,&local_30.x,1.0,0.0,0x42b40000,'\x01');
		(**(code **)(*(int *)(((InstanceContext *)pIVar9)->parent).field14_0x20.matrix2.m42 + 0x30))();
		return;
		}
		FUN_00171f20((int)this_00,&local_30.x,1.0,0.0,90.0);
		(**(code **)(*(int *)(((InstanceContext *)pIVar9)->parent).field14_0x20.matrix2.m42 + 0x30))();
		return;
		}
		bVar6 = InstanceTransform::SetupPosition((this_00->parent).transform,&local_30);
		if (bVar6 != false) {
		InstanceContext::RegisterCtxPtrToList(this_00);
		}
		((Vector4 *)&(((InstanceContext *)pIVar9)->parent).chunkData)->x = local_30.x;
		*(float *)&((InstanceContext *)pIVar9)->field_0xb4 = local_30.y;
		*(float *)&((InstanceContext *)pIVar9)->field_0xb8 = local_30.z;
		*(float *)&((InstanceContext *)pIVar9)->field_0xbc = local_30.w;
		(**(code **)(*(int *)(((InstanceContext *)pIVar9)->parent).field14_0x20.matrix2.m42 + 0x30))();
		return;
		}
		
	*/
	return;
}

void Action0x0B1::Construct(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x0B1 * __thiscall Action0x0B1::Construct(Action0x0B1 *this,byte param_1){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0B1;
		this->unlabelled12 = (param_1 & 1) << 0x16 | 0xff00ffff;
		this->unlabelled16 = this->unlabelled16 | 0xff;
		return this;
		}
		
	*/
	return;
}

int Action0x0B1::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0B1::GetSize(void){
		return 0x30;
		}
		
	*/
	return 0;
}

void Action0x0B1::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0B1::UnkMethod(Action0x0B1 *this,int *param_1){
		ushort uVar1;
		char cVar2;
		ushort *this_00;
		uint uVar3;
		float fVar4;
		float fVar5;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		this->unlabelled12 = this->unlabelled12 & 0xffc0ffffU | 0xffff;
		this->unlabelled32 = (int)Vector4_0039ef70.x;
		this->unlabelled36 = (int)Vector4_0039ef70.y;
		this->unlabelled40 = (int)Vector4_0039ef70.z;
		this->unlabelled44 = (int)FLOAT_0038639c;
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar2 != '\0') {
		fVar5 = (float)this->unlabelled32;
		if (fVar5 < 0.0) {
		fVar5 = 0.0 - fVar5;
		}
		if (fVar5 <= DAT_004962d0) {
		fVar5 = (float)this->unlabelled36;
		if (fVar5 < 0.0) {
		fVar5 = 0.0 - fVar5;
		}
		if (fVar5 <= DAT_004962d0) {
		fVar5 = (float)this->unlabelled40;
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
		case 0:this->unlabelled32 = *(int *)(this_00 + 2);
		break;
		case 1:this->unlabelled36 = *(int *)(this_00 + 2);
		break;
		case 2:this->unlabelled40 = *(int *)(this_00 + 2);
		break;
		case 3:case 4:case 5:break;
		case 6:*(undefined *)&this->unlabelled12 = *(undefined *)(this_00 + 2);
		break;
		case 7:*(char *)((int)&this->unlabelled12 + 1) = *(char *)(this_00 + 2) + -1;
		break;
		default:this->unlabelled12 = this->unlabelled12 | 0x100000;
		cVar2 = *(char *)((int)&this->unlabelled12 + 1);
		if (cVar2 != -1) {
		*(char *)((int)&this->unlabelled12 + 1) = cVar2 + '\x01';
		}
		LAB_00193b07:uVar3 = FUN_0017f240(this_00,(uint)*(byte *)((int)&this->unlabelled12 + 3));
		*(char *)((int)&this->unlabelled12 + 3) = (char)uVar3;
		}
		}
		else if (uVar1 == 0x105) {
		uVar3 = FUN_0017f240(this_00,this->unlabelled16 & 0xff);
		*(char *)&this->unlabelled16 = (char)uVar3;
		}
		else {
		if (uVar1 == 0x117) goto LAB_00193b07;
		if ((uVar1 == 0xffff) && (*(char *)(this_00 + 1) == '\x04')) {
		switch(*(undefined4 *)(this_00 + 2)) {
		case 2:this->unlabelled12 = this->unlabelled12 & 0xfff0ffff;
		break;
		case 3:this->unlabelled12 = this->unlabelled12 & 0xfff1ffffU | 0x10000;
		break;
		case 4:this->unlabelled12 = this->unlabelled12 & 0xfff2ffffU | 0x20000;
		break;
		case 5:this->unlabelled12 = this->unlabelled12 & 0xfff3ffffU | 0x30000;
		break;
		case 0x1b:this->unlabelled12 = this->unlabelled12 | 0x800000;
		break;
		case 0x21:this->unlabelled12 = this->unlabelled12 & 0xfff7ffffU | 0x70000;
		}
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

