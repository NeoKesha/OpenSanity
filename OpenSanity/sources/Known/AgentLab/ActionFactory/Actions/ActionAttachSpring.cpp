#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAttachSpring.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionAttachSpring::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionAttachSpring::Dispose(ActionAttachSpring *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionAttachSpring::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionAttachSpring::ExecuteFromCallContext(ActionAttachSpring *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		float fVar1;
		float fVar2;
		byte bVar3;
		InstanceContext *pIVar4;
		InstanceContext *pIVar5;
		InstanceTransform *pIVar6;
		GameResourceManager *this_00;
		InstanceNodeObjectLink *this_01;
		AutoClass16 *pAVar7;
		int **ppiVar8;
		float fVar9;
		int *local_54;
		InstanceContext *local_50;
		int local_3c;
		undefined4 local_38;
		undefined4 local_34;
		float local_30;
		float local_2c;
		float local_28;
		float local_24;
		Vector4 local_20;
		pIVar4 = (ctx->parent).ctx;
		pIVar5 = (pIVar4->parent).ctx;
		this_01 = InstanceNodeObjectLink::Build((int)pIVar5);
		local_50 = (InstanceContext *)0x0;
		if ((this->unlabelled48 & 0x200000U) == 0) {
		FUN_00176960(&local_20.x,this->unlabelled48 & 0xf,(int)ctx,(float *)&this->unlabelled32,0xff,0xff);
		}
		else {
		fVar9 = (pIVar4->parent).field14_0x20.matrix2.m43;
		if (((uint)fVar9 & 1) == 0) {
		return;
		}
		local_50 = (pIVar4->parent).field14_0x20.field4_0x10;
		if (local_50 == (InstanceContext *)0x0) {
		return;
		}
		if ((*(byte *)&(local_50->parent).flags & 1) != 0) {
		(pIVar4->parent).field14_0x20.field4_0x10 = (InstanceContext *)0x0;
		(pIVar4->parent).field14_0x20.matrix2.m43 = (float)((uint)fVar9 & 0xfffffffc);
		return;
		}
		if (local_50 == pIVar5) {
		return;
		}
		pIVar6 = (local_50->parent).transform;
		InstanceTransform::FillMatrix(pIVar6);
		Matrix4::FUN_000d4000(&pIVar6->matrix,(Vector4 *)&this->unlabelled32,&local_20);
		}
		if ((this->unlabelled48 & 0x100000U) == 0) {
		local_54 = (int *)0x0;
		}
		else {
		local_54 = &this->unlabelled16;
		}
		bVar3 = *(byte *)((int)&this->unlabelled52 + 1);
		if (bVar3 == 0xff) {
		pIVar6 = (pIVar5->parent).transform;
		if ((*(byte *)&pIVar6->field3_0x60 & 4) != 0) {
		fVar9 = (pIVar6->matrix).m44;
		fVar1 = (pIVar6->matrix).m43;
		fVar2 = (pIVar6->matrix).m42;
		(pIVar6->position).x = (pIVar6->matrix).m41;
		(pIVar6->position).y = fVar2;
		(pIVar6->position).z = fVar1;
		(pIVar6->position).w = fVar9;
		pIVar6->field3_0x60 = (float)((uint)pIVar6->field3_0x60 & 0xfffffffa);
		}
		local_30 = (pIVar6->position).x;
		local_2c = (pIVar6->position).y;
		local_28 = (pIVar6->position).z;
		local_24 = (pIVar6->position).w;
		if ((this->unlabelled48 & 0x100000U) != 0) {
		pIVar6 = (pIVar5->parent).transform;
		InstanceTransform::FillMatrix(pIVar6);
		local_30 = (pIVar6->matrix).m21 * (float)this->unlabelled20 +(pIVar6->matrix).m31 * (float)this->unlabelled24 +(pIVar6->matrix).m11 * (float)this->unlabelled16 + local_30;
		local_2c = local_2c +(pIVar6->matrix).m22 * (float)this->unlabelled20 +(pIVar6->matrix).m32 * (float)this->unlabelled24 +(pIVar6->matrix).m12 * (float)this->unlabelled16;
		local_28 = local_28 +(pIVar6->matrix).m23 * (float)this->unlabelled20 +(pIVar6->matrix).m33 * (float)this->unlabelled24 +(pIVar6->matrix).m13 * (float)this->unlabelled16;
		}
		}
		else {
		FUN_001725b0((int)pIVar5,bVar3,&local_30,(float *)local_54);
		}
		this_00 = ResourceManager;
		if ((this->unlabelled48 & 0x400000U) == 0) {
		fVar9 = SQRT((local_28 - local_20.z) * (local_28 - local_20.z) +(local_2c - local_20.y) * (local_2c - local_20.y) +(local_30 - local_20.x) * (local_30 - local_20.x));
		}
		else {
		fVar9 = (float)this->unlabelled64;
		}
		if (local_50 != (InstanceContext *)0x0) {
		local_20.x = (float)this->unlabelled32;
		local_20.y = (float)this->unlabelled36;
		local_20.z = (float)this->unlabelled40;
		local_20.w = (float)this->unlabelled44;
		}
		if ((this->unlabelled48 & 0xffff0U) == 0xffff0) {
		FUN_000f9d50((int)this_01,pIVar5,&local_20.x,(float)this->unlabelled56,this->unlabelled60,fVar9,*(byte *)((int)&this->unlabelled52 + 1),(float *)local_54,(int **)0x0,(undefined4 *)local_50,*(byte *)&this->unlabelled52);
		}
		else {
		pAVar7 = UnkFamily16A::FUN_001b1e00(PTR_DefaultRM,*(short *)((int)(pIVar4->parent).field14_0x20.matrix2.m42 + 0x24));
		GameResourceManager::FUN_001a79d0(this_00);
		GameResourceManager::FUN_001a79c0(this_00);
		FUN_001a7970((int)this_00);
		FUN_001a7a00((int)this_00);
		(this_00->parent).field1_0x4 = 0;
		local_3c = 0;
		local_38 = 0;
		local_34 = 0;
		ppiVar8 = (int **)FUN_001a9c40(this_00,(ChunkMeta *)pAVar7,(uint)this->unlabelled48 >> 4 & 0xffff,&local_30,&local_3c);
		FUN_000f9d50((int)this_01,pIVar5,&local_20.x,(float)this->unlabelled56,this->unlabelled60,fVar9,*(byte *)((int)&this->unlabelled52 + 1),(float *)local_54,ppiVar8,(undefined4 *)local_50,*(byte *)&this->unlabelled52);
		if ((this->unlabelled48 & 0x800000U) != 0) {
		ppiVar8[5] = (int *)((uint)ppiVar8[5] & 0xffffffef);
		return;
		}
		}
		return;
		}
		
	*/
	return;
}

void ActionAttachSpring::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAttachSpring * __fastcall ActionAttachSpring::Construct(ActionAttachSpring *this){
		this->unlabelled48 = this->unlabelled48 & 0xff0ffff2U | 0xffff2;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_AttachSpring;
		*(undefined *)&this->unlabelled52 = 0xff;
		*(undefined *)((int)&this->unlabelled52 + 1) = 0xff;
		return this;
		}
		
	*/
	return;
}

int ActionAttachSpring::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionAttachSpring::GetSize(void){
		return 0x50;
		}
		
	*/
	return 0;
}

void ActionAttachSpring::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionAttachSpring::UnkMethod(ActionAttachSpring *this,int *param_1){
		ushort uVar1;
		float fVar2;
		char cVar3;
		ushort *this_00;
		uint uVar4;
		IteratorE2 local_10;
		this->unlabelled16 = (int)Vector4_0039ef70.x;
		this->unlabelled20 = (int)Vector4_0039ef70.y;
		this->unlabelled24 = (int)Vector4_0039ef70.z;
		fVar2 = FLOAT_0038639c;
		this->unlabelled28 = (int)FLOAT_0038639c;
		this->unlabelled32 = (int)Vector4_0039ef70.x;
		this->unlabelled36 = (int)Vector4_0039ef70.y;
		this->unlabelled40 = (int)Vector4_0039ef70.z;
		this->unlabelled44 = (int)fVar2;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar3 != '\0') {
		return;
		}
		this_00 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar4 = FUN_00180820(this_00,this->unlabelled48 & 0xf);
		this->unlabelled48 = this->unlabelled48 ^ (this->unlabelled48 ^ uVar4) & 0xf;
		FUN_0017f260(this_00,(uint *)&this->unlabelled32);
		uVar1 = *this_00;
		if (0x84 < uVar1) {
		if (uVar1 < 0xef) {
		if (uVar1 == 0xee) {
		*(undefined *)&this->unlabelled52 = *(undefined *)(this_00 + 2);
		LAB_00165c2a:uVar4 = this->unlabelled48 | 0x200000;
		}
		else if (uVar1 == 0x89) {
		uVar4 = this->unlabelled48 ^ (*(int *)(this_00 + 2) << 4 ^ this->unlabelled48) & 0xffff0U;
		}
		else {
		if (uVar1 != 0xed) goto switchD_00165ba2_caseD_13;
		this->unlabelled64 = *(int *)(this_00 + 2);
		uVar4 = this->unlabelled48 | 0x400000;
		}
		goto LAB_00165c32;
		}
		if (uVar1 == 0xffff) {
		if (*(int *)(this_00 + 2) == 200) goto LAB_00165c2a;
		if (*(int *)(this_00 + 2) == 0xc9) {
		uVar4 = this->unlabelled48 | 0x800000;
		goto LAB_00165c32;
		}
		}
		goto switchD_00165ba2_caseD_13;
		}
		switch(uVar1) {
		case 0x12:*(undefined *)((int)&this->unlabelled52 + 1) = *(undefined *)(this_00 + 2);
		break;
		case 0x13:case 0x14:case 0x15:case 0x16:case 0x17:case 0x18:case 0x19:case 0x1a:case 0x1b:case 0x1c:case 0x1d:case 0x1e:case 0x1f:case 0x20:case 0x21:case 0x22:case 0x23:case 0x24:case 0x25:case 0x26:case 0x27:case 0x28:case 0x29:case 0x2a:case 0x2b:case 0x2c:case 0x2d:case 0x2e:case 0x2f:case 0x30:case 0x31:case 0x32:case 0x33:case 0x34:case 0x35:case 0x36:case 0x37:case 0x38:case 0x39:case 0x3a:case 0x3b:case 0x3c:case 0x3d:case 0x40:case 0x41:case 0x42:case 0x43:case 0x44:case 0x45:case 0x46:case 0x47:case 0x48:case 0x49:case 0x4a:case 0x4b:case 0x4c:case 0x4d:case 0x4e:case 0x4f:case 0x50:case 0x51:case 0x52:case 0x53:case 0x54:case 0x55:case 0x56:case 0x57:case 0x58:case 0x59:case 0x5a:case 0x5b:case 0x5c:case 0x5d:case 0x5e:case 0x5f:case 0x60:case 0x61:case 0x62:case 99:case 100:case 0x65:case 0x66:case 0x67:case 0x68:case 0x69:case 0x6a:case 0x6b:case 0x6c:case 0x6d:case 0x6e:case 0x6f:case 0x70:case 0x71:case 0x72:case 0x73:case 0x74:case 0x75:case 0x76:case 0x77:case 0x78:case 0x79:case 0x7a:case 0x7b:case 0x7c:case 0x7d:case 0x7e:case 0x7f:case 0x80:case 0x81:break;
		case 0x3e:this->unlabelled56 = *(int *)(this_00 + 2);
		break;
		case 0x3f:this->unlabelled60 = *(int *)(this_00 + 2);
		break;
		case 0x82:this->unlabelled16 = *(int *)(this_00 + 2);
		uVar4 = this->unlabelled48 | 0x100000;
		goto LAB_00165c32;
		case 0x83:this->unlabelled20 = *(int *)(this_00 + 2);
		uVar4 = this->unlabelled48 | 0x100000;
		goto LAB_00165c32;
		default:this->unlabelled24 = *(int *)(this_00 + 2);
		uVar4 = this->unlabelled48 | 0x100000;
		LAB_00165c32:this->unlabelled48 = uVar4;
		}
		switchD_00165ba2_caseD_13:IteratorE2::Iterate(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

