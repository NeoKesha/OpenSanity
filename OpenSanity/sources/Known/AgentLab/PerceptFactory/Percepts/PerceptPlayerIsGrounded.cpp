#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptPlayerIsGrounded.h"

void PerceptPlayerIsGrounded::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptPlayerIsGrounded * __thiscall PerceptPlayerIsGrounded::Dispose(PerceptPlayerIsGrounded *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptPlayerIsGrounded::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptPlayerIsGrounded::GetUtilityScore(PerceptPlayerIsGrounded *this){
		float fVar1;
		if (PTR_003d0eec == (NodeRelated1C *)0x0) {
		return FLOAT_00386394;
		}
		fVar1 = FLOAT_0038639c;
		if (((uint)(PTR_003d0eec->parent).field1_0x14 >> 2 & 1) == 0) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void PerceptPlayerIsGrounded::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptPlayerIsGrounded::Construct(PerceptPlayerIsGrounded *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x203;
		(this->parent).vtable = &Percept_VT_PlayerIsGrounded;
		return;
		}
		
	*/
	return;
}

