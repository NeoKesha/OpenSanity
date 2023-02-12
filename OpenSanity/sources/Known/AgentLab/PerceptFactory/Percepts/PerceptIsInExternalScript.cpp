#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptIsInExternalScript.h"

void PerceptIsInExternalScript::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptIsInExternalScript * __thiscall PerceptIsInExternalScript::Dispose(PerceptIsInExternalScript *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptIsInExternalScript::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptIsInExternalScript::GetUtilityScore(PerceptIsInExternalScript *this){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		if ((WORLD->currentChunk->flags >> 10 & 1) == 0) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void PerceptIsInExternalScript::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptIsInExternalScript::Construct(PerceptIsInExternalScript *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 6;
		(this->parent).vtable = &Percept_VT_IsInExternalScript;
		return;
		}
		
	*/
	return;
}

