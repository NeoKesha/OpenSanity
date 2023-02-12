#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x277.h"

void Percept0x277::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x277 * __fastcall Percept0x277::Construct(Percept0x277 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x277;
		(this->parent).vtable = &Percept_VT_ID_0x277;
		return this;
		}
		
	*/
	return;
}

void Percept0x277::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x277 * __thiscall Percept0x277::Dispose(Percept0x277 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x277::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x277::GetUtilityScore(Percept0x277 *this){
		return (float)((GameController4->chunkDescriptor).flags2 >> 0x1a);
		}
		
	*/
	return 0.0f;
}

