#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x27F.h"

void Percept0x27F::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x27F * __fastcall Percept0x27F::Construct(Percept0x27F *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x27f;
		(this->parent).vtable = &Percept_VT_ID_0x27f;
		return this;
		}
		
	*/
	return;
}

void Percept0x27F::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x27F * __thiscall Percept0x27F::Dispose(Percept0x27F *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x27F::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x27F::GetUtilityScore(Percept0x27F *this){
		return (float)((GameController4->chunkDescriptor).flags >> 0x15 & 0x1f);
		}
		
	*/
	return 0.0f;
}

