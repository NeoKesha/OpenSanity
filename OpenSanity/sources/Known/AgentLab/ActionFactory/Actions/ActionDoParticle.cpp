#include "headers/Known/AgentLab/ActionFactory/Actions/ActionDoParticle.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionDoParticle::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionDoParticle::Dispose(ActionDoParticle *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionDoParticle::UnkMethod(int* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Could not reconcile some variable overlaps void __thiscall ActionDoParticle::UnkMethod(int this,int *param_2){
		ushort uVar1;
		float fVar2;
		bool bVar3;
		ushort *this_00;
		uint uVar4;
		uint uVar5;
		int iVar6;
		float local_1c;
		undefined4 local_18;
		float local_14;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_2);
		*(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xfeffffff | 0x800000;
		uVar5 = 0x3f;
		local_18 = 0xffff;
		local_18._0_2_ = 0xffff;
		iVar6 = 1;
		local_14 = 0.0;
		param_2 = (int *)0x0;
		local_1c = 0.0;
		*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xffffffc0 | 0x3fffffc0;
		IteratorE2::Rewind(&local_10);
		bVar3 = IteratorE2::IsEnd(&local_10);
		if (bVar3 == false) {
		iVar6 = 1;
		do {
		this_00 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar1 = *this_00;
		if (uVar1 < 0x13) {
		switch(uVar1) {
		case 0:local_14 = *(float *)(this_00 + 2);
		break;
		case 1:param_2 = *(int **)(this_00 + 2);
		break;
		case 2:local_1c = *(float *)(this_00 + 2);
		break;
		case 3:case 4:case 5:case 6:case 8:case 9:break;
		case 7:*(uint *)(this + 0x10) =(uint)(byte)(*(char *)(this_00 + 2) - 1) << 0x16 |*(uint *)(this + 0x10) & 0xc03fffff;
		break;
		case 10:iVar6 = *(int *)(this_00 + 2);
		break;
		default:uVar5 = *(uint *)(this_00 + 2);
		}
		}
		else if (uVar1 == 0x15) {
		local_18 = *(undefined4 *)(this_00 + 2);
		}
		else if (uVar1 == 0x104) {
		uVar4 = FUN_0017f240(this_00,*(uint *)(this + 0x10) >> 6 & 0xff);
		*(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xff7fffff;
		*(uint *)(this + 0x10) =(uVar4 << 6 ^ *(uint *)(this + 0x10)) & 0x3fc0 ^ *(uint *)(this + 0x10) | 0x20;
		}
		else if ((uVar1 == 0xffff) && (*(char *)(this_00 + 1) == '\x04')) {
		switch(*(undefined4 *)(this_00 + 2)) {
		case 0xe:*(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xff7fffff;
		break;
		case 0x17:*(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 1;
		break;
		case 0x26:*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xffffffe5 | 4;
		break;
		case 0x27:*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xffffffe7 | 6;
		break;
		case 0x28:*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xffffffe9 | 8;
		break;
		case 0x29:*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xffffffeb | 10;
		break;
		case 0x2a:*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xffffffe1;
		break;
		case 0x2b:*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xffffffe3 | 2;
		break;
		case 0xd5:*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xffc03fff;
		break;
		case 0xd7:*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xffc13fff | 0x10000;
		break;
		case 0xd9:*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xffc17fff | 0x14000;
		break;
		case 0xe7:*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xffc07fff | 0x4000;
		break;
		case 0xe8:*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xffc0bfff | 0x8000;
		break;
		case 0xf7:*(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xffc0ffff | 0xc000;
		}
		}
		IteratorE2::Iterate(&local_10);
		bVar3 = IteratorE2::IsEnd(&local_10);
		}
		 while (bVar3 == false);
		}
		*(undefined2 *)(this + 0xc) = (undefined2)local_18;
		*(uint *)(this + 0xc) = *(uint *)(this + 0xc) ^ (iVar6 << 0x10 ^ *(uint *)(this + 0xc)) & 0x7f0000;
		if (((local_14 != 0.0) || ((float)param_2 != 0.0)) || (local_1c != 0.0)) {
		*(int **)(this + 0x24) = param_2;
		*(float *)(this + 0x28) = local_1c;
		fVar2 = FLOAT_0038639c;
		*(float *)(this + 0x20) = local_14;
		*(float *)(this + 0x2c) = fVar2;
		*(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 0x20;
		}
		if (0x3e < uVar5) {
		*(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xfeffffff | 0x7e000000;
		return;
		}
		*(uint *)(this + 0xc) =(uVar5 << 0x19 ^ *(uint *)(this + 0xc)) & 0x7e000000 ^ *(uint *)(this + 0xc) | 0x1000000;
		return;
		}
		
	*/
	return;
}

void ActionDoParticle::Execute(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall ActionDoParticle::Execute(ActionDoParticle *this,InstanceContext *ctx){
		byte bVar1;
		InstanceNodeAbstract *pIVar2;
		float fVar3;
		char cVar4;
		uint uVar5;
		int *piVar6;
		InstanceContext *this_00;
		int iVar7;
		InstanceTransform *pIVar8;
		InstanceNodeAbstract **ppIVar9;
		int iStack96;
		int iStack92;
		undefined local_58 [8];
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
		InstanceNodeAbstract *pIStack40;
		InstanceNodeAbstract *pIStack36;
		InstanceNodeAbstract *pIStack32;
		InstanceNodeAbstract *pIStack28;
		float fStack24;
		float fStack20;
		fVar3 = FLOAT_0038639c;
		local_58._4_4_ = (ctx->parent).ctx;
		local_58._0_4_ = (InstanceNodeAbstract *)(this->unlabelled12 & 0xffff);
		uVar5 = (uint)this->unlabelled16 >> 0x16 & 0xff;
		if (uVar5 != 0xff) {
		pIVar2 = (ctx->nodes).array[0xf];
		bVar1 = *(byte *)((int)&pIVar2[2].field5_0x10 + 1);
		if (bVar1 == 0) {
		piVar6 = (int *)0x0;
		}
		else if (uVar5 < bVar1) {
		piVar6 = (int *)(&pIVar2->vtable->DisposeSomething)[uVar5];
		}
		else {
		piVar6 = (int *)0x0;
		}
		this->unlabelled32 = *piVar6;
		this->unlabelled36 = piVar6[1];
		this->unlabelled40 = piVar6[2];
		this->unlabelled44 = (int)fVar3;
		this->unlabelled12 = this->unlabelled12 & 0xff7fffff;
		this->unlabelled16 = this->unlabelled16 | 0x20;
		}
		ppIVar9 = (InstanceNodeAbstract **)0x0;
		if (((this->unlabelled16 & 0x3fc000U) != 0x3fc000) &&(cVar4 = (*(ctx->parent).vtable[2].Method4)(ctx), cVar4 != '\0')) {
		local_58._0_4_ = (ctx->nodes).array[0x13];
		if (local_58._0_4_ == (InstanceNodeAbstract *)0xffffffff) {
		local_58._0_4_ = (ctx->nodes).array[0x12];
		}
		else {
		ppIVar9 = (ctx->nodes).array + 0x16;
		}
		}
		if ((this->unlabelled12 & 0x1800000U) != 0) {
		iVar7 = FUN_0018e4f0((int)local_58._4_4_,(int)local_58._0_4_,(uint)this->unlabelled12 >> 0x10 & 0x7f,(undefined4 *)0x0);
		if (-1 < iVar7) {
		pIVar8 = InstanceContext::FUN_001961b0(local_58._4_4_,(uint)this->unlabelled12 >> 0x19 & 0x3f);
		fStack80 = (pIVar8->matrix).m11;
		fStack76 = (pIVar8->matrix).m12;
		fStack72 = (pIVar8->matrix).m13;
		fStack68 = (pIVar8->matrix).m14;
		fStack64 = (pIVar8->matrix).m21;
		fStack60 = (pIVar8->matrix).m22;
		fStack56 = (pIVar8->matrix).m23;
		fStack52 = (pIVar8->matrix).m24;
		fStack48 = (pIVar8->matrix).m31;
		fStack44 = (pIVar8->matrix).m32;
		pIStack40 = (InstanceNodeAbstract *)(pIVar8->matrix).m33;
		pIStack36 = (InstanceNodeAbstract *)(pIVar8->matrix).m34;
		pIStack32 = (InstanceNodeAbstract *)(pIVar8->matrix).m41;
		pIStack28 = (InstanceNodeAbstract *)(pIVar8->matrix).m42;
		fStack24 = (pIVar8->matrix).m43;
		fStack20 = (pIVar8->matrix).m44;
		if ((this->unlabelled16 & 0x20U) == 0) {
		piVar6 = (int *)0x0;
		}
		else {
		piVar6 = &this->unlabelled32;
		}
		FUN_00196200(*(byte *)&this->unlabelled16 & 1,(uint)this->unlabelled16 >> 1 & 0xf,(float *)piVar6,(float *)(local_58 + 8));
		if (ppIVar9 != (InstanceNodeAbstract **)0x0) {
		pIStack32 = *ppIVar9;
		pIStack28 = ppIVar9[1];
		fStack24 = (float)ppIVar9[2];
		fStack20 = (float)ppIVar9[3];
		FUN_00112540((int)(local_58 + 8),((local_58._4_4_)->parent).chunkData);
		}
		FUN_00127940(iVar7,(undefined4 *)(local_58 + 8));
		}
		return;
		}
		uVar5 = (uint)this->unlabelled16 >> 6 & 0xff;
		if (uVar5 != 0xff) {
		this_00 = (*(ctx->parent).vtable[7].Dispose)(ctx,(byte)uVar5);
		if (this_00 == (InstanceContext *)0x0) {
		(*(ctx->parent).vtable[7].Method1)(ctx);
		}
		else {
		InstanceNodeCharacter::GetPosition((InstanceNodeCharacter *)this_00,(Vector4 *)&this->unlabelled32);
		}
		}
		if (ppIVar9 == (InstanceNodeAbstract **)0x0) {
		if ((*(byte *)&this->unlabelled16 & 0x20) == 0) {
		piVar6 = (int *)0x0;
		}
		else {
		piVar6 = &this->unlabelled32;
		}
		FUN_0018e4f0(iStack92,iStack96,*(byte *)((int)&this->unlabelled12 + 2) & 0x7f,piVar6);
		return;
		}
		Matrix4::Construct1((Matrix4 *)local_58);
		pIStack40 = *ppIVar9;
		pIStack36 = ppIVar9[1];
		pIStack32 = ppIVar9[2];
		pIStack28 = ppIVar9[3];
		FUN_00112540((int)local_58,*(undefined4 *)(iStack92 + 0xb0));
		FUN_0018e4f0(iStack92,iStack96,*(byte *)((int)&this->unlabelled12 + 2) & 0x7f,ppIVar9);
		return;
		}
		
	*/
	return;
}

void ActionDoParticle::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionDoParticle::Construct(ActionDoParticle *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_DoParticle;
		return;
		}
		
	*/
	return;
}

int ActionDoParticle::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionDoParticle::GetSize(void){
		return 0x30;
		}
		
	*/
	return 0;
}

void ActionDoParticle::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDoParticle::ExecuteFromCallContext(ActionDoParticle *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		(*((this->parent).vtable)->Execute)(&this->parent,(ctx->parent).ctx);
		return;
		}
		
	*/
	return;
}

