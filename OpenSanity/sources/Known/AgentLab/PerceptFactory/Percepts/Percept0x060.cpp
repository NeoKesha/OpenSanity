#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x060.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x060::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x060 * __thiscall Percept0x060::Dispose(Percept0x060 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x060::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x060::GetUtilityScore(Percept0x060 *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		char cVar2;
		float fVar3;
		cVar2 = (*(param_1->parent).vtable[2].Method4)(param_1);
		if ((cVar2 != '\0') && (pIVar1 = (param_1->nodes).array[9], pIVar1 != (InstanceNodeAbstract *)0x0)) {
		pIVar1 = pIVar1[6].field5_0x10;
		if ((((uint)pIVar1 & 0x40000000) == 0) ||(fVar3 = FLOAT_0038639c, ((uint)pIVar1 & 0x8000000) == 0)) {
		fVar3 = 0.0;
		}
		return fVar3;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x060::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x060::Construct(Percept0x060 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x60;
		(this->parent).vtable = &Percept_VT_ID_0x60;
		return;
		}
		
	*/
	return;
}

