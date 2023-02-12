#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/InstanceNodeKSubBase.h"

void InstanceNodeKSubBase::Construct(int param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeKSubBase * __thiscall InstanceNodeKSubBase::Construct(InstanceNodeKSubBase *this,int param_1,int param_2){
		InstanceNodeKSubAbstract::Construct(&this->parent);
		(this->parent).vtable = (InstanceNodeKSubAbstract_VTable *)&InstanceNodeKSub_VT_Base;
		InputWrapper::Construct(&this->inputWrapper,param_1,param_2);
		return this;
		}
		
	*/
	return;
}

void InstanceNodeKSubBase::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeKSubAbstract * __thiscall InstanceNodeKSubBase::Dispose(InstanceNodeKSubBase *this,byte param_1){
		(this->parent).vtable = (InstanceNodeKSubAbstract_VTable *)&InstanceNodeKSub_VT_Base;
		InputWrapper::Dispose(&this->inputWrapper);
		InstanceNodeKSubAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
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

