#include "headers/Known/AgentLab/ActionFactory/Actions/ActionDamageBossMode.h"

void ActionDamageBossMode::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionDamageBossMode::Dispose(ActionDamageBossMode *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

int ActionDamageBossMode::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionDamageBossMode::GetSize(void){
		return 0x10;
		}
		
	*/
	return 0;
}

void ActionDamageBossMode::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDamageBossMode::UnkMethod(ActionDamageBossMode *this,int *param_1){
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

void ActionDamageBossMode::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDamageBossMode::ExecuteFromCallContext(ActionDamageBossMode *this){
		ChunkDesc::BossModeDamage(&GameController1->chunkDescriptor,this->unlabelled12);
		return;
		}
		
	*/
	return;
}

