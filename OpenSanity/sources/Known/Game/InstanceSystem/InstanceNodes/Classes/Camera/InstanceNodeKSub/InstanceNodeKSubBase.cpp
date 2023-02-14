#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/InstanceNodeKSubBase.h"

InstanceNodeKSubBase::InstanceNodeKSubBase() : InstanceNodeKSubAbstract(), inputWrapper()
{

}

InstanceNodeKSubBase::InstanceNodeKSubBase(uint cnt1, uint cnt2) : InstanceNodeKSubAbstract(), inputWrapper(cnt1, cnt2)
{

}

InstanceNodeKSubBase::~InstanceNodeKSubBase()
{
}

void InstanceNodeKSubBase::CleanUp()
{
	InstanceNodeKSubAbstract::CleanUp();
}

void InstanceNodeKSubBase::FUN_000a5110(uint* param_1, uint* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceNodeKSubBase::FUN_000a5110(undefined4 *param_1,undefined4 *param_2){
		*param_1 = 0;
		*param_2 = 0;
		return;
		}
		
	*/
	return;
}

