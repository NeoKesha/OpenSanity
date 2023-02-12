#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptPlayerHitPoints.h"

void PerceptPlayerHitPoints::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptPlayerHitPoints * __thiscall PerceptPlayerHitPoints::Dispose(PerceptPlayerHitPoints *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptPlayerHitPoints::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Removing unreachable block (ram,0x0005c4fc) float __thiscall PerceptPlayerHitPoints::GetUtilityScore(PerceptPlayerHitPoints *this){
		return (float)((uint)(PTR_003d0eec->parent).field1_0x14 >> 6 & 0xff);
		}
		
	*/
	return 0.0f;
}

void PerceptPlayerHitPoints::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptPlayerHitPoints::Construct(PerceptPlayerHitPoints *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x200;
		(this->parent).vtable = &Percept_VT_PlayerHitPoints;
		return;
		}
		
	*/
	return;
}

