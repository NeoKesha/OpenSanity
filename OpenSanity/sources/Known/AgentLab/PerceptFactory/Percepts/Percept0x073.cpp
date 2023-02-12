#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x073.h"

void Percept0x073::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x073 * __thiscall Percept0x073::Dispose(Percept0x073 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x073::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x073::GetUtilityScore(Percept0x073 *this){
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x073::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x073::Construct(Percept0x073 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x73;
		(this->parent).vtable = &Percept_VT_ID_0x73;
		return;
		}
		
	*/
	return;
}

