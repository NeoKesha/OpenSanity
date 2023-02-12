#include "headers/Unknown/Families/Families0X/Family3/UnkFamily3C.h"

#include "headers/Known/Math/Matrix4.h"
void UnkFamily3C::Construct(uint ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily3C * __thiscall UnkFamily3C::Construct(UnkFamily3C *this,undefined4 ctx){
		*(undefined4 *)&this->field_0x4 = ctx;
		(this->parent).vtable = (UnkFamily3Abstract_VTable *)&UnkFamily3_VT_C;
		*(undefined4 *)&this->field_0x8 = 0;
		*(undefined4 *)&this->field_0xc = 0;
		this->field_0x10 = 0;
		this->field_0x24 = 0;
		this->field_0x25 = 0;
		Init(this);
		return this;
		}
		
	*/
	return;
}

void UnkFamily3C::Init() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily3C::Init(UnkFamily3C *this){
		int iVar1;
		int extraout_ECX;
		int extraout_ECX_00;
		int extraout_ECX_01;
		int extraout_ECX_02;
		int extraout_ECX_03;
		int extraout_ECX_04;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		iVar1 = BlackboardAbstract::GetIntValue(*(BlackboardAbstract **)(*(int *)&this->field_0x4 + 0x1c),0);
		switch(iVar1) {
		case 0:thunk_FUN_00096750((int)this,0xc);
		thunk_FUN_00086120(*(float **)&this->field_0xc);
		fVar7 = FLOAT_0038bfdc;
		fVar8 = FLOAT_0038bfd8;
		fVar6 = FLOAT_0038bfd4;
		fVar5 = FLOAT_0038bfd0;
		fVar4 = FLOAT_0038b834;
		fVar3 = FLOAT_0038b3cc;
		fVar2 = FLOAT_0038a934;
		*(undefined4 *)(extraout_ECX + 0x50) = 1;
		*(undefined4 *)(extraout_ECX + 0x58) = 1;
		*(undefined4 *)(extraout_ECX + 0x5c) = 0x14;
		*(float *)(extraout_ECX + 0x60) = fVar2;
		*(float *)(extraout_ECX + 100) = fVar4;
		*(float *)(extraout_ECX + 0x68) = fVar7;
		*(float *)(extraout_ECX + 0x6c) = fVar8;
		*(float *)(extraout_ECX + 0x70) = fVar6;
		*(float *)(extraout_ECX + 0x74) = fVar5;
		*(float *)(extraout_ECX + 0x78) = fVar3;
		*(undefined4 *)(extraout_ECX + 0x84) = 2;
		*(undefined4 *)(extraout_ECX + 0x88) = 0;
		*(undefined4 *)(extraout_ECX + 0x7c) = 0;
		*(undefined4 *)(extraout_ECX + 0x80) = 2;
		thunk_FUN_00086120((float *)(*(int *)&this->field_0xc + 0x90));
		fVar3 = FLOAT_0038b3cc;
		*(undefined4 *)(extraout_ECX_00 + 0x50) = 1;
		*(undefined4 *)(extraout_ECX_00 + 0x58) = 0;
		*(undefined4 *)(extraout_ECX_00 + 0x5c) = 0x15;
		*(float *)(extraout_ECX_00 + 0x60) = fVar2;
		*(float *)(extraout_ECX_00 + 100) = fVar4;
		*(float *)(extraout_ECX_00 + 0x68) = fVar7;
		*(float *)(extraout_ECX_00 + 0x6c) = fVar8;
		*(float *)(extraout_ECX_00 + 0x70) = fVar6;
		*(float *)(extraout_ECX_00 + 0x74) = fVar5;
		*(float *)(extraout_ECX_00 + 0x78) = fVar3;
		*(undefined4 *)(extraout_ECX_00 + 0x84) = 2;
		*(undefined4 *)(extraout_ECX_00 + 0x88) = 0;
		*(undefined4 *)(extraout_ECX_00 + 0x7c) = 0;
		*(undefined4 *)(extraout_ECX_00 + 0x80) = 2;
		thunk_FUN_00086120((float *)(*(int *)&this->field_0xc + 0x120));
		fVar8 = FLOAT_0038bfcc;
		fVar6 = FLOAT_0038b97c;
		fVar5 = FLOAT_0038b3d4;
		fVar3 = FLOAT_0038660c;
		*(undefined4 *)(extraout_ECX_01 + 0x50) = 1;
		*(undefined4 *)(extraout_ECX_01 + 0x58) = 9;
		*(undefined4 *)(extraout_ECX_01 + 0x5c) = 0x1a;
		*(float *)(extraout_ECX_01 + 0x60) = fVar2;
		*(float *)(extraout_ECX_01 + 100) = fVar4;
		*(float *)(extraout_ECX_01 + 0x68) = fVar8;
		*(float *)(extraout_ECX_01 + 0x6c) = fVar3;
		*(float *)(extraout_ECX_01 + 0x70) = fVar5;
		*(float *)(extraout_ECX_01 + 0x74) = fVar6;
		*(float *)(extraout_ECX_01 + 0x78) = fVar6;
		*(undefined4 *)(extraout_ECX_01 + 0x84) = 1;
		*(undefined4 *)(extraout_ECX_01 + 0x88) = 2;
		*(undefined4 *)(extraout_ECX_01 + 0x7c) = 0;
		*(undefined4 *)(extraout_ECX_01 + 0x80) = 1;
		thunk_FUN_00086120((float *)(*(int *)&this->field_0xc + 0x1b0));
		fVar3 = FLOAT_0038bfc8;
		*(undefined4 *)(extraout_ECX_02 + 0x50) = 1;
		*(undefined4 *)(extraout_ECX_02 + 0x58) = 10;
		*(undefined4 *)(extraout_ECX_02 + 0x5c) = 0x1b;
		*(float *)(extraout_ECX_02 + 0x60) = fVar2;
		*(float *)(extraout_ECX_02 + 100) = fVar4;
		*(float *)(extraout_ECX_02 + 0x68) = fVar8;
		*(float *)(extraout_ECX_02 + 0x6c) = fVar3;
		*(float *)(extraout_ECX_02 + 0x70) = fVar5;
		*(float *)(extraout_ECX_02 + 0x74) = fVar6;
		*(float *)(extraout_ECX_02 + 0x78) = fVar6;
		*(undefined4 *)(extraout_ECX_02 + 0x84) = 1;
		*(undefined4 *)(extraout_ECX_02 + 0x88) = 2;
		*(undefined4 *)(extraout_ECX_02 + 0x7c) = 0;
		*(undefined4 *)(extraout_ECX_02 + 0x80) = 1;
		iVar1 = *(int *)&this->field_0xc;
		*(undefined4 *)(iVar1 + 0x290) = 2;
		*(undefined4 *)(iVar1 + 0x29c) = 6;
		iVar1 = *(int *)&this->field_0xc;
		*(undefined4 *)(iVar1 + 800) = 2;
		*(undefined4 *)(iVar1 + 0x32c) = 9;
		iVar1 = *(int *)&this->field_0xc;
		*(undefined4 *)(iVar1 + 0x3b0) = 2;
		*(undefined4 *)(iVar1 + 0x3bc) = 7;
		iVar1 = *(int *)&this->field_0xc;
		*(undefined4 *)(iVar1 + 0x440) = 2;
		*(undefined4 *)(iVar1 + 0x44c) = 10;
		fVar3 = FLOAT_0038b718;
		iVar1 = *(int *)&this->field_0xc;
		*(undefined4 *)(iVar1 + 0x4d0) = 2;
		*(undefined4 *)(iVar1 + 0x4dc) = 8;
		iVar1 = *(int *)&this->field_0xc;
		*(undefined4 *)(iVar1 + 0x560) = 2;
		*(undefined4 *)(iVar1 + 0x56c) = 0xb;
		iVar1 = *(int *)&this->field_0xc;
		*(undefined4 *)(iVar1 + 0x5f0) = 3;
		*(undefined4 *)(iVar1 + 0x5fc) = 5;
		*(float *)(iVar1 + 0x5f4) = fVar3;
		iVar1 = *(int *)&this->field_0xc;
		*(undefined4 *)(iVar1 + 0x680) = 4;
		*(undefined4 *)(iVar1 + 0x68c) = 0x1c;
		this->field_0x24 = 1;
		this->field_0x25 = 1;
		break;
		case 1:thunk_FUN_00096750((int)this,8);
		iVar1 = *(int *)&this->field_0xc;
		*(undefined4 *)(iVar1 + 0x5c) = 6;
		*(undefined4 *)(iVar1 + 0x50) = 2;
		iVar1 = *(int *)&this->field_0xc;
		*(undefined4 *)(iVar1 + 0xe0) = 2;
		*(undefined4 *)(iVar1 + 0xec) = 9;
		iVar1 = *(int *)&this->field_0xc;
		*(undefined4 *)(iVar1 + 0x170) = 2;
		*(undefined4 *)(iVar1 + 0x17c) = 7;
		iVar1 = *(int *)&this->field_0xc;
		*(undefined4 *)(iVar1 + 0x200) = 2;
		*(undefined4 *)(iVar1 + 0x20c) = 10;
		iVar1 = *(int *)&this->field_0xc;
		*(undefined4 *)(iVar1 + 0x290) = 2;
		*(undefined4 *)(iVar1 + 0x29c) = 8;
		iVar1 = *(int *)&this->field_0xc;
		*(undefined4 *)(iVar1 + 800) = 2;
		*(undefined4 *)(iVar1 + 0x32c) = 0xb;
		thunk_FUN_00086120((float *)(*(int *)&this->field_0xc + 0x360));
		fVar7 = FLOAT_0038bfcc;
		fVar8 = FLOAT_0038bfc4;
		fVar6 = FLOAT_0038ba90;
		fVar4 = FLOAT_0038b97c;
		fVar5 = FLOAT_0038b834;
		fVar2 = FLOAT_0038b824;
		fVar3 = FLOAT_0038a934;
		*(undefined4 *)(extraout_ECX_03 + 0x50) = 1;
		*(undefined4 *)(extraout_ECX_03 + 0x58) = 9;
		*(undefined4 *)(extraout_ECX_03 + 0x5c) = 0x1a;
		*(float *)(extraout_ECX_03 + 0x60) = fVar3;
		*(float *)(extraout_ECX_03 + 100) = fVar5;
		*(float *)(extraout_ECX_03 + 0x68) = fVar7;
		*(float *)(extraout_ECX_03 + 0x6c) = fVar6;
		*(float *)(extraout_ECX_03 + 0x70) = fVar8;
		*(float *)(extraout_ECX_03 + 0x74) = fVar2;
		*(float *)(extraout_ECX_03 + 0x78) = fVar4;
		*(undefined4 *)(extraout_ECX_03 + 0x84) = 1;
		*(undefined4 *)(extraout_ECX_03 + 0x88) = 2;
		*(undefined4 *)(extraout_ECX_03 + 0x7c) = 0;
		*(undefined4 *)(extraout_ECX_03 + 0x80) = 1;
		thunk_FUN_00086120((float *)(*(int *)&this->field_0xc + 0x3f0));
		fVar6 = FLOAT_0038be7c;
		*(undefined4 *)(extraout_ECX_04 + 0x50) = 1;
		*(undefined4 *)(extraout_ECX_04 + 0x58) = 10;
		*(undefined4 *)(extraout_ECX_04 + 0x5c) = 0x1b;
		*(float *)(extraout_ECX_04 + 0x60) = fVar3;
		*(float *)(extraout_ECX_04 + 100) = fVar5;
		*(float *)(extraout_ECX_04 + 0x68) = fVar7;
		*(float *)(extraout_ECX_04 + 0x6c) = fVar6;
		*(float *)(extraout_ECX_04 + 0x70) = fVar8;
		*(float *)(extraout_ECX_04 + 0x74) = fVar2;
		*(float *)(extraout_ECX_04 + 0x78) = fVar4;
		*(undefined4 *)(extraout_ECX_04 + 0x84) = 1;
		*(undefined4 *)(extraout_ECX_04 + 0x88) = 2;
		*(undefined4 *)(extraout_ECX_04 + 0x7c) = 0;
		*(undefined4 *)(extraout_ECX_04 + 0x80) = 1;
		this->field_0x24 = 1;
		break;
		case 2:case 3:this->field_0x24 = 1;
		thunk_FUN_00096750((int)this,6);
		iVar1 = *(int *)&this->field_0xc;
		*(undefined4 *)(iVar1 + 0x5c) = 6;
		*(undefined4 *)(iVar1 + 0x50) = 2;
		iVar1 = *(int *)&this->field_0xc;
		*(undefined4 *)(iVar1 + 0xe0) = 2;
		*(undefined4 *)(iVar1 + 0xec) = 9;
		iVar1 = *(int *)&this->field_0xc;
		*(undefined4 *)(iVar1 + 0x170) = 2;
		*(undefined4 *)(iVar1 + 0x17c) = 7;
		iVar1 = *(int *)&this->field_0xc;
		*(undefined4 *)(iVar1 + 0x200) = 2;
		*(undefined4 *)(iVar1 + 0x20c) = 10;
		iVar1 = *(int *)&this->field_0xc;
		*(undefined4 *)(iVar1 + 0x290) = 2;
		*(undefined4 *)(iVar1 + 0x29c) = 8;
		iVar1 = *(int *)&this->field_0xc;
		*(undefined4 *)(iVar1 + 800) = 2;
		*(undefined4 *)(iVar1 + 0x32c) = 0xb;
		break;
		case 5:this->field_0x24 = 0;
		}
		fVar3 = FLOAT_0038639c;
		*(float *)&this->field_0x18 = FLOAT_0038639c;
		*(float *)&this->field_0x14 = fVar3;
		*(undefined4 *)&this->field_0x20 = 0;
		*(undefined4 *)&this->field_0x1c = 0;
		*(float *)&this->field_0x28 = fVar3;
		*(undefined4 *)&this->field_0x2c = 0;
		return;
		}
		
	*/
	return;
}

void UnkFamily3C::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily3C::Dispose(UnkFamily3C *this){
		char cVar1;
		cVar1 = this->field_0x10;
		(this->parent).vtable = (UnkFamily3Abstract_VTable *)&UnkFamily3_VT_C;
		if (cVar1 != '\0') {
		FUN_001f8830(this,*(InstanceContext **)(*(int *)&this->field_0x4 + 0x10));
		}
		if (*(int *)&this->field_0xc != 0) {
		VirtualPool::FreeMemory((void *)(*(int *)&this->field_0xc + -0x10));
		}
		(this->parent).vtable = (UnkFamily3Abstract_VTable *)&UnkFamily3_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void UnkFamily3C::FUN_0007e8e0(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily3C::FUN_0007e8e0(UnkFamily3C *this,int param_1){
		int iVar1;
		int iVar2;
		iVar2 = 0;
		if (0 < *(int *)&this->field_0x8) {
		iVar1 = 0;
		do {
		FUN_001f9690(param_1,*(byte *)(iVar1 + 0x5c + *(int *)&this->field_0xc),&this->parent);
		iVar2 = iVar2 + 1;
		iVar1 = iVar1 + 0x90;
		}
		 while (iVar2 < *(int *)&this->field_0x8);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily3C::FUN_0007e920(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily3C::FUN_0007e920(UnkFamily3C *this,int param_1){
		int iVar1;
		int iVar2;
		iVar2 = 0;
		if (0 < *(int *)&this->field_0x8) {
		iVar1 = 0;
		do {
		FUN_001f9710(param_1,*(byte *)(iVar1 + 0x5c + *(int *)&this->field_0xc),this);
		iVar2 = iVar2 + 1;
		iVar1 = iVar1 + 0x90;
		}
		 while (iVar2 < *(int *)&this->field_0x8);
		}
		return;
		}
		
	*/
	return;
}

bool UnkFamily3C::FUN_00085a00(void* param_1, Matrix4* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall UnkFamily3C::FUN_00085a00(UnkFamily3C *this,void *param_1,Matrix4 *param_2){
		int iVar1;
		char cVar2;
		int iVar3;
		InstanceTransform *transform;
		float fVar4;
		int iVar5;
		uint *puVar6;
		float fVar7;
		float local_148;
		Matrix4 *local_144;
		Matrix4 local_140;
		float local_100;
		float local_fc;
		float local_f8;
		float local_f4;
		Matrix4 local_f0;
		Matrix4 local_b0;
		Vector4 local_70;
		Vector4 local_60;
		Matrix4 local_50;
		fVar4 = FLOAT_0038b694;
		iVar3 = *(int *)(*(int *)((int)param_1 + 8) + 0x54);
		local_144 = *(Matrix4 **)(*(int *)((int)param_1 + 8) + 0x60);
		iVar5 = 0;
		if (0 < *(int *)&this->field_0x8) {
		puVar6 = (uint *)(*(int *)&this->field_0xc + 0x5c);
		do {
		if (*puVar6 == (uint)*(byte *)(iVar3 + 0x50)) break;
		iVar5 = iVar5 + 1;
		puVar6 = puVar6 + 0x24;
		}
		 while (iVar5 < *(int *)&this->field_0x8);
		}
		iVar5 = iVar5 * 0x90;
		iVar1 = iVar5 + *(int *)&this->field_0xc;
		switch(*(undefined4 *)(iVar1 + 0x50)) {
		case 1:Vector4::FromRotation(&local_70,*(int *)(iVar1 + 0x30),*(int *)(iVar1 + 0x34),*(int *)(iVar1 + 0x38));
		FUN_001f8270(param_1,&local_70.x);
		return true;
		case 2:break;
		case 3:local_f4 = FLOAT_0038639c;
		local_100 = 0.0 - (*(float *)(iVar1 + 0x44) * 0.0 - *(float *)(iVar1 + 0x48));
		local_fc = 0.0 - (*(float *)(iVar1 + 0x48) * 0.0 - *(float *)(iVar1 + 0x40) * 0.0);
		local_f8 = 0.0 - (*(float *)(iVar1 + 0x40) - *(float *)(iVar1 + 0x44) * 0.0);
		fVar7 = SQRT(local_f8 * local_f8 + local_fc * local_fc + local_100 * local_100);
		local_148 = fVar7;
		if (FLOAT_0038b694 < fVar7) {
		iVar3 = *(int *)&this->field_0xc;
		FUN_000d25e0(&local_148,*(float *)(iVar5 + 0x48 + iVar3) * 0.0 + *(float *)(iVar5 + iVar3 + 0x44) +*(float *)(iVar5 + 0x40 + iVar3) * 0.0);
		FUN_000e9b00(&local_60,&local_100,(int)local_148,0);
		}
		FUN_001f9070(param_1,local_144,'\x01',param_2);
		local_b0.m11 = param_2->m11;
		local_b0.m12 = param_2->m12;
		local_b0.m13 = param_2->m13;
		local_b0.m14 = param_2->m14;
		transform = *(InstanceTransform **)(*(int *)(*(int *)&this->field_0x4 + 0x10) + 0x18);
		local_b0.m21 = param_2->m21;
		local_b0.m22 = param_2->m22;
		local_b0.m23 = param_2->m23;
		local_b0.m24 = param_2->m24;
		local_b0.m31 = param_2->m31;
		local_b0.m32 = param_2->m32;
		local_b0.m33 = param_2->m33;
		local_b0.m34 = param_2->m34;
		local_b0.m41 = 0.0;
		local_b0.m42 = 0.0;
		local_b0.m43 = 0.0;
		local_b0.m44 = FLOAT_0038639c;
		InstanceTransform::FillMatrix(transform);
		local_140.m11 = (transform->matrix).m11;
		local_140.m12 = (transform->matrix).m12;
		local_140.m13 = (transform->matrix).m13;
		local_140.m14 = (transform->matrix).m14;
		local_140.m21 = (transform->matrix).m21;
		local_140.m22 = (transform->matrix).m22;
		local_140.m23 = (transform->matrix).m23;
		local_140.m24 = (transform->matrix).m24;
		local_140.m31 = (transform->matrix).m31;
		local_140.m32 = (transform->matrix).m32;
		local_140.m33 = (transform->matrix).m33;
		local_140.m34 = (transform->matrix).m34;
		local_140.m41 = Vector4_0039ef70.x;
		local_140.m42 = Vector4_0039ef70.y;
		local_140.m43 = Vector4_0039ef70.z;
		local_140.m44 = FLOAT_0038639c;
		local_50.m41 = Vector4_0039ef70.x;
		local_50.m42 = Vector4_0039ef70.y;
		local_50.m43 = Vector4_0039ef70.z;
		local_50.m44 = FLOAT_0038639c;
		local_50.m11 = local_140.m11;
		local_50.m12 = local_140.m12;
		local_50.m13 = local_140.m13;
		local_50.m14 = local_140.m14;
		local_50.m21 = local_140.m21;
		local_50.m22 = local_140.m22;
		local_50.m23 = local_140.m23;
		local_50.m24 = local_140.m24;
		local_50.m31 = local_140.m31;
		local_50.m32 = local_140.m32;
		local_50.m33 = local_140.m33;
		local_50.m34 = local_140.m34;
		Matrix4::FUN_000d4180(&local_50);
		if (fVar4 < fVar7) {
		Matrix4::FUN_000d9f80(&local_f0,&local_60);
		local_f0.m41 = Vector4_0039ef70.x;
		local_f0.m42 = Vector4_0039ef70.y;
		local_f0.m43 = Vector4_0039ef70.z;
		local_f0.m44 = FLOAT_0038639c;
		FUN_000d84c0(&local_f0,&local_140);
		Matrix4::FUN_000d8470(&local_f0,&local_50);
		Matrix4::Multiply4443(&local_b0,&local_f0,&local_140);
		local_b0.m11 = local_140.m11;
		local_b0.m12 = local_140.m12;
		local_b0.m13 = local_140.m13;
		local_b0.m14 = local_140.m14;
		local_b0.m21 = local_140.m21;
		local_b0.m22 = local_140.m22;
		local_b0.m23 = local_140.m23;
		local_b0.m24 = local_140.m24;
		local_b0.m31 = local_140.m31;
		local_b0.m32 = local_140.m32;
		local_b0.m33 = local_140.m33;
		local_b0.m34 = local_140.m34;
		}
		*(undefined (*) [16])param_2 =CONCAT412(local_b0.m14,CONCAT48(local_b0.m13,CONCAT44(local_b0.m12,local_b0.m11)));
		*(undefined (*) [16])&param_2->m21 =CONCAT412(local_b0.m24,CONCAT48(local_b0.m23,CONCAT44(local_b0.m22,local_b0.m21)));
		*(undefined (*) [16])&param_2->m31 =CONCAT412(local_b0.m34,CONCAT48(local_b0.m33,CONCAT44(local_b0.m32,local_b0.m31)));
		param_2->m41 = param_2->m41;
		param_2->m42 = param_2->m42;
		param_2->m43 = param_2->m43;
		param_2->m44 = param_2->m44;
		return true;
		case 4:FUN_001f9070(param_1,local_144,'\x01',param_2);
		local_f0.m11 = param_2->m11;
		local_f0.m12 = param_2->m12;
		local_f0.m13 = param_2->m13;
		local_f0.m14 = param_2->m14;
		local_f0.m21 = param_2->m21;
		local_f0.m22 = param_2->m22;
		local_f0.m23 = param_2->m23;
		local_f0.m24 = param_2->m24;
		local_f0.m31 = param_2->m31;
		local_f0.m32 = param_2->m32;
		local_f0.m33 = param_2->m33;
		local_f0.m34 = param_2->m34;
		local_f0.m41 = 0.0;
		local_f0.m42 = 0.0;
		local_f0.m43 = 0.0;
		local_f0.m44 = FLOAT_0038639c;
		Matrix4::Construct1(&local_50);
		local_50.m11 = FLOAT_0038639c;
		local_50.m22 = FLOAT_0038639c;
		local_50.m33 = *(float *)&this->field_0x28;
		Matrix4::Multiply4443(&local_50,&local_f0,&local_140);
		param_2->m11 = local_140.m11;
		param_2->m12 = local_140.m12;
		param_2->m13 = local_140.m13;
		param_2->m14 = local_140.m14;
		param_2->m21 = local_140.m21;
		param_2->m22 = local_140.m22;
		param_2->m23 = local_140.m23;
		param_2->m24 = local_140.m24;
		param_2->m31 = local_140.m31;
		param_2->m32 = local_140.m32;
		param_2->m33 = local_140.m33;
		param_2->m34 = local_140.m34;
		param_2->m41 = param_2->m41;
		param_2->m42 = param_2->m42;
		param_2->m43 = param_2->m43;
		param_2->m44 = param_2->m44;
		default:return true;
		}
		FUN_001f9070(param_1,local_144,'\x01',param_2);
		local_f0.m11 = param_2->m11;
		local_f0.m12 = param_2->m12;
		local_f0.m13 = param_2->m13;
		local_f0.m14 = param_2->m14;
		local_f0.m21 = param_2->m21;
		local_f0.m22 = param_2->m22;
		local_f0.m23 = param_2->m23;
		local_f0.m24 = param_2->m24;
		local_f0.m31 = param_2->m31;
		local_f0.m32 = param_2->m32;
		local_f0.m33 = param_2->m33;
		local_f0.m34 = param_2->m34;
		local_f0.m41 = 0.0;
		local_f0.m42 = 0.0;
		local_f0.m43 = 0.0;
		local_f0.m44 = FLOAT_0038639c;
		Matrix4::Construct1(&local_140);
		cVar2 = *(char *)(iVar3 + 0x50);
		if (cVar2 == '\x06') {
		local_140.m22 = *(float *)&this->field_0x14;
		}
		else if (cVar2 == '\t') {
		local_140.m22 = *(float *)&this->field_0x18;
		}
		if (cVar2 == '\a') {
		local_140.m22 = FLOAT_0038639c;
		}
		else if (cVar2 == '\n') {
		local_140.m22 = FLOAT_0038639c;
		}
		if (cVar2 == '\b') {
		local_140.m22 = *(float *)&this->field_0x14;
		local_140.m32 = *(float *)&this->field_0x1c;
		}
		else {
		if (cVar2 != '\v') goto LAB_00085b98;
		local_140.m22 = *(float *)&this->field_0x18;
		local_140.m32 = *(float *)&this->field_0x20;
		}
		local_140.m22 = FLOAT_0038639c / local_140.m22;
		local_140.m32 = 0.0 - local_140.m32;
		LAB_00085b98:Matrix4::Multiply4443(&local_f0,&local_140,&local_b0);
		param_2->m11 = local_b0.m11;
		param_2->m12 = local_b0.m12;
		param_2->m13 = local_b0.m13;
		param_2->m14 = local_b0.m14;
		param_2->m21 = local_b0.m21;
		param_2->m22 = local_b0.m22;
		param_2->m23 = local_b0.m23;
		param_2->m24 = local_b0.m24;
		param_2->m31 = local_b0.m31;
		param_2->m32 = local_b0.m32;
		param_2->m33 = local_b0.m33;
		param_2->m34 = local_b0.m34;
		param_2->m41 = param_2->m41;
		param_2->m42 = param_2->m42;
		param_2->m43 = param_2->m43;
		param_2->m44 = param_2->m44;
		return true;
		}
		
	*/
	return false;
}

void UnkFamily3C::Dispose_6(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily3Abstract * __thiscall UnkFamily3C::Dispose(UnkFamily3C *this,byte param_1){
		char cVar1;
		cVar1 = this->field_0x10;
		(this->parent).vtable = (UnkFamily3Abstract_VTable *)&UnkFamily3_VT_C;
		if (cVar1 != '\0') {
		FUN_001f8830(this,*(InstanceContext **)(*(int *)&this->field_0x4 + 0x10));
		}
		if (*(int *)&this->field_0xc != 0) {
		VirtualPool::FreeMemory((void *)(*(int *)&this->field_0xc + -0x10));
		}
		(this->parent).vtable = (UnkFamily3Abstract_VTable *)&UnkFamily3_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

