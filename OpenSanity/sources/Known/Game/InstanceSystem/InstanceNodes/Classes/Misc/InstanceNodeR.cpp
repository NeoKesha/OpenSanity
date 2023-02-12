#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Misc/InstanceNodeR.h"

void InstanceNodeR::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeR::CleanUp(InstanceNodeR *this){
		byte bVar1;
		bVar1 = *(byte *)&this->field1_0x18;
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_R;
		if ((bVar1 & 2) != 0) {
		if ((undefined4 *)this->field6_0x2c != (undefined4 *)0x0) {
		(***(code ***)this->field6_0x2c)(1);
		}
		this->field1_0x18 = this->field1_0x18 & 0xfffffffd;
		}
		this->field6_0x2c = (undefined *)0x0;
		if ((*(byte *)&this->field1_0x18 & 4) != 0) {
		if ((undefined4 *)this->field7_0x30 != (undefined4 *)0x0) {
		(***(code ***)this->field7_0x30)(1);
		}
		this->field1_0x18 = this->field1_0x18 & 0xfffffffb;
		}
		this->field7_0x30 = (undefined *)0x0;
		InstanceNodeAbstract::UnrollVtable(&this->parent);
		return;
		}
		
	*/
	return;
}

void InstanceNodeR::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address InstanceNodeR * __fastcall InstanceNodeR::Construct(InstanceNodeR *this){
		float fVar1;
		float fVar2;
		InstanceNodeAbstract::Contruct(&this->parent);
		fVar2 = FLOAT_00395580;
		fVar1 = (FLOAT_003863a8 / 2PI) * _DAT_003a3c50;
		(this->parent).vtable = (InstanceNodeAbstract_VTable *)&InstanceNode_VT_R;
		this->field6_0x2c = (undefined *)0x0;
		this->field7_0x30 = (undefined *)0x0;
		this->field1_0x18 = 1;
		this->fov = (float)(int)fVar1;
		this->near = fVar2;
		this->far = FLOAT_00395870;
		fVar2 = FLOAT_0038639c;
		if (DAT_003ec3d0 != 0) {
		fVar2 = FLOAT_0038d75c;
		}
		this->field8_0x34 = 0;
		this->field9_0x38 = 0;
		this->field3_0x20 = fVar2;
		return this;
		}
		
	*/
	return;
}

void InstanceNodeR::UpdateTime(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeR::UpdateTime(InstanceNodeR *this,int param_1){
		int unaff_retaddr;
		if ((int *)this->field6_0x2c != (int *)0x0) {
		(**(code **)(*(int *)this->field6_0x2c + 4))((this->parent).ctx);
		}
		if ((int *)this->field7_0x30 != (int *)0x0) {
		(**(code **)(*(int *)this->field7_0x30 + 4))((this->parent).ctx);
		(this->parent).time = *(uint *)(unaff_retaddr + 4);
		return;
		}
		(this->parent).time = *(uint *)(param_1 + 4);
		return;
		}
		
	*/
	return;
}

bool InstanceNodeR::Step(byte* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodeR::Step(InstanceNodeR *this,byte *param_1){
		InstanceTransform *transform;
		InstanceContext *this_00;
		bool bVar1;
		float local_54;
		Matrix4 local_50;
		if ((*param_1 & 1) != 0) {
		transform = (((this->parent).ctx)->parent).transform;
		InstanceTransform::FillMatrix(transform);
		local_50.m11 = (transform->matrix).m11;
		local_50.m12 = (transform->matrix).m12;
		local_50.m13 = (transform->matrix).m13;
		local_50.m14 = (transform->matrix).m14;
		local_50.m21 = (transform->matrix).m21;
		local_50.m22 = (transform->matrix).m22;
		local_50.m23 = (transform->matrix).m23;
		local_50.m24 = (transform->matrix).m24;
		local_50.m31 = (transform->matrix).m31;
		local_50.m32 = (transform->matrix).m32;
		local_50.m33 = (transform->matrix).m33;
		local_50.m34 = (transform->matrix).m34;
		local_50.m41 = (transform->matrix).m41;
		local_50.m42 = (transform->matrix).m42;
		local_50.m43 = (transform->matrix).m43;
		local_50.m44 = (transform->matrix).m44;
		FUN_001d2ac0((int)this,&local_54,(int)param_1,&local_50.m11);
		this->field1_0x18 = this->field1_0x18 | 1;
		this->fov = local_54;
		this_00 = (this->parent).ctx;
		bVar1 = InstanceTransform::FUN_000e16f0((this_00->parent).transform,&local_50);
		if (bVar1 != false) {
		InstanceContext::RegisterCtxPtrToList(this_00);
		}
		}
		bVar1 = InstanceNodeAbstract::Step(&this->parent,(UnkTimePack *)param_1);
		return bVar1;
		}
		
	*/
	return false;
}

void InstanceNodeR::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * __thiscall InstanceNodeR::Dispose(InstanceNodeR *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

uint InstanceNodeR::IsA(uint param_1, uint* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall InstanceNodeR::IsA(InstanceNodeR *this,undefined4 param_1,uint *param_2){
		byte bVar1;
		int *piVar2;
		if ((*param_2 >> 0x12 & 1) != 0) {
		bVar1 = 1;
		if ((int *)this->field6_0x2c != (int *)0x0) {
		bVar1 = (**(code **)(*(int *)this->field6_0x2c + 0xc))(param_1,param_2);
		bVar1 = bVar1 & 1;
		}
		piVar2 = (int *)this->field7_0x30;
		if (piVar2 != (int *)0x0) {
		piVar2 = (int *)(**(code **)(*piVar2 + 0xc))(param_1,param_2);
		bVar1 = bVar1 & (byte)piVar2;
		}
		return (uint)piVar2 & 0xffffff00 | (uint)bVar1;
		}
		return (*param_2 >> 0x1a) << 8;
		}
		
	*/
	return 0;
}

byte InstanceNodeR::GetIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte InstanceNodeR::GetIndex(void){
		return 9;
		}
		
	*/
	return 0;
}

uint InstanceNodeR::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 InstanceNodeR::GetBuilderIndex(void){
		return 0x141f;
		}
		
	*/
	return 0;
}

