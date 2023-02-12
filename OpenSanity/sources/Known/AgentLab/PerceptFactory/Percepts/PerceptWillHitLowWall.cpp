#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptWillHitLowWall.h"

void PerceptWillHitLowWall::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptWillHitLowWall::Construct(PerceptWillHitLowWall *this){
		(this->field0_0x0).PerceptID = 0;
		*(undefined2 *)&(this->field0_0x0).PerceptID = 0x213;
		(this->field0_0x0).vtable = &Percept_VT_WillHitLowWall;
		return;
		}
		
	*/
	return;
}

void PerceptWillHitLowWall::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall PerceptWillHitLowWall::Dispose(PerceptWillHitLowWall *this,byte param_1){
		(this->field0_0x0).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

float PerceptWillHitLowWall::GetScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptWillHitLowWall::GetScore(PerceptWillHitLowWall *this){
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

