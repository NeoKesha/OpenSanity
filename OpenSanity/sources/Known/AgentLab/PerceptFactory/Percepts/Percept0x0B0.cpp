#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x0B0.h"

void Percept0x0B0::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x0B0 * __thiscall Percept0x0B0::Dispose(Percept0x0B0 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x0B0::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x0B0::GetUtilityScore(Percept0x0B0 *this){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		if ((WORLD->currentChunk->flags >> 0xb & 1) == 0) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void Percept0x0B0::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x0B0::Construct(Percept0x0B0 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0xb0;
		(this->parent).vtable = &Percept_VT_ID_0xb0;
		return;
		}
		
	*/
	return;
}

