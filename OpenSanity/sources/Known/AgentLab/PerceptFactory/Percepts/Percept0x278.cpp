#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x278.h"

void Percept0x278::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x278 * __fastcall Percept0x278::Construct(Percept0x278 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x278;
		(this->parent).vtable = &Percept_VT_ID_0x278;
		return this;
		}
		
	*/
	return;
}

void Percept0x278::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x278 * __thiscall Percept0x278::Dispose(Percept0x278 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x278::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x278::GetUtilityScore(Percept0x278 *this){
		return (float)(GameController4->chunkDescriptor).someDTime * TimePerTick1;
		}
		
	*/
	return 0.0f;
}

