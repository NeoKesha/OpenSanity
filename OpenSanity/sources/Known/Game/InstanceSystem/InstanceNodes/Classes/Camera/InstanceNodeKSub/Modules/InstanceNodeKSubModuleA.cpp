#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/Modules/InstanceNodeKSubModuleA.h"

#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/InstanceNodeKSubA.h"
void InstanceNodeKSubModuleA::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeKSubModuleA * __fastcall InstanceNodeKSubModuleA::Construct(InstanceNodeKSubModuleA *this){
		float fVar1;
		fVar1 = FLOAT_0038807c;
		this->field11_0x20 = FLOAT_0038807c;
		this->field12_0x24 = fVar1;
		(this->parent).vtable = &InstanceNodeKSubModule_VT_A;
		this->functionType = 0x11;
		(this->field10_0x10).x = Vector4_0039ef70.x;
		(this->field10_0x10).y = Vector4_0039ef70.y;
		(this->field10_0x10).z = Vector4_0039ef70.z;
		(this->field10_0x10).w = FLOAT_0038639c;
		return this;
		}
		
	*/
	return;
}

float InstanceNodeKSubModuleA::F(float x) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall InstanceNodeKSubModuleA::F(InstanceNodeKSubModuleA *this,float x){
		switch(this->functionType & 0xf) {
		case 0:return FLOAT_0038639c;
		case 1:return x;
		case 2:return x * x;
		case 3:return SQRT(x);
		default:return FLOAT_00386394;
		}
		}
		
	*/
	return 0.0f;
}

void InstanceNodeKSubModuleA::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeKSubModuleA * __thiscall InstanceNodeKSubModuleA::Dispose(InstanceNodeKSubModuleA *this,byte param_1){
		(this->parent).vtable = &InstanceNodeKSubModule_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void InstanceNodeKSubModuleA::SetVec1(uint param_1, Vector4* vec) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubModuleA::SetVec1(InstanceNodeKSubModuleA *this,undefined4 param_1,Vector4 *vec){
		(this->field10_0x10).x = vec->x;
		(this->field10_0x10).y = vec->y;
		(this->field10_0x10).z = vec->z;
		(this->field10_0x10).w = vec->w;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubModuleA::UnkMethod3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeKSubModuleA::UnkMethod3(InstanceNodeKSubModuleA *this){
		uint uVar1;
		uVar1 = this->functionType;
		uVar1 = (uVar1 >> 4 ^ uVar1) & 0xf ^ uVar1;
		this->functionType = uVar1;
		if ((uVar1 & 0x100) == 0) {
		this->field11_0x20 = this->field12_0x24;
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubModuleA::UnkMethod4(byte* param_1, uint param_2, Vector4* vec) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubModuleA::UnkMethod4(InstanceNodeKSubModuleA *this,byte *param_1,undefined4 param_2,Vector4 *vec){
		InstanceNodeKSubModuleA *extraout_EDX;
		float fVar1;
		float pppuVar3;
		float fVar3;
		float fVar2;
		fVar3 = FLOAT_0038639c;
		if ((*param_1 & 1) != 0) {
		if (((this->functionType & 0x100) != 0) &&(this->field11_0x20 <= FLOAT_0038d38c && FLOAT_0038d38c != this->field11_0x20)) {
		this->field11_0x20 = this->field11_0x20 + FLOAT_0038639c;
		}
		fVar1 = (float)*(int *)(param_1 + 8) * TimePerTick1 * this->field11_0x20;
		if (fVar1 < fVar3) {
		fVar2 = F(this,fVar1);
		(extraout_EDX->field10_0x10).x =(vec->x - (extraout_EDX->field10_0x10).x) * fVar2 + (extraout_EDX->field10_0x10).x;
		(extraout_EDX->field10_0x10).y =(vec->y - (extraout_EDX->field10_0x10).y) * fVar2 + (extraout_EDX->field10_0x10).y;
		fVar1 = vec->z;
		(extraout_EDX->field10_0x10).w = fVar3;
		(extraout_EDX->field10_0x10).z =(fVar1 - (extraout_EDX->field10_0x10).z) * fVar2 + (extraout_EDX->field10_0x10).z;
		this = extraout_EDX;
		}
		else {
		(this->field10_0x10).x = vec->x;
		(this->field10_0x10).y = vec->y;
		(this->field10_0x10).z = vec->z;
		(this->field10_0x10).w = vec->w;
		}
		vec->x = (this->field10_0x10).x;
		vec->y = (this->field10_0x10).y;
		vec->z = (this->field10_0x10).z;
		vec->w = (this->field10_0x10).w;
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubModuleA::UnkMethod5(Vector4* vec) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubModuleA::UnkMethod5(InstanceNodeKSubModuleA *this,Vector4 *vec){
		uint uVar1;
		if ((vec == (Vector4 *)0x0) || (uVar1 = (uint)vec->y & 3, uVar1 == 1)) {
		uVar1 = this->functionType;
		uVar1 = (uVar1 >> 4 ^ uVar1) & 0xf ^ uVar1;
		this->functionType = uVar1;
		if ((uVar1 & 0x100) == 0) {
		this->field11_0x20 = this->field12_0x24;
		}
		}
		else {
		if (uVar1 != 2) {
		this->functionType = this->functionType & 0xfffffff0;
		return;
		}
		uVar1 = this->functionType;
		this->functionType = uVar1 & 0xfffffff1 | 1;
		if ((uVar1 & 0x100) == 0) {
		this->field11_0x20 = vec->z;
		return;
		}
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubModuleA::UnkMethod6(float val) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubModuleA::UnkMethod6(InstanceNodeKSubModuleA *this,float val){
		uint uVar1;
		if (val < FLOAT_00386394) {
		this->functionType = this->functionType & 0xfffffff0;
		}
		else {
		uVar1 = this->functionType;
		this->functionType = uVar1 & 0xfffffff1 | 1;
		if ((uVar1 & 0x100) == 0) {
		this->field11_0x20 = val;
		return;
		}
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubModuleA::UnkMethod7(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubModuleA::UnkMethod7(InstanceNodeKSubModuleA *this,byte param_1){
		this->functionType = this->functionType ^ ((uint)param_1 << 8 ^ this->functionType) & 0x100;
		return;
		}
		
	*/
	return;
}

bool InstanceNodeKSubModuleA::UnkMethod8(uint param_1, InstanceNodeKSubA* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodeKSubModuleA::UnkMethod8(InstanceNodeKSubModuleA *this,undefined4 param_1,InstanceNodeKSubA *param_2){
		if (((uint)(param_2->parent).parent.vtable >> 0x12 & 1) != 0) {
		InstanceNodeKSubA::FUN_00139650(param_2,&this->field10_0x10,true);
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

