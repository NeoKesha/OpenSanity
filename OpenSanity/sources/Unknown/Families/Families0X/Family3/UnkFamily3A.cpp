#include "headers/Unknown/Families/Families0X/Family3/UnkFamily3A.h"

void UnkFamily3A::FUN_00038bd0(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily3A::FUN_00038bd0(UnkFamily3A *this,int param_1){
		this->field48_0x36 = 1;
		this->field202_0xd6 = 1;
		this->field356_0x176 = 1;
		FUN_001f9690(param_1,this->field52_0x40,&this->parent);
		FUN_001f9690(param_1,this->field206_0xe0,&this->parent);
		FUN_001f9690(param_1,this->field360_0x180,&this->parent);
		return;
		}
		
	*/
	return;
}

void UnkFamily3A::FUN_00038c20(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily3A::FUN_00038c20(UnkFamily3A *this,int param_1){
		FUN_001f9710(param_1,this->field52_0x40,this);
		FUN_001f9710(param_1,this->field206_0xe0,this);
		FUN_001f9710(param_1,this->field360_0x180,this);
		return;
		}
		
	*/
	return;
}

bool UnkFamily3A::FUN_00049a10(void* param_1, float* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address bool __thiscall UnkFamily3A::FUN_00049a10(UnkFamily3A *this,void *param_1,float *param_2){
		byte bVar1;
		InstanceTransform *transform;
		int iVar2;
		void *this_00;
		float fVar3;
		float fVar4;
		float local_180;
		float local_17c;
		float local_178;
		float local_174;
		float local_168;
		float local_164;
		float local_160;
		float local_15c;
		float local_158;
		float local_154;
		Matrix4 local_150;
		Matrix4 local_110;
		Matrix4 local_d0;
		float local_90;
		float fStack140;
		float fStack136;
		float fStack132;
		float local_80;
		float fStack124;
		float fStack120;
		float fStack116;
		float local_70;
		float fStack108;
		float fStack104;
		float fStack100;
		float local_60;
		float fStack92;
		float fStack88;
		float fStack84;
		Matrix4 local_50;
		bVar1 = *(byte *)(*(int *)(*(int *)((int)param_1 + 8) + 0x54) + 0x50);
		if (bVar1 == this->field52_0x40) {
		this_00 = &this->field_0x30;
		}
		else if (bVar1 == this->field206_0xe0) {
		this_00 = &this->field_0xd0;
		}
		else {
		if (bVar1 != this->field360_0x180) {
		return false;
		}
		this_00 = &this->field_0x170;
		}
		FUN_001f9070(param_1,*(Matrix4 **)(*(int *)((int)param_1 + 8) + 0x60),'\x01',&local_110);
		local_160 = local_110.m41;
		local_15c = local_110.m42;
		local_158 = local_110.m43;
		local_154 = local_110.m44;
		local_150.m11 = local_110.m11;
		local_150.m12 = local_110.m12;
		local_150.m13 = local_110.m13;
		local_150.m14 = local_110.m14;
		local_150.m21 = local_110.m21;
		local_150.m22 = local_110.m22;
		local_150.m23 = local_110.m23;
		local_150.m24 = local_110.m24;
		local_150.m31 = local_110.m31;
		local_150.m32 = local_110.m32;
		local_150.m33 = local_110.m33;
		local_150.m34 = local_110.m34;
		local_150.m41 = local_110.m41;
		local_150.m42 = local_110.m42;
		local_150.m43 = local_110.m43;
		local_150.m44 = local_110.m44;
		transform = (((this->field1_0x4->parent).ctx)->parent).transform;
		InstanceTransform::FillMatrix(transform);
		local_d0.m11 = (transform->matrix).m11;
		local_d0.m12 = (transform->matrix).m12;
		local_d0.m13 = (transform->matrix).m13;
		local_d0.m14 = (transform->matrix).m14;
		local_d0.m21 = (transform->matrix).m21;
		local_d0.m22 = (transform->matrix).m22;
		local_d0.m23 = (transform->matrix).m23;
		local_d0.m24 = (transform->matrix).m24;
		local_d0.m31 = (transform->matrix).m31;
		local_d0.m32 = (transform->matrix).m32;
		local_d0.m33 = (transform->matrix).m33;
		local_d0.m34 = (transform->matrix).m34;
		local_d0.m41 = (transform->matrix).m41;
		local_d0.m42 = (transform->matrix).m42;
		local_d0.m43 = (transform->matrix).m43;
		local_d0.m44 = (transform->matrix).m44;
		Matrix4::FUN_000d4180(&local_d0);
		Matrix4::FUN_000d8470(&local_150,&transform->matrix);
		if (*(int *)&this->field_0x20 == 1) {
		local_180 = *(float *)&this->field_0x10;
		local_17c = *(float *)&this->field_0x14;
		local_178 = *(float *)&this->field_0x18;
		}
		else {
		if (*(int *)&this->field_0x20 != 2) {
		return false;
		}
		iVar2 = *(int *)(*(int *)&this->field_0x8 + 0x18);
		if ((*(byte *)(iVar2 + 0x60) & 4) != 0) {
		*(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(iVar2 + 0x30);
		*(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(iVar2 + 0x34);
		*(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(iVar2 + 0x38);
		*(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(iVar2 + 0x3c);
		*(uint *)(iVar2 + 0x60) = *(uint *)(iVar2 + 0x60) & 0xfffffffa;
		}
		local_180 = *(float *)(iVar2 + 0x40);
		local_17c = *(float *)(iVar2 + 0x44);
		local_178 = *(float *)(iVar2 + 0x48);
		}
		local_17c = local_17c - local_150.m42;
		local_178 = local_178 - local_150.m43;
		local_180 = local_180 - local_150.m41;
		fVar3 = local_178 * local_178 + local_17c * local_17c + local_180 * local_180;
		local_174 = FLOAT_0038639c;
		if (fVar3 <= _DAT_0039d860) {
		fVar4 = 0.0;
		}
		else {
		local_168 = SQRT(fVar3);
		fVar4 = FLOAT_0038639c / local_168;
		local_164 = fVar3;
		}
		local_180 = local_180 * fVar4;
		local_17c = local_17c * fVar4;
		local_178 = local_178 * fVar4;
		FUN_000e8990(&local_90,&local_180);
		local_50.m11 = local_90;
		local_50.m12 = fStack140;
		local_50.m13 = fStack136;
		local_50.m14 = fStack132;
		local_50.m21 = local_80;
		local_50.m22 = fStack124;
		local_50.m23 = fStack120;
		local_50.m24 = fStack116;
		local_50.m31 = local_70;
		local_50.m32 = fStack108;
		local_50.m33 = fStack104;
		local_50.m34 = fStack100;
		local_50.m41 = local_60;
		local_50.m42 = fStack92;
		local_50.m43 = fStack88;
		local_50.m44 = fStack84;
		Matrix4::FUN_000d8470(&local_50,&local_d0);
		*param_2 = local_150.m11;
		param_2[1] = local_150.m12;
		param_2[2] = local_150.m13;
		param_2[3] = local_150.m14;
		param_2[4] = local_150.m21;
		param_2[5] = local_150.m22;
		param_2[6] = local_150.m23;
		param_2[7] = local_150.m24;
		param_2[8] = local_150.m31;
		param_2[9] = local_150.m32;
		param_2[10] = local_150.m33;
		param_2[0xb] = local_150.m34;
		param_2[0xc] = local_150.m41;
		param_2[0xd] = local_150.m42;
		param_2[0xe] = local_150.m43;
		param_2[0xf] = local_150.m44;
		thunk_FUN_00044490(this_00,param_2,&local_90,&local_110);
		Matrix4::FUN_000d8470((Matrix4 *)param_2,&local_d0);
		param_2[0xc] = local_160;
		param_2[0xd] = local_15c;
		param_2[0xe] = local_158;
		param_2[0xf] = local_154;
		return true;
		}
		
	*/
	return false;
}

void UnkFamily3A::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily3A::Construct(UnkFamily3A *this){
		float fVar1;
		float fVar2;
		fVar2 = FLOAT_00386608;
		fVar1 = FLOAT_0038639c;
		(this->parent).vtable = (UnkFamily3Abstract_VTable *)&UnkFamily3_VT_A;
		this->field1_0x4 = (InstanceContext *)0x0;
		this->field_0x34 = 0;
		this->field48_0x36 = 0;
		this->field50_0x38 = fVar1;
		this->field51_0x3c = fVar2;
		this->field52_0x40 = 0xff;
		this->field_0x35 = 1;
		this->field_0x37 = 1;
		this->field_0xd4 = 0;
		this->field_0xd5 = 1;
		this->field202_0xd6 = 0;
		this->field_0xd7 = 1;
		this->field204_0xd8 = fVar1;
		this->field205_0xdc = fVar2;
		this->field206_0xe0 = 0xff;
		this->field_0x174 = 0;
		this->field_0x175 = 1;
		this->field356_0x176 = 0;
		this->field_0x177 = 1;
		this->field358_0x178 = fVar1;
		this->field359_0x17c = fVar2;
		this->field360_0x180 = 0xff;
		return;
		}
		
	*/
	return;
}

void UnkFamily3A::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily3Abstract * __thiscall UnkFamily3A::Dispose(UnkFamily3A *this,byte param_1){
		(this->parent).vtable = (UnkFamily3Abstract_VTable *)&UnkFamily3_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

