#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/Modules/InstanceNodeKSubModule3Abstract.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/InstanceNodeKSubA.h"
#include "headers/Global.h"

InstanceNodeKSubModule3Abstract::InstanceNodeKSubModule3Abstract()
{
	Global* GLOBAL = Global::Get();

	this->field13_0x10 = 0;
	this->field25_0x40 = 1;
	this->fov = GLOBAL->ENV_FLOAT_113_SCREEN_FOV;
	(this->vec1).z = 0.0f;
	(this->vec1).y = 0.0f;
	(this->vec1).x = 0.0f;
	(this->vec1).w = 1.0f;
	(this->vec2).z = 0.0f;
	(this->vec2).y = 0.0f;
	(this->vec2).x = 0.0f;
	(this->vec2).w = 1.0f;
}

InstanceNodeKSubModule3Abstract::~InstanceNodeKSubModule3Abstract()
{

}

float InstanceNodeKSubModule3Abstract::FUN_001d0470(float param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall InstanceNodeKSubModule3Abstract::FUN_001d0470(InstanceNodeKSubModule3Abstract *this,float param_1){
		param_1 = (float)(int)((((float)(*(int *)param_1 -(int)((float)(int)this[2].vtable * TimePerTick1 * TicksPerTime)) *TimePerTick1) / ((float)*(int *)&this[2].field_0x4 * TimePerTick1)) *TicksPerTime) * TimePerTick1;
		if ((*(uint *)&this[1].field_0xc >> 2 & 7) == 2) {
		param_1 = param_1 * param_1 * FLOAT_003865d0 - param_1 * param_1 * param_1 * FLOAT_003865d4;
		}
		return param_1;
		}
		
	*/
	return 0.0f;
}

float InstanceNodeKSubModule3Abstract::FUN_001d0510(float val) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall InstanceNodeKSubModule3Abstract::FUN_001d0510(InstanceNodeKSubModule3Abstract *this,float val){
		val = (float)(int)((((float)(*(int *)val -(int)((float)*(int *)&this[2].field_0x8 * TimePerTick1 * TicksPerTime)) * TimePerTick1) / ((float)*(int *)&this[2].field_0xc * TimePerTick1)) * TicksPerTime) * TimePerTick1;
		if ((*(uint *)&this[1].field_0xc >> 2 & 7) == 2) {
		val = val * val * FLOAT_003865d0 - val * val * val * FLOAT_003865d4;
		if ((*(uint *)&this[1].field_0xc & 2) != 0) {
		val = FLOAT_0038639c - val;
		}
		}
		return val;
		}
		
	*/
	return 0.0f;
}

float InstanceNodeKSubModule3Abstract::UnkMethod3_(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall InstanceNodeKSubModule3Abstract::UnkMethod3_(InstanceNodeKSubModule3Abstract *this,int param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float local_4;
		fVar4 = FLOAT_0038639c;
		param_1 = *(int *)(param_1 + 4);
		local_4 = FLOAT_0038639c;
		if (this[2].vtable == (undefined **)0x0) {
		this[2].vtable = (undefined **)param_1;
		*(float *)&this[1].field_0x1c = (this->vec2).x;
		this[1].vec1.x = (this->vec2).y;
		this[1].vec1.y = (this->vec2).z;
		this[1].vec1.z = (this->vec2).w;
		this[1].vec2.w = this->fov;
		}
		if (param_1 - (int)((float)(int)this[2].vtable * TimePerTick1 * TicksPerTime) <=*(int *)&this[2].field_0x4) {
		if ((*(uint *)&this[1].field_0xc & 1) == 0) {
		if ((*(uint *)&this[1].field_0xc & 2) == 0) {
		local_4 = FUN_001d0470(this,(float)&param_1);
		}
		else {
		if (*(int *)&this[2].field_0x8 == 0) {
		*(int *)&this[2].field_0x8 = param_1;
		}
		fVar2 = TimePerTick1;
		fVar3 = TicksPerTime;
		fVar6 = FUN_001d0510(this,(float)&param_1);
		fVar5 = (float)*(int *)&this[2].field_0xc * fVar2;
		fVar1 = fVar4 / ((float)*(int *)&this[2].field_0x4 * fVar2);
		local_4 = (float)(int)(fVar5 * fVar1 * fVar3) * TimePerTick1 * fVar6 +(float)(int)((float)(*(int *)&this[2].field_0x4 - (int)(fVar5 * fVar3)) * fVar2 *fVar1 * fVar3) * TimePerTick1;
		if (fVar6 == FLOAT_0038639c) {
		*(uint *)&this[1].field_0xc = *(uint *)&this[1].field_0xc & 0xfffffffd;
		*(undefined4 *)&this[2].field_0x8 = 0;
		}
		}
		}
		else {
		if (*(int *)&this[2].field_0x8 == 0) {
		*(int *)&this[2].field_0x8 = param_1;
		}
		fVar2 = TimePerTick1;
		fVar3 = TicksPerTime;
		fVar5 = FUN_001d0510(this,(float)&param_1);
		local_4 = (float)(int)((((float)*(int *)&this[2].field_0xc * fVar2) /((float)*(int *)&this[2].field_0x4 * fVar2)) * fVar3) * TimePerTick1 *fVar5;
		if (fVar5 == FLOAT_0038639c) {
		*(uint *)&this[1].field_0xc = *(uint *)&this[1].field_0xc & 0xfffffffe;
		*(undefined4 *)&this[2].field_0x8 = 0;
		}
		}
		if (local_4 != fVar4) {
		return local_4;
		}
		}
		this[2].vtable = (undefined **)0x0;
		return local_4;
		}
		
	*/
	return 0.0f;
}

bool InstanceNodeKSubModule3Abstract::UnkMethod5(uint param_1, InstanceNodeKSubA* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodeKSubModule3Abstract::UnkMethod5(InstanceNodeKSubModule3Abstract *this,undefined4 param_1,InstanceNodeKSubA *param_2){
		if (((uint)(param_2->parent).parent.vtable >> 0x12 & 1) != 0) {
		InstanceNodeKSubA::FUN_00139480(param_2,&(this->vec1).x);
		InstanceNodeKSubA::FUN_00139650(param_2,&this->vec2,true);
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

bool InstanceNodeKSubModule3Abstract::ReturnFalse() {
	return false;
}