#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x23D.h"

void Percept0x23D::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x23D * __fastcall Percept0x23D::Construct(Percept0x23D *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x23d;
		(this->parent).vtable = &Percept_VT_ID_0x23d;
		return this;
		}
		
	*/
	return;
}

void Percept0x23D::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x23D * __thiscall Percept0x23D::Dispose(Percept0x23D *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x23D::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x23D::GetUtilityScore(Percept0x23D *this){
		uint uVar1;
		float fVar2;
		uVar1 = (uint)(this->parent).PerceptID >> 0x11;
		if (uVar1 == 1) {
		fVar2 = InputStruct::FUN_00209c50(GameController4->inputHandle1,10);
		return fVar2;
		}
		if (uVar1 != 2) {
		fVar2 = InputStruct::FUN_00209c50((InputStruct *)0x0,10);
		return fVar2;
		}
		fVar2 = InputStruct::FUN_00209c50(GameController4->inputHandle2,10);
		return fVar2;
		}
		
	*/
	return 0.0f;
}

