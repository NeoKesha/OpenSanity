#include "headers/Known/AgentLab/ActionFactory/Actions/ActionGetShortRoute.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionGetShortRoute::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionGetShortRoute::ExecuteFromCallContext(ActionGetShortRoute *this,undefined4 time_clock,InstanceContext *ctx){
		float fVar1;
		float fVar2;
		float fVar3;
		ushort uVar4;
		InstanceContext *pIVar5;
		InstanceContext *pIVar6;
		InstanceTransform *pIVar7;
		uint uVar8;
		UnkFamily17Base *this_00;
		void *pvVar9;
		int *piVar10;
		float *pfVar11;
		float *pfVar12;
		int iVar13;
		ushort local_78 [2];
		ushort local_74 [2];
		int local_70;
		InstanceNodeAbstract *local_6c;
		float local_68;
		float local_64;
		Vector4 local_60;
		float local_50;
		float local_4c;
		float local_48;
		UnkFamily17Data local_34;
		pIVar5 = (ctx->parent).ctx;
		pIVar6 = (pIVar5->parent).ctx;
		local_70 = UnkFamily16A::FUN_001b3ac0(PTR_DefaultRM,pIVar6);
		local_6c = (pIVar5->nodes).array[0xf];
		FUN_00186550((int)local_6c);
		*(byte *)&local_6c[2].field5_0x10 = *(byte *)&local_6c[2].field5_0x10 & 0xf7;
		pIVar7 = (pIVar6->parent).transform;
		if ((*(byte *)&pIVar7->field3_0x60 & 4) != 0) {
		fVar1 = (pIVar7->matrix).m44;
		fVar2 = (pIVar7->matrix).m43;
		fVar3 = (pIVar7->matrix).m42;
		(pIVar7->position).x = (pIVar7->matrix).m41;
		(pIVar7->position).y = fVar3;
		(pIVar7->position).z = fVar2;
		(pIVar7->position).w = fVar1;
		pIVar7->field3_0x60 = (float)((uint)pIVar7->field3_0x60 & 0xfffffffa);
		}
		local_60.x = (pIVar7->position).x;
		local_60.y = (pIVar7->position).y;
		local_60.z = (pIVar7->position).z;
		local_60.w = (pIVar7->position).w;
		if ((*(byte *)&this->unlabelled36 & 1) != 0) {
		iVar13 = (pIVar5->parent).field14_0x20.field27_0x78;
		if (iVar13 == 0) {
		pvVar9 = (void *)(pIVar5->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar9 = (void *)FUN_00017ba8(iVar13);
		}
		local_68 = FUN_00180490(&this->unlabelled56,pvVar9);
		pIVar7 = (pIVar6->parent).transform;
		InstanceTransform::FillMatrix(pIVar7);
		local_60.x = (pIVar7->matrix).m31 * local_68 + local_60.x;
		local_60.y = (pIVar7->matrix).m32 * local_68 + local_60.y;
		local_60.z = (pIVar7->matrix).m33 * local_68 + local_60.z;
		}
		if ((this->unlabelled32 & 0x2000000U) == 0) {
		piVar10 = (int *)0x0;
		}
		else {
		piVar10 = &this->unlabelled16;
		}
		FUN_00176960(&local_50,(uint)this->unlabelled32 >> 0x1c,(int)ctx,(float *)piVar10,*(byte *)((int)&this->unlabelled32 + 1),*(byte *)&this->unlabelled32);
		uVar4 = *(ushort *)((int)&this->unlabelled64 + 2);
		if ((uVar4 | *(ushort *)&this->unlabelled68) == 0) {
		pfVar11 = FUN_001b1cc0(local_70,&local_60.x,local_78);
		}
		else {
		pfVar11 = FUN_001b1cf0(local_70,&local_60.x,local_78,uVar4,*(ushort *)&this->unlabelled68);
		}
		uVar4 = *(ushort *)((int)&this->unlabelled60 + 2);
		if ((uVar4 | *(ushort *)&this->unlabelled64) == 0) {
		pfVar12 = FUN_001b1cc0(local_70,&local_50,local_74);
		}
		else {
		pfVar12 = FUN_001b1cf0(local_70,&local_50,local_74,uVar4,*(ushort *)&this->unlabelled64);
		}
		if ((pfVar11 != (float *)0x0) && (pfVar12 != (float *)0x0)) {
		if (0.0 < (float)this->unlabelled72) {
		local_68 = (pfVar11[2] - local_60.z) * (pfVar11[2] - local_60.z) +(pfVar11[1] - local_60.y) * (pfVar11[1] - local_60.y) +(*pfVar11 - local_60.x) * (*pfVar11 - local_60.x);
		local_64 = SQRT(local_68);
		if ((float)this->unlabelled72 <= local_64 - pfVar11[3] &&local_64 - pfVar11[3] != (float)this->unlabelled72) {
		return;
		}
		}
		if (0.0 < (float)this->unlabelled76) {
		local_64 = (pfVar12[2] - local_48) * (pfVar12[2] - local_48) +(pfVar12[1] - local_4c) * (pfVar12[1] - local_4c) +(*pfVar12 - local_50) * (*pfVar12 - local_50);
		local_68 = SQRT(local_64);
		if ((float)this->unlabelled76 <= local_68 - pfVar12[3] &&local_68 - pfVar12[3] != (float)this->unlabelled76) {
		return;
		}
		}
		local_34.index2 = *(ushort *)(local_70 + 0xc);
		uVar8 = this->unlabelled32;
		local_34.field10_0x1c = local_78[0];
		local_34.field11_0x1e = local_74[0];
		if ((uVar8 & 0x200000) == 0) {
		local_34.field5_0x8 = (InstanceNodeAbstract *)0x0;
		}
		else {
		local_34.field5_0x8 = (pIVar5->nodes).array[3];
		}
		local_34.field6_0xc = 0.0;
		local_34.index1 = local_34.index2;
		if ((uVar8 & 0x4000000) == 0) {
		iVar13 = (pIVar5->parent).field14_0x20.field27_0x78;
		local_34.flags = 0;
		if (iVar13 == 0) {
		pvVar9 = (void *)(pIVar5->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar9 = (void *)FUN_00017ba8(iVar13);
		}
		if ((uVar8 & 0x400000) != 0) {
		local_34.flags = 2;
		local_34.field6_0xc = FUN_00180490(&this->unlabelled48,pvVar9);
		}
		uVar4 = *(ushort *)&this->unlabelled36;
		if ((uVar4 & 2) == 0) {
		local_34.flags = local_34.flags | 0x200000;
		}
		if ((uVar4 & 0x10) == 0) {
		local_34.flags = local_34.flags | 0x1000000;
		}
		uVar8 = this->unlabelled32;
		if ((uVar8 & 0x20000) == 0) {
		local_34.flags = local_34.flags | 0xe0000;
		}
		else {
		if ((uVar8 & 0x80000) == 0) {
		local_34.flags = local_34.flags | 0x40000;
		}
		if ((uVar8 & 0x40000) == 0) {
		local_34.flags = local_34.flags | 0x80000;
		}
		}
		if ((uVar4 & 8) == 0) {
		local_34.flags = local_34.flags | 0x800000;
		}
		if ((uVar4 & 4) == 0) {
		local_34.flags = local_34.flags | 0x400000;
		}
		if ((uVar8 & 0x100000) == 0) {
		local_34.flags = local_34.flags | 0x100000;
		}
		if ((uVar8 & 0x1000000) != 0) {
		local_34.flags = local_34.flags | 8;
		local_34.field7_0x10 = FUN_00180490(&this->unlabelled40,pvVar9);
		}
		if ((this->unlabelled32 & 0x800000U) != 0) {
		local_34.flags = local_34.flags | 0x10;
		local_34.field8_0x14 = FUN_00180490(&this->unlabelled44,pvVar9);
		}
		if ((this->unlabelled32 & 0x8000000U) != 0) {
		local_34.flags = local_34.flags | 0x20;
		local_34.field9_0x18 = FUN_00180490(&this->unlabelled52,pvVar9);
		}
		}
		else {
		local_34.flags = 4;
		}
		local_34._4_1_ = *(undefined *)&this->unlabelled60;
		this_00 = (PTR_DefaultRM->parent).field2046_0x814;
		thunk_FUN_00053c20((int)this_00,&local_60.x,&local_50);
		if ((this->unlabelled32 & 0x800000U) != 0) {
		thunk_FUN_000593c0((int)this_00,local_34.field8_0x14);
		}
		iVar13 = (*(code *)this_00->vtable->UnkMethod)(&local_34);
		if (iVar13 != 0) {
		FUN_00186410(local_70,iVar13);
		}
		}
		return;
		}
		
	*/
	return;
}

void ActionGetShortRoute::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionGetShortRoute::Dispose(ActionGetShortRoute *this,byte param_1){
		thunk_FUN_00056ce0(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionGetShortRoute::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionGetShortRoute * __fastcall ActionGetShortRoute::Construct(ActionGetShortRoute *this){
		float fVar1;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_GetShortRoute;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		this->unlabelled24 = 0;
		this->unlabelled28 = (int)FLOAT_0038639c;
		this->unlabelled32 = 0x41effff;
		*(ushort *)&this->unlabelled36 = *(ushort *)&this->unlabelled36 & 0xfffe | 0x1e;
		FUN_00180380(&this->unlabelled40,0);
		FUN_00180380(&this->unlabelled44,0);
		FUN_00180380(&this->unlabelled48,0);
		FUN_00180380(&this->unlabelled52,0);
		FUN_00180380(&this->unlabelled56,0);
		fVar1 = FLOAT_003869d8;
		*(undefined2 *)((int)&this->unlabelled60 + 2) = 0;
		*(undefined2 *)&this->unlabelled64 = 0;
		*(undefined2 *)((int)&this->unlabelled64 + 2) = 0;
		*(undefined2 *)&this->unlabelled68 = 0;
		*(undefined *)&this->unlabelled60 = 0xff;
		this->unlabelled72 = (int)fVar1;
		this->unlabelled76 = (int)fVar1;
		return this;
		}
		
	*/
	return;
}

int ActionGetShortRoute::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionGetShortRoute::GetSize(void){
		return 0x50;
		}
		
	*/
	return 0;
}

void ActionGetShortRoute::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionGetShortRoute::UnkMethod(ActionGetShortRoute *this,int *param_1){
		byte *pbVar1;
		ushort uVar2;
		char cVar3;
		ushort *this_00;
		int iVar4;
		uint uVar5;
		float fVar6;
		float fVar7;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		while (cVar3 == '\0') {
		this_00 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		iVar4 = FUN_00180820(this_00,(uint)this->unlabelled32 >> 0x1c);
		this->unlabelled32 = this->unlabelled32 & 0xfffffffU | iVar4 << 0x1c;
		uVar5 = FUN_0017f240(this_00,(uint)*(byte *)((int)&this->unlabelled32 + 1));
		*(char *)((int)&this->unlabelled32 + 1) = (char)uVar5;
		FUN_0017f260(this_00,(uint *)&this->unlabelled16);
		uVar2 = *this_00;
		if (uVar2 < 0xae) {
		switch(uVar2) {
		case 6:*(undefined *)&this->unlabelled32 = *(undefined *)(this_00 + 2);
		break;
		case 7:case 8:case 9:case 10:case 0xb:case 0xc:case 0xd:case 0xe:case 0xf:case 0x10:case 0x11:case 0x12:case 0x13:case 0x14:case 0x15:case 0x16:case 0x17:case 0x18:case 0x19:case 0x1a:case 0x1b:case 0x1c:case 0x1d:case 0x1e:case 0x1f:case 0x20:case 0x21:case 0x22:case 0x23:case 0x24:case 0x25:case 0x26:case 0x27:case 0x28:case 0x29:case 0x2a:case 0x2b:case 0x2c:case 0x2d:case 0x2e:case 0x2f:case 0x30:case 0x31:case 0x32:case 0x33:case 0x34:case 0x35:case 0x36:case 0x37:case 0x38:case 0x39:case 0x3a:case 0x3b:case 0x3c:case 0x3d:case 0x3e:case 0x3f:case 0x40:case 0x41:case 0x42:case 0x43:case 0x44:case 0x45:case 0x46:case 0x47:case 0x48:case 0x49:case 0x4a:case 0x4b:case 0x4c:case 0x4d:case 0x4e:case 0x4f:case 0x50:case 0x51:case 0x52:case 0x53:case 0x54:case 0x55:case 0x56:case 0x57:case 0x58:case 0x59:case 0x5a:case 0x5b:case 0x5c:case 0x5d:case 0x5e:case 0x5f:case 0x60:case 0x61:case 100:case 0x65:case 0x66:case 0x67:case 0x68:case 0x69:case 0x6a:case 0x6b:case 0x6c:case 0x6d:case 0x6e:case 0x6f:case 0x70:case 0x71:case 0x72:case 0x73:case 0x74:case 0x75:case 0x76:case 0x77:case 0x78:case 0x79:case 0x7a:case 0x7b:case 0x7c:case 0x7d:case 0x7e:case 0x7f:case 0x80:case 0x81:case 0x82:case 0x83:case 0x84:case 0x85:case 0x86:case 0x87:case 0x88:case 0x89:case 0x8a:case 0x8b:case 0x8c:case 0x8d:case 0x8e:case 0x8f:case 0x90:case 0x91:case 0x92:case 0x93:case 0x94:case 0x95:case 0x96:case 0x97:case 0x98:case 0x99:case 0x9a:case 0x9b:case 0x9c:case 0x9d:case 0x9e:case 0x9f:case 0xa0:case 0xa1:case 0xa2:case 0xa3:case 0xa4:case 0xa5:break;
		case 0x62:*(undefined *)&this->unlabelled60 = *(undefined *)(this_00 + 2);
		break;
		case 99:FUN_00180840(this_00,(US002 *)&this->unlabelled48);
		this->unlabelled32 = this->unlabelled32 & 0xfbffffffU | 0x400000;
		break;
		case 0xa6:FUN_00180840(this_00,(US002 *)&this->unlabelled40);
		this->unlabelled32 = this->unlabelled32 & 0xfbffffffU | 0x1000000;
		break;
		case 0xa7:FUN_00180840(this_00,(US002 *)&this->unlabelled44);
		this->unlabelled32 = this->unlabelled32 & 0xfbffffffU | 0x800000;
		break;
		default:FUN_00180840(this_00,(US002 *)&this->unlabelled52);
		this->unlabelled32 = this->unlabelled32 & 0xfbffffffU | 0x8000000;
		}
		}
		else if (uVar2 < 0xf9) {
		if (uVar2 == 0xf8) {
		this->unlabelled76 = *(int *)(this_00 + 2);
		}
		else if (uVar2 == 0xc6) {
		FUN_00180840(this_00,(US002 *)&this->unlabelled56);
		*(byte *)&this->unlabelled36 = *(byte *)&this->unlabelled36 | 1;
		}
		else if (uVar2 == 0xf7) {
		this->unlabelled72 = *(int *)(this_00 + 2);
		}
		}
		else if (uVar2 == 0xffff) {
		switch(*(undefined4 *)(this_00 + 2)) {
		case 0x218:uVar5 = this->unlabelled32;
		this->unlabelled32 = uVar5 & 0xfbfbffff;
		if ((uVar5 & 0x80000) == 0) {
		this->unlabelled32 = uVar5 & 0xfbf9ffff;
		}
		break;
		case 0x219:uVar5 = this->unlabelled32;
		this->unlabelled32 = uVar5 & 0xfbf7ffff;
		if ((uVar5 & 0x40000) == 0) {
		this->unlabelled32 = uVar5 & 0xfbf5ffff;
		}
		break;
		case 0x21a:*(byte *)&this->unlabelled36 = *(byte *)&this->unlabelled36 & 0xfd;
		this->unlabelled32 = this->unlabelled32 & 0xfbffffff;
		break;
		case 0x237:*(byte *)&this->unlabelled36 = *(byte *)&this->unlabelled36 & 0xfb;
		this->unlabelled32 = this->unlabelled32 & 0xfbffffff;
		break;
		case 0x238:*(byte *)&this->unlabelled36 = *(byte *)&this->unlabelled36 & 0xf7;
		this->unlabelled32 = this->unlabelled32 & 0xfbffffff;
		break;
		case 0x239:*(byte *)&this->unlabelled36 = *(byte *)&this->unlabelled36 & 0xef;
		this->unlabelled32 = this->unlabelled32 & 0xfbffffff;
		break;
		case 0x23b:*(byte *)&this->unlabelled36 = *(byte *)&this->unlabelled36 & 0xe3;
		this->unlabelled32 = this->unlabelled32 & 0xfbedffff;
		break;
		case 0x23c:*(byte *)&this->unlabelled36 = *(byte *)&this->unlabelled36 & 0xe1;
		case 0x23a:this->unlabelled32 = this->unlabelled32 & 0xfbfdffff;
		break;
		case 0x23d:*(byte *)&this->unlabelled36 = *(byte *)&this->unlabelled36 & 0xf1;
		case 0x217:this->unlabelled32 = this->unlabelled32 & 0xfbefffff;
		break;
		case 0x23e:*(byte *)&this->unlabelled64 = *(byte *)&this->unlabelled64 | 0x56;
		break;
		case 0x23f:pbVar1 = (byte *)((int)&this->unlabelled60 + 2);
		*pbVar1 = *pbVar1 | 4;
		break;
		case 0x240:pbVar1 = (byte *)((int)&this->unlabelled60 + 2);
		*pbVar1 = *pbVar1 | 2;
		break;
		case 0x241:pbVar1 = (byte *)((int)&this->unlabelled60 + 2);
		*pbVar1 = *pbVar1 | 0x10;
		break;
		case 0x242:pbVar1 = (byte *)((int)&this->unlabelled60 + 2);
		*pbVar1 = *pbVar1 | 0x40;
		break;
		case 0x24d:*(byte *)&this->unlabelled68 = *(byte *)&this->unlabelled68 | 0x56;
		break;
		case 0x24e:pbVar1 = (byte *)((int)&this->unlabelled64 + 2);
		*pbVar1 = *pbVar1 | 4;
		break;
		case 0x24f:pbVar1 = (byte *)((int)&this->unlabelled64 + 2);
		*pbVar1 = *pbVar1 | 2;
		break;
		case 0x250:pbVar1 = (byte *)((int)&this->unlabelled64 + 2);
		*pbVar1 = *pbVar1 | 0x10;
		break;
		case 0x251:pbVar1 = (byte *)((int)&this->unlabelled64 + 2);
		*pbVar1 = *pbVar1 | 0x40;
		}
		}
		IteratorE2::Iterate(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		}
		fVar7 = (float)this->unlabelled16;
		if (fVar7 < 0.0) {
		fVar7 = 0.0 - fVar7;
		}
		if (fVar7 <= EPSILON) {
		fVar7 = (float)this->unlabelled20;
		if (fVar7 < 0.0) {
		fVar7 = 0.0 - fVar7;
		}
		if (fVar7 <= EPSILON) {
		fVar7 = (float)this->unlabelled24;
		fVar6 = 0.0 - fVar7;
		if (0.0 <= fVar7) {
		fVar6 = fVar7;
		}
		if (fVar6 <= EPSILON) goto LAB_00043a27;
		}
		}
		this->unlabelled32 = this->unlabelled32 | 0x2000000;
		LAB_00043a27:if ((this->unlabelled32 & 0xc0000U) == 0) {
		this->unlabelled32 = this->unlabelled32 & 0xfffdffff;
		}
		return;
		}
		
	*/
	return;
}

