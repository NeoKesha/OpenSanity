#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x275.h"

void Percept0x275::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x275 * __fastcall Percept0x275::Construct(Percept0x275 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x275;
		(this->parent).vtable = &Percept_VT_ID_0x275;
		return this;
		}
		
	*/
	return;
}

void Percept0x275::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x275 * __thiscall Percept0x275::Dispose(Percept0x275 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x275::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address float __thiscall Percept0x275::GetUtilityScore(Percept0x275 *this){
		return (float)_DAT_003cff84;
		}
		
	*/
	return 0.0f;
}

