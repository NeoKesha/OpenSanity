#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptPlayerIsSpinning.h"

void PerceptPlayerIsSpinning::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptPlayerIsSpinning * __thiscall PerceptPlayerIsSpinning::Dispose(PerceptPlayerIsSpinning *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptPlayerIsSpinning::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptPlayerIsSpinning::GetUtilityScore(PerceptPlayerIsSpinning *this){
		uint uVar1;
		if (PTR_003d0eec == (NodeRelated1C *)0x0) {
		return FLOAT_00386394;
		}
		uVar1 = (PTR_003d0eec->parent).parent.field7_0x10 & 0xff;
		if ((uVar1 != 6) && (uVar1 != 10)) {
		return 0.0;
		}
		return FLOAT_0038639c;
		}
		
	*/
	return 0.0f;
}

void PerceptPlayerIsSpinning::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptPlayerIsSpinning::Construct(PerceptPlayerIsSpinning *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x235;
		(this->parent).vtable = &Percept_VT_PlayerIsSpinning;
		return;
		}
		
	*/
	return;
}

