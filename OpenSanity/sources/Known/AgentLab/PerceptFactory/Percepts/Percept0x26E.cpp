#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x26E.h"

void Percept0x26E::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x26E * __fastcall Percept0x26E::Construct(Percept0x26E *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x26e;
		(this->parent).vtable = &Percept_VT_ID_0x26e;
		return this;
		}
		
	*/
	return;
}

void Percept0x26E::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x26E * __thiscall Percept0x26E::Dispose(Percept0x26E *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x26E::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x26E::GetUtilityScore(Percept0x26E *this){
		float fVar1;
		fVar1 = 0.0;
		if ((PTR_003d0eec->field1_0x1c >> 0x19 & 1) == 0) {
		fVar1 = FLOAT_0038639c;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

