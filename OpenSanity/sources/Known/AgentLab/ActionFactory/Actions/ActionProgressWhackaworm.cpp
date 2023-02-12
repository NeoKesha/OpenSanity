#include "headers/Known/AgentLab/ActionFactory/Actions/ActionProgressWhackaworm.h"

void ActionProgressWhackaworm::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionProgressWhackaworm::Dispose(ActionProgressWhackaworm *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

int ActionProgressWhackaworm::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionProgressWhackaworm::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionProgressWhackaworm::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionProgressWhackaworm::UnkMethod(ActionProgressWhackaworm *this,int *param_1){
		char cVar1;
		short *psVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		while (cVar1 == '\0') {
		psVar2 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		if (*psVar2 == -1) {
		this->unlabelled12 = *(int *)(psVar2 + 2);
		}
		IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionProgressWhackaworm::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionProgressWhackaworm::ExecuteFromCallContext(ActionProgressWhackaworm *this){
		ChunkDesc::WhackawormProgress(&GameController1->chunkDescriptor,this->unlabelled12);
		return;
		}
		
	*/
	return;
}

void ActionProgressWhackaworm::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionProgressWhackaworm::Construct(ActionProgressWhackaworm *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_WhackawormProgress;
		this->unlabelled12 = 0;
		return;
		}
		
	*/
	return;
}

