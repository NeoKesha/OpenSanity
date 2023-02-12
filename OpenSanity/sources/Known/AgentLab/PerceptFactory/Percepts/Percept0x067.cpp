#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x067.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x067::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x067::GetUtilityScore(Percept0x067 *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		char cVar2;
		cVar2 = (*(param_1->parent).vtable[2].Method4)(param_1);
		if ((cVar2 != '\0') &&(pIVar1 = (param_1->nodes).array[0xf], pIVar1[2].ctx != (InstanceContext *)0x0)) {
		return (float)(uint)*(byte *)&pIVar1[2].time;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x067::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x067 * __thiscall Percept0x067::Dispose(Percept0x067 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Percept0x067::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x067::Construct(Percept0x067 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x67;
		(this->parent).vtable = &Percept_VT_ID_0x67;
		return;
		}
		
	*/
	return;
}

