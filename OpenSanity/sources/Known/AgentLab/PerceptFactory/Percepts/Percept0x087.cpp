#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x087.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x087::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x087 * __thiscall Percept0x087::Dispose(Percept0x087 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x087::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x087::GetUtilityScore(Percept0x087 *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		pIVar1 = (param_1->nodes).array[0xf];
		if (pIVar1 != (InstanceNodeAbstract *)0x0) {
		return (float)(uint)*(byte *)((int)&pIVar1[2].field5_0x10 + 2);
		}
		return 0.0;
		}
		
	*/
	return 0.0f;
}

void Percept0x087::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x087::Construct(Percept0x087 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x87;
		(this->parent).vtable = &Percept_VT_ID_0x87;
		return;
		}
		
	*/
	return;
}

