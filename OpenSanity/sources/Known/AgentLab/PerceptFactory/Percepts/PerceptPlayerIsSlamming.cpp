#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptPlayerIsSlamming.h"

void PerceptPlayerIsSlamming::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptPlayerIsSlamming * __thiscall PerceptPlayerIsSlamming::Dispose(PerceptPlayerIsSlamming *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptPlayerIsSlamming::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptPlayerIsSlamming::GetUtilityScore(PerceptPlayerIsSlamming *this){
		float fVar1;
		if (PTR_003d0eec == (NodeRelated1C *)0x0) {
		return FLOAT_00386394;
		}
		fVar1 = FLOAT_0038639c;
		if (*(char *)&(PTR_003d0eec->parent).parent.field7_0x10 != '\t') {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void PerceptPlayerIsSlamming::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptPlayerIsSlamming::Construct(PerceptPlayerIsSlamming *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x234;
		(this->parent).vtable = &Percept_VT_PlayerIsSlamming;
		return;
		}
		
	*/
	return;
}

