#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptNodeTraffic.h"

void PerceptNodeTraffic::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptNodeTraffic * __fastcall PerceptNodeTraffic::Construct(PerceptNodeTraffic *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x221;
		(this->parent).vtable = &Percept_VT_NodeTraffic;
		return this;
		}
		
	*/
	return;
}

void PerceptNodeTraffic::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptNodeTraffic * __thiscall PerceptNodeTraffic::Dispose(PerceptNodeTraffic *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptNodeTraffic::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptNodeTraffic::GetUtilityScore(PerceptNodeTraffic *this){
		if (PTR_003d0ee8->data == (US001 *)0x0) {
		return FLOAT_003869d8;
		}
		return *(float *)(PTR_003d0ee8->data + 2);
		}
		
	*/
	return 0.0f;
}

