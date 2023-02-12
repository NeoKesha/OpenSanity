#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x23C.h"

void Percept0x23C::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x23C * __fastcall Percept0x23C::Construct(Percept0x23C *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x23c;
		(this->parent).vtable = &Percept_VT_ID_0x23c;
		return this;
		}
		
	*/
	return;
}

void Percept0x23C::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x23C * __thiscall Percept0x23C::Dispose(Percept0x23C *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x23C::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x23C::GetUtilityScore(Percept0x23C *this){
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

