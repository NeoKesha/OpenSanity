#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptPlayerIsFalling.h"

void PerceptPlayerIsFalling::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptPlayerIsFalling * __thiscall PerceptPlayerIsFalling::Dispose(PerceptPlayerIsFalling *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptPlayerIsFalling::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptPlayerIsFalling::GetUtilityScore(PerceptPlayerIsFalling *this){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		if (((uint)(PTR_003d0eec->parent).field1_0x14 >> 5 & 1) == 0) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void PerceptPlayerIsFalling::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptPlayerIsFalling::Construct(PerceptPlayerIsFalling *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x231;
		(this->parent).vtable = &Percept_VT_PlayerIsFalling;
		return;
		}
		
	*/
	return;
}

