#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x23A.h"

void Percept0x23A::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x23A * __fastcall Percept0x23A::Construct(Percept0x23A *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x23a;
		(this->parent).vtable = &Percept_VT_ID_0x23a;
		return this;
		}
		
	*/
	return;
}

void Percept0x23A::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x23A * __thiscall Percept0x23A::Dispose(Percept0x23A *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x23A::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x23A::GetUtilityScore(Percept0x23A *this){
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

