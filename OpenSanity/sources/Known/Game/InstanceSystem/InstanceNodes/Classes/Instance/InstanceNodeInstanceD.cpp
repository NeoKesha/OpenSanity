#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Instance/InstanceNodeInstanceD.h"

#include "headers/Known/Time/UnkTimePack.h"
void InstanceNodeInstanceD::Init(char param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeInstanceD::Init(InstanceNodeInstanceD *this,char param_1){
		float fVar1;
		undefined4 *puVar2;
		undefined4 uVar3;
		void **ppvVar4;
		undefined **ppuVar5;
		(this->body).field29_0xec = (undefined *)0x0;
		puVar2 = (undefined4 *)VirtualPool::AllocateMemory(0x60);
		if (puVar2 == (undefined4 *)0x0) {
		uVar3 = 0;
		}
		else {
		uVar3 = FUN_00189540(puVar2);
		}
		*(undefined4 *)&(this->body).field_0x124 = uVar3;
		if (param_1 != '\0') {
		ppvVar4 = (void **)VirtualPool::AllocateMemory(0x50);
		if (ppvVar4 != (void **)0x0) {
		ppuVar5 = (undefined **)FUN_001895e0(ppvVar4);
		goto LAB_0017318a;
		}
		}
		ppuVar5 = (undefined **)0x0;
		LAB_0017318a:fVar1 = FLOAT_003865d4;
		(this->body).field66_0x120 = ppuVar5;
		(this->body).parent.parent.field50_0x84 = 0;
		(this->body).field30_0xf0 = fVar1;
		(this->body).field71_0x128 = (undefined *)0x0;
		*(undefined4 *)&(this->body).field_0xf4 = 0;
		*(undefined4 *)&(this->body).field_0xf8 = 0;
		*(undefined4 *)&(this->body).field_0xfc = 0;
		*(undefined4 *)&(this->body).field_0x110 = 0;
		(this->body).field43_0x100 = (undefined *)0x0;
		(this->body).field44_0x104 = (InstanceNodeInstanceD *)0x0;
		*(undefined4 *)&(this->body).field_0x11c = 0;
		*(undefined4 *)&(this->body).field_0x108 = 0;
		(this->body).field49_0x10c = (undefined *)0x0;
		*(undefined4 *)&(this->body).field_0x114 = 0;
		*(undefined4 *)&(this->body).field_0x118 = 0;
		(this->body).field_0x150 = 0;
		(this->body).field72_0x12c = -1;
		(this->body).field73_0x130 = -1;
		(this->body).parent.parent.field63_0xbc = (uint)Vector4_0039ef70.x;
		*(float *)&(this->body).parent.parent.field_0xc0 = Vector4_0039ef70.y;
		*(float *)&(this->body).parent.parent.field_0xc4 = Vector4_0039ef70.z;
		(this->body).parent.parent.field50_0x84 = (this->body).parent.parent.field50_0x84 & 0xffffdfff;
		(this->body).field106_0x154 = (this->body).field106_0x154 & 0xfffffffc | 0x3fffc;
		*(int *)&(this->body).field_0x14c = (int)(TicksPerTime * 0.0);
		fVar1 = FLOAT_003869d8;
		*(int *)&(this->body).field_0x170 = (int)(TicksPerTime * 0.0);
		(this->body).field_0x168 = 0xff;
		(this->body).field_0x169 = 0xff;
		(this->body).field124_0x16c = fVar1;
		*(undefined4 *)&(this->body).field_0x174 = 0;
		(this->body).field_0x160 = 0xff;
		(this->body).field_0x158 = 0xff;
		(this->body).field119_0x164 = -1;
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceD::FUN_00175120() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeInstanceD::FUN_00175120(InstanceNodeInstanceD *this){
		undefined *puVar1;
		void *this_00;
		puVar1 = (this->body).field71_0x128;
		if (puVar1 != (undefined *)0x0) {
		this_00 = *(void **)(puVar1 + 0xd8);
		if (this_00 != (void *)0x0) {
		FUN_001611e0((int)this_00,(int)puVar1);
		FUN_001612f0(this_00,(int)(this->body).field71_0x128);
		}
		puVar1 = (this->body).field71_0x128;
		if (puVar1 != (undefined *)0x0) {
		FUN_00168810((int)puVar1);
		VirtualPool::FreeMemory(puVar1);
		}
		(this->body).field71_0x128 = (undefined *)0x0;
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceD::FUN_001751e0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __fastcall InstanceNodeInstanceD::FUN_001751e0(InstanceNodeInstanceD *this){
		InstanceNodeObjectLink *node;
		InstanceContext *ctx;
		node = (InstanceNodeObjectLink *)InstanceDataList::GetNode(&((this->body).parent.parent.parent.ctx)->nodes,ObjectLink);
		if (node != (InstanceNodeObjectLink *)0x0) {
		FUN_000fc240(node,'\0','\0','\0');
		}
		ctx = (this->body).parent.parent.parent.ctx;
		(ctx->parent).flags = (ctx->parent).flags & 0xffffffbf;
		ctx = (this->body).parent.parent.parent.ctx;
		(ctx->parent).flags = (ctx->parent).flags & 0xffffff7f;
		((this->body).parent.parent.parent.ctx)->field27_0xe0 = 0;
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceD::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeInstanceD::CleanUp(InstanceNodeInstanceD *this){
		void *ptr;
		undefined **ptr_00;
		int *piVar1;
		undefined4 *puVar2;
		AutoClass52 *ptr_01;
		ptr = *(void **)&(this->body).field_0x124;
		this->vtable = (InstanceNodeInstance_VTable *)&InstanceNode_VT_Instance_D;
		if (ptr != (void *)0x0) {
		::EmptyFunction();
		VirtualPool::FreeMemory(ptr);
		}
		ptr_00 = (this->body).field66_0x120;
		if (ptr_00 != (undefined **)0x0) {
		FUN_00187fa0(ptr_00);
		VirtualPool::FreeMemory(ptr_00);
		}
		VirtualPool::FreeMemory((this->body).field29_0xec);
		if (DAT_00491bc1 == '\0') {
		(*this->vtable->InstanceMethod24)((InstanceNodeInstance *)this);
		}
		piVar1 = *(int **)&(this->body).field_0x110;
		if (piVar1 != (int *)0x0) {
		(**(code **)(*piVar1 + 0x10))();
		puVar2 = *(undefined4 **)&(this->body).field_0x110;
		if (puVar2 != (undefined4 *)0x0) {
		(**(code **)*puVar2)(1);
		}
		*(undefined4 *)&(this->body).field_0x110 = 0;
		}
		this->vtable = (InstanceNodeInstance_VTable *)&InstanceNode_VT_Instance_C;
		FUN_00175240((int)this);
		ptr_01 = (this->body).parent.parent.field42_0x6c;
		(this->body).parent.parent.field61_0x9c.w = 0.0;
		this->vtable = (InstanceNodeInstance_VTable *)&InstanceNode_VT_Instance;
		if (ptr_01 != (AutoClass52 *)0x0) {
		TwinString::Dispose(&ptr_01->chunkName);
		VirtualPool::FreeMemory(ptr_01);
		}
		TwinString::Dispose(&(this->body).parent.parent.field41_0x3c.chunkName);
		InstanceNodeAbstract::UnrollVtable((InstanceNodeAbstract *)this);
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceD::FUN_00179910(InstanceNodeInstanceD* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeInstanceD::FUN_00179910(InstanceNodeInstanceD *param_1){
		InstanceNodeInstanceD *pIVar1;
		void *ptr;
		pIVar1 = (param_1->body).field44_0x104;
		if (pIVar1 != (InstanceNodeInstanceD *)0x0) {
		FUN_00176370((int)pIVar1,(int)param_1);
		pIVar1 = (param_1->body).field44_0x104;
		if (pIVar1 != (InstanceNodeInstanceD *)0x0) {
		ptr = *(void **)&(pIVar1->body).field_0xd4;
		if (ptr != (void *)0x0) {
		VirtualPool::FreeMemory(ptr);
		}
		VirtualPool::FreeMemory(pIVar1);
		}
		(param_1->body).field44_0x104 = (InstanceNodeInstanceD *)0x0;
		return;
		}
		(param_1->body).field44_0x104 = (InstanceNodeInstanceD *)0x0;
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceD::FUN_00179e00(int param_1, int* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeInstanceD::FUN_00179e00(InstanceNodeInstanceD *this,int param_1,int *param_2){
		InstanceNodeAbstract **this_00;
		InstanceNodeInstanceD **ppIVar1;
		Vector4 *pVVar2;
		Vector4 *out;
		GameObject *pGVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		byte bVar7;
		byte *this_01;
		int iVar8;
		uint uVar9;
		InstanceTransform *pIVar10;
		byte bVar11;
		InstanceNodeAbstract *pIVar12;
		undefined4 uVar13;
		uint uVar14;
		NodeRelated2C *transform;
		InstanceContext *pIVar15;
		float fVar16;
		float fVar17;
		float local_94;
		InstanceTransform *local_90;
		float local_8c;
		InstanceContext *local_88;
		float local_84;
		Vector4 local_80;
		Vector4 local_70;
		float local_60;
		float local_5c;
		ushort *local_58;
		float local_54;
		Matrix4 MStack80;
		this_01 = *(byte **)&(this->body).field_0xdc;
		local_88 = (InstanceContext *)param_2[1];
		uVar14 = *(uint *)(this_01 + 0x68) >> 0x1c & 7;
		if (uVar14 != 0) {
		if (uVar14 == 4) {
		if ((*this_01 & 0x1f) != 1) {
		return;
		}
		uVar13 = FUN_00178ae0((int)this,(int)param_2);
		if ((char)uVar13 == '\0') {
		return;
		}
		FUN_00179910((InstanceNodeInstanceD *)param_2);
		return;
		}
		if (param_2[0x4b] == 0) {
		return;
		}
		local_94 = *(float *)(param_2[0x4b] + 0xd4);
		if (local_94 == 0.0) {
		return;
		}
		if ((((~(byte)(*(uint *)(this_01 + 0x5c) >> 0xf) & 1) != 0) &&(uVar9 = *(uint *)((int)local_94 + 0x18), (uVar9 >> 3 & 1) == 0)) &&(((*(byte *)((int)&(this->body).field44_0x104 + 2) & 2) != 0 ||(((uVar9 >> 2 & 1) != 0 || ((uVar9 >> 4 & 1) != 0)))))) {
		if (PTR_00496350 == (InstanceContextRefCounter *)0x0) {
		pIVar15 = (InstanceContext *)0x0;
		}
		else {
		pIVar15 = PTR_00496350->ctx;
		}
		InstanceNodeCharacter::GetPosition((InstanceNodeCharacter *)local_88,&local_80);
		if (pIVar15 == (InstanceContext *)0x0) {
		local_70.x = local_80.x;
		local_70.y = local_80.y;
		local_70.z = local_80.z;
		local_70.w = local_80.w;
		}
		else {
		InstanceNodeCharacter::GetPosition((InstanceNodeCharacter *)pIVar15,&local_70);
		}
		fVar17 = Vector4::Distance(&local_70,&local_80);
		fVar16 = local_94;
		if (((float)(this->body).parent.parent.field54_0x8c < fVar17) &&(FLOAT_00392918 <(float)(*(int *)(param_1 + 4) - *(int *)&(this->body).field_0x108) * TimePerTick1)) {
		fVar17 = Vector4::GetLength((Vector4 *)((int)local_94 + 0x160));
		if ((FLOAT_00393d98 <= fVar17) ||(fVar16 = Vector4::GetLength((Vector4 *)((int)fVar16 + 0x140)), pIVar15 = local_88,FLOAT_00393d98 <= fVar16)) {
		*(undefined2 *)&(this->body).field44_0x104 = 0;
		}
		else {
		ppIVar1 = &(this->body).field44_0x104;
		*(short *)ppIVar1 = *(short *)ppIVar1 + 1;
		if (0x30 < *(ushort *)&(this->body).field44_0x104) {
		if ((*(uint *)(*(int *)&(this->body).field_0xdc + 0x68) >> 0xe & 1) != 0) {
		if (((uint)param_2[0x22] >> 0x12 & 1) == 0) {
		InstanceContext::thunk_FUN_00026e90(local_88,&(this->body).parent.parent.field41_0x3c.vec2);
		InstanceContext::thunk_FUN_00026f70(pIVar15,(Vector4 *)&(this->body).parent.parent.field41_0x3c.field2_0x20);
		}
		else {
		FUN_0017dd30((int)param_2);
		FUN_0017ddc0((int)param_2);
		}
		}
		*(undefined2 *)&(this->body).field44_0x104 = 0;
		(**(code **)(*param_2 + 0xac))();
		param_2[0x22] = param_2[0x22] & 0xfffbffff;
		FUN_001dd220((int)local_94);
		return;
		}
		}
		}
		}
		fVar16 = local_94;
		thunk_FUN_00027650((int)this->vtable[1].InstanceMethod20,(Vector4 *)((int)local_94 + 0x150));
		local_84 = *(float *)(*(int *)&(this->body).field_0xdc + 0x48);
		if (FLOAT_00386394 < local_84) {
		FUN_00176200((int)fVar16,local_84,(int)param_2);
		}
		if (uVar14 == 1) {
		iVar8 = *(int *)&(this->body).field_0xdc;
		local_8c = *(float *)(iVar8 + 0x24);
		local_58 = (this->body).parent.parent.field49_0x80;
		local_5c = (float)(this->body).parent.parent.field50_0x84;
		local_90 = (InstanceTransform *)param_2[0x3c];
		local_88 = *(InstanceContext **)(iVar8 + 0x20);
		local_70.x = (float)(this->body).parent.parent.field48_0x7c;
		local_70.y = (float)(this->body).parent.parent.field49_0x80;
		local_70.z = (float)(this->body).parent.parent.field50_0x84;
		local_70.w = *(float *)&(this->body).parent.parent.field51_0x88;
		local_60 = (float)(this->body).parent.parent.field48_0x7c;
		local_54 = local_60 * FLOAT_003865d4;
		pVVar2 = &(this->body).parent.parent.field61_0x9c;
		local_84 = local_5c * FLOAT_003865d4;
		thunk_FUN_0005a380(local_90,&pVVar2->x);
		out = &(this->body).parent.parent.vec2;
		InstanceTransform::thunk_FUN_00026600(local_90,out);
		InstanceTransform::thunk_FUN_000265d0(local_90,(Vector4 *)&(this->body).parent.parent.field63_0xbc);
		InstanceTransform::thunk_FUN_000266b0(local_90,&local_80);
		local_80.x = (float)(this->body).parent.parent.field63_0xbc * (float)local_58 +out->x * local_5c + local_60 * pVVar2->x + local_80.x;
		local_80.y = *(float *)&(this->body).parent.parent.field_0xc0 * (float)local_58 +(this->body).parent.parent.vec2.y * local_5c +local_80.y + (this->body).parent.parent.field61_0x9c.y * local_60;
		local_80.z = *(float *)&(this->body).parent.parent.field_0xc4 * (float)local_58 +(this->body).parent.parent.vec2.z * local_5c +local_80.z + (this->body).parent.parent.field61_0x9c.z * local_60;
		local_90 = *(InstanceTransform **)(*(int *)&(this->body).field_0xdc + 0x28);
		FUN_001e0a30((int)local_94,&local_80.x,local_8c,(float)local_88,(float)local_90,&local_70.x);
		local_80.x = local_80.x - out->x * local_84;
		local_80.y = local_80.y - (this->body).parent.parent.vec2.y * local_84;
		local_80.z = local_80.z - (this->body).parent.parent.vec2.z * local_84;
		local_70.z = local_70.z - local_84;
		FUN_001e0a30((int)local_94,&local_80.x,local_8c,(float)local_88,(float)local_90,&local_70.x);
		pIVar10 = local_90;
		local_80.x = local_80.x - local_54 * pVVar2->x;
		local_80.y = local_80.y - (this->body).parent.parent.field61_0x9c.y * local_54;
		local_80.z = local_80.z - (this->body).parent.parent.field61_0x9c.z * local_54;
		local_70.x = local_70.x - local_54;
		FUN_001e0a30((int)local_94,&local_80.x,local_8c,(float)local_88,(float)local_90,&local_70.x);
		local_80.x = out->x * local_84 + local_80.x;
		local_80.y = (this->body).parent.parent.vec2.y * local_84 + local_80.y;
		local_80.z = (this->body).parent.parent.vec2.z * local_84 + local_80.z;
		local_70.z = local_70.z + local_84;
		FUN_001e0a30((int)local_94,&local_80.x,local_8c,(float)local_88,(float)pIVar10,&local_70.x);
		fVar16 = local_94;
		}
		else if (uVar14 == 2) {
		if (((uint)param_2[0x22] >> 0xe & 1) != 0) {
		FUN_00178f40((int)this,(int)param_2);
		}
		}
		else if ((uVar14 == 3) && (((uint)param_2[0x22] >> 0xe & 1) != 0)) {
		FUN_00178f40((int)this,(int)param_2);
		}
		iVar8 = *(int *)&(this->body).field_0xdc;
		uVar14 = *(uint *)(iVar8 + 0x5c) >> 4 & 3;
		if (uVar14 == 0) {
		return;
		}
		FUN_00170cf0((int)fVar16,uVar14,*(float *)(iVar8 + 4));
		return;
		}
		if (param_2[3] == 0) {
		local_84 = 0.0;
		}
		else {
		local_84 = (float)(*(int *)(param_1 + 4) - param_2[3]) * TimePerTick1;
		}
		fVar16 = local_84;
		bVar7 = this_01[0x30];
		local_90 = (InstanceTransform *)0x0;
		local_8c = 0.0;
		local_94 = 0.0;
		uVar14 = (*(byte *)((int)&(this->body).field44_0x104 + 2) & 0x70) >> 4;
		if (uVar14 == 0) {
		if ((*(uint *)(this_01 + 0x6c) >> 3 & 1) != 0) {
		local_90 = (InstanceTransform *)FUN_0016f550(this_01,local_84,*(float *)&(this->body).field_0xf8,(int *)&(this->body).field_0xe0);
		}
		iVar8 = *(int *)&(this->body).field_0xdc;
		if ((*(uint *)(iVar8 + 0x6c) >> 4 & 1) != 0) {
		local_8c = FUN_0016f720(iVar8,fVar16,*(float *)&(this->body).field_0xfc,(int *)&(this->body).field_0xe4);
		}
		iVar8 = *(int *)&(this->body).field_0xdc;
		if ((*(uint *)(iVar8 + 0x6c) >> 5 & 1) != 0) {
		local_94 = FUN_0016f8f0(iVar8,fVar16,(float)(this->body).field43_0x100,(int *)&(this->body).field_0xe8);
		}
		}
		else if (uVar14 == 1) {
		uVar14 = InstanceContext::thunk_FUN_00054ce0((InstanceContext *)param_2,(int *)&local_84);
		fVar16 = local_84;
		if ((char)uVar14 != '\0') goto LAB_00179ebc;
		}
		else if (((uVar14 == 2) &&(pIVar12 = InstanceDataList::GetNode(&local_88->nodes,ObjectLink),pIVar12 != (InstanceNodeAbstract *)0x0)) &&(fVar16 = *(float *)&pIVar12[1].field2_0x8, fVar16 != 0.0)) {
		LAB_00179ebc:pIVar12 = InstanceDataList::GetNode((InstanceDataList *)((int)fVar16 + 0xe4),Instance);
		bVar11 = (*pIVar12->vtable[1].GetIndex)();
		if ((bVar11 != 0) && (pIVar12[0xb].vtable != (InstanceNodeAbstract_VTable *)0x0)) {
		FUN_00170d50((int)this,(int)pIVar12[0xb].vtable,(float *)&local_90,&local_8c,&local_94);
		}
		}
		uVar14 = *(uint *)(*(int *)&(this->body).field_0xdc + 0x68);
		if ((uVar14 >> 0xc & 1) != 0) {
		if (bVar7 == 0xff) {
		uVar14 = uVar14 & 7;
		if ((uVar14 == 0) || ((2 < uVar14 && (uVar14 != 7)))) {
		fVar16 = FLOAT_003863a8 / FLOAT_003a3614;
		Vector4::FromRotation((Vector4 *)&(this->body).parent.parent.field_0x1c,(int)(fVar16 * (float)local_90),(int)(fVar16 * local_8c),(int)(fVar16 * local_94));
		}
		else {
		thunk_FUN_000a4140(&(this->body).parent.parent.field_0x2c,(float)local_90,local_8c,local_94);
		}
		}
		else {
		fVar16 = FLOAT_003863a8 / FLOAT_003a3614;
		Vector4::FromRotation((Vector4 *)&(this->body).parent.parent.field_0x1c,(int)(fVar16 * (float)local_90),(int)(fVar16 * local_8c),(int)(fVar16 * local_94));
		}
		goto LAB_0017a37e;
		}
		if (bVar7 != 0xff) {
		switchD_0017a092_caseD_3:(this->body).parent.parent.parent.field4_0xc = (InstanceNodeAbstract *)local_90;
		(this->body).parent.parent.parent.field5_0x10 = (uint)local_8c;
		*(float *)&(this->body).parent.parent.field_0x14 = local_94;
		*(float *)&(this->body).parent.parent.field_0x18 = FLOAT_0038639c;
		goto LAB_0017a37e;
		}
		switch(uVar14 & 7) {
		case 1:(this->body).parent.parent.parent.field4_0xc = (InstanceNodeAbstract *)Vector4_0039ef70.x;
		(this->body).parent.parent.parent.field5_0x10 = (uint)Vector4_0039ef70.y;
		*(float *)&(this->body).parent.parent.field_0x14 = Vector4_0039ef70.z;
		*(float *)&(this->body).parent.parent.field_0x18 = FLOAT_0038639c;
		Matrix4::FUN_000d9f80(&MStack80,(Vector4 *)param_2[0x1d]);
		(this->body).parent.parent.parent.field4_0xc =(InstanceNodeAbstract *)(MStack80.m31 * local_94 + MStack80.m21 * local_8c + MStack80.m11 * (float)local_90 +(float)(this->body).parent.parent.parent.field4_0xc);
		(this->body).parent.parent.parent.field5_0x10 =(uint)(MStack80.m32 * local_94 + MStack80.m22 * local_8c + MStack80.m12 * (float)local_90 +(float)(this->body).parent.parent.parent.field5_0x10);
		*(float *)&(this->body).parent.parent.field_0x14 =MStack80.m33 * local_94 + MStack80.m23 * local_8c + MStack80.m13 * (float)local_90 +*(float *)&(this->body).parent.parent.field_0x14;
		goto LAB_0017a37e;
		case 2:(this->body).parent.parent.parent.field4_0xc = (InstanceNodeAbstract *)Vector4_0039ef70.x;
		(this->body).parent.parent.parent.field5_0x10 = (uint)Vector4_0039ef70.y;
		*(float *)&(this->body).parent.parent.field_0x14 = Vector4_0039ef70.z;
		*(float *)&(this->body).parent.parent.field_0x18 = FLOAT_0038639c;
		transform = (NodeRelated2C *)(local_88->parent).transform;
		break;
		default:goto switchD_0017a092_caseD_3;
		case 4:this_00 = &(this->body).parent.parent.parent.field4_0xc;
		D3DXCOLOR(this_00,&(this->body).parent.parent.field41_0x3c.vec2.x);
		FUN_001726c0((int)local_88,param_2[0x2b],&MStack80);
		*this_00 = (InstanceNodeAbstract *)(MStack80.m31 * local_94 + MStack80.m21 * local_8c + MStack80.m11 * (float)local_90 +(float)*this_00);
		(this->body).parent.parent.parent.field5_0x10 =(uint)(MStack80.m32 * local_94 + MStack80.m22 * local_8c + MStack80.m12 * (float)local_90 +(float)(this->body).parent.parent.parent.field5_0x10);
		*(float *)&(this->body).parent.parent.field_0x14 =MStack80.m33 * local_94 + MStack80.m23 * local_8c + MStack80.m13 * (float)local_90 +*(float *)&(this->body).parent.parent.field_0x14;
		goto LAB_0017a37e;
		case 7:transform = (NodeRelated2C *)param_2[0x3c];
		if (transform == (NodeRelated2C *)0x0) goto switchD_0017a092_caseD_3;
		}
		InstanceTransform::FillMatrix((InstanceTransform *)transform);
		fVar16 = *(float *)&(transform->parent).parent.field_0x28;
		pGVar3 = (transform->parent).parent.gameObject;
		fVar17 = *(float *)&(transform->parent).parent.instanceIndex;
		fVar4 = *(float *)&(transform->parent).parent.field_0x8;
		fVar5 = *(float *)&(transform->parent).parent.field19_0x24;
		fVar6 = *(float *)&(transform->parent).parent.field_0x4;
		(this->body).parent.parent.parent.field4_0xc =(InstanceNodeAbstract *)((float)(transform->parent).parent.related * local_94 +(float)(transform->parent).parent.ctx * local_8c +(float)(transform->parent).parent.vtable * (float)local_90 +(float)(this->body).parent.parent.parent.field4_0xc);
		(this->body).parent.parent.parent.field5_0x10 =(uint)((float)(this->body).parent.parent.parent.field5_0x10 +fVar5 * local_94 + fVar17 * local_8c + fVar6 * (float)local_90);
		*(float *)&(this->body).parent.parent.field_0x14 =*(float *)&(this->body).parent.parent.field_0x14 +fVar16 * local_94 + (float)pGVar3 * local_8c + fVar4 * (float)local_90;
		LAB_0017a37e:iVar8 = *(int *)&(this->body).field_0xdc;
		if ((*(uint *)(iVar8 + 0x68) >> 0xd & 1) == 0) {
		if ((*(uint *)(iVar8 + 0x6c) >> 7 & 1) == 0) {
		return;
		}
		fVar16 = (float)(*(int *)(param_1 + 4) - *(int *)&(this->body).field_0x108) * TimePerTick1;
		if (((*(uint *)(iVar8 + 0x68) & 0x2000) == 0) ||(fVar16 < *(float *)(iVar8 + 0x2c) || fVar16 == *(float *)(iVar8 + 0x2c))) {
		fVar16 = fVar16 / *(float *)(iVar8 + 0x2c);
		fVar16 = fVar16 * fVar16 * FLOAT_003865d0 - fVar16 * fVar16 * fVar16 * FLOAT_003865d4;
		*(float *)&(this->body).field_0xf8 = *(float *)(iVar8 + 0xc) * fVar16;
		*(float *)&(this->body).field_0xfc = *(float *)(iVar8 + 0x10) * fVar16;
		(this->body).field43_0x100 = (undefined *)(*(float *)(iVar8 + 0x14) * fVar16);
		return;
		}
		}
		else {
		fVar16 = (float)(*(int *)(param_1 + 4) - *(int *)&(this->body).field_0x108) * TimePerTick1;
		if (((*(uint *)(iVar8 + 0x68) & 0x2000) == 0) ||(fVar16 < *(float *)(iVar8 + 0x2c) || fVar16 == *(float *)(iVar8 + 0x2c))) {
		fVar16 = *(float *)(iVar8 + 0x28) * fVar16;
		*(float *)&(this->body).field_0xf8 = *(float *)(iVar8 + 0xc) - fVar16;
		*(float *)&(this->body).field_0xfc = *(float *)(iVar8 + 0x10) - fVar16;
		(this->body).field43_0x100 = (undefined *)(*(float *)(iVar8 + 0x14) - fVar16);
		return;
		}
		}
		FUN_00179910((InstanceNodeInstanceD *)param_2);
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceD::InstanceMethod15(uint* param_1, float param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall InstanceNodeInstanceD::InstanceMethod15(InstanceNodeInstanceD *this,undefined4 *param_1,float param_2){
		undefined *puVar1;
		int iVar2;
		InstanceNodeAbstract *pIVar3;
		void *this_00;
		float fVar4;
		float *pfVar5;
		float local_30 [11];
		pIVar3 = (InstanceNodeAbstract *)(this->body).field71_0x128;
		if (pIVar3 == (InstanceNodeAbstract *)0x0) {
		pIVar3 = (InstanceNodeAbstract *)VirtualPool::AllocateMemory(0xe0);
		if (pIVar3 == (InstanceNodeAbstract *)0x0) {
		pIVar3 = (InstanceNodeAbstract *)0x0;
		}
		else {
		InstanceNodeAbstract::FUN_0015dab0(pIVar3,(InstanceContext *)this);
		}
		(this->body).field71_0x128 = (undefined *)pIVar3;
		if (param_2 < 0.0) {
		param_2 = FLOAT_00393d08;
		}
		InstanceNodeAbstract::FUN_0015dc10(pIVar3,param_2);
		FUN_001688e0((int)(this->body).field71_0x128,1);
		FUN_00168a00((int)(this->body).field71_0x128,1);
		pfVar5 = local_30;
		this_00 = (void *)FUN_00137450(&(((this->body).parent.parent.parent.ctx)->parent).field14_0x20,0);
		FUN_0014a120(this_00,pfVar5);
		fVar4 = FUN_00147550(local_30);
		(this->body).field30_0xf0 = fVar4;
		}
		else {
		if (param_2 < 0.0) {
		param_2 = FLOAT_00393d08;
		}
		InstanceNodeAbstract::FUN_0015dc10(pIVar3,param_2);
		}
		puVar1 = (this->body).field71_0x128;
		*(uint *)(puVar1 + 0x8c) = *(uint *)(puVar1 + 0x8c) & 0xfffffeff | 0x200;
		iVar2 = *(int *)&(this->body).field_0x124;
		*(undefined4 *)(iVar2 + 0x30) = *(undefined4 *)(iVar2 + 0x20);
		*(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(iVar2 + 0x24);
		*(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(iVar2 + 0x28);
		*(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(iVar2 + 0x2c);
		*(undefined4 *)(iVar2 + 0x20) = *param_1;
		*(undefined4 *)(iVar2 + 0x24) = param_1[1];
		*(undefined4 *)(iVar2 + 0x28) = param_1[2];
		*(undefined4 *)(iVar2 + 0x2c) = param_1[3];
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceD::UpdateTime(uint param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall InstanceNodeInstanceD::UpdateTime(InstanceNodeInstanceD *this,undefined4 param_1,undefined4 param_2){
		float fVar1;
		int *piVar2;
		InstanceContext *pIVar3;
		InstanceTransform *pIVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		int unaff_retaddr;
		piVar2 = *(int **)&(this->body).field_0x110;
		if (piVar2 != (int *)0x0) {
		(**(code **)(*piVar2 + 0xc))(param_2);
		}
		(*this->vtable->InstanceMethod24)((InstanceNodeInstance *)this);
		(*this->vtable->InstanceMethod9)();
		(*this->vtable->InstanceMethod10)((InstanceNodeInstance *)this,'\x01');
		(*this->vtable->InstanceMethod2)((InstanceNodeInstance *)this);
		AutoClass52::FUN_000fb0b0((this->body).parent.parent.field43_0x70,(this->body).parent.parent.parent.ctx);
		pIVar3 = (this->body).parent.parent.parent.ctx;
		*(undefined4 *)&(this->body).parent.parent.field_0x1c =*(undefined4 *)((int)&(pIVar3->parent).field14_0x20.matrix2 + 0x10);
		fVar1 = FLOAT_00386ab4;
		fVar6 = *(float *)&(this->body).parent.parent.field_0x1c;
		*(undefined4 *)&(this->body).parent.parent.field_0x20 =*(undefined4 *)((int)&(pIVar3->parent).field14_0x20.matrix2 + 0x14);
		*(undefined4 *)&(this->body).parent.parent.field_0x24 =*(undefined4 *)((int)&(pIVar3->parent).field14_0x20.matrix2 + 0x18);
		*(undefined4 *)&(this->body).parent.parent.field_0x28 =*(undefined4 *)((int)&(pIVar3->parent).field14_0x20.matrix2 + 0x1c);
		*(float *)&(this->body).parent.parent.field_0x1c =fVar6 - (pIVar3->parent).field14_0x20.matrix2.m11;
		*(float *)&(this->body).parent.parent.field_0x20 =*(float *)&(this->body).parent.parent.field_0x20 -*(float *)((int)&(pIVar3->parent).field14_0x20.matrix2 + 4);
		fVar6 = *(float *)&(this->body).parent.parent.field_0x20;
		*(float *)&(this->body).parent.parent.field_0x24 =*(float *)&(this->body).parent.parent.field_0x24 -*(float *)((int)&(pIVar3->parent).field14_0x20.matrix2 + 8);
		fVar7 = *(float *)&(this->body).parent.parent.field_0x24;
		fVar5 = *(float *)&(this->body).parent.parent.field_0x1c * fVar1;
		*(float *)&(this->body).parent.parent.field_0x1c = fVar5;
		fVar6 = fVar6 * fVar1;
		*(float *)&(this->body).parent.parent.field_0x20 = fVar6;
		fVar7 = fVar7 * fVar1;
		*(float *)&(this->body).parent.parent.field_0x24 = fVar7;
		*(float *)&(this->body).parent.parent.field_0x1c =fVar5 + (pIVar3->parent).field14_0x20.matrix2.m11;
		*(float *)&(this->body).parent.parent.field_0x20 =*(float *)((int)&(pIVar3->parent).field14_0x20.matrix2 + 4) + fVar6;
		*(float *)&(this->body).parent.parent.field_0x24 =*(float *)((int)&(pIVar3->parent).field14_0x20.matrix2 + 8) + fVar7;
		pIVar4 = (((this->body).parent.parent.parent.ctx)->parent).transform;
		if ((*(byte *)&pIVar4->field3_0x60 & 4) != 0) {
		fVar6 = (pIVar4->matrix).m44;
		fVar7 = (pIVar4->matrix).m43;
		fVar1 = (pIVar4->matrix).m42;
		(pIVar4->position).x = (pIVar4->matrix).m41;
		(pIVar4->position).y = fVar1;
		(pIVar4->position).z = fVar7;
		(pIVar4->position).w = fVar6;
		pIVar4->field3_0x60 = (float)((uint)pIVar4->field3_0x60 & 0xfffffffa);
		}
		(this->body).parent.parent.vec2.x = (pIVar4->position).x;
		(this->body).parent.parent.vec2.y = (pIVar4->position).y;
		(this->body).parent.parent.vec2.z = (pIVar4->position).z;
		(this->body).parent.parent.vec2.w = (pIVar4->position).w;
		(this->body).parent.parent.parent.time = *(uint *)(unaff_retaddr + 4);
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceD::InstanceMethod33() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeInstanceD::InstanceMethod33(InstanceNodeInstanceD *this){
		byte bVar1;
		bVar1 = (this->body).field_0x158;
		if (bVar1 != 0xff) {
		FUN_00132720((uint)bVar1);
		(this->body).field_0x158 = 0xff;
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceD::InstanceMethod12(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeInstanceD::InstanceMethod12(InstanceNodeInstanceD *this,undefined4 *param_1){
		float fVar1;
		InstanceNodeInstanceASub *this_00;
		undefined *extraout_ECX;
		undefined *puVar2;
		if ((this->body).field43_0x100 == (undefined *)0x0) {
		this_00 = (InstanceNodeInstanceASub *)VirtualPool::AllocateMemory(0x6c);
		if (this_00 == (InstanceNodeInstanceASub *)0x0) {
		puVar2 = (undefined *)0x0;
		}
		else {
		InstanceNodeInstanceASub::FUN_001705b0(this_00);
		fVar1 = FLOAT_0038639c;
		*(undefined4 *)(extraout_ECX + 0x68) = 0;
		*(uint *)(extraout_ECX + 0x60) = *(uint *)(extraout_ECX + 0x60) & 0xffffffdf;
		*(float *)(extraout_ECX + 100) = fVar1;
		puVar2 = extraout_ECX;
		}
		(this->body).field43_0x100 = puVar2;
		}
		InstanceNodeInstanceASub::FUN_00170550((InstanceNodeInstanceASub *)(this->body).field43_0x100,param_1);
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceD::InstanceMethod13() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeInstanceD::InstanceMethod13(InstanceNodeInstanceD *this){
		undefined *ptr;
		ptr = (this->body).field43_0x100;
		if (ptr != (undefined *)0x0) {
		FUN_00170510((int)ptr);
		VirtualPool::FreeMemory(ptr);
		}
		(this->body).field43_0x100 = (undefined *)0x0;
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceD::Construct(char param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeInstanceD * __thiscall InstanceNodeInstanceD::Construct(InstanceNodeInstanceD *this,char param_1){
		InstanceNodeInstance::Construct((InstanceNodeInstance *)this);
		(this->body).parent.parent.field61_0x9c.w = 0.0;
		(this->body).parent.parent.field61_0x9c.x = 0.0;
		(this->body).parent.parent.field61_0x9c.y = 0.0;
		this->vtable = (InstanceNodeInstance_VTable *)&InstanceNode_VT_Instance_D;
		Init(this,param_1);
		return this;
		}
		
	*/
	return;
}

bool InstanceNodeInstanceD::InstanceMethod18(float param_1, float* param_2, float* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodeInstanceD::InstanceMethod18(InstanceNodeInstanceD *this,float param_1,float *param_2,float *param_3){
		bool bVar1;
		float fVar2;
		bVar1 = false;
		if (param_1 != 0.0) {
		fVar2 = *param_3 * *param_3 + param_3[1] * param_3[1] + param_3[2] * param_3[2];
		if (*(short *)((int)param_1 + 0x62) != -1) {
		if (fVar2 <= FLOAT_00387520) {
		return false;
		}
		FUN_001793d0((int)this,(int)param_1,0,param_2,param_3,fVar2 - FLOAT_00387520);
		bVar1 = true;
		}
		if (FLOAT_00387520 < fVar2) {
		param_1 = fVar2 * FLOAT_003865d0;
		if (FLOAT_0038639c < param_1) {
		param_1 = FLOAT_0038639c;
		}
		FUN_0018a9d0((this->body).parent.parent.parent.ctx,param_2,12.0,param_1);
		}
		}
		return bVar1;
		}
		
	*/
	return false;
}

void InstanceNodeInstanceD::InstanceMethod11() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeInstanceD::InstanceMethod11(InstanceNodeInstanceD *this){
		undefined *puVar1;
		if (((this->body).parent.parent.field50_0x84 & 0x100) == 0) {
		(*this->vtable->InstanceMethod13)((InstanceNodeInstance *)this);
		}
		else {
		puVar1 = (this->body).field43_0x100;
		if (puVar1 != (undefined *)0x0) {
		FUN_001760f0((int)puVar1,1);
		}
		}
		if (((this->body).parent.parent.field50_0x84 & 0x200) == 0) {
		FUN_00179910(this);
		}
		if ((((this->body).parent.parent.field50_0x84 & 0x400000) == 0) &&(puVar1 = (this->body).field49_0x10c, puVar1 != (undefined *)0x0)) {
		VirtualPool::FreeMemory(puVar1);
		(this->body).field49_0x10c = (undefined *)0x0;
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceD::InstanceMethod17(int** param_1, float param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall InstanceNodeInstanceD::InstanceMethod17(InstanceNodeInstanceD *this,int **param_1,float param_2){
		int iVar1;
		InstanceNodeInstanceD *pIVar2;
		undefined *puVar3;
		InstanceTransform *pIVar4;
		int *piVar5;
		uint *puVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		float local_30;
		float local_2c;
		float local_28;
		float local_24;
		float local_20;
		float local_1c;
		float local_18;
		int local_14;
		iVar1 = *(int *)&(this->body).field_0x11c;
		if (iVar1 != 0) {
		pIVar2 = (this->body).field44_0x104;
		if ((pIVar2 == (InstanceNodeInstanceD *)0x0) || (*(int *)&(pIVar2->body).field_0xdc != iVar1)) {
		if ((*(uint *)(iVar1 + 0x6c) >> 0xe & 1) != 0) {
		puVar6 = InstanceContext::FUN_000f7220((this->body).parent.parent.parent.ctx);
		InstanceContext::FUN_0017afa0((InstanceContext *)this,*(int *)&(this->body).field_0x11c,(int)puVar6);
		}
		}
		else {
		puVar3 = (this->body).field71_0x128;
		if ((puVar3 != (undefined *)0x0) && (iVar1 = *(int *)(puVar3 + 0xd4), iVar1 != 0)) {
		FUN_001e31c0(iVar1);
		}
		}
		FUN_0017c450((int)this,param_1);
		}
		if ((FLOAT_00386394 < param_2) && ((this->body).field71_0x128 != (undefined *)0x0)) {
		pIVar4 = (((this->body).parent.parent.parent.ctx)->parent).transform;
		if ((*(byte *)&pIVar4->field3_0x60 & 4) != 0) {
		fVar10 = (pIVar4->matrix).m44;
		fVar9 = (pIVar4->matrix).m43;
		fVar8 = (pIVar4->matrix).m42;
		(pIVar4->position).x = (pIVar4->matrix).m41;
		(pIVar4->position).y = fVar8;
		(pIVar4->position).z = fVar9;
		(pIVar4->position).w = fVar10;
		pIVar4->field3_0x60 = (float)((uint)pIVar4->field3_0x60 & 0xfffffffa);
		}
		fVar10 = (pIVar4->position).x;
		fVar9 = (pIVar4->position).y;
		fVar8 = (pIVar4->position).z;
		local_24 = (pIVar4->position).w;
		piVar5 = param_1[6];
		if ((*(byte *)(piVar5 + 0x18) & 4) != 0) {
		piVar5[0x10] = piVar5[0xc];
		piVar5[0x11] = piVar5[0xd];
		piVar5[0x12] = piVar5[0xe];
		piVar5[0x13] = piVar5[0xf];
		piVar5[0x18] = piVar5[0x18] & 0xfffffffa;
		}
		local_20 = (float)piVar5[0x10];
		local_1c = (float)piVar5[0x11];
		local_18 = (float)piVar5[0x12];
		fVar10 = fVar10 - local_20;
		fVar9 = fVar9 - local_1c;
		fVar8 = fVar8 - local_18;
		local_14 = piVar5[0x13];
		fVar7 = fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10;
		local_28 = (param_2 * FLOAT_0038a770) / (fVar7 + FLOAT_0038a770);
		if (fVar7 <= FLOAT_003a368c) {
		fVar7 = 0.0;
		}
		else {
		fVar7 = FLOAT_0038639c / SQRT(fVar7);
		}
		local_30 = fVar10 * fVar7 * local_28;
		local_2c = fVar9 * fVar7 * local_28;
		local_28 = fVar8 * fVar7 * local_28;
		FUN_0015ea30((int)(this->body).field71_0x128,&local_30,&local_20);
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceD::InstanceMethod24() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeInstanceD::InstanceMethod24(InstanceNodeInstanceD *this){
		undefined *ptr;
		(*this->vtable->InstanceMethod13)((InstanceNodeInstance *)this);
		FUN_00179910(this);
		FUN_00175120(this);
		FUN_001751e0(this);
		InstanceNodeAbstract::FUN_0017ca40((InstanceNodeAbstract *)this);
		ptr = (this->body).field49_0x10c;
		if (ptr != (undefined *)0x0) {
		VirtualPool::FreeMemory(ptr);
		(this->body).field49_0x10c = (undefined *)0x0;
		}
		(*this->vtable->InstanceMethod33)((InstanceNodeInstance *)this);
		(*this->vtable->InstanceMethod31)((InstanceNodeInstance *)this,(uint *)0x0);
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceD::InstanceMethod2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __fastcall InstanceNodeInstanceD::InstanceMethod2(InstanceNodeInstanceD *this){
		uint *puVar1;
		undefined4 *puVar2;
		undefined **ppuVar3;
		undefined *puVar4;
		uint uVar5;
		InstanceContext *pIVar6;
		int *piVar7;
		FUN_00175240((int)this);
		puVar1 = &(this->body).parent.parent.field50_0x84;
		*puVar1 = *puVar1 & 0xfffffffc;
		puVar2 = *(undefined4 **)&(this->body).field_0x124;
		(this->body).parent.parent.field61_0x9c.w = 0.0;
		if (puVar2 != (undefined4 *)0x0) {
		FUN_00187d10(puVar2);
		}
		ppuVar3 = (this->body).field66_0x120;
		if (ppuVar3 != (undefined **)0x0) {
		FUN_00188060((int)ppuVar3);
		}
		(*this->vtable->InstanceMethod31)((InstanceNodeInstance *)this,(uint *)0x0);
		(this->body).parent.parent.field63_0xbc = (uint)Vector4_0039ef70.x;
		*(float *)&(this->body).parent.parent.field_0xc0 = Vector4_0039ef70.y;
		*(float *)&(this->body).parent.parent.field_0xc4 = Vector4_0039ef70.z;
		piVar7 = *(int **)&(this->body).field_0x110;
		(this->body).parent.parent.field56_0x94 = 0;
		if (piVar7 != (int *)0x0) {
		(**(code **)(*piVar7 + 0x10))();
		puVar2 = *(undefined4 **)&(this->body).field_0x110;
		if (puVar2 != (undefined4 *)0x0) {
		(**(code **)*puVar2)(1);
		}
		*(undefined4 *)&(this->body).field_0x110 = 0;
		}
		FUN_00179910(this);
		(*this->vtable->InstanceMethod13)((InstanceNodeInstance *)this);
		FUN_00175120(this);
		FUN_001751e0(this);
		puVar4 = (this->body).field49_0x10c;
		*(undefined4 *)&(this->body).field_0x114 = 0;
		if (puVar4 != (undefined *)0x0) {
		VirtualPool::FreeMemory(puVar4);
		(this->body).field49_0x10c = (undefined *)0x0;
		}
		uVar5 = (this->body).parent.parent.field50_0x84;
		if ((~(byte)(uVar5 >> 0x14) & 1) != 0) {
		*(undefined4 *)&(this->body).field_0x118 = 0;
		}
		(this->body).parent.parent.field50_0x84 = uVar5 & 0xffffdfff;
		puVar4 = (this->body).field29_0xec;
		if (puVar4 != (undefined *)0x0) {
		VirtualPool::FreeMemory(puVar4);
		}
		(this->body).field29_0xec = (undefined *)0x0;
		InstanceNodeAbstract::FUN_0017ca40((InstanceNodeAbstract *)this);
		if (*(int *)&(this->body).field_0x11c != 0) {
		FUN_00179910(this);
		puVar1 = &(this->body).parent.parent.field50_0x84;
		*puVar1 = *puVar1 & 0xfffbffff;
		*(undefined4 *)&(this->body).field_0x11c = 0;
		}
		pIVar6 = (this->body).parent.parent.parent.ctx;
		(pIVar6->parent).flags = (pIVar6->parent).flags & 0xffff7fff;
		(*this->vtable->InstanceMethod33)((InstanceNodeInstance *)this);
		pIVar6 = (this->body).parent.parent.parent.ctx;
		(this->body).parent.parent.field54_0x8c = 0;
		(this->body).parent.parent.field55_0x90 = 0;
		piVar7 = &(pIVar6->parent).flags;
		(this->body).parent.parent.field53_0x8a = -1;
		*piVar7 = *piVar7 & 0xfffffeff;
		(this->body).field_0x160 = 0xff;
		(this->body).field_0x158 = 0xff;
		(this->body).field119_0x164 = -1;
		*(undefined4 *)&(this->body).field_0x174 = 0;
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceD::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeInstanceD * __thiscall InstanceNodeInstanceD::Dispose(InstanceNodeInstanceD *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void InstanceNodeInstanceD::InstanceMethod0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeInstanceD::InstanceMethod0(InstanceNodeInstanceD *this){
		if (DAT_00491bc1 == '\0') {
		(*this->vtable->InstanceMethod24)((InstanceNodeInstance *)this);
		return;
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceD::Method8() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeInstanceD::Method8(InstanceNodeInstanceD *this){
		(*this->vtable->InstanceMethod0)((InstanceNodeInstance *)this);
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceD::SetCtx(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeInstanceD::SetCtx(InstanceNodeInstanceD *this,int param_1){
		int iVar1;
		AutoClass52::FUN_000f6ab0(&(this->body).parent.parent.field41_0x3c,(InstanceContext *)param_1,1);
		iVar1 = *(int *)(param_1 + 0x18);
		if ((*(byte *)(iVar1 + 0x60) & 4) != 0) {
		*(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x30);
		*(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(iVar1 + 0x34);
		*(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(iVar1 + 0x38);
		*(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(iVar1 + 0x3c);
		*(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) & 0xfffffffa;
		}
		(this->body).parent.parent.vec2.x = *(float *)(iVar1 + 0x40);
		(this->body).parent.parent.vec2.y = *(float *)(iVar1 + 0x44);
		(this->body).parent.parent.vec2.z = *(float *)(iVar1 + 0x48);
		(this->body).parent.parent.vec2.w = *(float *)(iVar1 + 0x4c);
		InstanceNodeAbstract::SetCtx((InstanceNodeAbstract *)this,(InstanceContext *)param_1);
		*(float *)&(this->body).parent.parent.field_0x1c = (this->body).parent.parent.vec2.x;
		*(float *)&(this->body).parent.parent.field_0x20 = (this->body).parent.parent.vec2.y;
		*(float *)&(this->body).parent.parent.field_0x24 = (this->body).parent.parent.vec2.z;
		*(float *)&(this->body).parent.parent.field_0x28 = (this->body).parent.parent.vec2.w;
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceD::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceNodeInstanceD::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceD::EmptyFunction_22() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceNodeInstanceD::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

bool InstanceNodeInstanceD::IsA(uint param_2, uint* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodeInstanceD::IsA(int this,undefined4 param_2,uint *param_3){
		void *this_00;
		char cVar1;
		void *this_01;
		undefined4 uVar2;
		if ((*param_3 >> 0x12 & 1) != 0) {
		if (*(int *)(this + 300) != 0) {
		this_01 = (void *)FUN_001384c0(param_3[1]);
		this_00 = *(void **)(*(int *)(this + 300) + 0xd8);
		uVar2 = FUN_001611e0((int)this_00,*(int *)(this + 300));
		cVar1 = FUN_001612f0(this_00,*(int *)(this + 300));
		if ((char)uVar2 != '\0') {
		FUN_0015d5d0((int)this_01,*(int *)(this + 300));
		}
		if (cVar1 != '\0') {
		FUN_0015d610(this_01,*(int *)(this + 300));
		}
		}
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

void InstanceNodeInstanceD::InstanceMethod31(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __thiscall InstanceNodeInstanceD::InstanceMethod31(InstanceNodeInstanceD *this,uint *param_1){
		float fVar1;
		void *pvVar2;
		if ((((param_1 == (uint *)0x0) ||(fVar1 = (&(this->body).parent.parent.field61_0x9c.x)[(byte)(1 - ((byte)(*param_1 >> 6) & 7))], fVar1 == 0.0)) ||(*(int *)((int)fVar1 + 0x14) == 0)) || (*(int *)((int)fVar1 + 8) == 0)) {
		pvVar2 = *(void **)&(this->body).field_0xf4;
		if (pvVar2 != (void *)0x0) {
		::EmptyFunction();
		VirtualPool::FreeMemory(pvVar2);
		*(undefined4 *)&(this->body).field_0xf4 = 0;
		}
		pvVar2 = *(void **)&(this->body).field_0xf8;
		if (pvVar2 != (void *)0x0) {
		::EmptyFunction();
		VirtualPool::FreeMemory(pvVar2);
		*(undefined4 *)&(this->body).field_0xf8 = 0;
		}
		pvVar2 = *(void **)&(this->body).field_0xfc;
		if (pvVar2 != (void *)0x0) {
		::EmptyFunction();
		VirtualPool::FreeMemory(pvVar2);
		*(undefined4 *)&(this->body).field_0xfc = 0;
		}
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceD::InstanceMethod23(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeInstanceD::InstanceMethod23(InstanceNodeInstanceD *this,undefined4 param_1){
		uint *puVar1;
		switch(param_1) {
		case 0:puVar1 = &(this->body).parent.parent.field50_0x84;
		*puVar1 = *puVar1 & 0xfffffffc;
		return;
		case 1:*(undefined4 *)&(this->body).field_0x114 = 0;
		return;
		case 2:*(undefined4 *)&(this->body).field_0x118 = 0;
		return;
		case 3:puVar1 = &(this->body).parent.parent.field50_0x84;
		*puVar1 = *puVar1 & 0xffffdfff;
		}
		return;
		}
		
	*/
	return;
}

int InstanceNodeInstanceD::InstanceMethod25(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling int __thiscall InstanceNodeInstanceD::InstanceMethod25(InstanceNodeInstanceD *this,undefined4 param_1){
		int iVar1;
		int *piVar2;
		int iVar3;
		int local_4;
		local_4 = 0;
		iVar3 = 0;
		switch(param_1) {
		case 0xdf:iVar1 = ((this->body).parent.parent.parent.ctx)->field36_0x164;
		iVar3 = iRam00000004;
		if (iVar1 != -1) {
		return UF16SUB->array[iVar1 * 2 + 1];
		}
		break;
		case 0xf0:return (int)(this->body).parent.parent.parent.ctx;
		case 0xf2:if (PTR_00496350 == (InstanceContextRefCounter *)0x0) {
		return 0;
		}
		return (int)PTR_00496350->ctx;
		case 0xf5:iVar1 = *(int *)&(this->body).field_0x108;
		if (iVar1 != 0) {
		piVar2 = *(int **)(iVar1 + 0xb0);
		if (piVar2 == (int *)0x0) {
		return 0;
		}
		return *piVar2;
		}
		break;
		case 0xf7:return *(int *)&(this->body).field_0x118;
		case 0xf8:return *(int *)&(this->body).field_0x114;
		case 0xfb:InstanceContext::thunk_FUN_00054ce0((InstanceContext *)this,&local_4);
		return local_4;
		}
		return iVar3;
		}
		
	*/
	return 0;
}

bool InstanceNodeInstanceD::InstanceMethod26(int param_1, uint* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodeInstanceD::InstanceMethod26(InstanceNodeInstanceD *this,int param_1,undefined4 *param_2){
		int *piVar1;
		undefined4 uVar2;
		uint uVar3;
		int iVar4;
		char cVar5;
		InstanceNodeCharacter *local_4;
		cVar5 = '\0';
		local_4 = (InstanceNodeCharacter *)0x0;
		switch(param_1) {
		case 0xf5:iVar4 = *(int *)&(this->body).field_0x108;
		if (((iVar4 != 0) && (piVar1 = *(int **)(iVar4 + 0xb0), piVar1 != (int *)0x0)) && (*piVar1 != 0)) {
		cVar5 = '\x01';
		InstanceNodeCharacter::GetPosition(*(InstanceNodeCharacter **)&(this->body).field_0x114,(Vector4 *)param_2);
		}
		break;
		case 0xf6:uVar2 = InstanceNodeInstance::FUN_0016be20((InstanceNodeInstance *)this,param_2);
		return SUB41(uVar2,0);
		case 0xf7:iVar4 = thunk_FUN_00054db0((int)this);
		if (iVar4 != 0) {
		InstanceNodeCharacter::GetPosition(*(InstanceNodeCharacter **)&(this->body).field_0x114,(Vector4 *)param_2);
		return true;
		}
		break;
		case 0xf8:iVar4 = thunk_FUN_00054d80((int)this);
		if (iVar4 != 0) {
		InstanceNodeCharacter::GetPosition(*(InstanceNodeCharacter **)&(this->body).field_0x114,(Vector4 *)param_2);
		return true;
		}
		break;
		case 0xfb:uVar3 = InstanceContext::thunk_FUN_00054ce0((InstanceContext *)this,(int *)&local_4);
		cVar5 = (char)uVar3;
		if (cVar5 != '\0') {
		InstanceNodeCharacter::GetPosition(local_4,(Vector4 *)param_2);
		return (bool)cVar5;
		}
		break;
		case 0xfc:uVar2 = thunk_FUN_0005a580((int)this,param_2);
		return SUB41(uVar2,0);
		}
		return (bool)cVar5;
		}
		
	*/
	return false;
}

bool InstanceNodeInstanceD::InstanceMethod27(int param_1, float* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodeInstanceD::InstanceMethod27(InstanceNodeInstanceD *this,int param_1,float *param_2){
		int *piVar1;
		uint uVar2;
		int iVar3;
		char cVar4;
		InstanceContext *local_4;
		cVar4 = '\0';
		local_4 = (InstanceContext *)0x0;
		switch(param_1) {
		case 0xf5:iVar3 = *(int *)&(this->body).field_0x108;
		if (((iVar3 != 0) && (piVar1 = *(int **)(iVar3 + 0xb0), piVar1 != (int *)0x0)) && (*piVar1 != 0)) {
		cVar4 = '\x01';
		InstanceContext::thunk_FUN_00026e90(*(InstanceContext **)&(this->body).field_0x114,(Vector4 *)param_2);
		}
		break;
		case 0xf6:InstanceContext::FUN_0016dda0((InstanceContext *)this,param_2);
		return true;
		case 0xf7:iVar3 = thunk_FUN_00054db0((int)this);
		if (iVar3 != 0) {
		InstanceContext::thunk_FUN_00026e90(*(InstanceContext **)&(this->body).field_0x114,(Vector4 *)param_2);
		return true;
		}
		break;
		case 0xf8:iVar3 = thunk_FUN_00054d80((int)this);
		if (iVar3 != 0) {
		InstanceContext::thunk_FUN_00026e90(*(InstanceContext **)&(this->body).field_0x114,(Vector4 *)param_2);
		return true;
		}
		break;
		case 0xfb:uVar2 = InstanceContext::thunk_FUN_00054ce0((InstanceContext *)this,(int *)&local_4);
		cVar4 = (char)uVar2;
		if (cVar4 != '\0') {
		InstanceContext::thunk_FUN_00026e90(local_4,(Vector4 *)param_2);
		return (bool)cVar4;
		}
		break;
		case 0xfc:thunk_FUN_000273a0((int)this,(Vector4 *)param_2);
		return true;
		}
		return (bool)cVar4;
		}
		
	*/
	return false;
}

bool InstanceNodeInstanceD::InstanceMethod19(int param_1, uint* param_2, float* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodeInstanceD::InstanceMethod19(InstanceNodeInstanceD *this,int param_1,undefined4 *param_2,float *param_3){
		bool bVar1;
		float fVar2;
		bVar1 = false;
		if (param_1 != 0) {
		fVar2 = *param_3 * *param_3 + param_3[1] * param_3[1] + param_3[2] * param_3[2];
		if ((*(short *)(param_1 + 0x62) != -1) && (FLOAT_00393d5c < fVar2)) {
		FUN_001774b0((int)this,param_1,4,param_2,param_3,fVar2 - FLOAT_00393d5c);
		bVar1 = true;
		}
		}
		return bVar1;
		}
		
	*/
	return false;
}

bool InstanceNodeInstanceD::InstanceMethod20(int param_1, uint* param_2, float* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodeInstanceD::InstanceMethod20(InstanceNodeInstanceD *this,int param_1,undefined4 *param_2,float *param_3){
		bool bVar1;
		float fVar2;
		bVar1 = false;
		if (param_1 != 0) {
		fVar2 = *param_3 * *param_3 + param_3[1] * param_3[1] + param_3[2] * param_3[2];
		if ((*(short *)(param_1 + 0x62) != -1) && (FLOAT_0038a828 < fVar2)) {
		FUN_001774b0((int)this,param_1,5,param_2,param_3,fVar2 - FLOAT_0038a828);
		bVar1 = true;
		}
		}
		return bVar1;
		}
		
	*/
	return false;
}

bool InstanceNodeInstanceD::InstanceMethod28(uint param_1, uint* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodeInstanceD::InstanceMethod28(InstanceNodeInstanceD *this,undefined4 param_1,undefined4 *param_2){
		void *this_00;
		bool bVar1;
		bVar1 = false;
		switch(param_1) {
		case 0xf5:this_00 = *(void **)&(this->body).field_0x108;
		if (this_00 != (void *)0x0) {
		FUN_0017c2d0(this_00,param_2,0x3f800000,(int)this,'\0');
		bVar1 = true;
		}
		break;
		case 0xf7:*(undefined4 **)&(this->body).field_0x118 = param_2;
		return true;
		case 0xf8:*(undefined4 **)&(this->body).field_0x114 = param_2;
		return true;
		case 0xfb:thunk_FUN_00027370((int)this,(int)param_2);
		return true;
		}
		return bVar1;
		}
		
	*/
	return false;
}

void InstanceNodeInstanceD::InstanceMethod16(int** param_1, float* param_2, float* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeInstanceD::InstanceMethod16(InstanceNodeInstanceD *this,int **param_1,float *param_2,float *param_3){
		undefined *puVar1;
		int **ppiVar2;
		float fVar3;
		ppiVar2 = param_1;
		if (param_1 != (int **)0x0) {
		FUN_0017c760(this,param_1,param_2,param_3);
		}
		puVar1 = (this->body).field71_0x128;
		fVar3 = *param_3 * *param_3 + param_3[1] * param_3[1] + param_3[2] * param_3[2];
		if (((puVar1 != (undefined *)0x0) && (*(int *)(puVar1 + 0xd4) != 0)) && (FLOAT_00387520 < fVar3)){
		param_1 = (int **)(fVar3 * FLOAT_003865d0);
		if (FLOAT_0038639c < (float)param_1) {
		param_1 = (int **)FLOAT_0038639c;
		}
		FUN_0018a9d0((this->body).parent.parent.parent.ctx,param_2,12.0,(float)param_1);
		}
		(**(code **)(*(int *)(this->body).parent.parent.field49_0x80 + 0x18))(ppiVar2,param_2,param_3);
		return;
		}
		
	*/
	return;
}

bool InstanceNodeInstanceD::Step(UnkTimePack* time) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling bool __thiscall InstanceNodeInstanceD::Step(InstanceNodeInstanceD *this,UnkTimePack *time){
		short *psVar1;
		Vector4 *out;
		uint *puVar2;
		InstanceContext *this_00;
		int *piVar3;
		undefined *puVar4;
		InstanceNodeInstanceD *pIVar5;
		void *this_01;
		bool bVar6;
		bool bVar7;
		uint uVar8;
		uint uVar9;
		this_00 = (this->body).parent.parent.parent.ctx;
		if ((this_00->parent).chunkData == (ChunkData *)0x0) {
		return false;
		}
		if ((*(byte *)&time->flags & 1) == 0) goto LAB_0017d1c5;
		uVar9 = (uint)(this->body).parent.parent.parent.field2_0x6;
		uVar8 = (uint)(&this_00->prev)[4] & 0xffffff;
		if (uVar9 == 0xffff) {
		uVar8 = 0;
		}
		else if (uVar9 < uVar8) {
		uVar8 = uVar8 - uVar9;
		if (AI_DIST_SQR < uVar8) {
		uVar8 = uVar8 - AI_DIST_SQR;
		}
		else {
		uVar8 = 0;
		}
		}
		else {
		uVar8 = 0;
		}
		if ((*(byte *)&(this->body).parent.parent.field50_0x84 & 0x60) == 0) {
		if (uVar8 < AI_DIST_SQR2) {
		bVar6 = FUN_00116b10(uVar8,(uint)this);
		if (bVar6 != false) goto LAB_0017d071;
		psVar1 = &(this->body).parent.parent.parent.field1_0x4;
		*(byte *)psVar1 = *(byte *)psVar1 | 1;
		}
		puVar2 = &(this->body).parent.parent.field50_0x84;
		*puVar2 = *puVar2 & 0xfffffff7;
		pIVar5 = (this->body).field44_0x104;
		if ((pIVar5 != (InstanceNodeInstanceD *)0x0) &&((*(uint *)(*(int *)&(pIVar5->body).field_0xdc + 0x6c) >> 0xf & 1) != 0)) {
		FUN_00179e00(pIVar5,(int)time,(int *)this);
		}
		puVar4 = (this->body).field71_0x128;
		if ((puVar4 != (undefined *)0x0) && (*(int *)(puVar4 + 0xd4) != 0)) {
		FUN_00179760((int)this,(byte *)time);
		}
		goto LAB_0017d1c5;
		}
		LAB_0017d071:out = &(this->body).parent.parent.vec2;
		InstanceNodeCharacter::GetPosition((InstanceNodeCharacter *)this_00,out);
		piVar3 = *(int **)&(this->body).field_0x110;
		(this->body).parent.parent.field50_0x84 = (this->body).parent.parent.field50_0x84 & 0xfeffffef | 8;
		if (piVar3 != (int *)0x0) {
		(**(code **)(*piVar3 + 8))(time);
		}
		puVar4 = (this->body).field43_0x100;
		if (puVar4 != (undefined *)0x0) {
		FUN_0017c400((int)puVar4,(int)time,(int)this);
		}
		pIVar5 = (this->body).field44_0x104;
		if (pIVar5 != (InstanceNodeInstanceD *)0x0) {
		FUN_00179e00(pIVar5,(int)time,(int *)this);
		}
		this_01 = *(void **)&(this->body).field_0x108;
		if (this_01 != (void *)0x0) {
		FUN_0017cac0(this_01,time,(int)this);
		}
		puVar4 = (this->body).field49_0x10c;
		if (puVar4 != (undefined *)0x0) {
		FUN_0017ac70((int)puVar4,(int)time,(int)this);
		}
		DAT_00495d24 = (void *)(this->body).parent.parent.field61_0x9c.y;
		bVar6 = false;
		if (DAT_00495d24 != (void *)0x0) {
		bVar7 = FUN_0018a790(DAT_00495d24,(int)time);
		if (bVar7 == false) {
		if (*(int *)((int)DAT_00495d24 + 0x14) != 0) {
		bVar6 = true;
		}
		}
		else {
		(*this->vtable->InstanceMethod11)((InstanceNodeInstance *)this);
		}
		}
		DAT_00495d24 = (void *)(this->body).parent.parent.field61_0x9c.x;
		if (DAT_00495d24 == (void *)0x0) {
		LAB_0017d14f:if (!bVar6) {
		FUN_0017e890((int)this);
		}
		}
		else {
		bVar7 = FUN_0018a790(DAT_00495d24,(int)time);
		if (bVar7 != false) {
		(*this->vtable->InstanceMethod11)((InstanceNodeInstance *)this);
		goto LAB_0017d14f;
		}
		if (*(int *)((int)DAT_00495d24 + 0x14) == 0) goto LAB_0017d14f;
		}
		FUN_00179760((int)this,(byte *)time);
		if (((this->body).parent.parent.field50_0x84 >> 0x17 & 1) != 0) {
		puVar2 = &(this->body).parent.parent.field63_0xbc;
		InstanceNodeCharacter::GetPosition((InstanceNodeCharacter *)(this->body).parent.parent.parent.ctx,(Vector4 *)puVar2);
		*puVar2 = (uint)((float)*puVar2 - out->x);
		*(float *)&(this->body).parent.parent.field_0xc0 =*(float *)&(this->body).parent.parent.field_0xc0 - (this->body).parent.parent.vec2.y;
		*(float *)&(this->body).parent.parent.field_0xc4 =*(float *)&(this->body).parent.parent.field_0xc4 - (this->body).parent.parent.vec2.z;
		if ((~*(byte *)((int)&(this->body).parent.parent.field50_0x84 + 3) & 1) != 0) {
		InstanceContext::thunk_FUN_00026e90((this->body).parent.parent.parent.ctx,out);
		}
		}
		LAB_0017d1c5:puVar2 = &(this->body).parent.parent.field50_0x84;
		*puVar2 = *puVar2 & 0xffffffdf;
		bVar6 = InstanceNodeAbstract::Step((InstanceNodeAbstract *)this,time);
		return bVar6;
		}
		
	*/
	return false;
}

bool InstanceNodeInstanceD::IsB() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool InstanceNodeInstanceD::IsB(void){
		return true;
		}
		
	*/
	return false;
}

bool InstanceNodeInstanceD::IsC() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool InstanceNodeInstanceD::IsC(void){
		return true;
		}
		
	*/
	return false;
}

bool InstanceNodeInstanceD::IsG() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool InstanceNodeInstanceD::IsG(void){
		return true;
		}
		
	*/
	return false;
}

bool InstanceNodeInstanceD::IsF() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall InstanceNodeInstanceD::IsF(InstanceNodeInstanceD *this){
		return (this->body).field_0x160 == -1;
		}
		
	*/
	return false;
}

