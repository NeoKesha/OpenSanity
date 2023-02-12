#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x273.h"

void Percept0x273::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x273 * __fastcall Percept0x273::Construct(Percept0x273 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x273;
		(this->parent).vtable = &Percept_VT_ID_0x273;
		return this;
		}
		
	*/
	return;
}

void Percept0x273::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x273 * __thiscall Percept0x273::Dispose(Percept0x273 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x273::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x273::GetUtilityScore(Percept0x273 *this){
		float fVar1;
		if (PTR_00496350 == (InstanceContextRefCounter *)0x0) {
		fVar1 = thunk_FUN_0005cc10((InstanceContext *)0x0);
		return fVar1;
		}
		fVar1 = thunk_FUN_0005cc10(PTR_00496350->ctx);
		return fVar1;
		}
		
	*/
	return 0.0f;
}

