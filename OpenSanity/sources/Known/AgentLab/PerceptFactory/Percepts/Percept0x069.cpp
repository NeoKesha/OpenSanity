#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x069.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x069::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x069 * __thiscall Percept0x069::Dispose(Percept0x069 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x069::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x069::GetUtilityScore(Percept0x069 *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		float fVar2;
		pIVar1 = (param_1->nodes).array[0x11];
		if ((pIVar1 == (InstanceNodeAbstract *)0x0) ||(fVar2 = FLOAT_0038639c, (*(byte *)&pIVar1[5].field6_0x14 & 0xf) == 0)) {
		fVar2 = 0.0;
		}
		return fVar2;
		}
		
	*/
	return 0.0f;
}

void Percept0x069::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x069::Construct(Percept0x069 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x69;
		(this->parent).vtable = &Percept_VT_ID_0x69;
		return;
		}
		
	*/
	return;
}

