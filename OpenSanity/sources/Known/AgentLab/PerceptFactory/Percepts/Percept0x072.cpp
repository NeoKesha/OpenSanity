#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x072.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x072::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x072 * __thiscall Percept0x072::Dispose(Percept0x072 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x072::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x072::GetUtilityScore(Percept0x072 *this,InstanceContext *param_1){
		return *(float *)(*(int *)((int)(param_1->parent).field14_0x20.matrix2.m42 + 0x20) + 0xc);
		}
		
	*/
	return 0.0f;
}

void Percept0x072::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x072::Construct(Percept0x072 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x72;
		(this->parent).vtable = &Percept_VT_ID_0x72;
		return;
		}
		
	*/
	return;
}

