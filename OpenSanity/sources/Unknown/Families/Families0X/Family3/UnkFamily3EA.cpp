#include "headers/Unknown/Families/Families0X/Family3/UnkFamily3EA.h"

void UnkFamily3EA::Construct(int param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily3EA::Construct(UnkFamily3EA *this,int param_1,undefined4 param_2){
		undefined *this_00;
		UnkFamily26A *pUVar1;
		UnkFamily3EAbstract::Construct(&this->parent,10,param_1);
		(this->parent).parent.vtable = (UnkFamily3Abstract_VTable *)&UnkFamily3_VT_EA;
		pUVar1 = (UnkFamily26A *)VirtualPool::AllocateMemory(0x20);
		if (pUVar1 == (UnkFamily26A *)0x0) {
		pUVar1 = (UnkFamily26A *)0x0;
		}
		else {
		pUVar1 = UnkFamily26A::Construct(pUVar1,1,(int)&(this->parent).field_0x20);
		}
		this_00 = &(this->parent).field_0x20;
		*(UnkFamily26A **)&this[1].parent.field_0x2c = pUVar1;
		FUN_000f3f60((int)this_00,pUVar1);
		FUN_000f5310((int)this_00,0);
		FUN_000f4df0(*(int *)&this[1].parent.field_0x2c,0x461c4000,0x42c80000);
		**(undefined4 **)(*(int *)&this[1].parent.field_0x2c + 0x1c) = param_2;
		return (undefined4 *)this;
		}
		
	*/
	return;
}

void UnkFamily3EA::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily3EA::Dispose(UnkFamily3EA *this){
		(this->parent).parent.vtable = (UnkFamily3Abstract_VTable *)&UnkFamily3_VT_EA;
		UnkFamily3EAbstract::CleanUp(&this->parent);
		UnkFamily3EAbstract::Unroll(this);
		return;
		}
		
	*/
	return;
}

void UnkFamily3EA::Dispose_2(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily3EAbstract * __thiscall UnkFamily3EA::Dispose(UnkFamily3EA *this,byte param_1){
		(this->parent).parent.vtable = (UnkFamily3Abstract_VTable *)&UnkFamily3_VT_EA;
		UnkFamily3EAbstract::CleanUp(&this->parent);
		UnkFamily3EAbstract::Unroll(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void UnkFamily3EA::FUN_000f3fe0(byte param_1, void* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Could not reconcile some variable overlaps void __thiscall UnkFamily3EA::FUN_000f3fe0(UnkFamily3EA *this,byte param_1,void *param_2){
		float *pfVar1;
		undefined auVar2 [12];
		undefined local_60 [16];
		undefined local_50 [76];
		if ((*(byte *)&(this->parent).field1_0x4 & 0x78) != 0) {
		pfVar1 = *(float **)(*(int *)((int)param_2 + 8) + 0x60);
		auVar2 = *(undefined (*) [12])(*(int *)(*(int *)&(this->parent).field_0x40 + (uint)param_1 * 4) + 0x10);
		local_60._0_4_ = SUB124(auVar2,0);
		local_60._4_4_ = SUB124(auVar2 >> 0x20,0);
		local_60 = CONCAT412(local_60._0_4_ * *(float *)&this->field_0xbc +local_60._4_4_ * *(float *)&this->field_0xcc +*(float *)&this->field_0xdc * 0.0 + *(float *)&this[1].parent.field_0x8,CONCAT48(local_60._0_4_ * *(float *)&this->field_0xb8 +local_60._4_4_ * *(float *)&this->field_0xc8 +*(float *)&this->field_0xd8 * 0.0 +(float)this[1].parent.field1_0x4,CONCAT44(local_60._0_4_ * *(float *)&this->field_0xb4 +local_60._4_4_ * *(float *)&this->field_0xc4 +*(float *)&this->field_0xd4 * 0.0 +(float)this[1].parent.parent.vtable,local_60._0_4_ * *(float *)&this->field_0xb0 +local_60._4_4_ * *(float *)&this->field_0xc0 +*(float *)&this->field_0xd0 * 0.0 +*(float *)&this->field_0xe0)));
		if (pfVar1 != (float *)0x0) {
		FUN_000e3460(local_50,pfVar1);
		thunk_FUN_00025aa0(local_50,(undefined (*) [16])local_60);
		}
		FUN_001f8490(param_2,(float *)local_60,*(float *)&(this->parent).field_0x8);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily3EA::FUN_000f4650(byte param_1, uint param_2, void* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __thiscall UnkFamily3EA::FUN_000f4650(UnkFamily3EA *this,byte param_1,uint param_2,void *param_3){
		undefined *puVar1;
		Matrix4 *pMVar2;
		int iVar3;
		int iVar4;
		Vector4 *pVVar5;
		float fVar6;
		float *pfVar7;
		Vector4 *local_f4;
		Vector4 local_f0;
		Vector4 local_e0;
		Matrix4 *local_c4;
		float local_c0;
		undefined4 local_bc;
		undefined4 local_b8;
		float local_b4;
		Vector4 local_b0;
		float local_a0;
		float local_9c;
		float local_98;
		float local_94;
		Matrix4 local_90;
		undefined local_50 [76];
		if ((*(byte *)&(this->parent).field1_0x4 & 0x78) != 0) {
		iVar4 = *(int *)((int)param_3 + 8);
		iVar3 = FUN_001f8680(iVar4,param_2,1);
		local_f4 = *(Vector4 **)(iVar3 + 0x54);
		local_c4 = *(Matrix4 **)(iVar4 + 0x60);
		iVar4 = *(int *)&(this->parent).field_0x40;
		iVar3 = *(int *)(iVar4 + (param_2 & 0xff) * 4);
		Matrix4::FUN_000d4000((Matrix4 *)&this->field_0xb0,(Vector4 *)(*(int *)(iVar4 + (uint)param_1 * 4) + 0x10),&local_b0);
		Matrix4::FUN_000d4000((Matrix4 *)&this->field_0xb0,(Vector4 *)(iVar3 + 0x10),&local_f0);
		pMVar2 = local_c4;
		FUN_001f9070(param_3,local_c4,'\0',&local_90);
		Matrix4::FUN_000d4000(&local_90,local_f4,&local_e0);
		local_e0.x = local_e0.x - local_90.m41;
		local_e0.y = local_e0.y - local_90.m42;
		local_e0.z = local_e0.z - local_90.m43;
		local_f0.x = local_f0.x - local_b0.x;
		local_f0.y = local_f0.y - local_b0.y;
		local_f0.z = local_f0.z - local_b0.z;
		if ((*(byte *)&(this->parent).field1_0x4 & 4) != 0) {
		puVar1 = &this[1].parent.field_0x1c;
		FUN_000dc700(&local_e0,(float *)puVar1,'\0');
		FUN_000dc700(&local_f0,(float *)puVar1,'\0');
		}
		pVVar5 = (Vector4 *)(local_e0.z * local_e0.z + local_e0.y * local_e0.y + local_e0.x * local_e0.x);
		if ((float)pVVar5 <= _DAT_0039f068) {
		fVar6 = 0.0;
		}
		else {
		local_c4 = (Matrix4 *)SQRT((float)pVVar5);
		fVar6 = FLOAT_0038639c / (float)local_c4;
		local_f4 = pVVar5;
		}
		local_e0.y = local_e0.y * fVar6;
		local_e0.z = local_e0.z * fVar6;
		pVVar5 = (Vector4 *)(local_f0.z * local_f0.z + local_f0.y * local_f0.y + local_f0.x * local_f0.x);
		local_e0.x = fVar6 * local_e0.x;
		if ((float)pVVar5 <= _DAT_0039f068) {
		fVar6 = 0.0;
		}
		else {
		local_c4 = (Matrix4 *)SQRT((float)pVVar5);
		fVar6 = FLOAT_0038639c / (float)local_c4;
		local_f4 = pVVar5;
		}
		local_f0.x = fVar6 * local_f0.x;
		local_f0.y = local_f0.y * fVar6;
		local_f0.z = local_f0.z * fVar6;
		FUN_000eba70(&local_e0,(float *)&local_f4,&local_f0.x);
		iVar4 = (int)((float)(int)local_f4 * *(float *)&(this->parent).field_0x8);
		if (iVar4 == 0) {
		local_b8 = 0;
		local_bc = 0;
		local_c0 = 0.0;
		local_b4 = FLOAT_0038639c;
		}
		else {
		if ((*(byte *)&(this->parent).field1_0x4 & 4) == 0) {
		local_a0 = local_f0.z * local_e0.y - local_f0.y * local_e0.z;
		local_98 = local_f0.y * local_e0.x - local_e0.y * local_f0.x;
		local_9c = local_e0.z * local_f0.x - local_f0.z * local_e0.x;
		pfVar7 = &local_a0;
		local_94 = FLOAT_0038639c;
		}
		else {
		pfVar7 = (float *)&this[1].parent.field_0x1c;
		}
		FUN_000e9b00(&local_c0,pfVar7,iVar4,0);
		}
		if (pMVar2 != (Matrix4 *)0x0) {
		FUN_000e3460(local_50,&pMVar2->m11);
		thunk_FUN_00025aa0(local_50,(undefined (*) [16])&local_b0);
		}
		FUN_001f8270(param_3,&local_c0);
		FUN_001f8490(param_3,&local_b0.x,*(float *)&(this->parent).field_0x8);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily3EA::FUN_000f4b80(byte param_1, uint param_2, void* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily3EA::FUN_000f4b80(UnkFamily3EA *this,byte param_1,uint param_2,void *param_3){
		if ((char)param_2 == -1) {
		FUN_000f3fe0(this,param_1,param_3);
		return;
		}
		FUN_000f4650(this,param_1,param_2,param_3);
		return;
		}
		
	*/
	return;
}

void UnkFamily3EA::FUN_00083090(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily3EA::FUN_00083090(UnkFamily3EA *this,int param_1){
		uint uVar1;
		uVar1 = 0;
		do {
		FUN_001f9690(param_1,(byte)uVar1,(UnkFamily3Abstract *)this);
		uVar1 = uVar1 + 1;
		}
		 while (uVar1 < 2);
		return;
		}
		
	*/
	return;
}

void UnkFamily3EA::FUN_000830c0(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily3EA::FUN_000830c0(UnkFamily3EA *this,int param_1){
		uint uVar1;
		uVar1 = 0;
		do {
		FUN_001f9710(param_1,(byte)uVar1,this);
		uVar1 = uVar1 + 1;
		}
		 while (uVar1 < 2);
		return;
		}
		
	*/
	return;
}

uint UnkFamily3EA::FUN_000830f0(void* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall UnkFamily3EA::FUN_000830f0(UnkFamily3EA *this,void *param_1){
		byte bVar1;
		void *pvVar2;
		pvVar2 = param_1;
		bVar1 = *(byte *)(*(int *)(*(uint *)((int)param_1 + 8) + 0x54) + 0x50);
		if (bVar1 == 1) {
		param_1 = (void *)CONCAT31(param_1._1_3_,0xff);
		}
		else if (bVar1 == 0) {
		param_1 = (void *)CONCAT31(param_1._1_3_,1);
		}
		else {
		if ((bVar1 == 0) || (bVar1 != 0)) {
		return *(uint *)((int)param_1 + 8) & 0xffffff00;
		}
		param_1 = (void *)CONCAT31(param_1._1_3_,1);
		}
		FUN_000f4b80(this,bVar1,(uint)param_1,pvVar2);
		return (uint)param_1 & 0xffffff00 | 1;
		}
		
	*/
	return 0;
}

