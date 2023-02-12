#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0B0.h"

void Action0x0B0::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0B0::Dispose(Action0x0B0 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x0B0::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x0B0 * __fastcall Action0x0B0::Construct(Action0x0B0 *this){
		uint uVar1;
		float fVar2;
		fVar2 = FLOAT_003865d0;
		uVar1 = this->unlabelled16;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0B0;
		this->unlabelled12 = fVar2;
		this->unlabelled16 = uVar1 & 0xfffffff8;
		return this;
		}
		
	*/
	return;
}

int Action0x0B0::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0B0::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

void Action0x0B0::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0B0::UnkMethod(Action0x0B0 *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == 0x14) {
		this->unlabelled12 = *(float *)(psVar2 + 2);
		}
		else if (((*psVar2 == -1) && (*(char *)(psVar2 + 1) == '\x04')) &&(*(int *)(psVar2 + 2) == 0x126)) {
		this->unlabelled16 = this->unlabelled16 & 0xfffffffaU | 2;
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void Action0x0B0::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0B0::ExecuteFromCallContext(Action0x0B0 *this){
		FUN_001307f0(this->unlabelled16 & 7,this->unlabelled12);
		return;
		}
		
	*/
	return;
}

