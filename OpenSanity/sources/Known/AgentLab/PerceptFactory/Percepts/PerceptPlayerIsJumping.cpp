#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptPlayerIsJumping.h"

void PerceptPlayerIsJumping::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptPlayerIsJumping * __thiscall PerceptPlayerIsJumping::Dispose(PerceptPlayerIsJumping *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptPlayerIsJumping::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptPlayerIsJumping::GetUtilityScore(PerceptPlayerIsJumping *this){
		uint uVar1;
		if (PTR_003d0eec == (NodeRelated1C *)0x0) {
		return FLOAT_00386394;
		}
		uVar1 = (PTR_003d0eec->parent).parent.field7_0x10 & 0xff;
		if ((uVar1 != 8) && (uVar1 != 0xc)) {
		return 0.0;
		}
		return FLOAT_0038639c;
		}
		
	*/
	return 0.0f;
}

void PerceptPlayerIsJumping::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptPlayerIsJumping::Construct(PerceptPlayerIsJumping *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x236;
		(this->parent).vtable = &Percept_VT_PlayerIsJumping;
		return;
		}
		
	*/
	return;
}

