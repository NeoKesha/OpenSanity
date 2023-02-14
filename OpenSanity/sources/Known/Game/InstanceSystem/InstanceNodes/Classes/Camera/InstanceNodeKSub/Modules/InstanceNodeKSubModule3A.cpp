#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/Modules/InstanceNodeKSubModule3A.h"

#include "headers/Known/Math/Matrix4.h"
#include "headers/Global.h"

InstanceNodeKSubModule3A::InstanceNodeKSubModule3A() : InstanceNodeKSubModule3Abstract()
{
	Init();
}

InstanceNodeKSubModule3A::~InstanceNodeKSubModule3A()
{

}

void InstanceNodeKSubModule3A::Init() {
	this->field13_0x50 = 0; //this->field13_0x50 = this->field13_0x50 & 0xffffffe0;
	(this->field23_0x60).x = 0.0f;
	(this->field23_0x60).y = 0.0f;
	(this->field23_0x60).z = 0.0f;
	(this->field23_0x60).w = 1.0f;
	(this->field24_0x70).x = 0.0f;
	(this->field24_0x70).y = 0.0f;
	(this->field24_0x70).z = 0.0f;
	(this->field24_0x70).w = 1.0f;
	(this->field_0x80).x = 0.0f;
	(this->field_0x80).y = 0.0f;
	(this->field_0x80).z = 0.0f;
	(this->field_0x80).w = 0.0f;
	this->field14_0x54 = 0;
	this->field49_0x98 = 0;
}

void InstanceNodeKSubModule3A::UnkMethod3(int param_1, Matrix4* mat) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubModule3A::UnkMethod3(InstanceNodeKSubModule3A *this,int param_1,Matrix4 *mat){
		Vector4 *pVVar1;
		int this_00;
		float *pfVar2;
		Vector4 *vec;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float local_80;
		float local_7c;
		float local_78;
		float local_74;
		Vector4 local_70;
		float local_60 [4];
		Matrix4 local_50;
		local_80 = mat->m41;
		local_7c = mat->m42;
		local_78 = mat->m43;
		local_74 = mat->m44;
		pVVar1 = &(this->parent).vec2;
		if (((pVVar1->x != (this->field24_0x70).x) || ((this->parent).vec2.y != (this->field24_0x70).y))|| ((this->parent).vec2.z != (this->field24_0x70).z)) {
		if ((int)(TicksPerTime * FLOAT_00386394) < *(int *)&this->field_0x8c) {
		fVar9 = InstanceNodeKSubModule3Abstract::UnkMethod3_(&this->parent,param_1);
		if (fVar9 <= FLOAT_0038639c) {
		this_00 = this->field49_0x98;
		if (this_00 == 0) {
		pVVar1->x = ((this->field24_0x70).x - (this->field23_0x60).x) * fVar9 +(this->field23_0x60).x;
		(this->parent).vec2.y =((this->field24_0x70).y - (this->field23_0x60).y) * fVar9 + (this->field23_0x60).y;
		(this->parent).vec2.z =((this->field24_0x70).z - (this->field23_0x60).z) * fVar9 + (this->field23_0x60).z;
		(this->parent).vec2.w = FLOAT_0038639c;
		}
		else if (FLOAT_003955cc < fVar9) {
		FUN_000ecf20(this_00,&local_70,fVar9);
		pVVar1->x = pVVar1->x + local_70.x;
		(this->parent).vec2.y = (this->parent).vec2.y + local_70.y;
		(this->parent).vec2.z = (this->parent).vec2.z + local_70.z;
		fVar3 = FLOAT_00386ab4;
		pVVar1->x = pVVar1->x * FLOAT_00386ab4;
		(this->parent).vec2.y = (this->parent).vec2.y * fVar3;
		(this->parent).vec2.z = (this->parent).vec2.z * fVar3;
		}
		else {
		FUN_000ecf20(this_00,pVVar1,fVar9);
		}
		(this->parent).fov =(float)((int)(2PI * FLOAT_003863a0 *(float)(*(int *)&this->field_0x84 - *(int *)&this->field_0x80) * fVar9 *(FLOAT_003863a8 / 2PI)) + *(int *)&this->field_0x80);
		if ((*(byte *)&this->field13_0x50 & 0x20) != 0) {
		fVar7 = (this->field23_0x60).z - local_78;
		fVar5 = (this->field23_0x60).y - local_7c;
		fVar3 = (this->field23_0x60).x - local_80;
		fVar8 = (this->field24_0x70).z - local_78;
		fVar6 = (this->field24_0x70).y - local_7c;
		fVar4 = (this->field24_0x70).x - local_80;
		fVar6 = (FLOAT_0038639c - fVar9) * SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar3 * fVar3) +SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar4 * fVar4) * fVar9;
		local_70.x = pVVar1->x - local_80;
		local_70.y = (this->parent).vec2.y - local_7c;
		local_70.z = (this->parent).vec2.z - local_78;
		local_70.w = FLOAT_0038639c;
		pfVar2 = (float *)thunk_FUN_000ab5e0(&local_70,local_60);
		fVar3 = pfVar2[1];
		fVar4 = pfVar2[2];
		pVVar1->x = *pfVar2 * fVar6 + local_80;
		fVar5 = FLOAT_0038639c;
		(this->parent).vec2.y = fVar3 * fVar6 + local_7c;
		(this->parent).vec2.z = fVar4 * fVar6 + local_78;
		(this->parent).vec2.w = fVar5;
		}
		}
		if (fVar9 == FLOAT_0038639c) {
		*(undefined4 *)&this->field_0x8c = 0;
		}
		}
		else {
		(this->field23_0x60).x = (this->field24_0x70).x;
		(this->field23_0x60).y = (this->field24_0x70).y;
		(this->field23_0x60).z = (this->field24_0x70).z;
		(this->field23_0x60).w = (this->field24_0x70).w;
		pVVar1->x = (this->field23_0x60).x;
		(this->parent).vec2.y = (this->field23_0x60).y;
		(this->parent).vec2.z = (this->field23_0x60).z;
		(this->parent).vec2.w = (this->field23_0x60).w;
		*(float *)&this->field_0x80 = *(float *)&this->field_0x84;
		(this->parent).fov = *(float *)&this->field_0x84;
		}
		}
		vec = &(this->parent).vec1;
		local_70.x = 0.0;
		local_70.y = FLOAT_0038639c;
		local_70.z = 0.0;
		local_70.w = FLOAT_0038639c;
		Matrix4::FUN_000d9f80(&local_50,vec);
		FUN_000e8310(&local_50,&pVVar1->x,&local_80,&local_70.x);
		Vector4::FUN_000db0d0(vec,&local_50);
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubModule3A::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceNodeKSubModule3A::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

