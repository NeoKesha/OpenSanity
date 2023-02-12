#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/Modules/InstanceNodeKSubModule2A.h"

float InstanceNodeKSubModule2A::FUN_001c92e0(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall InstanceNodeKSubModule2A::FUN_001c92e0(InstanceNodeKSubModule2A *this,int param_1){
		int iVar1;
		uint uVar2;
		float fVar3;
		int iVar4;
		float local_4;
		fVar3 = FLOAT_0038639c;
		local_4 = FLOAT_0038639c;
		iVar1 = *(int *)&this->field_0xb4;
		if ((int)(TicksPerTime * 0.0) < iVar1) {
		uVar2 = this->field15_0x80;
		if ((uVar2 & 1) == 0) {
		*(int *)&this->field_0xb0 = *(int *)(param_1 + 4);
		local_4 = 0.0;
		this->field15_0x80 = uVar2 | 1;
		}
		else {
		iVar4 = *(int *)(param_1 + 4) - *(int *)&this->field_0xb0;
		if (iVar1 <= iVar4) {
		*(undefined4 *)&this->field_0xb4 = 0;
		this->field15_0x80 = uVar2 & 0xfffffffe;
		return fVar3;
		}
		local_4 = ((float)iVar4 * TimePerTick1) / ((float)iVar1 * TimePerTick1);
		if ((uVar2 >> 1 & 7) == 2) {
		return local_4 * local_4 * FLOAT_003865d0 - local_4 * local_4 * local_4 * FLOAT_003865d4;
		}
		}
		}
		return local_4;
		}
		
	*/
	return 0.0f;
}

void InstanceNodeKSubModule2A::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeKSubModule2A * __fastcall InstanceNodeKSubModule2A::Construct(InstanceNodeKSubModule2A *this){
		float fVar1;
		InstanceNodeKSubModule2A *pIVar2;
		fVar1 = FLOAT_0038639c;
		pIVar2 = (InstanceNodeKSubModule2A *)(this->field15_0x80 & 0xfffffff0);
		this->field15_0x80 = (uint)pIVar2;
		(this->parent).field26_0x20.z = 0.0;
		(this->parent).field26_0x20.y = 0.0;
		(this->parent).field26_0x20.x = 0.0;
		(this->parent).field26_0x20.w = fVar1;
		(this->parent).field27_0x30.x = Vector4_0039ef70.x;
		(this->parent).field27_0x30.y = Vector4_0039ef70.y;
		(this->parent).field27_0x30.z = Vector4_0039ef70.z;
		(this->parent).field27_0x30.w = fVar1;
		(this->field28_0x90).x = Vector4_0039ef70.x;
		(this->field28_0x90).y = Vector4_0039ef70.y;
		(this->field28_0x90).z = Vector4_0039ef70.z;
		(this->field28_0x90).w = fVar1;
		(this->field29_0xa0).x = Vector4_0039ef70.x;
		(this->field29_0xa0).y = Vector4_0039ef70.y;
		(this->field29_0xa0).z = Vector4_0039ef70.z;
		(this->field29_0xa0).w = fVar1;
		(this->parent).field13_0x10 = 0;
		this->field38_0xb8 = 0;
		return pIVar2;
		}
		
	*/
	return;
}

void InstanceNodeKSubModule2A::UnkMethod3(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubModule2A::UnkMethod3(InstanceNodeKSubModule2A *this,int param_1){
		int this_00;
		float fVar1;
		Vector4 *pVVar2;
		float fVar3;
		float local_30;
		float local_2c;
		float local_28;
		float local_20;
		float local_1c;
		float local_18;
		fVar3 = FUN_001c92e0(this,param_1);
		if (FLOAT_0038639c <= fVar3) {
		(this->field28_0x90).x = (this->field29_0xa0).x;
		(this->field28_0x90).y = (this->field29_0xa0).y;
		(this->field28_0x90).z = (this->field29_0xa0).z;
		(this->field28_0x90).w = (this->field29_0xa0).w;
		(this->parent).field27_0x30.x = (this->field28_0x90).x;
		(this->parent).field27_0x30.y = (this->field28_0x90).y;
		(this->parent).field27_0x30.z = (this->field28_0x90).z;
		(this->parent).field27_0x30.w = (this->field28_0x90).w;
		return;
		}
		this_00 = this->field38_0xb8;
		if (this_00 != 0) {
		if (FLOAT_003955cc < fVar3) {
		FUN_000ecf20(this_00,&local_30,fVar3);
		pVVar2 = &(this->parent).field27_0x30;
		pVVar2->x = local_30 + (this->parent).field27_0x30.x;
		(this->parent).field27_0x30.y = (this->parent).field27_0x30.y + local_2c;
		(this->parent).field27_0x30.z = (this->parent).field27_0x30.z + local_28;
		fVar1 = FLOAT_00386ab4;
		pVVar2->x = pVVar2->x * FLOAT_00386ab4;
		(this->parent).field27_0x30.y = (this->parent).field27_0x30.y * fVar1;
		(this->parent).field27_0x30.z = (this->parent).field27_0x30.z * fVar1;
		}
		else {
		FUN_000ecf20(this_00,&(this->parent).field27_0x30,0.0);
		}
		pVVar2 = &(this->parent).field27_0x30;
		FUN_000efff0(this->field38_0xb8,&local_20,fVar3);
		pVVar2->x = pVVar2->x + local_20;
		(this->parent).field27_0x30.y = local_1c + (this->parent).field27_0x30.y;
		(this->parent).field27_0x30.z = local_18 + (this->parent).field27_0x30.z;
		return;
		}
		(this->parent).field27_0x30.x =((this->field29_0xa0).x - (this->field28_0x90).x) * fVar3 + (this->field28_0x90).x;
		(this->parent).field27_0x30.y =((this->field29_0xa0).y - (this->field28_0x90).y) * fVar3 + (this->field28_0x90).y;
		fVar1 = FLOAT_0038639c;
		(this->parent).field27_0x30.z =((this->field29_0xa0).z - (this->field28_0x90).z) * fVar3 + (this->field28_0x90).z;
		(this->parent).field27_0x30.w = fVar1;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubModule2A::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeKSubModule2A * __thiscall InstanceNodeKSubModule2A::Dispose(InstanceNodeKSubModule2A *this,byte param_1){
		(this->parent).vtable = &InstanceNodeKSubModule2_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float InstanceNodeKSubModule2A::UnkMethod4() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float InstanceNodeKSubModule2A::UnkMethod4(void){
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

InstanceNodeKSubModule2A* InstanceNodeKSubModule2A::ConstructEx() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeKSubModule2A * __fastcall InstanceNodeKSubModule2A::ConstructEx(InstanceNodeKSubModule2A *this){
		float fVar1;
		InstanceNodeKSubModule2A *extraout_ECX;
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
		(this->parent).vtable = &InstanceNodeKSubModule2_VT_A;
		Construct(this);
		return extraout_ECX;
		}
		
	*/
	return null;
}

