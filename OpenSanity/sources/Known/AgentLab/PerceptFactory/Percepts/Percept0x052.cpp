#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x052.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x052::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x052 * __thiscall Percept0x052::Dispose(Percept0x052 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x052::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x052::GetUtilityScore(Percept0x052 *this,InstanceContext *param_1){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		if (((uint)(param_1->parent).field14_0x20.matrix2.m43 >> 0xd & 1) == 0) {
		fVar1 = 0.0;
		}
		return fVar1;
		}
		
	*/
	return 0.0f;
}

void Percept0x052::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x052::Construct(Percept0x052 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x52;
		(this->parent).vtable = &Percept_VT_ID_0x52;
		return;
		}
		
	*/
	return;
}

