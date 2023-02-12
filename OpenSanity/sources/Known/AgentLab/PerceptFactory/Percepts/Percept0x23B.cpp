#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x23B.h"

void Percept0x23B::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x23B * __fastcall Percept0x23B::Construct(Percept0x23B *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x23b;
		(this->parent).vtable = &Percept_VT_ID_0x23b;
		return this;
		}
		
	*/
	return;
}

void Percept0x23B::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x23B * __thiscall Percept0x23B::Dispose(Percept0x23B *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x23B::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x23B::GetUtilityScore(Percept0x23B *this){
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

