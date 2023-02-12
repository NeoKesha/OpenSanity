#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x06F.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x06F::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x06F * __thiscall Percept0x06F::Dispose(Percept0x06F *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x06F::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x06F::GetUtilityScore(Percept0x06F *this,InstanceContext *param_1){
		InstanceNodeAbstract *this_00;
		char cVar1;
		float local_4;
		local_4 = 0.0;
		cVar1 = (*(param_1->parent).vtable[2].Method4)(param_1);
		if ((cVar1 != '\0') &&(this_00 = (param_1->nodes).array[10], this_00 != (InstanceNodeAbstract *)0x0)) {
		FUN_00175f60((int)this_00,0,&local_4);
		}
		return local_4;
		}
		
	*/
	return 0.0f;
}

void Percept0x06F::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x06F::Construct(Percept0x06F *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x6f;
		(this->parent).vtable = &Percept_VT_ID_0x6f;
		return;
		}
		
	*/
	return;
}

