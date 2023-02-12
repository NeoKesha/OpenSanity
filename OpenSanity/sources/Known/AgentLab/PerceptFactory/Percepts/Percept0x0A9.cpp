#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x0A9.h"

void Percept0x0A9::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x0A9 * __thiscall Percept0x0A9::Dispose(Percept0x0A9 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x0A9::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x0A9::GetUtilityScore(Percept0x0A9 *this){
		return (float)INT_00495d20;
		}
		
	*/
	return 0.0f;
}

void Percept0x0A9::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x0A9::Construct(Percept0x0A9 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0xa9;
		(this->parent).vtable = &Percept_VT_ID_0xa9;
		return;
		}
		
	*/
	return;
}

