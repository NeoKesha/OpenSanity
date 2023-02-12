#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptPlayerIsMoving.h"

void PerceptPlayerIsMoving::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptPlayerIsMoving * __thiscall PerceptPlayerIsMoving::Dispose(PerceptPlayerIsMoving *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptPlayerIsMoving::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptPlayerIsMoving::GetUtilityScore(PerceptPlayerIsMoving *this){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		if (((uint)(PTR_003d0eec->parent).field1_0x14 >> 4 & 1) == 0) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void PerceptPlayerIsMoving::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptPlayerIsMoving::Construct(PerceptPlayerIsMoving *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x22d;
		(this->parent).vtable = &Percept_VT_PlayerIsMoving;
		return;
		}
		
	*/
	return;
}

