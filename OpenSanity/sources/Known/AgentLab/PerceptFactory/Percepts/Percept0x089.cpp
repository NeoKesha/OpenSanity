#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x089.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x089::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x089 * __thiscall Percept0x089::Dispose(Percept0x089 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x089::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x089::GetUtilityScore(Percept0x089 *this,InstanceContext *param_1){
		return (float)(uint)*(byte *)((int)&(param_1->nodes).array[0xf][2].field5_0x10 + 1);
		}
		
	*/
	return 0.0f;
}

void Percept0x089::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x089::Construct(Percept0x089 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x89;
		(this->parent).vtable = &Percept_VT_ID_0x89;
		return;
		}
		
	*/
	return;
}

