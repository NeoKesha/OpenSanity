#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x27D.h"

void Percept0x27D::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x27D * __fastcall Percept0x27D::Construct(Percept0x27D *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x27d;
		(this->parent).vtable = &Percept_VT_ID_0x27d;
		return this;
		}
		
	*/
	return;
}

void Percept0x27D::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x27D * __thiscall Percept0x27D::Dispose(Percept0x27D *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x27D::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x27D::GetUtilityScore(Percept0x27D *this){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		if (((byte)(GameController4->chunkDescriptor).flags & 0xf0) != 0x50) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

