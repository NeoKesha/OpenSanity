#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x27C.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x27C::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x27C * __fastcall Percept0x27C::Construct(Percept0x27C *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x27c;
		(this->parent).vtable = &Percept_VT_ID_0x27c;
		return this;
		}
		
	*/
	return;
}

void Percept0x27C::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x27C * __thiscall Percept0x27C::Dispose(Percept0x27C *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x27C::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x27C::GetUtilityScore(Percept0x27C *this,InstanceContext *param_1){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		if ((*(uint *)((int)(param_1->parent).field14_0x20.matrix2.m42 + 0x40) >> 0x13 & 1) == 0) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

