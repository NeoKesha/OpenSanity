#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x280.h"

void Percept0x280::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x280 * __fastcall Percept0x280::Construct(Percept0x280 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x280;
		(this->parent).vtable = &Percept_VT_ID_0x280;
		return this;
		}
		
	*/
	return;
}

void Percept0x280::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x280 * __thiscall Percept0x280::Dispose(Percept0x280 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x280::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x280::GetUtilityScore(Percept0x280 *this){
		if (PTR_003d0ee8->field22_0xb8 != (undefined *)0x0) {
		return *(float *)(PTR_003d0ee8->field22_0xb8 + 0xe0);
		}
		return 0.0;
		}
		
	*/
	return 0.0f;
}

