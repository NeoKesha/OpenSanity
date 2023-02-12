#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x093.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x093::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x093 * __thiscall Percept0x093::Dispose(Percept0x093 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x093::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x093::GetUtilityScore(Percept0x093 *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		char cVar2;
		float fVar3;
		cVar2 = (*(param_1->parent).vtable[2].Method4)(param_1);
		if ((cVar2 != '\0') &&(pIVar1 = (param_1->nodes).array[0x11], pIVar1 != (InstanceNodeAbstract *)0x0)) {
		if (pIVar1[8].field6_0x14 != 0) {
		fVar3 = FLOAT_0038639c;
		if ((*(uint *)(pIVar1[8].field6_0x14 + 0x18) >> 2 & 1) == 0) {
		fVar3 = 0.0;
		}
		return fVar3;
		}
		fVar3 = FLOAT_0038639c;
		if ((pIVar1[5].field6_0x14 >> 0x14 & 1) == 0) {
		fVar3 = 0.0;
		}
		return fVar3;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x093::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x093::Construct(Percept0x093 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x93;
		(this->parent).vtable = &Percept_VT_ID_0x93;
		return;
		}
		
	*/
	return;
}

