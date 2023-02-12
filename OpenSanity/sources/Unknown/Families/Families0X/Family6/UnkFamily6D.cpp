#include "headers/Unknown/Families/Families0X/Family6/UnkFamily6D.h"

#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/InstanceNodeKSubA.h"
void UnkFamily6D::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily6D::CleanUp(UnkFamily6D *this){
		InstanceNodePhysics *node;
		(this->parent).vtable = &UnkFamily6_VT_D;
		thunk_FUN_0008eb30((int)&this->field_0x470);
		thunk_FUN_0008eb30((int)&this->field_0x290);
		FUN_001e2ba0((int)&this->field_0x1c0);
		(this->parent).vtable = &UnkFamily6_VT_Abstract;
		node = (InstanceNodePhysics *)InstanceDataList::GetNode((InstanceDataList *)(*(int *)((this->parent).field14_0x14 + 0x10) + 0xe4),Physics);
		if (node != (InstanceNodePhysics *)0x0) {
		FUN_001dde00(PTR_003e6bf4,node);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily6D::Init(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily6D::Init(int *param_1){
		float fVar1;
		float fVar2;
		InstanceTransform *transform;
		float fVar3;
		uint *puVar4;
		float fVar5;
		fVar1 = FLOAT_0038b86c;
		param_1[0x3c] = (int)FLOAT_0038b86c;
		param_1[0x3d] = (int)fVar1;
		param_1[0x3e] = (int)FLOAT_0038adb8;
		param_1[0x3f] = (int)FLOAT_0038639c;
		param_1[0x40] = (int)FLOAT_00387b44;
		param_1[0x41] = (int)FLOAT_0038a82c;
		Matrix4::Construct1((Matrix4 *)(param_1 + 0x44));
		transform = *(InstanceTransform **)(*(int *)(param_1[5] + 0x10) + 0x18);
		InstanceTransform::FillMatrix(transform);
		fVar1 = (transform->matrix).m12;
		fVar2 = (transform->matrix).m13;
		fVar5 = (transform->matrix).m14;
		((Matrix4 *)(param_1 + 0x44))->m11 = (transform->matrix).m11;
		param_1[0x45] = (int)fVar1;
		param_1[0x46] = (int)fVar2;
		param_1[0x47] = (int)fVar5;
		fVar1 = (transform->matrix).m22;
		fVar2 = (transform->matrix).m23;
		fVar5 = (transform->matrix).m24;
		param_1[0x48] = (int)(transform->matrix).m21;
		param_1[0x49] = (int)fVar1;
		param_1[0x4a] = (int)fVar2;
		param_1[0x4b] = (int)fVar5;
		fVar1 = (transform->matrix).m32;
		fVar2 = (transform->matrix).m33;
		fVar5 = (transform->matrix).m34;
		param_1[0x4c] = (int)(transform->matrix).m31;
		param_1[0x4d] = (int)fVar1;
		param_1[0x4e] = (int)fVar2;
		param_1[0x4f] = (int)fVar5;
		fVar1 = (transform->matrix).m42;
		fVar2 = (transform->matrix).m43;
		fVar5 = (transform->matrix).m44;
		param_1[0x50] = (int)(transform->matrix).m41;
		param_1[0x51] = (int)fVar1;
		param_1[0x52] = (int)fVar2;
		param_1[0x53] = (int)fVar5;
		param_1[0x51] = (int)((float)param_1[0x3d] + (float)param_1[0x51]);
		fVar3 = FLOAT_0038b9f8;
		param_1[0x54] = 0;
		fVar1 = (transform->matrix).m32;
		fVar2 = (transform->matrix).m33;
		param_1[0x58] = (int)((transform->matrix).m31 * fVar3);
		fVar5 = FLOAT_0038639c;
		param_1[0x5b] = (int)FLOAT_0038639c;
		param_1[0x59] = (int)(fVar1 * fVar3);
		param_1[0x5a] = (int)(fVar2 * fVar3);
		param_1[0x5c] = param_1[0x58];
		param_1[0x5d] = param_1[0x59];
		param_1[0x5e] = param_1[0x5a];
		param_1[0x5f] = param_1[0x5b];
		param_1[100] = 0;
		param_1[0x65] = (int)fVar5;
		param_1[0x66] = 0;
		param_1[0x67] = (int)fVar5;
		*(undefined *)(param_1 + 0x68) = 1;
		*(undefined *)((int)param_1 + 0x1a1) = 0;
		param_1[0x69] = 0;
		param_1[0x6a] = 0;
		param_1[0x6c] = 0;
		param_1[0x6d] = 0;
		*(undefined *)(param_1 + 0x6b) = 0;
		*(undefined *)((int)param_1 + 0x1ad) = 0;
		*(undefined *)((int)param_1 + 0x1ae) = 0;
		*(undefined *)((int)param_1 + 0x1af) = 0;
		param_1[0x85] = 0;
		param_1[0x86] = 0;
		param_1[0x87] = 0;
		param_1[0x88] = 0;
		param_1[0x89] = 0;
		*(undefined *)(param_1 + 0x8a) = 0;
		param_1[0x8b] = 0x6f;
		param_1[0x8c] = 0x6f;
		param_1[0x8d] = (int)fVar5;
		param_1[0x9d] = (int)FLOAT_00387b44;
		fVar1 = FLOAT_0038660c;
		param_1[0x98] = 0;
		param_1[0x99] = 0;
		*(undefined *)(param_1 + 0x8e) = 0;
		param_1[0x9a] = 0;
		param_1[0x9b] = 0;
		param_1[0x9e] = (int)fVar1;
		*(undefined *)(param_1 + 0x9c) = 0;
		param_1[0x9f] = 0;
		param_1[0xa0] = (int)fVar5;
		*(undefined *)(param_1 + 0xa1) = 0;
		thunk_FUN_000820d0((undefined *)(param_1 + 0xa4));
		thunk_FUN_000820d0((undefined *)(param_1 + 0x11c));
		param_1[0x90] = (int)Vector4_0039ef70.x;
		param_1[0x91] = (int)Vector4_0039ef70.y;
		param_1[0x92] = (int)Vector4_0039ef70.z;
		param_1[0x93] = (int)fVar5;
		param_1[0x94] = (int)Vector4_0039ef70.x;
		param_1[0x95] = (int)Vector4_0039ef70.y;
		param_1[0x96] = (int)Vector4_0039ef70.z;
		param_1[0x97] = (int)fVar5;
		param_1[0x84] = 0;
		puVar4 = InstanceContext::FUN_000f7220(*(InstanceContext **)(param_1[5] + 0x10));
		param_1[0x194] = puVar4[1];
		UnkFamily6Abstract::thunk_FUN_000870c0((UnkFamily6Abstract *)param_1);
		return;
		}
		
	*/
	return;
}

void UnkFamily6D::Construct(int param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily6D * __thiscall UnkFamily6D::Construct(UnkFamily6D *this,int param_1,int param_2){
		int iVar1;
		undefined4 *puVar2;
		(this->parent).field15_0x18 = param_2;
		(this->parent).field14_0x14 = param_1;
		(this->parent).field13_0x10 = 2;
		(this->parent).vtable = &UnkFamily6_VT_D;
		UNV007::Construct((UNV007 *)&this->field_0x1c0,*(undefined4 *)(param_1 + 0x10),0x10);
		puVar2 = (undefined4 *)&this->field_0x2c8;
		for (iVar1 = 100;
		 iVar1 != 0;
		 iVar1 = iVar1 + -1) {
		*puVar2 = 0;
		puVar2 = puVar2 + 1;
		}
		*(undefined4 *)&this->field_0x458 = 0;
		this->field_0x290 = 0;
		*(undefined4 *)&this->field_0x460 = 0;
		*(undefined4 *)&this->field_0x45c = 0;
		puVar2 = (undefined4 *)&this->field_0x4a8;
		for (iVar1 = 100;
		 iVar1 != 0;
		 iVar1 = iVar1 + -1) {
		*puVar2 = 0;
		puVar2 = puVar2 + 1;
		}
		*(undefined4 *)&this->field_0x638 = 0;
		this->field_0x470 = 0;
		*(undefined4 *)&this->field_0x640 = 0;
		*(undefined4 *)&this->field_0x63c = 0;
		Init((int *)this);
		return this;
		}
		
	*/
	return;
}

void UnkFamily6D::FUN_00080bd0(float* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily6D::FUN_00080bd0(UnkFamily6D *this,float *param_1,int param_2){
		InstanceTransform *transform;
		Vector4 local_20;
		local_20.x = *param_1;
		if (param_2 != 0) {
		transform = *(InstanceTransform **)(param_2 + 0x18);
		local_20.y = param_1[1];
		local_20.z = param_1[2];
		local_20.w = param_1[3];
		InstanceTransform::FillMatrix(transform);
		InstanceTransform::FUN_000d3ed0(transform,&local_20);
		(this->field129_0x160).x = (this->field129_0x160).x + local_20.x;
		(this->field129_0x160).y = (this->field129_0x160).y + local_20.y;
		(this->field129_0x160).z = (this->field129_0x160).z + local_20.z;
		return;
		}
		(this->field129_0x160).x = local_20.x + (this->field129_0x160).x;
		(this->field129_0x160).y = param_1[1] + (this->field129_0x160).y;
		(this->field129_0x160).z = param_1[2] + (this->field129_0x160).z;
		return;
		}
		
	*/
	return;
}

uint UnkFamily6D::FUN_0008dfe0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __fastcall UnkFamily6D::FUN_0008dfe0(UnkFamily6D *this){
		float fVar1;
		float fVar2;
		float fVar3;
		float local_110;
		float fStack268;
		float fStack264;
		float fStack260;
		float local_100;
		float fStack252;
		float fStack248;
		float fStack244;
		float local_f0;
		float fStack236;
		float fStack232;
		float fStack228;
		float local_e0;
		float fStack220;
		float fStack216;
		float fStack212;
		Matrix4 local_d0;
		Matrix4 local_90;
		Matrix4 local_50;
		Matrix4 *mat;
		local_110 = *(float *)&this->field_0x110;
		fStack268 = *(float *)&this->field_0x114;
		fStack264 = *(float *)&this->field_0x118;
		fStack260 = *(float *)&this->field_0x11c;
		local_100 = *(float *)&this->field_0x120;
		fStack252 = *(float *)&this->field_0x124;
		fStack248 = *(float *)&this->field_0x128;
		fStack244 = *(float *)&this->field_0x12c;
		local_f0 = *(float *)&this->field_0x130;
		fStack236 = *(float *)&this->field_0x134;
		fStack232 = *(float *)&this->field_0x138;
		fStack228 = *(float *)&this->field_0x13c;
		local_e0 = *(float *)&this->field_0x140;
		fStack220 = *(float *)&this->field_0x144;
		fStack216 = *(float *)&this->field_0x148;
		fStack212 = *(float *)&this->field_0x14c;
		FUN_000e2460(&local_90,(int)((FLOAT_003863a8 / DAT_0039db80) * (0.0 - *(float *)&this->field_0x21c)));
		FUN_000d84c0(&local_110,&local_90);
		(this->parent).field22_0xa0.m11 = local_110;
		(this->parent).field22_0xa0.m12 = fStack268;
		(this->parent).field22_0xa0.m13 = fStack264;
		(this->parent).field22_0xa0.m14 = fStack260;
		(this->parent).field22_0xa0.m21 = local_100;
		(this->parent).field22_0xa0.m22 = fStack252;
		(this->parent).field22_0xa0.m23 = fStack248;
		(this->parent).field22_0xa0.m24 = fStack244;
		(this->parent).field22_0xa0.m31 = local_f0;
		(this->parent).field22_0xa0.m32 = fStack236;
		(this->parent).field22_0xa0.m33 = fStack232;
		(this->parent).field22_0xa0.m34 = fStack228;
		(this->parent).field22_0xa0.m41 = local_e0;
		(this->parent).field22_0xa0.m42 = fStack220;
		(this->parent).field22_0xa0.m43 = fStack216;
		(this->parent).field22_0xa0.m44 = fStack212;
		fVar3 = *(float *)&this->field_0x104;
		fVar1 = (this->parent).field22_0xa0.m22;
		fVar2 = (this->parent).field22_0xa0.m23;
		mat = &(this->parent).field22_0xa0;
		(this->parent).field22_0xa0.m41 =(this->parent).field22_0xa0.m41 - (this->parent).field22_0xa0.m21 * fVar3;
		(this->parent).field22_0xa0.m42 = (this->parent).field22_0xa0.m42 - fVar1 * fVar3;
		(this->parent).field22_0xa0.m43 = (this->parent).field22_0xa0.m43 - fVar2 * fVar3;
		fVar3 = (this->parent).field22_0xa0.m12;
		fVar1 = (this->parent).field22_0xa0.m13;
		fVar2 = (this->parent).field22_0xa0.m14;
		(this->parent).field21_0x60.m11 = mat->m11;
		(this->parent).field21_0x60.m12 = fVar3;
		(this->parent).field21_0x60.m13 = fVar1;
		(this->parent).field21_0x60.m14 = fVar2;
		fVar3 = (this->parent).field22_0xa0.m22;
		fVar1 = (this->parent).field22_0xa0.m23;
		fVar2 = (this->parent).field22_0xa0.m24;
		(this->parent).field21_0x60.m21 = (this->parent).field22_0xa0.m21;
		(this->parent).field21_0x60.m22 = fVar3;
		(this->parent).field21_0x60.m23 = fVar1;
		(this->parent).field21_0x60.m24 = fVar2;
		fVar3 = (this->parent).field22_0xa0.m32;
		fVar1 = (this->parent).field22_0xa0.m33;
		fVar2 = (this->parent).field22_0xa0.m34;
		(this->parent).field21_0x60.m31 = (this->parent).field22_0xa0.m31;
		(this->parent).field21_0x60.m32 = fVar3;
		(this->parent).field21_0x60.m33 = fVar1;
		(this->parent).field21_0x60.m34 = fVar2;
		fVar3 = (this->parent).field22_0xa0.m42;
		fVar1 = (this->parent).field22_0xa0.m43;
		fVar2 = (this->parent).field22_0xa0.m44;
		(this->parent).field21_0x60.m41 = (this->parent).field22_0xa0.m41;
		(this->parent).field21_0x60.m42 = fVar3;
		(this->parent).field21_0x60.m43 = fVar1;
		(this->parent).field21_0x60.m44 = fVar2;
		local_d0.m22 = 0.0 - *(float *)&this->field_0x1b0;
		Matrix4::Construct1(&local_d0);
		fVar3 = FLOAT_0038bc0c;
		if ((local_d0.m22 < FLOAT_0038bc0c) || (fVar3 = FLOAT_00386ab4, FLOAT_00386ab4 < local_d0.m22)) {
		local_d0.m22 = fVar3;
		}
		local_d0.m11 = local_d0.m22 * FLOAT_0038a82c + FLOAT_0038639c;
		local_d0.m22 = FLOAT_0038639c - local_d0.m22;
		local_d0.m33 = local_d0.m11;
		FUN_000d84c0(mat,&local_d0);
		Matrix4::Construct(&local_50,(float)(int)((FLOAT_003863a8 / DAT_0039db80) * *(float *)&this->field_0x218));
		FUN_000d84c0(mat,&local_50);
		(this->parent).field21_0x60.m42 =*(float *)&this->field_0x1b0 * FLOAT_0038b86c + (this->parent).field21_0x60.m42;
		(this->parent).field20_0x20.m31 = *(float *)&this->field_0x130;
		(this->parent).field20_0x20.m32 = *(float *)&this->field_0x134;
		(this->parent).field20_0x20.m33 = *(float *)&this->field_0x138;
		fVar3 = FLOAT_0038639c;
		(this->parent).field20_0x20.m34 = *(float *)&this->field_0x13c;
		(this->parent).field20_0x20.m21 = 0.0;
		(this->parent).field20_0x20.m22 = fVar3;
		(this->parent).field20_0x20.m23 = 0.0;
		(this->parent).field20_0x20.m24 = fVar3;
		(this->parent).field20_0x20.m11 =(this->parent).field20_0x20.m33 * fVar3 - (this->parent).field20_0x20.m32 * 0.0;
		(this->parent).field20_0x20.m12 =(this->parent).field20_0x20.m31 * (this->parent).field20_0x20.m23 -(this->parent).field20_0x20.m33 * (this->parent).field20_0x20.m21;
		(this->parent).field20_0x20.m13 =(this->parent).field20_0x20.m21 * (this->parent).field20_0x20.m32 -(this->parent).field20_0x20.m22 * (this->parent).field20_0x20.m31;
		(this->parent).field20_0x20.m14 = fVar3;
		(this->parent).field20_0x20.m31 =(this->parent).field20_0x20.m12 * (this->parent).field20_0x20.m23 -(this->parent).field20_0x20.m22 * (this->parent).field20_0x20.m13;
		(this->parent).field20_0x20.m32 =(this->parent).field20_0x20.m21 * (this->parent).field20_0x20.m13 -(this->parent).field20_0x20.m11 * (this->parent).field20_0x20.m23;
		(this->parent).field20_0x20.m33 =(this->parent).field20_0x20.m22 * (this->parent).field20_0x20.m11 -(this->parent).field20_0x20.m21 * (this->parent).field20_0x20.m12;
		(this->parent).field20_0x20.m34 = fVar3;
		(this->parent).field20_0x20.m41 = *(float *)&this->field_0x140;
		(this->parent).field20_0x20.m42 = *(float *)&this->field_0x144;
		fVar3 = *(float *)&this->field_0x148;
		(this->parent).field20_0x20.m43 = fVar3;
		(this->parent).field20_0x20.m44 = *(float *)&this->field_0x14c;
		(this->parent).field20_0x20.m14 = 0.0;
		(this->parent).field20_0x20.m24 = 0.0;
		(this->parent).field20_0x20.m34 = 0.0;
		return CONCAT31((int3)((uint)fVar3 >> 8),1);
		}
		
	*/
	return 0;
}

void UnkFamily6D::FUN_0008e450(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily6D::FUN_0008e450(int param_1){
		thunk_FUN_00081cb0(param_1 + 0x290);
		thunk_FUN_00081cb0(param_1 + 0x470);
		return;
		}
		
	*/
	return;
}

void UnkFamily6D::FUN_00094c90(float param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily6D::FUN_00094c90(UnkFamily6D *this,float param_1){
		undefined *puVar1;
		float fVar2;
		InstanceNodeAbstract *pIVar3;
		float fVar4;
		float fVar5;
		int local_1c;
		fVar4 = param_1 * FLOAT_00386618;
		if ((*(byte *)&(this->parent).field13_0x10 & 4) == 0) {
		puVar1 = &this->field_0x190;
		local_1c = 4;
		do {
		thunk_FUN_0008bb80((int)this,fVar4);
		this->field_0x270 = 0;
		this->field_0x1a0 = 0;
		thunk_FUN_00092fe0((int)this,fVar4);
		thunk_FUN_0008d410((int)this,fVar4);
		if (this->field_0x270 == '\0') {
		*(float *)&this->field_0x194 = fVar4 * FLOAT_0038b9f0 + *(float *)&this->field_0x194;
		fVar5 = *(float *)puVar1 * *(float *)puVar1 +*(float *)&this->field_0x194 * *(float *)&this->field_0x194 +*(float *)&this->field_0x198 * *(float *)&this->field_0x198;
		if (fVar5 <= DAT_0039dbf8) {
		fVar5 = 0.0;
		}
		else {
		fVar5 = FLOAT_0038639c / SQRT(fVar5);
		}
		*(float *)puVar1 = *(float *)puVar1 * fVar5;
		*(float *)&this->field_0x194 = fVar5 * *(float *)&this->field_0x194;
		*(float *)&this->field_0x198 = fVar5 * *(float *)&this->field_0x198;
		}
		if ((this->field_0x1a0 != '\0') && (this->field_0x1a1 == '\0')) {
		this->field_0x228 = 0;
		*(undefined4 *)&this->field_0x21c = *(undefined4 *)&this->field_0x224;
		*(undefined4 *)&this->field_0x218 = *(undefined4 *)&this->field_0x220;
		}
		thunk_FUN_0008c390((int)this,fVar4);
		thunk_FUN_0008bef0((int)this,(float *)puVar1);
		thunk_FUN_00080e20((int)this,fVar4);
		if (this->field_0x238 == '\0') {
		fVar5 = (this->field129_0x160).x;
		fVar2 = (this->field129_0x160).z;
		*(float *)&this->field_0x144 =*(float *)&this->field_0x144 + (this->field129_0x160).y * fVar4;
		*(float *)&this->field_0x148 = *(float *)&this->field_0x148 + fVar2 * fVar4;
		*(float *)&this->field_0x140 = *(float *)&this->field_0x140 + fVar5 * fVar4;
		(this->field129_0x160).y = (this->field129_0x160).y - *(float *)&this->field_0x100 * fVar4;
		}
		(this->field130_0x170).x = (this->field129_0x160).x;
		(this->field130_0x170).y = (this->field129_0x160).y;
		(this->field130_0x170).z = (this->field129_0x160).z;
		(this->field130_0x170).w = (this->field129_0x160).w;
		this->field_0x1a1 = this->field_0x1a0;
		if (this->field_0x1a0 == '\0') {
		*(float *)&this->field_0x214 = *(float *)&this->field_0x214 + fVar4;
		}
		else {
		*(undefined4 *)&this->field_0x214 = 0;
		}
		thunk_FUN_000814e0((int)this,fVar4);
		thunk_FUN_0008ba40((int)this,fVar4);
		local_1c = local_1c + -1;
		}
		 while (local_1c != 0);
		thunk_FUN_00080fa0((int)this,param_1);
		pIVar3 = InstanceDataList::GetNode((InstanceDataList *)(*(int *)((this->parent).field14_0x14 + 0x10) + 0xe4),Instance);
		if (pIVar3[10].field6_0x14 != 0) {
		fVar4 = FLOAT_0038639c;
		if (this->field_0x1a0 == '\0') {
		fVar4 = 0.0;
		}
		*(float *)(pIVar3[10].field6_0x14 + 100) = fVar4;
		}
		thunk_FUN_00094860((int)this);
		}
		UnkFamily6Abstract::thunk_FUN_0007f010(&this->parent);
		return;
		}
		
	*/
	return;
}

void UnkFamily6D::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily6D::Dispose(UnkFamily6D *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

uint UnkFamily6D::FUN_0008e340(uint param_1, InstanceNodeKSubA* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall UnkFamily6D::FUN_0008e340(UnkFamily6D *this,undefined4 param_1,InstanceNodeKSubA *param_2){
		int iVar1;
		uint uVar2;
		undefined *puVar3;
		if (((uint)(param_2->parent).parent.vtable >> 0x12 & 1) != 0) {
		InstanceNodeKSubA::FUN_00139500(param_2,(Matrix4 *)&this->field_0x110,'\x01');
		InstanceNodeKSubA::FUN_00139650(param_2,&this->field129_0x160,false);
		InstanceNodeKSubA::FUN_00139650(param_2,&this->field130_0x170,false);
		InstanceNodeKSubA::FUN_00139650(param_2,(Vector4 *)&this->field_0x180,false);
		InstanceNodeKSubA::FUN_00139650(param_2,(Vector4 *)&this->field_0x190,false);
		puVar3 = &this->field_0x240;
		InstanceNodeKSubA::FUN_00139650(param_2,(Vector4 *)puVar3,true);
		InstanceNodeKSubA::FUN_00139650(param_2,(Vector4 *)&this->field_0x250,true);
		return CONCAT31((int3)((uint)puVar3 >> 8),1);
		}
		iVar1 = *(int *)((this->parent).field14_0x14 + 0x10);
		*(undefined4 *)&this->field_0x140 = *(undefined4 *)(iVar1 + 0xd0);
		*(undefined4 *)&this->field_0x144 = *(undefined4 *)(iVar1 + 0xd4);
		*(undefined4 *)&this->field_0x148 = *(undefined4 *)(iVar1 + 0xd8);
		uVar2 = *(uint *)(iVar1 + 0xdc);
		*(uint *)&this->field_0x14c = uVar2;
		(this->field129_0x160).x = Vector4_0039ef70.x;
		(this->field129_0x160).y = Vector4_0039ef70.y;
		(this->field129_0x160).z = Vector4_0039ef70.z;
		(this->field129_0x160).w = FLOAT_0038639c;
		return uVar2 & 0xffffff00;
		}
		
	*/
	return 0;
}

uint UnkFamily6D::FUN_000a6300() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily6D::FUN_000a6300(void){
		return 3;
		}
		
	*/
	return 0;
}

void UnkFamily6D::FUN_000a6310(Vector4* param_1, Vector4* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily6D::FUN_000a6310(Vector4 *param_1,Vector4 *param_2){
		float fVar1;
		fVar1 = FLOAT_003869d8;
		param_1->z = FLOAT_003869d8;
		param_1->y = fVar1;
		param_1->x = fVar1;
		fVar1 = FLOAT_0038639c;
		param_1->w = FLOAT_0038639c;
		param_2->z = fVar1;
		param_2->y = fVar1;
		param_2->x = fVar1;
		param_2->w = fVar1;
		return;
		}
		
	*/
	return;
}

uint UnkFamily6D::FUN_000a6370(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall UnkFamily6D::FUN_000a6370(UnkFamily6D *this,undefined4 *param_1){
		*param_1 = (this->field129_0x160).x;
		param_1[1] = (this->field129_0x160).y;
		param_1[2] = (this->field129_0x160).z;
		param_1[3] = (this->field129_0x160).w;
		return CONCAT31((int3)((uint)param_1 >> 8),1);
		}
		
	*/
	return 0;
}

void UnkFamily6D::FUN_000a63b0(Vector4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily6D::FUN_000a63b0(UnkFamily6D *this,Vector4 *param_1){
		(this->field130_0x170).x = param_1->x;
		(this->field130_0x170).y = param_1->y;
		(this->field130_0x170).z = param_1->z;
		(this->field130_0x170).w = param_1->w;
		(this->field129_0x160).x = param_1->x;
		(this->field129_0x160).y = param_1->y;
		(this->field129_0x160).z = param_1->z;
		(this->field129_0x160).w = param_1->w;
		return;
		}
		
	*/
	return;
}

void UnkFamily6D::FUN_000a6410() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined UnkFamily6D::FUN_000a6410(void){
		return 0;
		}
		
	*/
	return;
}

