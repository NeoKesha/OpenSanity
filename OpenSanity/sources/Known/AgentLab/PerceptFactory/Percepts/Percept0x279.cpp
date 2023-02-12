#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x279.h"

void Percept0x279::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x279 * __fastcall Percept0x279::Construct(Percept0x279 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x279;
		(this->parent).vtable = &Percept_VT_ID_0x279;
		return this;
		}
		
	*/
	return;
}

void Percept0x279::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x279 * __thiscall Percept0x279::Dispose(Percept0x279 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x279::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x279::GetUtilityScore(Percept0x279 *this){
		if (PTR_003d0ee8->data == (US001 *)0x0) {
		return FLOAT_00386394;
		}
		return (float)(PTR_003d0ee8->data->flags >> 9 & 0xf);
		}
		
	*/
	return 0.0f;
}

