#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x27A.h"

void Percept0x27A::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x27A * __fastcall Percept0x27A::Construct(Percept0x27A *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x27a;
		(this->parent).vtable = &Percept_VT_ID_0x27a;
		return this;
		}
		
	*/
	return;
}

void Percept0x27A::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x27A * __thiscall Percept0x27A::Dispose(Percept0x27A *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x27A::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x27A::GetUtilityScore(Percept0x27A *this){
		if (PTR_003d0ee8->data == (US001 *)0x0) {
		return FLOAT_00386394;
		}
		return (float)(PTR_003d0ee8->data->flags >> 0xd & 0x7f);
		}
		
	*/
	return 0.0f;
}

