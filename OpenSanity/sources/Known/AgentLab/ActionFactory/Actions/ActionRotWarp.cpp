#include "headers/Known/AgentLab/ActionFactory/Actions/ActionRotWarp.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionRotWarp::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionRotWarp::Dispose(ActionRotWarp *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionRotWarp::UnkMethod(int* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionRotWarp::UnkMethod(int this,int *param_2){
		Vector4 *this_00;
		ushort uVar1;
		float fVar2;
		bool bVar3;
		ushort *puVar4;
		uint uVar5;
		float local_18;
		float local_14;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_2);
		*(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xff80ffff | 0xffff;
		this_00 = (Vector4 *)(this + 0x10);
		*(undefined4 *)(this + 0x1c) = 0;
		*(undefined4 *)(this + 0x18) = 0;
		*(undefined4 *)(this + 0x14) = 0;
		this_00->x = 0.0;
		local_14 = 0.0;
		local_18 = 0.0;
		param_2 = (int *)0x0;
		IteratorE2::Rewind(&local_10);
		bVar3 = IteratorE2::IsEnd(&local_10);
		if (bVar3 == false) {
		do {
		puVar4 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar1 = *puVar4;
		if (uVar1 < 0x59) {
		if (uVar1 == 0x58) {
		*(uint *)(this + 0xc) = *(uint *)(this + 0xc) | 0x100000;
		if (*(char *)(this + 0xd) != -1) {
		*(char *)(this + 0xd) = *(char *)(this + 0xd) + '\x01';
		}
		}
		else {
		switch(uVar1) {
		case 3:local_14 = *(float *)(puVar4 + 2);
		break;
		case 4:local_18 = *(float *)(puVar4 + 2);
		break;
		case 5:param_2 = *(int **)(puVar4 + 2);
		break;
		case 6:*(char *)(this + 0xc) = (char)*(undefined4 *)(puVar4 + 2);
		break;
		case 7:*(char *)(this + 0xd) = (char)*(undefined4 *)(puVar4 + 2) + -1;
		}
		}
		goto switchD_00193706_caseD_6;
		}
		if ((uVar1 != 0xffff) || (*(char *)(puVar4 + 1) != '\x04')) goto switchD_00193706_caseD_6;
		switch(*(undefined4 *)(puVar4 + 2)) {
		case 2:uVar5 = *(uint *)(this + 0xc) & 0xfff0ffff;
		goto LAB_00193776;
		case 3:*(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xfff1ffff | 0x10000;
		break;
		case 4:*(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xfff2ffff | 0x20000;
		break;
		case 5:*(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xfff3ffff | 0x30000;
		break;
		case 0x21:uVar5 = *(uint *)(this + 0xc) & 0xfff7ffff | 0x70000;
		goto LAB_00193776;
		case 0x24:*(undefined *)(this + 0xd) = 0xfe;
		break;
		case 0x25:*(undefined *)(this + 0xd) = 0xfd;
		break;
		case 0xe0:uVar5 = *(uint *)(this + 0xc) | 0x400000;
		LAB_00193776:*(uint *)(this + 0xc) = uVar5;
		}
		switchD_00193706_caseD_6:IteratorE2::Iterate(&local_10);
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
		*(undefined4 *)(this + 0x18) = 0;
		*(undefined4 *)(this + 0x14) = 0;
		this_00->x = 0.0;
		*(float *)(this + 0x1c) = fVar2;
		return;
		}
		
	*/
	return;
}

void ActionRotWarp::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __thiscall ActionRotWarp::ExecuteFromCallContext(ActionRotWarp *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		uint uVar2;
		InstanceContext *this_00;
		float *pfVar3;
		InstanceTransform *pIVar4;
		bool bVar5;
		Vector4 *pVVar6;
		float fVar7;
		Vector4 local_70;
		Vector4 local_60;
		float local_50;
		float fStack76;
		float fStack72;
		float fStack68;
		float local_40;
		float fStack60;
		float fStack56;
		float fStack52;
		float local_30;
		float fStack44;
		float fStack40;
		float fStack36;
		float local_20;
		float fStack28;
		float fStack24;
		float fStack20;
		pIVar1 = (ctx->parent).ctx;
		uVar2 = this->unlabelled12;
		this_00 = (pIVar1->parent).ctx;
		switch(uVar2 >> 0x10 & 0xf) {
		case 0:pVVar6 = (Vector4 *)&this->unlabelled16;
		break;
		case 1:pfVar3 = (float *)(pIVar1->parent).field14_0x20.matrix2.m32;
		local_70.x = *pfVar3;
		local_70.y = pfVar3[1];
		local_70.z = pfVar3[2];
		local_70.w = pfVar3[3];
		if ((uVar2 & 0x200000) != 0) {
		FUN_000dae60(&local_70,&local_70.x,(float *)&this->unlabelled16);
		}
		pVVar6 = &local_70;
		break;
		case 2:if ((uVar2 & 0x200000) == 0) goto switchD_00193cda_caseD_3;
		thunk_FUN_00026f20((int)this_00,&local_60);
		FUN_000dae60(&local_60,&local_60.x,(float *)&this->unlabelled16);
		pVVar6 = &local_60;
		goto LAB_00193da8;
		default:goto switchD_00193cda_caseD_3;
		case 7:pIVar4 = (InstanceTransform *)(pIVar1->nodes).array[2];
		if (pIVar4 == (InstanceTransform *)0x0) goto switchD_00193cda_caseD_3;
		InstanceTransform::thunk_FUN_000269a0(pIVar4,&local_70);
		if ((this->unlabelled12 & 0x200000U) != 0) {
		FUN_000dae60(&local_70,&local_70.x,(float *)&this->unlabelled16);
		}
		pVVar6 = &local_70;
		LAB_00193da8:InstanceContext::thunk_FUN_00026f70(this_00,pVVar6);
		goto switchD_00193cda_caseD_3;
		}
		bVar5 = InstanceTransform::thunk_FUN_000269f0((this_00->parent).transform,pVVar6);
		if (bVar5 != false) {
		InstanceContext::RegisterCtxPtrToList(this_00);
		}
		switchD_00193cda_caseD_3:if ((this->unlabelled12 & 0x400000U) != 0) {
		pIVar4 = (this_00->parent).transform;
		InstanceTransform::FillMatrix(pIVar4);
		local_50 = (pIVar4->matrix).m11;
		fStack76 = (pIVar4->matrix).m12;
		fStack72 = (pIVar4->matrix).m13;
		fStack68 = (pIVar4->matrix).m14;
		local_40 = (pIVar4->matrix).m21;
		fStack60 = (pIVar4->matrix).m22;
		fStack56 = (pIVar4->matrix).m23;
		fStack52 = (pIVar4->matrix).m24;
		local_30 = (pIVar4->matrix).m31;
		fStack44 = (pIVar4->matrix).m32;
		fStack40 = (pIVar4->matrix).m33;
		local_60.w = (pIVar4->matrix).m34;
		local_20 = (pIVar4->matrix).m41;
		fStack28 = (pIVar4->matrix).m42;
		fStack24 = (pIVar4->matrix).m43;
		fStack20 = (pIVar4->matrix).m44;
		fVar7 = fStack40 * fStack40 + fStack44 * fStack44 + local_30 * local_30;
		if (fVar7 <= _DAT_004962e0) {
		local_60.z = 0.0;
		}
		else {
		local_60.z = FLOAT_0038639c / SQRT(fVar7);
		}
		local_60.x = local_30 * local_60.z;
		local_60.y = fStack44 * local_60.z;
		local_60.z = fStack40 * local_60.z;
		fStack36 = local_60.w;
		FUN_000e8990(&local_50,&local_60.x);
		bVar5 = InstanceTransform::thunk_FUN_00026aa0((this_00->parent).transform,(InstanceTransform *)&local_50);
		if (bVar5 != false) {
		InstanceContext::RegisterCtxPtrToList(this_00);
		}
		}
		return;
		}
		
	*/
	return;
}

void ActionRotWarp::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionRotWarp::Construct(ActionRotWarp *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_RotWarp;
		return;
		}
		
	*/
	return;
}

int ActionRotWarp::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionRotWarp::GetSize(void){
		return 0x20;
		}
		
	*/
	return 0;
}

