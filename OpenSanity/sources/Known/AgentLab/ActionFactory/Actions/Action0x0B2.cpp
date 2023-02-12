#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0B2.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0B2::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0B2::Dispose(Action0x0B2 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x0B2::UnkMethod(int* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0B2::UnkMethod(int this,int *param_2){
		Vector4 *this_00;
		ushort uVar1;
		float fVar2;
		bool bVar3;
		ushort *this_01;
		uint uVar4;
		float local_18;
		float local_14;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_2);
		*(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xff80ffff | 0xffff;
		this_00 = (Vector4 *)(this + 0x20);
		*(undefined4 *)(this + 0x2c) = 0;
		*(undefined4 *)(this + 0x28) = 0;
		*(undefined4 *)(this + 0x24) = 0;
		this_00->x = 0.0;
		local_14 = 0.0;
		local_18 = 0.0;
		param_2 = (int *)0x0;
		IteratorE2::Rewind(&local_10);
		bVar3 = IteratorE2::IsEnd(&local_10);
		if (bVar3 == false) {
		do {
		this_01 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar1 = *this_01;
		if (uVar1 < 0x59) {
		if (uVar1 == 0x58) {
		*(uint *)(this + 0xc) = *(uint *)(this + 0xc) | 0x100000;
		if (*(char *)(this + 0xd) != -1) {
		*(char *)(this + 0xd) = *(char *)(this + 0xd) + '\x01';
		}
		}
		else {
		switch(uVar1) {
		case 3:local_14 = *(float *)(this_01 + 2);
		break;
		case 4:local_18 = *(float *)(this_01 + 2);
		break;
		case 5:param_2 = *(int **)(this_01 + 2);
		break;
		case 6:*(char *)(this + 0xc) = (char)*(undefined4 *)(this_01 + 2);
		break;
		case 7:*(char *)(this + 0xd) = (char)*(undefined4 *)(this_01 + 2) + -1;
		}
		}
		}
		else if (uVar1 == 0x105) {
		uVar4 = FUN_0017f240(this_01,(uint)*(byte *)(this + 0x11));
		*(char *)(this + 0x11) = (char)uVar4;
		}
		else if (uVar1 == 0x117) {
		uVar4 = FUN_0017f240(this_01,*(uint *)(this + 0x10) & 0xff);
		*(char *)(this + 0x10) = (char)uVar4;
		}
		else if ((uVar1 == 0xffff) && (*(char *)(this_01 + 1) == '\x04')) {
		switch(*(undefined4 *)(this_01 + 2)) {
		case 2:*(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xfff0ffff;
		break;
		case 3:*(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xfff1ffff | 0x10000;
		break;
		case 4:*(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xfff2ffff | 0x20000;
		break;
		case 5:*(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xfff3ffff | 0x30000;
		break;
		case 0x21:*(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xfff7ffff | 0x70000;
		break;
		case 0x24:*(undefined *)(this + 0xd) = 0xfe;
		break;
		case 0x25:*(undefined *)(this + 0xd) = 0xfd;
		break;
		case 0xe0:*(uint *)(this + 0xc) = *(uint *)(this + 0xc) | 0x400000;
		}
		}
		IteratorE2::Iterate(&local_10);
		bVar3 = IteratorE2::IsEnd(&local_10);
		fVar2 = FLOAT_003863a4;
		}
		 while (bVar3 == false);
		if (((local_14 != 0.0) || (local_18 != 0.0)) || ((float)param_2 != 0.0)) {
		*(uint *)(this + 0xc) = *(uint *)(this + 0xc) | 0x200000;
		Vector4::FromRotation(this_00,(int)(local_14 * fVar2),(int)(local_18 * fVar2),(int)((float)param_2 * fVar2));
		return;
		}
		}
		fVar2 = FLOAT_0038639c;
		*(undefined4 *)(this + 0x28) = 0;
		*(undefined4 *)(this + 0x24) = 0;
		this_00->x = 0.0;
		*(float *)(this + 0x2c) = fVar2;
		return;
		}
		
	*/
	return;
}

void Action0x0B2::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __thiscall Action0x0B2::ExecuteFromCallContext(Action0x0B2 *this,undefined4 time_clock,InstanceContext *ctx){
		float *pfVar1;
		InstanceTransform *pIVar2;
		bool bVar3;
		uint uVar4;
		InstanceContext *this_00;
		InstanceNodeInstance *pIVar4;
		Vector4 *pVVar5;
		float fVar6;
		Vector4 VStack112;
		Vector4 VStack96;
		float fStack80;
		float fStack76;
		float fStack72;
		float fStack68;
		float fStack64;
		float fStack60;
		float fStack56;
		float fStack52;
		float fStack48;
		float fStack44;
		float fStack40;
		float fStack36;
		float fStack32;
		float fStack28;
		float fStack24;
		float fStack20;
		pIVar4 = (InstanceNodeInstance *)(ctx->parent).ctx;
		uVar4 = this->unlabelled16 & 0xff;
		this_00 = (((InstanceNodeInstanceBody *)&(((InstanceContext *)pIVar4)->parent).ctx)->parent).ctx;
		if ((uVar4 != 0xff) &&(this_00 = (InstanceContext *)(*((InstanceNodeInstance_VTable *)(((InstanceContext *)pIVar4)->parent).vtable)->InstanceMethod25)(pIVar4,uVar4), this_00 != (InstanceContext *)0x0)) {
		pIVar4 = (InstanceNodeInstance *)InstanceDataList::GetNode(&this_00->nodes,Instance);
		}
		uVar4 = this->unlabelled12;
		switch(uVar4 >> 0x10 & 0xf) {
		case 0:pVVar5 = (Vector4 *)&this->unlabelled32;
		break;
		case 1:pfVar1 = (float *)(((InstanceContext *)pIVar4)->parent).field14_0x20.matrix2.m32;
		VStack112.x = *pfVar1;
		VStack112.y = pfVar1[1];
		VStack112.z = pfVar1[2];
		VStack112.w = pfVar1[3];
		if ((uVar4 & 0x200000) != 0) {
		FUN_000dae60(&VStack112,&VStack112.x,(float *)&this->unlabelled32);
		}
		pVVar5 = &VStack112;
		break;
		case 2:if ((uVar4 & 0x200000) == 0) goto switchD_001942fa_caseD_3;
		thunk_FUN_00026f20((int)this_00,&VStack96);
		FUN_000dae60(&VStack96,&VStack96.x,(float *)&this->unlabelled32);
		pVVar5 = &VStack96;
		goto LAB_001943ca;
		default:goto switchD_001942fa_caseD_3;
		case 7:pIVar2 = (InstanceTransform *)((InstanceDataList *)((int)pIVar4 + 0xe4))->array[2];
		if (pIVar2 == (InstanceTransform *)0x0) goto switchD_001942fa_caseD_3;
		InstanceTransform::thunk_FUN_000269a0(pIVar2,&VStack112);
		if ((this->unlabelled12 & 0x200000U) != 0) {
		FUN_000dae60(&VStack112,&VStack112.x,(float *)&this->unlabelled32);
		}
		pVVar5 = &VStack112;
		LAB_001943ca:InstanceContext::thunk_FUN_00026f70(this_00,pVVar5);
		goto switchD_001942fa_caseD_3;
		}
		bVar3 = InstanceTransform::thunk_FUN_000269f0((this_00->parent).transform,pVVar5);
		if (bVar3 != false) {
		InstanceContext::RegisterCtxPtrToList(this_00);
		}
		switchD_001942fa_caseD_3:if ((this->unlabelled12 & 0x400000U) != 0) {
		pIVar2 = (this_00->parent).transform;
		InstanceTransform::FillMatrix(pIVar2);
		fStack80 = (pIVar2->matrix).m11;
		fStack76 = (pIVar2->matrix).m12;
		fStack72 = (pIVar2->matrix).m13;
		fStack68 = (pIVar2->matrix).m14;
		fStack64 = (pIVar2->matrix).m21;
		fStack60 = (pIVar2->matrix).m22;
		fStack56 = (pIVar2->matrix).m23;
		fStack52 = (pIVar2->matrix).m24;
		fStack48 = (pIVar2->matrix).m31;
		fStack44 = (pIVar2->matrix).m32;
		fStack40 = (pIVar2->matrix).m33;
		VStack96.w = (pIVar2->matrix).m34;
		fStack32 = (pIVar2->matrix).m41;
		fStack28 = (pIVar2->matrix).m42;
		fStack24 = (pIVar2->matrix).m43;
		fStack20 = (pIVar2->matrix).m44;
		fVar6 = fStack40 * fStack40 + fStack44 * fStack44 + fStack48 * fStack48;
		if (fVar6 <= _DAT_004962e0) {
		VStack96.z = 0.0;
		}
		else {
		VStack96.z = FLOAT_0038639c / SQRT(fVar6);
		}
		VStack96.x = fStack48 * VStack96.z;
		VStack96.y = fStack44 * VStack96.z;
		VStack96.z = fStack40 * VStack96.z;
		fStack36 = VStack96.w;
		FUN_000e8990(&fStack80,&VStack96.x);
		bVar3 = InstanceTransform::thunk_FUN_00026aa0((this_00->parent).transform,(InstanceTransform *)&fStack80);
		if (bVar3 != false) {
		InstanceContext::RegisterCtxPtrToList(this_00);
		}
		}
		return;
		}
		
	*/
	return;
}

void Action0x0B2::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x0B2 * __fastcall Action0x0B2::Construct(Action0x0B2 *this){
		uint uVar1;
		uVar1 = this->unlabelled16;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0B2;
		this->unlabelled16 = uVar1 | 0xffff;
		return this;
		}
		
	*/
	return;
}

int Action0x0B2::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0B2::GetSize(void){
		return 0x30;
		}
		
	*/
	return 0;
}

