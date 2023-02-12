#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSetFocusPosition.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSetFocusPosition::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSetFocusPosition::Dispose(ActionSetFocusPosition *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSetFocusPosition::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetFocusPosition::ExecuteFromCallContext(ActionSetFocusPosition *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		char cVar1;
		InstanceContext *pIVar2;
		InstanceNodeAbstract *pIVar3;
		Vector4 *vec;
		InstanceTransform *transform;
		InstanceTransform *pIVar4;
		InstanceContext *pIVar5;
		int *piVar6;
		InstanceContext *pIVar7;
		uint uVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		InstanceContext *local_88;
		float local_84;
		InstanceContext *local_80;
		float local_7c;
		InstanceNodeAbstract_VTable *local_78;
		InstanceContext *local_74;
		Vector4 local_70;
		Vector4 local_60;
		Matrix4 local_50;
		pIVar2 = (ctx->parent).ctx;
		pIVar7 = (pIVar2->parent).ctx;
		cVar1 = *(char *)((int)&this->unlabelled32 + 1);
		local_80 = (InstanceContext *)0x0;
		local_7c = 0.0;
		local_78 = (InstanceNodeAbstract_VTable *)0x0;
		local_74 = (InstanceContext *)FLOAT_0038639c;
		local_88 = pIVar7;
		if (cVar1 == -6) {
		FUN_00188470((int)(pIVar2->nodes).array[0xf],(float *)&local_80,(int)pIVar2,(float)this->unlabelled48,(float)this->unlabelled72,(float)this->unlabelled52,'\x01',(float)this->unlabelled64,(float)this->unlabelled68);
		if ((this->unlabelled32 & 0x200000U) == 0) goto LAB_00199eb7;
		local_80 = (InstanceContext *)((float)local_80 + (float)this->unlabelled16);
		}
		else {
		if (cVar1 != -0x11) {
		if ((float)this->unlabelled56 == 0.0) {
		if ((float)this->unlabelled60 == 0.0) {
		if (*(char *)&this->unlabelled76 == -1) {
		if ((this->unlabelled32 & 0x200000U) == 0) {
		piVar6 = (int *)0x0;
		}
		else {
		piVar6 = &this->unlabelled16;
		}
		FUN_00176960((float *)&local_80,(uint)this->unlabelled32 >> 0x10 & 0xf,(int)ctx,(float *)piVar6,*(byte *)((int)&this->unlabelled32 + 1),(byte)this->unlabelled32);
		}
		else {
		local_88 = (InstanceContext *)0x0;
		if ((*(byte *)&this->unlabelled36 & 1) == 0) {
		pIVar5 = (pIVar2->parent).ctx;
		}
		else {
		InstanceContext::thunk_FUN_00054ce0(pIVar2,(int *)&local_88);
		pIVar5 = local_88;
		}
		FUN_001725b0((int)pIVar5,*(byte *)&this->unlabelled76,(float *)&local_80,(float *)0x0);
		}
		}
		else {
		if (PTR_00496350 == (InstanceContextRefCounter *)0x0) {
		pIVar7 = (InstanceContext *)0x0;
		}
		else {
		pIVar7 = PTR_00496350->ctx;
		}
		InstanceNodeCharacter::GetPosition((InstanceNodeCharacter *)(pIVar2->parent).ctx,&local_60);
		InstanceNodeCharacter::GetPosition((InstanceNodeCharacter *)pIVar7,&local_70);
		local_70.x = local_60.x - local_70.x;
		local_70.y = local_60.y - local_70.y;
		local_70.z = local_60.z - local_70.z;
		local_70.w = FLOAT_0038639c;
		thunk_FUN_000543a0(&local_70.x);
		fVar10 = (float)this->unlabelled60;
		local_7c = local_70.y * fVar10 + local_60.y;
		local_78 = (InstanceNodeAbstract_VTable *)(local_70.z * fVar10 + local_60.z);
		local_80 = (InstanceContext *)(local_60.x + fVar10 * local_70.x);
		local_74 = (InstanceContext *)FLOAT_0038639c;
		pIVar7 = local_88;
		}
		}
		else {
		pIVar3 = (pIVar2->nodes).array[10];
		if (pIVar3 != (InstanceNodeAbstract *)0x0) {
		local_80 = (InstanceContext *)pIVar3[4].field5_0x10;
		local_7c = (float)pIVar3[4].field6_0x14;
		local_78 = pIVar3[5].vtable;
		local_74 = pIVar3[5].ctx;
		InstanceNodeCharacter::GetPosition((InstanceNodeCharacter *)(pIVar2->parent).ctx,&local_60);
		fVar10 = (float)this->unlabelled56;
		local_80 = (InstanceContext *)(local_60.x + fVar10 * (float)local_80);
		local_7c = local_60.y + local_7c * fVar10;
		local_78 = (InstanceNodeAbstract_VTable *)(local_60.z + (float)local_78 * fVar10);
		local_74 = (InstanceContext *)FLOAT_0038639c;
		}
		}
		if ((this->unlabelled32 & 0x400000U) != 0) {
		FUN_0016d590((float *)&local_80,(float)this->unlabelled40,(float)this->unlabelled44,1.0,1.0);
		}
		goto LAB_00199eb7;
		}
		FUN_00188470((int)(pIVar2->nodes).array[0xf],(float *)&local_80,(int)pIVar2,(float)this->unlabelled48,(float)this->unlabelled72,(float)this->unlabelled52,'\0',(float)this->unlabelled64,(float)this->unlabelled68);
		if ((this->unlabelled32 & 0x200000U) == 0) goto LAB_00199eb7;
		local_80 = (InstanceContext *)((float)this->unlabelled16 + (float)local_80);
		}
		local_7c = (float)this->unlabelled20 + local_7c;
		local_78 = (InstanceNodeAbstract_VTable *)((float)this->unlabelled24 + (float)local_78);
		LAB_00199eb7:uVar8 = this->unlabelled32;
		if ((((uVar8 >> 1 | uVar8) >> 1 | uVar8) & 0x4000000) != 0) {
		if ((uVar8 & 0x20000000) == 0) {
		transform = (pIVar7->parent).transform;
		InstanceTransform::FillMatrix(transform);
		local_50.m11 = (transform->matrix).m11;
		local_50.m12 = (transform->matrix).m12;
		local_50.m13 = (transform->matrix).m13;
		local_50.m14 = (transform->matrix).m14;
		pIVar4 = (pIVar7->parent).transform;
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
		if ((*(byte *)&pIVar4->field3_0x60 & 4) != 0) {
		fVar10 = (pIVar4->matrix).m44;
		fVar11 = (pIVar4->matrix).m43;
		fVar12 = (pIVar4->matrix).m42;
		(pIVar4->position).x = (pIVar4->matrix).m41;
		(pIVar4->position).y = fVar12;
		(pIVar4->position).z = fVar11;
		(pIVar4->position).w = fVar10;
		pIVar4->field3_0x60 = (float)((uint)pIVar4->field3_0x60 & 0xfffffffa);
		}
		local_70.x = (pIVar4->position).x;
		local_74 = (InstanceContext *)(pIVar4->position).w;
		local_70.y = (pIVar4->position).y;
		local_70.z = (pIVar4->position).z;
		}
		else {
		vec = (Vector4 *)(pIVar2->parent).field14_0x20.matrix2.m32;
		Matrix4::FUN_000d9f80(&local_50,vec);
		local_50.m41 = vec[1].x;
		local_50.m42 = vec[1].y;
		local_50.m43 = vec[1].z;
		local_50.m44 = vec[1].w;
		local_70.x = vec[1].x;
		local_70.y = vec[1].y;
		local_70.z = vec[1].z;
		local_74 = (InstanceContext *)vec[1].w;
		}
		uVar8 = this->unlabelled32;
		fVar10 = (float)local_80 - local_70.x;
		fVar11 = local_7c - local_70.y;
		fVar12 = (float)local_78 - local_70.z;
		local_80 = (InstanceContext *)local_70.x;
		local_7c = local_70.y;
		local_78 = (InstanceNodeAbstract_VTable *)local_70.z;
		if ((uVar8 & 0x4000000) != 0) {
		fVar9 = local_50.m11 * fVar10 + local_50.m13 * fVar12 + local_50.m12 * fVar11;
		local_80 = (InstanceContext *)(local_50.m11 * fVar9 + local_70.x);
		local_7c = local_50.m12 * fVar9 + local_70.y;
		local_78 = (InstanceNodeAbstract_VTable *)(local_50.m13 * fVar9 + local_70.z);
		}
		if ((uVar8 & 0x8000000) != 0) {
		fVar9 = local_50.m23 * fVar12 + local_50.m22 * fVar11 + local_50.m21 * fVar10;
		local_60.x = local_50.m21 * fVar9;
		local_60.y = local_50.m22 * fVar9;
		local_80 = (InstanceContext *)(local_60.x + (float)local_80);
		local_7c = local_60.y + local_7c;
		local_78 = (InstanceNodeAbstract_VTable *)(local_50.m23 * fVar9 + (float)local_78);
		}
		if ((uVar8 & 0x10000000) != 0) {
		fVar10 = local_50.m33 * fVar12 + local_50.m32 * fVar11 + local_50.m31 * fVar10;
		local_80 = (InstanceContext *)(local_50.m31 * fVar10 + (float)local_80);
		local_7c = local_50.m32 * fVar10 + local_7c;
		local_78 = (InstanceNodeAbstract_VTable *)(local_50.m33 * fVar10 + (float)local_78);
		}
		if (((uVar8 & 0x20000000) != 0) && ((int)uVar8 < 0)) {
		InstanceNodeCharacter::GetPosition((InstanceNodeCharacter *)pIVar7,&local_60);
		local_80 = (InstanceContext *)(((float)local_80 - local_70.x) + local_60.x);
		local_7c = local_60.y + (local_7c - local_70.y);
		local_78 = (InstanceNodeAbstract_VTable *)(local_60.z + ((float)local_78 - local_70.z));
		local_74 = (InstanceContext *)FLOAT_0038639c;
		}
		}
		if ((*(byte *)&this->unlabelled36 & 2) != 0) {
		InstanceContext::thunk_FUN_0005a4c0(pIVar7,&local_60,&local_70);
		local_88 = (InstanceContext *)(((float)local_78 - local_60.z) * ((float)local_78 - local_60.z) +(local_7c - local_60.y) * (local_7c - local_60.y) +((float)local_80 - local_60.x) * ((float)local_80 - local_60.x));
		local_84 = SQRT((float)local_88);
		local_7c = local_70.y * local_84 + local_60.y;
		local_80 = (InstanceContext *)(local_70.x * local_84 + local_60.x);
		local_78 = (InstanceNodeAbstract_VTable *)(local_70.z * local_84 + local_60.z);
		local_74 = (InstanceContext *)FLOAT_0038639c;
		}
		uVar8 = (uint)this->unlabelled32 >> 0x17 & 7;
		if (uVar8 == 0) {
		pIVar2 = (ctx->parent).ctx;
		(pIVar2->parent).field14_0x20.field4_0x10 = local_80;
		(pIVar2->parent).field14_0x20.field5_0x14 = local_7c;
		(pIVar2->parent).field14_0x20.field6_0x18 = local_78;
		(pIVar2->parent).field14_0x20.matrix1 = (Matrix4 *)local_74;
		(pIVar2->parent).field14_0x20.matrix2.m43 =(float)((uint)(pIVar2->parent).field14_0x20.matrix2.m43 & 0xfffffffe | 2);
		}
		else if (uVar8 == 3) {
		InstanceContext::FUN_0016dda0((ctx->parent).ctx,&local_80);
		return;
		}
		return;
		}
		
	*/
	return;
}

void ActionSetFocusPosition::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSetFocusPosition * __thiscall ActionSetFocusPosition::Construct(ActionSetFocusPosition *this,uint param_1){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SetFocusPosition;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		this->unlabelled24 = 0;
		this->unlabelled28 = (int)fVar1;
		this->unlabelled32 = (param_1 & 7) << 0x17 | 0xffff;
		this->unlabelled36 = this->unlabelled36 & 0xfffffffe;
		this->unlabelled44 = (int)fVar1;
		this->unlabelled48 = 0;
		this->unlabelled52 = 0;
		this->unlabelled56 = 0;
		this->unlabelled60 = 0;
		this->unlabelled64 = 0;
		this->unlabelled68 = 0;
		this->unlabelled72 = 0;
		*(undefined *)&this->unlabelled76 = 0xff;
		this->unlabelled80 = 0;
		return this;
		}
		
	*/
	return;
}

void ActionSetFocusPosition::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSetFocusPosition::UnkMethod(ActionSetFocusPosition *this,int *param_1){
		char cVar1;
		ushort uVar2;
		bool bVar3;
		ushort *this_00;
		uint uVar4;
		int iVar5;
		float fVar6;
		float fVar7;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		bVar3 = IteratorE2::IsEnd(&local_10);
		if (bVar3 == false) {
		do {
		this_00 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar4 = FUN_0017f240(this_00,(uint)*(byte *)((int)&this->unlabelled32 + 1));
		*(char *)((int)&this->unlabelled32 + 1) = (char)uVar4;
		iVar5 = FUN_00180820(this_00,*(byte *)((int)&this->unlabelled32 + 2) & 0xf);
		this->unlabelled32 = this->unlabelled32 ^ (iVar5 << 0x10 ^ this->unlabelled32) & 0xf0000U;
		FUN_0017f260(this_00,(uint *)&this->unlabelled16);
		uVar2 = *this_00;
		if (uVar2 < 0xd8) {
		switch(uVar2) {
		case 6:*(undefined *)&this->unlabelled32 = *(undefined *)(this_00 + 2);
		break;
		case 7:case 8:case 9:case 10:case 0xb:case 0xc:case 0xd:case 0xe:case 0xf:case 0x10:case 0x11:case 0x12:case 0x13:case 0x14:case 0x15:case 0x16:case 0x17:case 0x18:case 0x19:case 0x1a:case 0x1b:case 0x1c:case 0x1d:case 0x1e:case 0x1f:case 0x20:case 0x21:case 0x22:case 0x23:case 0x24:case 0x25:case 0x26:case 0x27:case 0x28:case 0x29:case 0x2a:case 0x2b:case 0x2c:case 0x2d:case 0x2e:case 0x2f:case 0x30:case 0x31:case 0x32:case 0x33:case 0x34:case 0x35:case 0x36:case 0x37:case 0x38:case 0x39:case 0x3a:case 0x3b:case 0x3d:case 0x3e:case 0x3f:case 0x40:case 0x41:case 0x42:case 0x43:case 0x44:case 0x45:case 0x46:case 0x47:case 0x48:case 0x49:case 0x4a:case 0x4b:case 0x4c:case 0x4d:case 0x4e:case 0x4f:case 0x50:case 0x51:case 0x52:case 0x53:case 0x54:case 0x55:case 0x56:case 0x57:case 0x59:case 0x5a:case 0x5b:case 0x5c:case 0x5d:case 0x5e:case 0x5f:case 0x60:case 0x61:case 0x62:case 99:case 100:case 0x65:case 0x66:case 0x67:case 0x68:case 0x69:case 0x6a:case 0x6b:case 0x6c:case 0x6d:case 0x6e:case 0x6f:case 0x70:case 0x71:case 0x72:case 0x73:case 0x74:case 0x75:case 0x76:case 0x77:case 0x78:case 0x79:case 0x7a:case 0x7b:case 0x7c:case 0x7d:case 0x7e:case 0x7f:case 0x80:case 0x81:case 0x82:case 0x83:case 0x84:case 0x85:case 0x86:case 0x87:case 0x88:case 0x89:case 0x8a:case 0x8b:case 0x8c:case 0x8d:case 0x8e:case 0x8f:case 0x90:case 0x91:case 0x92:case 0x93:case 0x94:case 0x95:case 0x96:case 0x97:case 0x98:case 0x99:case 0x9a:case 0x9b:case 0x9d:case 0x9e:case 0x9f:case 0xa0:case 0xa1:case 0xa2:case 0xa3:case 0xa4:case 0xa5:case 0xa6:case 0xa7:case 0xa8:case 0xa9:break;
		case 0x3c:this->unlabelled40 = *(int *)(this_00 + 2);
		this->unlabelled32 = this->unlabelled32 | 0x400000;
		break;
		case 0x58:this->unlabelled32 = this->unlabelled32 | 0x100000;
		cVar1 = *(char *)((int)&this->unlabelled32 + 1);
		if (cVar1 != -1) {
		*(char *)((int)&this->unlabelled32 + 1) = cVar1 + '\x01';
		}
		break;
		case 0x9c:this->unlabelled44 = *(int *)(this_00 + 2);
		break;
		case 0xaa:this->unlabelled48 = *(int *)(this_00 + 2);
		break;
		case 0xab:this->unlabelled72 = *(int *)(this_00 + 2);
		break;
		case 0xac:this->unlabelled52 = *(int *)(this_00 + 2);
		break;
		default:this->unlabelled56 = *(int *)(this_00 + 2);
		}
		}
		else if (uVar2 < 0x10f) {
		if (uVar2 == 0x10e) {
		this->unlabelled60 = *(int *)(this_00 + 2);
		}
		else if (uVar2 == 0xff) {
		this->unlabelled64 = *(int *)(this_00 + 2);
		}
		else if (uVar2 == 0x100) {
		this->unlabelled68 = *(int *)(this_00 + 2);
		}
		else if (uVar2 == 0x101) {
		this->unlabelled72 = *(int *)(this_00 + 2);
		}
		}
		else if (uVar2 == 299) {
		*(undefined *)&this->unlabelled76 = *(undefined *)(this_00 + 2);
		}
		else if (uVar2 == 0x132) {
		this->unlabelled80 = *(int *)(this_00 + 2);
		this->unlabelled36 = this->unlabelled36 | 2;
		}
		else if ((uVar2 == 0xffff) && (*(char *)(this_00 + 1) == '\x04')) {
		switch(*(undefined4 *)(this_00 + 2)) {
		case 0xb8:this->unlabelled32 = this->unlabelled32 | 0x4000000;
		break;
		case 0xb9:this->unlabelled32 = this->unlabelled32 | 0x8000000;
		break;
		case 0xba:this->unlabelled32 = this->unlabelled32 | 0x10000000;
		break;
		case 0xc5:this->unlabelled36 = this->unlabelled36 | 1;
		break;
		case 0xca:this->unlabelled32 = this->unlabelled32 | 0x20000000;
		break;
		case 0xcb:this->unlabelled32 = this->unlabelled32 | 0x40000000;
		break;
		case 0xcd:this->unlabelled32 = this->unlabelled32 | 0x80000000;
		}
		}
		IteratorE2::Iterate(&local_10);
		bVar3 = IteratorE2::IsEnd(&local_10);
		}
		 while (bVar3 == false);
		}
		fVar7 = (float)this->unlabelled16;
		if (fVar7 < 0.0) {
		fVar7 = 0.0 - fVar7;
		}
		if (fVar7 <= DAT_004962d0) {
		fVar7 = (float)this->unlabelled20;
		if (fVar7 < 0.0) {
		fVar7 = 0.0 - fVar7;
		}
		if (fVar7 <= DAT_004962d0) {
		fVar7 = (float)this->unlabelled24;
		fVar6 = 0.0 - fVar7;
		if (0.0 <= fVar7) {
		fVar6 = fVar7;
		}
		if (fVar6 <= DAT_004962d0) {
		return;
		}
		}
		}
		this->unlabelled32 = this->unlabelled32 | 0x200000;
		return;
		}
		
	*/
	return;
}

int ActionSetFocusPosition::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSetFocusPosition::GetSize(void){
		return 0x60;
		}
		
	*/
	return 0;
}

