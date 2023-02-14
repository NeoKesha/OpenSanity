#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/Modules/InstanceNodeKSubModule2Abstract.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/InstanceNodeKSubA.h"
InstanceNodeKSubModule2Abstract::InstanceNodeKSubModule2Abstract()
{
	this->field13_0x10 = 0;
	this->field31_0x70 = 0;
	this->field32_0x71 = 1;
	(this->field26_0x20).z = 0.0f;
	(this->field26_0x20).y = 0.0f;
	(this->field26_0x20).x = 0.0f;
	(this->field26_0x20).w = 1.0f;
	(this->field27_0x30).x = 0.0f;
	(this->field27_0x30).y = 0.0f;
	(this->field27_0x30).z = 0.0f;
	(this->field27_0x30).w = 1.0f;
}

InstanceNodeKSubModule2Abstract::~InstanceNodeKSubModule2Abstract()
{

}

bool InstanceNodeKSubModule2Abstract::UnkMethod5(uint param_1, InstanceNodeKSubA* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodeKSubModule2Abstract::UnkMethod5(InstanceNodeKSubModule2Abstract *this,undefined4 param_1,InstanceNodeKSubA *param_2){
		InstanceNodeKSubA::FUN_00139480(param_2,&(this->field26_0x20).x);
		InstanceNodeKSubA::FUN_00139650(param_2,&this->field27_0x30,true);
		return true;
		}
		
	*/
	return false;
}
