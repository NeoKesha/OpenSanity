#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x23F.h"

void Percept0x23F::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x23F * __fastcall Percept0x23F::Construct(Percept0x23F *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x23f;
		(this->parent).vtable = &Percept_VT_ID_0x23f;
		return this;
		}
		
	*/
	return;
}

void Percept0x23F::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x23F * __thiscall Percept0x23F::Dispose(Percept0x23F *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x23F::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x23F::GetUtilityScore(Percept0x23F *this){
		uint uVar1;
		float fVar2;
		uVar1 = (uint)(this->parent).PerceptID >> 0x11;
		if (uVar1 == 1) {
		fVar2 = InputStruct::FUN_00209c50(GameController4->inputHandle1,8);
		return fVar2;
		}
		if (uVar1 != 2) {
		fVar2 = InputStruct::FUN_00209c50((InputStruct *)0x0,8);
		return fVar2;
		}
		fVar2 = InputStruct::FUN_00209c50(GameController4->inputHandle2,8);
		return fVar2;
		}
		
	*/
	return 0.0f;
}

