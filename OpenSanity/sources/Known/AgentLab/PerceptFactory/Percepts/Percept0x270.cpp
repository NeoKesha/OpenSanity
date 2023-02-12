#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x270.h"

void Percept0x270::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x270 * __fastcall Percept0x270::Construct(Percept0x270 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x270;
		(this->parent).vtable = &Percept_VT_ID_0x270;
		return this;
		}
		
	*/
	return;
}

void Percept0x270::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x270 * __thiscall Percept0x270::Dispose(Percept0x270 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x270::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x270::GetUtilityScore(Percept0x270 *this){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		if ((GameController4->flags & 0x3f000) != 0xb000) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

