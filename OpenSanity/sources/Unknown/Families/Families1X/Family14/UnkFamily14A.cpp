#include "headers/Unknown/Families/Families1X/Family14/UnkFamily14A.h"

#include "headers/Known/Math/Matrix4.h"
void UnkFamily14A::Unroll() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily14A::Unroll(UnkFamily14A *this){
		(this->parent).vtable = (UnkFamily14Base_VTable *)&UnkFamily14_VT_Base;
		return;
		}
		
	*/
	return;
}

void UnkFamily14A::Construct(Matrix4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily14A * __thiscall UnkFamily14A::Construct(UnkFamily14A *this,Matrix4 *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		AutoClass25 *pAVar4;
		pAVar4 = DAT_003ec548;
		(this->parent).vtable = (UnkFamily14Base_VTable *)&UnkFamily14_VT_Base;
		(this->parent).field146_0x104 = pAVar4;
		UnkFamily14Base::Init(&this->parent);
		(this->parent).vtable = (UnkFamily14Base_VTable *)&UnkFamily14_VT_A;
		fVar1 = param_1->m12;
		fVar2 = param_1->m13;
		fVar3 = param_1->m14;
		(this->field1_0x110).m21 = param_1->m11;
		(this->field1_0x110).m22 = fVar1;
		(this->field1_0x110).m23 = fVar2;
		(this->field1_0x110).m24 = fVar3;
		fVar1 = param_1->m22;
		fVar2 = param_1->m23;
		fVar3 = param_1->m24;
		(this->field1_0x110).m31 = param_1->m21;
		(this->field1_0x110).m32 = fVar1;
		(this->field1_0x110).m33 = fVar2;
		(this->field1_0x110).m34 = fVar3;
		fVar1 = param_1->m32;
		fVar2 = param_1->m33;
		fVar3 = param_1->m34;
		(this->field1_0x110).m41 = param_1->m31;
		(this->field1_0x110).m42 = fVar1;
		(this->field1_0x110).m43 = fVar2;
		(this->field1_0x110).m44 = fVar3;
		fVar1 = param_1->m42;
		fVar2 = param_1->m43;
		fVar3 = param_1->m44;
		(this->field2_0x150).x = param_1->m41;
		(this->field2_0x150).y = fVar1;
		(this->field2_0x150).z = fVar2;
		(this->field2_0x150).w = fVar3;
		return this;
		}
		
	*/
	return;
}

void UnkFamily14A::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily14A * __thiscall UnkFamily14A::Dispose(UnkFamily14A *this,byte param_1){
		(this->parent).vtable = (UnkFamily14Base_VTable *)&UnkFamily14_VT_A;
		Unroll(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

int UnkFamily14A::FUN_00154320(float* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall UnkFamily14A::FUN_00154320(UnkFamily14A *this,float *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		float fVar14;
		float fVar15;
		float fVar16;
		float fVar17;
		float fVar18;
		float fVar19;
		fVar17 = *param_1;
		fVar1 = param_1[1];
		fVar2 = param_1[3];
		fVar18 = (this->field2_0x150).x;
		fVar19 = (this->field2_0x150).y;
		fVar3 = (this->field2_0x150).z;
		fVar4 = (this->field2_0x150).w;
		fVar5 = (this->field1_0x110).m41;
		fVar6 = (this->field1_0x110).m42;
		fVar7 = (this->field1_0x110).m43;
		fVar8 = (this->field1_0x110).m44;
		fVar9 = (this->field1_0x110).m31;
		fVar10 = (this->field1_0x110).m32;
		fVar11 = (this->field1_0x110).m33;
		fVar12 = (this->field1_0x110).m34;
		fVar13 = (this->field1_0x110).m21;
		fVar14 = (this->field1_0x110).m22;
		fVar15 = (this->field1_0x110).m23;
		fVar16 = (this->field1_0x110).m24;
		*(undefined (*) [16])&(this->parent).field_0x90 =CONCAT412(fVar17 * fVar16 + fVar1 * fVar12 + fVar8 * 0.0 + fVar2 * fVar4,CONCAT48(fVar17 * fVar15 + fVar1 * fVar11 + fVar7 * 0.0 + fVar2 * fVar3,CONCAT44(fVar17 * fVar14 + fVar1 * fVar10 + fVar6 * 0.0 + fVar2 * fVar19,fVar17 * fVar13 + fVar1 * fVar9 + fVar5 * 0.0 + fVar2 * fVar18)));
		fVar17 = param_1[7];
		fVar1 = param_1[5];
		fVar2 = param_1[4];
		*(undefined (*) [16])&(this->parent).field_0xa0 =CONCAT412(fVar2 * fVar16 + fVar1 * fVar12 + fVar8 * 0.0 + fVar17 * fVar4,CONCAT48(fVar2 * fVar15 + fVar1 * fVar11 + fVar7 * 0.0 + fVar17 * fVar3,CONCAT44(fVar2 * fVar14 + fVar1 * fVar10 + fVar6 * 0.0 + fVar17 * fVar19,fVar2 * fVar13 + fVar1 * fVar9 + fVar5 * 0.0 + fVar17 * fVar18)));
		fVar17 = param_1[0xb];
		fVar1 = param_1[9];
		fVar2 = param_1[8];
		*(undefined (*) [16])&(this->parent).field_0xb0 =CONCAT412(fVar2 * fVar16 + fVar1 * fVar12 + fVar8 * 0.0 + fVar17 * fVar4,CONCAT48(fVar2 * fVar15 + fVar1 * fVar11 + fVar7 * 0.0 + fVar17 * fVar3,CONCAT44(fVar2 * fVar14 + fVar1 * fVar10 + fVar6 * 0.0 + fVar17 * fVar19,fVar2 * fVar13 + fVar1 * fVar9 + fVar5 * 0.0 + fVar17 * fVar18)));
		fVar17 = param_1[0xf];
		fVar2 = param_1[0xc];
		fVar1 = param_1[0xd];
		fVar18 = fVar2 * fVar13 + fVar1 * fVar9 + fVar5 * 0.0 + fVar17 * fVar18;
		fVar19 = fVar2 * fVar14 + fVar1 * fVar10 + fVar6 * 0.0 + fVar17 * fVar19;
		*(undefined (*) [16])&(this->parent).field_0xc0 =CONCAT412(fVar2 * fVar16 + fVar1 * fVar12 + fVar8 * 0.0 + fVar17 * fVar4,CONCAT48(fVar2 * fVar15 + fVar1 * fVar11 + fVar7 * 0.0 + fVar17 * fVar3,CONCAT44(fVar19,fVar18)));
		fVar18 = fVar18 - (this->parent).field144_0xf0.x;
		fVar19 = fVar19 - (this->parent).field144_0xf0.y;
		fVar17 = ROUND(fVar18 * fVar18 + fVar19 * fVar19 + 0.0);
		(this->parent).distance = (int)fVar17;
		if (0xffffff < (uint)fVar17) {
		(this->parent).distance = 0xffffff;
		}
		return (int)&(this->parent).field_0x90;
		}
		
	*/
	return 0;
}

void UnkFamily14A::FUN_001544f0(float* param_1, Matrix4* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily14A::FUN_001544f0(UnkFamily14A *this,float *param_1,Matrix4 *param_2){
		Matrix4 local_50;
		Matrix4::Multiply4443(param_2,(Matrix4 *)&(this->field1_0x110).m21,&local_50);
		UnkFamily14Base::FUN_00153b30(&this->parent,param_1,&local_50.m11);
		return;
		}
		
	*/
	return;
}

void UnkFamily14A::FUN_00154530(float* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily14A::FUN_00154530(UnkFamily14A *this,float *param_1){
		Vector4 local_20;
		Matrix4::FUN_000d4000((Matrix4 *)&(this->field1_0x110).m21,(Vector4 *)param_1,&local_20);
		UnkFamily14Base::FUN_00154250(&this->parent,(Vector2 *)&local_20);
		return;
		}
		
	*/
	return;
}

uint UnkFamily14A::FUN_00154690(float* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall UnkFamily14A::FUN_00154690(UnkFamily14A *this,float *param_1){
		float fVar1;
		Vector4 local_20;
		Matrix4::FUN_000d42b0((Matrix4 *)&(this->field1_0x110).m21,(Vector4 *)param_1,&local_20);
		fVar1 = local_20.z * local_20.z + local_20.y * local_20.y + local_20.x * local_20.x;
		if (fVar1 <= FLOAT_003a34e8) {
		fVar1 = 0.0;
		}
		else {
		fVar1 = FLOAT_0038639c / SQRT(fVar1);
		}
		if (0.0 < Vector4_00494870.z * local_20.z * fVar1 + Vector4_00494870.y * local_20.y * fVar1 +Vector4_00494870.x * local_20.x * fVar1) {
		return 1;
		}
		return 0;
		}
		
	*/
	return 0;
}

void UnkFamily14A::FUN_00140c40() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined UnkFamily14A::FUN_00140c40(void){
		return 1;
		}
		
	*/
	return;
}

void UnkFamily14A::FUN_001544d0(float* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily14A::FUN_001544d0(UnkFamily14A *this,float *param_1){
		UnkFamily14Base::FUN_00153b30(&this->parent,param_1,&(this->field1_0x110).m21);
		return;
		}
		
	*/
	return;
}

void UnkFamily14A::Dispose_9() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily14A::Dispose(UnkFamily14A *this){
		(this->parent).vtable = (UnkFamily14Base_VTable *)&UnkFamily14_VT_A;
		Unroll(this);
		return;
		}
		
	*/
	return;
}

