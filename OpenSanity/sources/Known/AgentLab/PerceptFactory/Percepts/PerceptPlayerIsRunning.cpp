#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptPlayerIsRunning.h"

void PerceptPlayerIsRunning::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptPlayerIsRunning * __thiscall PerceptPlayerIsRunning::Dispose(PerceptPlayerIsRunning *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptPlayerIsRunning::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptPlayerIsRunning::GetUtilityScore(PerceptPlayerIsRunning *this){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		if ((PTR_003d0eec->field1_0x1c >> 0xb & 1) == 0) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void PerceptPlayerIsRunning::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptPlayerIsRunning::Construct(PerceptPlayerIsRunning *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x22f;
		(this->parent).vtable = &Percept_VT_PlayerIsRunning;
		return;
		}
		
	*/
	return;
}

