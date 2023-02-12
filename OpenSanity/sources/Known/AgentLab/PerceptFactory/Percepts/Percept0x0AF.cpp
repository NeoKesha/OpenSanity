#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x0AF.h"

void Percept0x0AF::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x0AF * __thiscall Percept0x0AF::Dispose(Percept0x0AF *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x0AF::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x0AF::GetUtilityScore(Percept0x0AF *this){
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x0AF::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x0AF::Construct(Percept0x0AF *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0xaf;
		(this->parent).vtable = &Percept_VT_ID_0xaf;
		return;
		}
		
	*/
	return;
}

