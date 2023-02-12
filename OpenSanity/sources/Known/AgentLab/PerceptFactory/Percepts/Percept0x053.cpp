#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x053.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x053::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x053 * __fastcall Percept0x053::Construct(Percept0x053 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x53;
		(this->parent).vtable = &Percept_VT_ID_0x53;
		return this;
		}
		
	*/
	return;
}

void Percept0x053::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x053 * __thiscall Percept0x053::Dispose(Percept0x053 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x053::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x053::GetUtilityScore(Percept0x053 *this,InstanceContext *param_1){
		char cVar1;
		float fVar2;
		cVar1 = (*(param_1->parent).vtable[2].Method4)(param_1);
		if (cVar1 != '\0') {
		fVar2 = FLOAT_0038639c;
		if ((*(byte *)((int)&(param_1->parent).field14_0x20.matrix2.m43 + 2) & 1) == 0) {
		fVar2 = 0.0;
		}
		return fVar2;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

