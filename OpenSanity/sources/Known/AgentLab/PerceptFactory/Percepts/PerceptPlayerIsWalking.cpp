#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptPlayerIsWalking.h"

void PerceptPlayerIsWalking::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptPlayerIsWalking * __thiscall PerceptPlayerIsWalking::Dispose(PerceptPlayerIsWalking *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptPlayerIsWalking::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptPlayerIsWalking::GetUtilityScore(PerceptPlayerIsWalking *this){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		if ((PTR_003d0eec->field1_0x1c >> 10 & 1) == 0) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void PerceptPlayerIsWalking::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptPlayerIsWalking::Construct(PerceptPlayerIsWalking *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x22e;
		(this->parent).vtable = &Percept_VT_PlayerIsWalking;
		return;
		}
		
	*/
	return;
}

