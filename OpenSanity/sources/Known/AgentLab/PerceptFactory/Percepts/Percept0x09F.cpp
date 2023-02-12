#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x09F.h"

void Percept0x09F::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x09F * __thiscall Percept0x09F::Dispose(Percept0x09F *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x09F::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x09F::GetUtilityScore(Percept0x09F *this){
		char cVar1;
		float fVar2;
		cVar1 = FUN_001f2b20((int)VideoController);
		fVar2 = FLOAT_0038639c;
		if (cVar1 == '\0') {
		fVar2 = 0.0;
		}
		return fVar2;
		}
		
	*/
	return 0.0f;
}

void Percept0x09F::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x09F::Construct(Percept0x09F *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x9f;
		(this->parent).vtable = &Percept_VT_ID_0x9f;
		return;
		}
		
	*/
	return;
}

