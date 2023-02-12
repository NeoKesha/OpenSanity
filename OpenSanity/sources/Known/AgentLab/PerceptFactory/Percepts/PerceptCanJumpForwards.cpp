#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptCanJumpForwards.h"

float PerceptCanJumpForwards::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptCanJumpForwards::GetUtilityScore(PerceptCanJumpForwards *this){
		return (float)((GameController4->chunkDescriptor).flags2 & 0x7f);
		}
		
	*/
	return 0.0f;
}

void PerceptCanJumpForwards::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptCanJumpForwards * __thiscall PerceptCanJumpForwards::Dispose(PerceptCanJumpForwards *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptCanJumpForwards::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptCanJumpForwards::Construct(PerceptCanJumpForwards *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x211;
		(this->parent).vtable = &Percept_VT_CanJumpForwards;
		return;
		}
		
	*/
	return;
}

