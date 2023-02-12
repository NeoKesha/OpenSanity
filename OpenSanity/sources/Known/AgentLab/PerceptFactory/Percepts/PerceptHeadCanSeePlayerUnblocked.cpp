#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptHeadCanSeePlayerUnblocked.h"

void PerceptHeadCanSeePlayerUnblocked::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptHeadCanSeePlayerUnblocked * __thiscall PerceptHeadCanSeePlayerUnblocked::Dispose(PerceptHeadCanSeePlayerUnblocked *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptHeadCanSeePlayerUnblocked::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptHeadCanSeePlayerUnblocked::GetUtilityScore(PerceptHeadCanSeePlayerUnblocked *this){
		float fVar1;
		if (PTR_003d0eec == (NodeRelated1C *)0x0) {
		return FLOAT_00386394;
		}
		fVar1 = FLOAT_0038639c;
		if ((PTR_003d0eec->field1_0x1c >> 1 & 1) == 0) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void PerceptHeadCanSeePlayerUnblocked::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptHeadCanSeePlayerUnblocked::Construct(PerceptHeadCanSeePlayerUnblocked *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x237;
		(this->parent).vtable = &Percept_VT_HeadCanSeePlayerUnblocked;
		return;
		}
		
	*/
	return;
}

