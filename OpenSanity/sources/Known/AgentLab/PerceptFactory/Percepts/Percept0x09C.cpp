#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x09C.h"

void Percept0x09C::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x09C * __thiscall Percept0x09C::Dispose(Percept0x09C *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x09C::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x09C::GetUtilityScore(Percept0x09C *this){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		if (VideoController->state != 5) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void Percept0x09C::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x09C::Construct(Percept0x09C *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x9c;
		(this->parent).vtable = &Percept_VT_ID_0x9c;
		return;
		}
		
	*/
	return;
}

