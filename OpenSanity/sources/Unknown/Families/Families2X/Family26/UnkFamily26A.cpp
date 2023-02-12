#include "headers/Unknown/Families/Families2X/Family26/UnkFamily26A.h"

#include "headers/Known/Math/Vector4.h"
void UnkFamily26A::Init(Vector4* param_1, Vector4* param_2, int param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily26A::Init(UnkFamily26A *this,Vector4 *param_1,Vector4 *param_2,int param_3){
		float fVar1;
		float fVar2;
		undefined4 *puVar3;
		undefined4 *puVar4;
		undefined4 *puVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		uint local_38;
		Vector4 local_30;
		fVar1 = (float)this->field1_0x14;
		if ((int)this->field1_0x14 < 0) {
		fVar1 = fVar1 + FLOAT_00386458;
		}
		fVar1 = SQRT(param_1->x * param_1->x + param_1->y * param_1->y + param_1->z * param_1->z) / fVar1;
		local_30.x = param_2->x;
		local_30.y = param_2->y;
		local_30.z = param_2->z;
		local_30.w = param_2->w;
		fVar6 = param_1->x;
		fVar7 = param_1->y;
		fVar8 = param_1->z;
		puVar3 = FUN_000f5360(param_3,&local_30,0x3f800000);
		fVar2 = (float)this->field1_0x14;
		*(undefined4 **)&this->field_0x18 = puVar3;
		if ((int)this->field1_0x14 < 0) {
		fVar2 = fVar2 + FLOAT_00386458;
		}
		fVar2 = FLOAT_0038639c / fVar2;
		fVar6 = fVar2 * fVar6;
		local_30.x = fVar6 + local_30.x;
		fVar7 = fVar7 * fVar2;
		local_30.y = fVar7 + local_30.y;
		fVar8 = fVar8 * fVar2;
		local_30.z = fVar8 + local_30.z;
		local_38 = 1;
		puVar5 = puVar3;
		if (1 < (uint)this->field1_0x14) {
		do {
		puVar3 = FUN_000f5360(param_3,&local_30,0x3f800000);
		puVar4 = (undefined4 *)VirtualPool::AllocateMemory(0x14);
		if (puVar4 == (undefined4 *)0x0) {
		puVar4 = (undefined4 *)0x0;
		}
		else {
		puVar4[2] = fVar1;
		puVar4[3] = FLOAT_0038adbc;
		*puVar4 = puVar5;
		puVar4[1] = puVar3;
		puVar4[4] = 0;
		}
		FUN_000f38c0(&(this->parent).collection,puVar4);
		local_30.x = fVar6 + local_30.x;
		local_30.y = fVar7 + local_30.y;
		local_38 = local_38 + 1;
		local_30.z = fVar8 + local_30.z;
		puVar5 = puVar3;
		}
		 while (local_38 < (uint)this->field1_0x14);
		}
		puVar5 = FUN_000f5360(param_3,&local_30,0x3f800000);
		*(undefined4 **)&this->field_0x1c = puVar5;
		puVar4 = (undefined4 *)VirtualPool::AllocateMemory(0x14);
		if (puVar4 == (undefined4 *)0x0) {
		FUN_000f38c0(&(this->parent).collection,0);
		return;
		}
		puVar4[2] = fVar1;
		puVar4[3] = FLOAT_0038adbc;
		*puVar4 = puVar3;
		puVar4[1] = puVar5;
		puVar4[4] = 0;
		FUN_000f38c0(&(this->parent).collection,puVar4);
		return;
		}
		
	*/
	return;
}

void UnkFamily26A::Construct(uint param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily26A * __thiscall UnkFamily26A::Construct(UnkFamily26A *this,undefined4 param_1,int param_2){
		UNV008 *pUVar1;
		Vector4 local_30;
		Vector4 local_20;
		(this->parent).vtable = (UnkFamily26Base_VTable *)&UnkFamily26_VT_Base;
		(this->parent).field2_0x8 = 0;
		(this->parent).cnt1 = 10;
		(this->parent).cnt2 = 10;
		pUVar1 = (UNV008 *)VirtualPool::AllocateMemory(0x28);
		local_20.y = FLOAT_003869d8;
		local_30.w = FLOAT_0038639c;
		(this->parent).collection = pUVar1;
		this->field1_0x14 = param_1;
		(this->parent).vtable = (UnkFamily26Base_VTable *)&UnkFamily26_VT_A;
		local_30.x = 0.0;
		local_30.y = 0.0;
		local_30.z = 0.0;
		local_20.x = 0.0;
		local_20.z = 0.0;
		local_20.w = local_30.w;
		Init(this,&local_20,&local_30,param_2);
		return this;
		}
		
	*/
	return;
}

void UnkFamily26A::Construct_2(uint param_1, Vector4* param_2, int param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily26A * __thiscall UnkFamily26A::Construct(UnkFamily26A *this,undefined4 param_1,Vector4 *param_2,int param_3){
		UNV008 *pUVar1;
		Vector4 local_20;
		(this->parent).vtable = (UnkFamily26Base_VTable *)&UnkFamily26_VT_Base;
		(this->parent).field2_0x8 = 0;
		(this->parent).cnt1 = 10;
		(this->parent).cnt2 = 10;
		pUVar1 = (UNV008 *)VirtualPool::AllocateMemory(0x28);
		(this->parent).collection = pUVar1;
		this->field1_0x14 = param_1;
		local_20.w = FLOAT_0038639c;
		local_20.x = 0.0;
		local_20.y = 0.0;
		local_20.z = 0.0;
		(this->parent).vtable = (UnkFamily26Base_VTable *)&UnkFamily26_VT_A;
		Init(this,param_2,&local_20,param_3);
		return this;
		}
		
	*/
	return;
}

void UnkFamily26A::Construct_3(uint param_1, Vector4* param_2, Vector4* param_3, int param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily26A * __thiscall UnkFamily26A::Construct(UnkFamily26A *this,undefined4 param_1,Vector4 *param_2,Vector4 *param_3,int param_4){
		UNV008 *pUVar1;
		(this->parent).vtable = (UnkFamily26Base_VTable *)&UnkFamily26_VT_Base;
		(this->parent).field2_0x8 = 0;
		(this->parent).cnt1 = 10;
		(this->parent).cnt2 = 10;
		pUVar1 = (UNV008 *)VirtualPool::AllocateMemory(0x28);
		(this->parent).collection = pUVar1;
		this->field1_0x14 = param_1;
		(this->parent).vtable = (UnkFamily26Base_VTable *)&UnkFamily26_VT_A;
		Init(this,param_2,param_3,param_4);
		return this;
		}
		
	*/
	return;
}

void UnkFamily26A::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily26A * __thiscall UnkFamily26A::Dispose(UnkFamily26A *this,byte param_1){
		(this->parent).vtable = (UnkFamily26Base_VTable *)&UnkFamily26_VT_A;
		UnkFamily26Base::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

