#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x0AD.h"

void Percept0x0AD::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x0AD * __thiscall Percept0x0AD::Dispose(Percept0x0AD *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x0AD::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x0AD::GetUtilityScore(Percept0x0AD *this){
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x0AD::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x0AD::Construct(Percept0x0AD *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0xad;
		(this->parent).vtable = &Percept_VT_ID_0xad;
		return;
		}
		
	*/
	return;
}

