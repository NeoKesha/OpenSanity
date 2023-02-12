#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x243.h"

void Percept0x243::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x243 * __fastcall Percept0x243::Construct(Percept0x243 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x243;
		(this->parent).vtable = &Percept_VT_ID_0x243;
		return this;
		}
		
	*/
	return;
}

void Percept0x243::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x243 * __thiscall Percept0x243::Dispose(Percept0x243 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x243::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x243::GetUtilityScore(Percept0x243 *this){
		float fVar1;
		if (PTR_003d0ee8->data == (US001 *)0x0) {
		return FLOAT_00386394;
		}
		fVar1 = FLOAT_0038639c;
		if (((byte)PTR_003d0ee8->data->flags & 0xf) != 6) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

