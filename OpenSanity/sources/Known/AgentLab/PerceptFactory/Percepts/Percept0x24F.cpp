#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x24F.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x24F::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x24F * __fastcall Percept0x24F::Construct(Percept0x24F *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x24f;
		(this->parent).vtable = &Percept_VT_ID_0x24f;
		return this;
		}
		
	*/
	return;
}

void Percept0x24F::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x24F * __thiscall Percept0x24F::Dispose(Percept0x24F *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x24F::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x24F::GetUtilityScore(Percept0x24F *this,InstanceContext *param_1){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		if ((*(uint *)((int)(param_1->parent).field14_0x20.matrix2.m42 + 0x40) >> 5 & 1) == 0) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

