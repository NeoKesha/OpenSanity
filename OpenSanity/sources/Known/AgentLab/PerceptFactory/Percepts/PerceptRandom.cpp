#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptRandom.h"

float PerceptRandom::GetUtilityScoreInternal() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address float PerceptRandom::GetUtilityScoreInternal(void){
		int iVar1;
		iVar1 = Random();
		return (float)iVar1 * _DAT_0038e054;
		}
		
	*/
	return 0.0f;
}

void PerceptRandom::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptAbstract * __thiscall PerceptRandom::Dispose(PerceptRandom *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

float PerceptRandom::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptRandom::GetUtilityScore(PerceptRandom *this){
		float extraout_ST0;
		extraout_ST0 = GetUtilityScoreInternal();
		return extraout_ST0;
		}
		
	*/
	return 0.0f;
}

void PerceptRandom::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptRandom::Construct(PerceptRandom *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 3;
		(this->parent).vtable = &Percept_VT_Random;
		return;
		}
		
	*/
	return;
}

