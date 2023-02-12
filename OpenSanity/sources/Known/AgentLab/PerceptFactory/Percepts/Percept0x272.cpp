#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x272.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x272::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x272 * __fastcall Percept0x272::Construct(Percept0x272 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x272;
		(this->parent).vtable = &Percept_VT_ID_0x272;
		return this;
		}
		
	*/
	return;
}

void Percept0x272::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x272 * __thiscall Percept0x272::Dispose(Percept0x272 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x272::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x272::GetUtilityScore(Percept0x272 *this,InstanceContext *param_1){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		if ((*(uint *)((int)(param_1->parent).field14_0x20.matrix2.m42 + 0x40) >> 2 & 1) == 0) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

