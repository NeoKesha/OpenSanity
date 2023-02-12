#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x06A.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x06A::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x06A * __thiscall Percept0x06A::Dispose(Percept0x06A *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x06A::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x06A::GetUtilityScore(Percept0x06A *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		float fVar2;
		pIVar1 = (param_1->nodes).array[0x11];
		if ((pIVar1 == (InstanceNodeAbstract *)0x0) ||(fVar2 = FLOAT_0038639c, (*(byte *)&pIVar1[5].field6_0x14 & 0xf0) == 0)) {
		fVar2 = 0.0;
		}
		return fVar2;
		}
		
	*/
	return 0.0f;
}

void Percept0x06A::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x06A::Construct(Percept0x06A *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x6a;
		(this->parent).vtable = &Percept_VT_ID_0x6a;
		return;
		}
		
	*/
	return;
}

