#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptNext.h"

void PerceptNext::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptAbstract * __thiscall PerceptNext::Dispose(PerceptNext *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

float PerceptNext::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptNext::GetUtilityScore(PerceptNext *this){
		return FLOAT_0038639c;
		}
		
	*/
	return 0.0f;
}

void PerceptNext::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptNext * __fastcall PerceptNext::Construct(PerceptNext *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0;
		(this->parent).vtable = &Percept_VT_Next;
		return this;
		}
		
	*/
	return;
}

