#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x09E.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x09E::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x09E * __thiscall Percept0x09E::Dispose(Percept0x09E *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x09E::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x09E::GetUtilityScore(Percept0x09E *this,InstanceContext *param_1){
		uint uVar1;
		float fVar2;
		uVar1 = BlackboardAbstract::GetIntValue((BlackboardAbstract *)(param_1->parent).field14_0x20.matrix2.m41,0);
		fVar2 = FLOAT_0038639c;
		if ((uVar1 & 1) != 0) {
		fVar2 = 0.0;
		}
		return fVar2;
		}
		
	*/
	return 0.0f;
}

void Percept0x09E::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x09E::Construct(Percept0x09E *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x9e;
		(this->parent).vtable = &Percept_VT_ID_0x9e;
		return;
		}
		
	*/
	return;
}

