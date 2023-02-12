#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptPlayerIsCoOpLinked.h"

void PerceptPlayerIsCoOpLinked::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptPlayerIsCoOpLinked * __thiscall PerceptPlayerIsCoOpLinked::Dispose(PerceptPlayerIsCoOpLinked *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptPlayerIsCoOpLinked::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptPlayerIsCoOpLinked::GetUtilityScore(PerceptPlayerIsCoOpLinked *this){
		float fVar1;
		if (((PTR_003d0eec->field1_0x1c >> 0x15 & 1) != 0) ||(fVar1 = 0.0, (PTR_003d0eec->field1_0x1c >> 0x16 & 1) != 0)) {
		fVar1 = FLOAT_0038639c;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void PerceptPlayerIsCoOpLinked::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptPlayerIsCoOpLinked::Construct(PerceptPlayerIsCoOpLinked *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x232;
		(this->parent).vtable = &Percept_VT_PlayerIsCoOpLinked;
		return;
		}
		
	*/
	return;
}

