#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x0AE.h"

void Percept0x0AE::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x0AE * __thiscall Percept0x0AE::Dispose(Percept0x0AE *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x0AE::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x0AE::GetUtilityScore(Percept0x0AE *this){
		return FLOAT_0038639c;
		}
		
	*/
	return 0.0f;
}

void Percept0x0AE::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x0AE::Construct(Percept0x0AE *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0xae;
		(this->parent).vtable = &Percept_VT_ID_0xae;
		return;
		}
		
	*/
	return;
}

