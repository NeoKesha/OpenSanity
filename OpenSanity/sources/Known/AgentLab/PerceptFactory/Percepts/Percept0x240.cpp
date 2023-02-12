#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x240.h"

void Percept0x240::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x240 * __fastcall Percept0x240::Construct(Percept0x240 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x240;
		(this->parent).vtable = &Percept_VT_ID_0x240;
		return this;
		}
		
	*/
	return;
}

void Percept0x240::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x240 * __thiscall Percept0x240::Dispose(Percept0x240 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x240::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x240::GetUtilityScore(Percept0x240 *this){
		uint uVar1;
		float fVar2;
		uVar1 = (uint)(this->parent).PerceptID >> 0x11;
		if (uVar1 == 1) {
		fVar2 = InputStruct::FUN_00209c50(GameController4->inputHandle1,0xe);
		return fVar2;
		}
		if (uVar1 != 2) {
		fVar2 = InputStruct::FUN_00209c50((InputStruct *)0x0,0xe);
		return fVar2;
		}
		fVar2 = InputStruct::FUN_00209c50(GameController4->inputHandle2,0xe);
		return fVar2;
		}
		
	*/
	return 0.0f;
}

