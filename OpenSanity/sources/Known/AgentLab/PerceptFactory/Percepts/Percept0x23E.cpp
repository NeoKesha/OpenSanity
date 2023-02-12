#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x23E.h"

void Percept0x23E::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x23E * __fastcall Percept0x23E::Construct(Percept0x23E *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x23e;
		(this->parent).vtable = &Percept_VT_ID_0x23e;
		return this;
		}
		
	*/
	return;
}

void Percept0x23E::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x23E * __thiscall Percept0x23E::Dispose(Percept0x23E *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x23E::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x23E::GetUtilityScore(Percept0x23E *this){
		uint uVar1;
		float fVar2;
		uVar1 = (uint)(this->parent).PerceptID >> 0x11;
		if (uVar1 == 1) {
		fVar2 = InputStruct::FUN_00209c50(GameController4->inputHandle1,0xb);
		return fVar2;
		}
		if (uVar1 != 2) {
		fVar2 = InputStruct::FUN_00209c50((InputStruct *)0x0,0xb);
		return fVar2;
		}
		fVar2 = InputStruct::FUN_00209c50(GameController4->inputHandle2,0xb);
		return fVar2;
		}
		
	*/
	return 0.0f;
}

