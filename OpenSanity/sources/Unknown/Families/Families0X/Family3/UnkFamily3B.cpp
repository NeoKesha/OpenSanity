#include "headers/Unknown/Families/Families0X/Family3/UnkFamily3B.h"

#include "headers/Known/Math/Matrix4.h"
void UnkFamily3B::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall UnkFamily3B::Construct(UnkFamily3B *this,undefined4 param_1){
		float fVar1;
		float fVar2;
		int extraout_ECX;
		fVar2 = FLOAT_00386ab4;
		fVar1 = FLOAT_003869d8;
		this->field30_0x3c = FLOAT_003869d8;
		this->field36_0x48 = fVar1;
		fVar1 = FLOAT_0038639c;
		(this->parent).vtable = (UnkFamily3Abstract_VTable *)&UnkFamily3_VT_B;
		*(undefined4 *)&this->field_0x4 = param_1;
		this->field_0x8 = 0;
		this->field31_0x40 = fVar2;
		this->field37_0x4c = fVar1;
		Init(this);
		*(float *)(extraout_ECX + 0x44) = *(float *)(extraout_ECX + 0x40) * FLOAT_0038b824;
		return extraout_ECX;
		}
		
	*/
	return;
}

void UnkFamily3B::Init() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily3B::Init(UnkFamily3B *this){
		float fVar1;
		int iVar2;
		float fVar3;
		fVar3 = FLOAT_003863a8;
		this->field38_0x50 = 0;
		this->field39_0x54 = 0;
		this->field40_0x58 = 0;
		this->field41_0x5c = 0;
		this->field9_0xc = 0;
		this->field10_0x10 = 0;
		fVar3 = fVar3 / DAT_0039db80;
		this->field_0x18 = 0;
		(this->field23_0x20).x = Vector4_0039ef70.x;
		(this->field23_0x20).y = Vector4_0039ef70.y;
		(this->field23_0x20).z = Vector4_0039ef70.z;
		fVar1 = FLOAT_0038639c;
		(this->field23_0x20).w = FLOAT_0038639c;
		this->field_0x30 = 0;
		this->field29_0x38 = 0;
		this->field28_0x34 = 0;
		iVar2 = (int)(fVar3 * 0.0);
		this->field79_0x94 = iVar2;
		this->field80_0x98 = iVar2;
		this->field81_0x9c = iVar2;
		this->field82_0xa0 = iVar2;
		this->field83_0xa4 = iVar2;
		this->field84_0xa8 = iVar2;
		this->field85_0xac = iVar2;
		this->field86_0xb0 = iVar2;
		this->field87_0xb4 = iVar2;
		this->field88_0xb8 = iVar2;
		this->field89_0xbc = iVar2;
		this->field90_0xc0 = iVar2;
		this->field91_0xc4 = iVar2;
		this->field92_0xc8 = iVar2;
		this->field93_0xcc = iVar2;
		(this->field58_0x70).z = 0.0;
		(this->field58_0x70).y = 0.0;
		(this->field58_0x70).x = 0.0;
		(this->field58_0x70).w = fVar1;
		this->field_0x90 = 0;
		return;
		}
		
	*/
	return;
}

void UnkFamily3B::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily3B::Dispose(UnkFamily3B *this){
		char cVar1;
		cVar1 = this->field_0x8;
		(this->parent).vtable = (UnkFamily3Abstract_VTable *)&UnkFamily3_VT_B;
		if (cVar1 != '\0') {
		FUN_001f8830(this,*(InstanceContext **)(*(int *)&this->field_0x4 + 0x10));
		}
		(this->parent).vtable = (UnkFamily3Abstract_VTable *)&UnkFamily3_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void UnkFamily3B::FUN_0007de70(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily3B::FUN_0007de70(UnkFamily3B *this,int param_1){
		int iVar1;
		iVar1 = BlackboardAbstract::GetIntValue(*(BlackboardAbstract **)(*(int *)&this->field_0x4 + 0x1c),0);
		if (iVar1 == 5) {
		FUN_001f9690(param_1,0,&this->parent);
		FUN_001f9690(param_1,2,&this->parent);
		FUN_001f9690(param_1,4,&this->parent);
		FUN_001f9690(param_1,0xe,&this->parent);
		FUN_001f9690(param_1,0x12,&this->parent);
		return;
		}
		FUN_001f9690(param_1,0,&this->parent);
		FUN_001f9690(param_1,1,&this->parent);
		FUN_001f9690(param_1,2,&this->parent);
		FUN_001f9690(param_1,3,&this->parent);
		FUN_001f9690(param_1,4,&this->parent);
		return;
		}
		
	*/
	return;
}

void UnkFamily3B::FUN_0007df00(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily3B::FUN_0007df00(UnkFamily3B *this,int param_1){
		int iVar1;
		iVar1 = BlackboardAbstract::GetIntValue(*(BlackboardAbstract **)(*(int *)&this->field_0x4 + 0x1c),0);
		if (iVar1 == 5) {
		FUN_001f9710(param_1,0,this);
		FUN_001f9710(param_1,2,this);
		FUN_001f9710(param_1,4,this);
		FUN_001f9710(param_1,0xe,this);
		FUN_001f9710(param_1,0x12,this);
		return;
		}
		FUN_001f9710(param_1,0,this);
		FUN_001f9710(param_1,1,this);
		FUN_001f9710(param_1,2,this);
		FUN_001f9710(param_1,3,this);
		FUN_001f9710(param_1,4,this);
		return;
		}
		
	*/
	return;
}

bool UnkFamily3B::FUN_000916d0(void* param_1, Matrix4* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall UnkFamily3B::FUN_000916d0(UnkFamily3B *this,void *param_1,Matrix4 *param_2){
		Vector4 *vec;
		char cVar1;
		InstanceTransform *pIVar2;
		int iVar3;
		uint *puVar4;
		int *piVar5;
		float fVar6;
		float fVar7;
		float *pfVar8;
		Vector4 local_100;
		int local_e4;
		float local_e0;
		float local_dc;
		float local_d8;
		float local_d4;
		float local_d0;
		float local_cc;
		float local_c8;
		float local_c4;
		float local_c0 [4];
		undefined4 local_b0 [4];
		float local_a0 [4];
		Matrix4 local_90;
		Matrix4 local_50;
		cVar1 = *(char *)(*(int *)(*(int *)((int)param_1 + 8) + 0x54) + 0x50);
		iVar3 = BlackboardAbstract::GetIntValue(*(BlackboardAbstract **)(*(int *)&this->field_0x4 + 0x1c),0);
		if (iVar3 == 5) {
		if (cVar1 != '\0') {
		if (cVar1 != '\x02') {
		if (cVar1 != '\x04') {
		if ((cVar1 == '\x0e') || (cVar1 == '\x12')) {
		FUN_001f9070(param_1,*(Matrix4 **)(*(int *)((int)param_1 + 8) + 0x60),'\x01',param_2);
		if (cVar1 != '\x0e') {
		return true;
		}
		if (this->field_0x90 == '\0') {
		pIVar2 = *(InstanceTransform **)(*(int *)(*(int *)&this->field_0x4 + 0x10) + 0x18);
		InstanceTransform::FillMatrix(pIVar2);
		local_e0 = (pIVar2->matrix).m41;
		local_dc = (pIVar2->matrix).m42;
		local_d8 = (pIVar2->matrix).m43;
		pIVar2 = *(InstanceTransform **)(*(int *)(*(int *)&this->field_0x4 + 0x10) + 0x18);
		InstanceTransform::FillMatrix(pIVar2);
		local_e0 = (pIVar2->matrix).m31 * FLOAT_0038bacc + local_e0;
		local_d8 = local_d8 + (pIVar2->matrix).m33 * FLOAT_0038bacc;
		pfVar8 = &local_e0;
		local_dc = local_dc + (pIVar2->matrix).m32 * FLOAT_0038bacc;
		local_d4 = FLOAT_0038639c;
		}
		else {
		pfVar8 = (float *)&this->field_0x80;
		}
		thunk_FUN_00084d70((int)this,(int)param_2,0,'\x01',pfVar8,local_b0);
		vec = &this->field58_0x70;
		thunk_FUN_000a5fd0(local_b0,&vec->x,local_c0);
		FUN_000e9bf0(local_c0,local_a0,&local_e4,'\0');
		puVar4 = InstanceContext::FUN_000f7220(*(InstanceContext **)(*(int *)&this->field_0x4 + 0x10));
		fVar6 = (float)puVar4[2] * TimePerTick1 * FLOAT_0038b718;
		fVar7 = (FLOAT_003863a8 / DAT_0039db80) * fVar6;
		iVar3 = (int)fVar7;
		if ((local_e4 <= iVar3) && (iVar3 = local_e4, local_e4 < (int)(0.0 - fVar7))) {
		iVar3 = (int)((FLOAT_003863a8 / DAT_0039db80) * (0.0 - fVar6));
		}
		local_e4 = iVar3;
		FUN_000e9b00(local_c0,local_a0,local_e4,0);
		local_d0 = vec->x;
		local_cc = (this->field58_0x70).y;
		local_c8 = (this->field58_0x70).z;
		local_c4 = (this->field58_0x70).w;
		FUN_000dae60(vec,local_c0,&local_d0);
		Matrix4::FUN_000d9f80(&local_90,vec);
		local_90.m41 = Vector4_0039ef70.x;
		local_90.m42 = Vector4_0039ef70.y;
		local_90.m43 = Vector4_0039ef70.z;
		local_90.m44 = FLOAT_0038639c;
		local_100.x = param_2->m41;
		local_100.y = param_2->m42;
		local_100.z = param_2->m43;
		local_100.w = param_2->m44;
		Matrix4::thunk_FUN_00027120(&local_50,param_2);
		local_50.m41 = Vector4_0039ef70.x;
		local_50.m42 = Vector4_0039ef70.y;
		local_50.m43 = Vector4_0039ef70.z;
		local_50.m44 = FLOAT_0038639c;
		Matrix4::Multiply4443(&local_50,&local_90,param_2);
		param_2->m41 = local_100.x;
		param_2->m42 = local_100.y;
		param_2->m43 = local_100.z;
		param_2->m44 = local_100.w;
		return true;
		}
		goto LAB_00091aaf;
		}
		LAB_00091a85:piVar5 = &this->field85_0xac;
		LAB_00091aa5:thunk_FUN_000a4340(&local_100,(uint *)piVar5);
		goto LAB_00091aaf;
		}
		LAB_0009173e:Vector4::FromRotation(&local_100,this->field82_0xa0,this->field83_0xa4,this->field84_0xa8);
		goto LAB_00091aaf;
		}
		}
		else if (cVar1 != '\0') {
		if (cVar1 != '\x01') {
		if (cVar1 == '\x02') goto LAB_00091a85;
		if (cVar1 == '\x03') {
		piVar5 = &this->field88_0xb8;
		}
		else {
		if (cVar1 != '\x04') goto LAB_00091aaf;
		piVar5 = &this->field91_0xc4;
		}
		goto LAB_00091aa5;
		}
		goto LAB_0009173e;
		}
		Vector4::FromRotation(&local_100,this->field79_0x94,this->field80_0x98,this->field81_0x9c);
		LAB_00091aaf:FUN_001f8270(param_1,&local_100.x);
		return true;
		}
		
	*/
	return false;
}

void UnkFamily3B::Dispose_6(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily3Abstract * __thiscall UnkFamily3B::Dispose(UnkFamily3B *this,byte param_1){
		char cVar1;
		cVar1 = this->field_0x8;
		(this->parent).vtable = (UnkFamily3Abstract_VTable *)&UnkFamily3_VT_B;
		if (cVar1 != '\0') {
		FUN_001f8830(this,*(InstanceContext **)(*(int *)&this->field_0x4 + 0x10));
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

