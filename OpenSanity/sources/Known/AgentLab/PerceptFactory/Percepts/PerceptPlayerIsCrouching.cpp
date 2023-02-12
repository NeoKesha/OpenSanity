#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptPlayerIsCrouching.h"

void PerceptPlayerIsCrouching::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptPlayerIsCrouching * __thiscall PerceptPlayerIsCrouching::Dispose(PerceptPlayerIsCrouching *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptPlayerIsCrouching::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptPlayerIsCrouching::GetUtilityScore(PerceptPlayerIsCrouching *this){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		if ((*(byte *)&PTR_003d0eec->field1_0x1c & 1) == 0) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void PerceptPlayerIsCrouching::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptPlayerIsCrouching::Construct(PerceptPlayerIsCrouching *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x202;
		(this->parent).vtable = &Percept_VT_PlayerIsCrouching;
		return;
		}
		
	*/
	return;
}

