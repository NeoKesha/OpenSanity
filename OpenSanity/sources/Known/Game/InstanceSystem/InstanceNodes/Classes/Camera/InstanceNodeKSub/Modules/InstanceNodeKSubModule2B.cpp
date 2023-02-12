#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/Modules/InstanceNodeKSubModule2B.h"

#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/InstanceNodeKSubA.h"
#include "headers/Known/Game/InstanceSystem/InstanceTransform.h"
void InstanceNodeKSubModule2B::FUN_00059f30(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubModule2B::FUN_00059f30(InstanceNodeKSubModule2B *this,InstanceContext *ctx){
		InstanceContextRefCounter **this_00;
		InstanceContext *pIVar1;
		InstanceContextRefCounter *pIVar2;
		pIVar1 = (InstanceContext *)this->field16_0x84;
		this_00 = &this->field16_0x84;
		if (pIVar1 != (InstanceContext *)0x0) {
		pIVar1 = (InstanceContext *)(pIVar1->parent).vtable;
		}
		if (pIVar1 != ctx) {
		InstanceContextSmartPtr::Release(this_00);
		if (ctx == (InstanceContext *)0x0) {
		*this_00 = (InstanceContextRefCounter *)0x0;
		return;
		}
		pIVar2 = (InstanceContextRefCounter *)InstanceContextSmartPtr::CreateRef(&ctx->smartPtr,ctx,0);
		*this_00 = pIVar2;
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubModule2B::FUN_001c8ce0(InstanceTransform* transform, Vector4* vec) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Removing unreachable block (ram,0x001c8db3) void __thiscall InstanceNodeKSubModule2B::FUN_001c8ce0(InstanceNodeKSubModule2B *this,InstanceTransform *transform,Vector4 *vec){
		float *pfVar1;
		InstanceTransform *transform_00;
		float fVar2;
		uint uVar3;
		int iVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		uint local_28;
		float local_20;
		float local_1c;
		float local_18;
		if ((*(int *)&this->field_0x8c != 0) && ((*(byte *)&this->field15_0x80 & 0x10) != 0)) {
		uVar3 = (uint)*(byte *)(*(int *)&this->field_0x8c + 0x19);
		if (uVar3 != 0) {
		fVar5 = 0.0;
		fVar6 = 0.0;
		fVar8 = 0.0;
		local_20 = 0.0;
		local_1c = 0.0;
		local_18 = 0.0;
		if (uVar3 != 0) {
		iVar4 = 0xe4;
		local_28 = uVar3;
		do {
		transform_00 = *(InstanceTransform **)(*(int *)(iVar4 + *(int *)&this->field_0x8c) + 0x18);
		InstanceTransform::FillMatrix(transform_00);
		fVar5 = local_20 + (transform_00->matrix).m41;
		fVar6 = (transform_00->matrix).m42 + local_1c;
		fVar8 = (transform_00->matrix).m43 + local_18;
		iVar4 = iVar4 + 4;
		local_28 = local_28 - 1;
		local_20 = fVar5;
		local_1c = fVar6;
		local_18 = fVar8;
		}
		 while (local_28 != 0);
		}
		fVar2 = FLOAT_0038639c / (float)uVar3;
		fVar10 = (this->field25_0x90).x;
		fVar9 = (fVar8 * fVar2 - (transform->matrix).m43) * fVar10;
		fVar7 = fVar10 * (fVar5 * fVar2 - (transform->matrix).m41);
		fVar10 = (fVar6 * fVar2 - (transform->matrix).m42) * fVar10;
		fVar5 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar7 * fVar7);
		pfVar1 = &(this->field25_0x90).y;
		fVar6 = *pfVar1;
		fVar8 = *pfVar1;
		(this->parent).field13_0x10 = (int)fVar5;
		if (fVar5 < fVar8 || fVar5 == fVar6) {
		fVar5 = fVar5 / (this->field25_0x90).y;
		}
		else {
		fVar5 = (this->field25_0x90).y / fVar5;
		fVar7 = fVar5 * fVar7;
		fVar10 = fVar10 * fVar5;
		fVar9 = fVar9 * fVar5;
		fVar5 = FLOAT_0038639c;
		}
		(this->parent).field13_0x10 = (int)fVar5;
		vec->x = (transform->matrix).m41;
		vec->y = (transform->matrix).m42;
		vec->z = (transform->matrix).m43;
		fVar6 = (transform->matrix).m44;
		vec->x = vec->x + fVar7;
		vec->y = vec->y + fVar10;
		vec->w = fVar6;
		vec->z = vec->z + fVar9;
		return;
		}
		}
		vec->x = (transform->matrix).m41;
		vec->y = (transform->matrix).m42;
		vec->z = (transform->matrix).m43;
		vec->w = (transform->matrix).m44;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubModule2B::FUN_001c9000(Vector4* vec1, Vector4* vec2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubModule2B::FUN_001c9000(InstanceNodeKSubModule2B *this,Vector4 *vec1,Vector4 *vec2){
		(this->field64_0x120).x = vec1->x;
		(this->field64_0x120).y = vec1->y;
		(this->field64_0x120).z = vec1->z;
		(this->field64_0x120).w = vec1->w;
		(this->field65_0x130).x = vec2->x;
		(this->field65_0x130).y = vec2->y;
		(this->field65_0x130).z = vec2->z;
		(this->field65_0x130).w = vec2->w;
		this->field15_0x80 = this->field15_0x80 | 8;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubModule2B::Init() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeKSubModule2B::Init(InstanceNodeKSubModule2B *this){
		Vector4 *vec_00;
		InstanceContext *pIVar1;
		float fVar2;
		InstanceTransform *transform;
		Vector4 *vec;
		fVar2 = FLOAT_00386ab4;
		pIVar1 = (InstanceContext *)0x0;
		this->field15_0x80 = 0;
		*(undefined4 *)&this->field_0x88 = 0;
		*(undefined4 *)&this->field_0x8c = 0;
		(this->field26_0xa0).x = fVar2;
		(this->field27_0xb0).x = (this->field62_0x100).x;
		(this->field27_0xb0).y = (this->field62_0x100).y;
		(this->field27_0xb0).z = (this->field62_0x100).z;
		(this->field27_0xb0).w = (this->field62_0x100).w;
		(this->field27_0xb0).x = (this->field63_0x110).x + (this->field27_0xb0).x;
		(this->field27_0xb0).y = (this->field63_0x110).y + (this->field27_0xb0).y;
		(this->field27_0xb0).z = (this->field63_0x110).z + (this->field27_0xb0).z;
		(this->field27_0xb0).x = (this->field27_0xb0).x * fVar2;
		(this->field27_0xb0).y = (this->field27_0xb0).y * fVar2;
		(this->field27_0xb0).z = (this->field27_0xb0).z * fVar2;
		fVar2 = FLOAT_0038639c;
		if ((this->field16_0x84 == (InstanceContextRefCounter *)0x0) ||(this->field16_0x84->ctx == (InstanceContext *)0x0)) {
		(this->parent).field26_0x20.z = 0.0;
		(this->parent).field26_0x20.y = 0.0;
		(this->parent).field26_0x20.x = 0.0;
		(this->parent).field26_0x20.w = fVar2;
		(this->parent).field27_0x30.x = Vector4_0039ef70.x;
		(this->parent).field27_0x30.y = Vector4_0039ef70.y;
		(this->parent).field27_0x30.z = Vector4_0039ef70.z;
		(this->parent).field27_0x30.w = fVar2;
		(this->field28_0xc0).x = Vector4_0039ef70.x;
		(this->field28_0xc0).y = Vector4_0039ef70.y;
		(this->field28_0xc0).z = Vector4_0039ef70.z;
		(this->field28_0xc0).w = fVar2;
		(this->parent).field13_0x10 = 0;
		(this->field25_0x90).w = 0.0;
		}
		else {
		if (this->field16_0x84 != (InstanceContextRefCounter *)0x0) {
		pIVar1 = this->field16_0x84->ctx;
		}
		transform = (pIVar1->parent).transform;
		InstanceTransform::FillMatrix(transform);
		vec_00 = &(this->parent).field27_0x30;
		FUN_001c8ce0(this,transform,vec_00);
		vec = &(this->parent).field26_0x20;
		Vector4::FUN_000db0d0(vec,&transform->matrix);
		(this->parent).field29_0x50.x = vec_00->x;
		(this->parent).field29_0x50.y = (this->parent).field27_0x30.y;
		(this->parent).field29_0x50.z = (this->parent).field27_0x30.z;
		(this->parent).field29_0x50.w = (this->parent).field27_0x30.w;
		(this->parent).field28_0x40.x = vec->x;
		(this->parent).field28_0x40.y = (this->parent).field26_0x20.y;
		(this->parent).field28_0x40.z = (this->parent).field26_0x20.z;
		(this->parent).field28_0x40.w = (this->parent).field26_0x20.w;
		(this->field25_0x90).w = (transform->matrix).m42;
		FUN_001c8b40((int)this,0.0,&vec_00->x,&(this->field28_0xc0).x);
		FUN_001c8c40((int)this,&(this->field28_0xc0).x);
		fVar2 = FLOAT_0038639c;
		}
		(this->field25_0x90).z = (this->field25_0x90).w;
		this->field70_0x180 = 0;
		this->field15_0x80 = this->field15_0x80 & 0xfffffdff;
		(this->field68_0x160).x = Vector4_0039ef70.x;
		(this->field68_0x160).y = Vector4_0039ef70.y;
		(this->field68_0x160).z = Vector4_0039ef70.z;
		(this->field68_0x160).w = fVar2;
		(this->field69_0x170).x = Vector4_0039ef70.x;
		(this->field69_0x170).y = Vector4_0039ef70.y;
		(this->field69_0x170).z = Vector4_0039ef70.z;
		(this->field69_0x170).w = fVar2;
		this->field15_0x80 = this->field15_0x80 | 0x4000;
		(this->field29_0xd0).x = Vector4_0039ef70.x;
		(this->field29_0xd0).y = Vector4_0039ef70.y;
		(this->field29_0xd0).z = Vector4_0039ef70.z;
		(this->field29_0xd0).w = fVar2;
		this->field15_0x80 = this->field15_0x80 & 0xfff9cde0 | 0x18000;
		this->field83_0x190 = 0x10;
		this->field15_0x80 = this->field15_0x80 & 0xffe9cde0 | 0x18000;
		(this->parent).field32_0x71 = 1;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubModule2B::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeKSubModule2B * __fastcall InstanceNodeKSubModule2B::Construct(InstanceNodeKSubModule2B *this){
		float fVar1;
		(this->parent).vtable = &InstanceNodeKSubModule2_VT_Abstract;
		(this->parent).field13_0x10 = 0;
		(this->parent).field31_0x70 = 0;
		(this->parent).field32_0x71 = 1;
		(this->parent).field26_0x20.z = 0.0;
		(this->parent).field26_0x20.y = 0.0;
		(this->parent).field26_0x20.x = 0.0;
		fVar1 = FLOAT_0038639c;
		(this->parent).field26_0x20.w = FLOAT_0038639c;
		(this->parent).field27_0x30.x = Vector4_0039ef70.x;
		(this->parent).field27_0x30.y = Vector4_0039ef70.y;
		(this->parent).field27_0x30.z = Vector4_0039ef70.z;
		(this->parent).field27_0x30.w = fVar1;
		(this->parent).vtable = &InstanceNodeKSubModule2_VT_B;
		this->field16_0x84 = (InstanceContextRefCounter *)0x0;
		this->field87_0x198 = 0;
		this->field88_0x19c = 0;
		this->field89_0x1a0 = fVar1;
		this->field_0x210 = 0;
		this->field84_0x194 = 0;
		this->field83_0x190 = 0x10;
		(this->field62_0x100).x = Vector4_0039ef70.x;
		(this->field62_0x100).y = Vector4_0039ef70.y;
		(this->field62_0x100).z = Vector4_0039ef70.z;
		(this->field62_0x100).w = fVar1;
		(this->field63_0x110).x = Vector4_0039ef70.x;
		(this->field63_0x110).y = Vector4_0039ef70.y;
		(this->field63_0x110).z = Vector4_0039ef70.z;
		(this->field63_0x110).w = fVar1;
		(this->field66_0x140).x = Vector4_0039ef70.x;
		(this->field66_0x140).y = Vector4_0039ef70.y;
		(this->field66_0x140).z = Vector4_0039ef70.z;
		(this->field66_0x140).w = fVar1;
		(this->field67_0x150).x = Vector4_0039ef70.x;
		(this->field67_0x150).y = Vector4_0039ef70.y;
		(this->field67_0x150).z = Vector4_0039ef70.z;
		(this->field67_0x150).w = fVar1;
		(this->parent).field31_0x70 = 0;
		Init(this);
		return this;
		}
		
	*/
	return;
}

void InstanceNodeKSubModule2B::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeKSubModule2B::Dispose(InstanceNodeKSubModule2B *this){
		(this->parent).vtable = &InstanceNodeKSubModule2_VT_B;
		if ((undefined4 *)this->field87_0x198 != (undefined4 *)0x0) {
		(***(code ***)(undefined4 *)this->field87_0x198)(1);
		}
		if ((undefined4 *)this->field88_0x19c != (undefined4 *)0x0) {
		(***(code ***)(undefined4 *)this->field88_0x19c)(1);
		}
		InstanceContextSmartPtr::Release(&this->field16_0x84);
		(this->parent).vtable = &InstanceNodeKSubModule2_VT_Abstract;
		return;
		}
		
	*/
	return;
}

uint InstanceNodeKSubModule2B::FUN_001c8ef0(uint param_1, InstanceNodeKSubA* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall InstanceNodeKSubModule2B::FUN_001c8ef0(InstanceNodeKSubModule2B *this,undefined4 param_1,InstanceNodeKSubA *param_2){
		InstanceNodeKSubAbstract_VTable *pIVar1;
		Vector4 *pVVar2;
		Vector4 local_30;
		Vector4 local_20;
		pIVar1 = (param_2->parent).parent.vtable;
		if (((uint)pIVar1 >> 0x12 & 1) != 0) {
		local_30.y = (this->field25_0x90).z;
		local_20.y = (this->field25_0x90).w;
		local_30.x = 0.0;
		local_30.z = 0.0;
		local_30.w = FLOAT_0038639c;
		local_20.x = 0.0;
		local_20.z = 0.0;
		local_20.w = FLOAT_0038639c;
		InstanceNodeKSubA::FUN_00139650(param_2,&local_30,true);
		InstanceNodeKSubA::FUN_00139650(param_2,&local_20,true);
		pVVar2 = &this->field29_0xd0;
		(this->field25_0x90).z = local_30.y;
		(this->field25_0x90).w = local_20.y;
		InstanceNodeKSubA::FUN_00139650(param_2,pVVar2,true);
		InstanceNodeKSubA::FUN_00139480(param_2,&(this->parent).field26_0x20.x);
		InstanceNodeKSubA::FUN_00139650(param_2,&(this->parent).field27_0x30,true);
		return CONCAT31((int3)((uint)pVVar2 >> 8),1);
		}
		return ((uint)pIVar1 >> 0x1a) << 8;
		}
		
	*/
	return 0;
}

void InstanceNodeKSubModule2B::FUN_001cf9c0(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubModule2B::FUN_001cf9c0(InstanceNodeKSubModule2B *this,int param_1){
		Vector4 *pVVar1;
		float fVar2;
		float fVar3;
		InstanceTransform *transform;
		char cVar4;
		InstanceContext *pIVar5;
		int iVar6;
		uint uVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		Vector4 *pVVar12;
		Vector4 local_20;
		fVar8 = FLOAT_0038639c;
		if ((this->field16_0x84 == (InstanceContextRefCounter *)0x0) ||(this->field16_0x84->ctx == (InstanceContext *)0x0)) {
		(this->parent).field26_0x20.z = 0.0;
		(this->parent).field26_0x20.y = 0.0;
		(this->parent).field26_0x20.x = 0.0;
		(this->parent).field26_0x20.w = fVar8;
		(this->parent).field27_0x30.x = Vector4_0039ef70.x;
		(this->parent).field27_0x30.y = Vector4_0039ef70.y;
		(this->parent).field27_0x30.z = Vector4_0039ef70.z;
		(this->parent).field27_0x30.w = fVar8;
		(this->field28_0xc0).x = Vector4_0039ef70.x;
		(this->field28_0xc0).y = Vector4_0039ef70.y;
		(this->field28_0xc0).z = Vector4_0039ef70.z;
		(this->field28_0xc0).w = fVar8;
		(this->parent).field13_0x10 = 0;
		return;
		}
		local_20.x = (this->parent).field27_0x30.x;
		pVVar1 = &(this->parent).field27_0x30;
		local_20.y = (this->parent).field27_0x30.y;
		local_20.z = (this->parent).field27_0x30.z;
		local_20.w = (this->parent).field27_0x30.w;
		uVar7 = this->field15_0x80;
		fVar8 = (float)*(int *)(param_1 + 8) * TimePerTick1;
		if (((char)(uVar7 >> 8) < '\0') && ((uVar7 & 0x2000) != 0)) {
		this->field15_0x80 = uVar7 & 0xffffdfff;
		(this->parent).field32_0x71 = 1;
		}
		if (*(Matrix4 **)&this->field_0x88 == (Matrix4 *)0x0) {
		pIVar5 = (InstanceContext *)this->field16_0x84;
		if (pIVar5 != (InstanceContext *)0x0) {
		pIVar5 = *(InstanceContext **)&pIVar5->parent;
		}
		transform = (pIVar5->parent).transform;
		InstanceTransform::FillMatrix(transform);
		FUN_001c8ce0(this,transform,&(this->parent).field29_0x50);
		Vector4::FUN_000db0d0(&(this->parent).field28_0x40,&transform->matrix);
		}
		else {
		Vector4::FUN_000db0d0(&(this->parent).field28_0x40,*(Matrix4 **)&this->field_0x88);
		iVar6 = *(int *)&this->field_0x88;
		(this->parent).field29_0x50.x = *(float *)(iVar6 + 0x30);
		(this->parent).field29_0x50.y = *(float *)(iVar6 + 0x34);
		(this->parent).field29_0x50.z = *(float *)(iVar6 + 0x38);
		(this->parent).field29_0x50.w = *(float *)(iVar6 + 0x3c);
		(this->parent).field13_0x10 = 0;
		}
		(this->parent).field26_0x20.x = (this->parent).field28_0x40.x;
		(this->parent).field26_0x20.y = (this->parent).field28_0x40.y;
		(this->parent).field26_0x20.z = (this->parent).field28_0x40.z;
		(this->parent).field26_0x20.w = (this->parent).field28_0x40.w;
		pVVar1->x = (this->parent).field29_0x50.x;
		(this->parent).field27_0x30.y = (this->parent).field29_0x50.y;
		(this->parent).field27_0x30.z = (this->parent).field29_0x50.z;
		(this->parent).field27_0x30.w = (this->parent).field29_0x50.w;
		uVar7 = this->field15_0x80;
		if ((((uVar7 & 2) == 0) || ((uVar7 & 4) != 0)) || ((uVar7 & 0x11000) != 0)) goto LAB_001cfc41;
		*(undefined4 *)&this->field_0xe0 = *(undefined4 *)(param_1 + 4);
		this->field15_0x80 = uVar7 | 4;
		if ((uVar7 & 0x20000) == 0) {
		fVar11 = Vector4::Distance(&local_20,&this->field29_0xd0);
		if (fVar11 < FLOAT_0038b69c) {
		this->field15_0x80 = uVar7 & 0xfffffffb;
		}
		}
		uVar7 = this->field15_0x80;
		if ((uVar7 & 8) == 0) {
		cVar4 = FUN_001c69d0(&this->field68_0x160,&(this->field62_0x100).x);
		if (cVar4 == '\0') {
		pVVar12 = &this->field63_0x110;
		goto LAB_001cfc1e;
		}
		LAB_001cfc35:uVar7 = uVar7 | 0x1000;
		}
		else {
		cVar4 = FUN_001c69d0(&this->field68_0x160,&(this->field64_0x120).x);
		if (cVar4 != '\0') goto LAB_001cfc35;
		pVVar12 = &this->field65_0x130;
		LAB_001cfc1e:cVar4 = FUN_001c69d0(&this->field69_0x170,&pVVar12->x);
		if (cVar4 != '\0') goto LAB_001cfc35;
		uVar7 = uVar7 | 0x10000;
		}
		this->field15_0x80 = uVar7;
		LAB_001cfc41:if ((*(byte *)&this->field15_0x80 & 8) == 0) {
		(this->field68_0x160).x = (this->field62_0x100).x;
		(this->field68_0x160).y = (this->field62_0x100).y;
		(this->field68_0x160).z = (this->field62_0x100).z;
		(this->field68_0x160).w = (this->field62_0x100).w;
		(this->field69_0x170).x = (this->field63_0x110).x;
		(this->field69_0x170).y = (this->field63_0x110).y;
		(this->field69_0x170).z = (this->field63_0x110).z;
		(this->field69_0x170).w = (this->field63_0x110).w;
		}
		else {
		(this->field68_0x160).x = (this->field64_0x120).x;
		(this->field68_0x160).y = (this->field64_0x120).y;
		(this->field68_0x160).z = (this->field64_0x120).z;
		(this->field68_0x160).w = (this->field64_0x120).w;
		(this->field69_0x170).x = (this->field65_0x130).x;
		(this->field69_0x170).y = (this->field65_0x130).y;
		(this->field69_0x170).z = (this->field65_0x130).z;
		(this->field69_0x170).w = (this->field65_0x130).w;
		}
		fVar11 = FLOAT_0038639c;
		if ((this->field15_0x80 & 0x1000) != 0) {
		iVar6 = *(int *)(param_1 + 4) - *(int *)&this->field_0xe0;
		if (iVar6 < *(int *)&this->field_0xe4) {
		fVar2 = (this->field66_0x140).z;
		fVar3 = (this->field66_0x140).x;
		fVar9 = ((float)iVar6 * TimePerTick1) / ((float)*(int *)&this->field_0xe4 * TimePerTick1);
		fVar10 = (this->field66_0x140).y;
		(this->field68_0x160).w = FLOAT_0038639c;
		(this->field68_0x160).x = ((this->field68_0x160).x - fVar3) * fVar9;
		(this->field68_0x160).y = ((this->field68_0x160).y - fVar10) * fVar9;
		(this->field68_0x160).z = ((this->field68_0x160).z - fVar2) * fVar9;
		(this->field68_0x160).x = (this->field66_0x140).x + (this->field68_0x160).x;
		(this->field68_0x160).y = (this->field66_0x140).y + (this->field68_0x160).y;
		(this->field68_0x160).z = (this->field66_0x140).z + (this->field68_0x160).z;
		fVar2 = (this->field67_0x150).y;
		fVar3 = (this->field67_0x150).z;
		fVar10 = ((this->field69_0x170).x - (this->field67_0x150).x) * fVar9;
		(this->field69_0x170).x = fVar10;
		(this->field69_0x170).y = ((this->field69_0x170).y - fVar2) * fVar9;
		(this->field69_0x170).z = ((this->field69_0x170).z - fVar3) * fVar9;
		(this->field69_0x170).w = fVar11;
		(this->field69_0x170).x = (this->field67_0x150).x + fVar10;
		(this->field69_0x170).y = (this->field67_0x150).y + (this->field69_0x170).y;
		(this->field69_0x170).z = (this->field67_0x150).z + (this->field69_0x170).z;
		}
		else {
		this->field15_0x80 = this->field15_0x80 & 0xffffefff | 0x10000;
		}
		}
		fVar11 = (this->field26_0xa0).x;
		(this->field27_0xb0).x =((this->field69_0x170).x - (this->field68_0x160).x) * fVar11 + (this->field68_0x160).x;
		(this->field27_0xb0).y =((this->field69_0x170).y - (this->field68_0x160).y) * fVar11 + (this->field68_0x160).y;
		fVar2 = FLOAT_0038639c;
		(this->field27_0xb0).z =((this->field69_0x170).z - (this->field68_0x160).z) * fVar11 + (this->field68_0x160).z;
		(this->field27_0xb0).w = fVar2;
		pVVar12 = &this->field28_0xc0;
		if ((*(byte *)&this->field15_0x80 & 0x20) == 0) {
		FUN_001c8b40((int)this,fVar8,&pVVar1->x,&pVVar12->x);
		}
		else {
		pVVar12->x = pVVar1->x;
		(this->field28_0xc0).y = (this->parent).field27_0x30.y;
		(this->field28_0xc0).z = (this->parent).field27_0x30.z;
		(this->field28_0xc0).w = (this->parent).field27_0x30.w;
		}
		FUN_001c8c40((int)this,&pVVar12->x);
		if ((this->field15_0x80 & 0x200) != 0) {
		(this->field29_0xd0).x = pVVar12->x;
		(this->field29_0xd0).y = (this->field28_0xc0).y;
		(this->field29_0xd0).z = (this->field28_0xc0).z;
		(this->field29_0xd0).w = (this->field28_0xc0).w;
		}
		uVar7 = this->field15_0x80;
		if ((uVar7 & 4) == 0) {
		if ((uVar7 & 1) == 0) {
		pVVar1->x = pVVar12->x;
		(this->parent).field27_0x30.y = (this->field28_0xc0).y;
		(this->parent).field27_0x30.z = (this->field28_0xc0).z;
		(this->parent).field27_0x30.w = (this->field28_0xc0).w;
		}
		else {
		pVVar1->x = (this->field29_0xd0).x;
		(this->parent).field27_0x30.y = (this->field29_0xd0).y;
		(this->parent).field27_0x30.z = (this->field29_0xd0).z;
		(this->parent).field27_0x30.w = (this->field29_0xd0).w;
		}
		}
		else {
		iVar6 = *(int *)(param_1 + 4) - *(int *)&this->field_0xe0;
		if (iVar6 < *(int *)&this->field_0xe4) {
		fVar8 = ((float)iVar6 * TimePerTick1) / ((float)*(int *)&this->field_0xe4 * TimePerTick1);
		if ((uVar7 & 0x1c0) == 0x80) {
		fVar8 = fVar8 * fVar8 * fVar8;
		}
		pVVar1->x = pVVar12->x;
		(this->parent).field27_0x30.y = (this->field28_0xc0).y;
		(this->parent).field27_0x30.z = (this->field28_0xc0).z;
		(this->parent).field27_0x30.w = (this->field28_0xc0).w;
		pVVar1->x = ((this->field29_0xd0).x - local_20.x) * fVar8 + local_20.x;
		(this->parent).field27_0x30.y = ((this->field29_0xd0).y - local_20.y) * fVar8 + local_20.y;
		fVar11 = (this->field29_0xd0).z;
		(this->parent).field27_0x30.w = FLOAT_0038639c;
		(this->parent).field27_0x30.z = (fVar11 - local_20.z) * fVar8 + local_20.z;
		}
		else {
		pVVar1->x = (this->field29_0xd0).x;
		(this->parent).field27_0x30.y = (this->field29_0xd0).y;
		(this->parent).field27_0x30.z = (this->field29_0xd0).z;
		(this->parent).field27_0x30.w = (this->field29_0xd0).w;
		if (*(int *)&this->field_0x8c == 0) {
		pVVar12->x = (this->field29_0xd0).x;
		(this->field28_0xc0).y = (this->field29_0xd0).y;
		(this->field28_0xc0).z = (this->field29_0xd0).z;
		(this->field28_0xc0).w = (this->field29_0xd0).w;
		}
		}
		}
		this->field15_0x80 = this->field15_0x80 | 0x8000;
		return;
		}
		
	*/
	return;
}

InstanceNodeKSubModule2B* InstanceNodeKSubModule2B::SetInternal(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeKSubModule2B * __thiscall InstanceNodeKSubModule2B::SetInternal(InstanceNodeKSubModule2B *this,byte param_1){
		(this->parent).vtable = &InstanceNodeKSubModule2_VT_B;
		if ((undefined4 *)this->field87_0x198 != (undefined4 *)0x0) {
		(***(code ***)(undefined4 *)this->field87_0x198)(1);
		}
		if ((undefined4 *)this->field88_0x19c != (undefined4 *)0x0) {
		(***(code ***)(undefined4 *)this->field88_0x19c)(1);
		}
		InstanceContextSmartPtr::Release(&this->field16_0x84);
		(this->parent).vtable = &InstanceNodeKSubModule2_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return null;
}

float InstanceNodeKSubModule2B::FUN_001d0140(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall InstanceNodeKSubModule2B::FUN_001d0140(InstanceNodeKSubModule2B *this,int param_1){
		uint *puVar1;
		int iVar2;
		uint uVar3;
		uint uVar4;
		int iVar5;
		byte bVar6;
		float local_4;
		local_4 = 0.0;
		if ((param_1 != 0) && ((*(byte *)(*(int *)(param_1 + 0x170) + 4) >> 2 & 1) != 0)) {
		this->field83_0x190 = 0x10;
		this->field15_0x80 = this->field15_0x80 & 0xffe9cde0 | 0x18000;
		(this->parent).field32_0x71 = 1;
		}
		uVar4 = this->field15_0x80;
		if ((uVar4 & 0x100000) == 0) {
		iVar2 = this->field70_0x180;
		if (iVar2 != param_1) {
		uVar3 = uVar4 & 0xfff9cde0 | 0x18000;
		this->field15_0x80 = uVar3;
		(this->parent).field32_0x71 = 1;
		if ((iVar2 != 0) && (param_1 == 0)) {
		puVar1 = *(uint **)(iVar2 + 0x170);
		bVar6 = ~(byte)(*puVar1 >> 5) & 1;
		this->field15_0x80 = uVar4 & 0xfff9cde0 | 0x18200;
		if (bVar6 != 0) {
		*(int *)&this->field_0xe4 = (int)((float)puVar1[4] * TicksPerTime);
		D3DXCOLOR(&this->field_0xf0,&(this->parent).field27_0x30.x);
		this->field15_0x80 =this->field15_0x80 ^ ((*puVar1 >> 0x19) << 0x11 ^ this->field15_0x80) & 0x20000;
		D3DXCOLOR(&this->field66_0x140,&(this->field68_0x160).x);
		D3DXCOLOR(&this->field67_0x150,&(this->field69_0x170).x);
		this->field15_0x80 = this->field15_0x80 & 0xfffeffff;
		}
		uVar4 = ((uint)bVar6 << 1 ^ this->field15_0x80) & 2 ^ this->field15_0x80 | 1;
		this->field15_0x80 = uVar4;
		this->field15_0x80 = ((*puVar1 >> 0x1c) << 0x13 ^ uVar4) & 0x80000 ^ uVar4;
		goto LAB_001d0337;
		}
		if (((~(byte)(**(uint **)(param_1 + 0x170) >> 5) & 1) == 0) || ((uVar4 & 0x4000) != 0)) {
		iVar5 = 1;
		}
		else {
		iVar5 = 0;
		}
		uVar4 = iVar5 << 0xd | uVar3 & 0xffff5fff;
		this->field15_0x80 = uVar4;
		(this->parent).field32_0x71 = ~(byte)(uVar4 >> 0xd) & 1;
		if (iVar2 == 0) {
		this->field15_0x80 = iVar5 << 0xd | uVar3 & 0xfff75fff;
		}
		else {
		this->field15_0x80 =((**(uint **)(iVar2 + 0x170) >> 0x1c) << 0x13 ^ uVar4) & 0x80000 ^ uVar4;
		}
		}
		if (param_1 != 0) {
		local_4 = FUN_001c9060((int)this,*(uint **)(param_1 + 0x170));
		}
		}
		else {
		FUN_001c9060((int)this,(uint *)&this->field83_0x190);
		}
		LAB_001d0337:iVar2 = *(int *)&this->field_0x8c;
		*(int *)&this->field_0x8c = param_1;
		this->field70_0x180 = iVar2;
		this->field15_0x80 = this->field15_0x80 & 0xffffbfff;
		return local_4;
		}
		
	*/
	return 0.0f;
}

