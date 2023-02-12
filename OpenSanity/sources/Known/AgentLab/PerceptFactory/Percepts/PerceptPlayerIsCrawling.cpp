#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptPlayerIsCrawling.h"

void PerceptPlayerIsCrawling::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptPlayerIsCrawling * __thiscall PerceptPlayerIsCrawling::Dispose(PerceptPlayerIsCrawling *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptPlayerIsCrawling::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptPlayerIsCrawling::GetUtilityScore(PerceptPlayerIsCrawling *this){
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

void PerceptPlayerIsCrawling::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptPlayerIsCrawling::Construct(PerceptPlayerIsCrawling *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x230;
		(this->parent).vtable = &Percept_VT_PlayerIsCrawling;
		return;
		}
		
	*/
	return;
}

