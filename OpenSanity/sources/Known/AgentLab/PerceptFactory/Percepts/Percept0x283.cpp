#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x283.h"

void Percept0x283::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x283 * __fastcall Percept0x283::Construct(Percept0x283 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x283;
		(this->parent).vtable = &Percept_VT_ID_0x283;
		return this;
		}
		
	*/
	return;
}

void Percept0x283::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x283 * __thiscall Percept0x283::Dispose(Percept0x283 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x283::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x283::GetUtilityScore(Percept0x283 *this){
		if ((*(byte *)((int)&(GameController4->chunkDescriptor).flags + 2) & 0x1f) ==(uint)(this->parent).PerceptID >> 0x11) {
		return FLOAT_0038639c;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

