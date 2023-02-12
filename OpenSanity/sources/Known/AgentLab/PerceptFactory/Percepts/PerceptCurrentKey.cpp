#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptCurrentKey.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptCurrentKey::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptCurrentKey * __thiscall PerceptCurrentKey::Dispose(PerceptCurrentKey *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptCurrentKey::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptCurrentKey::GetUtilityScore(PerceptCurrentKey *this,InstanceContext *param_1){
		byte bVar1;
		bVar1 = *(byte *)&(param_1->nodes).array[0xf][2].field6_0x14;
		if (bVar1 != 0xff) {
		return (float)(bVar1 + 1);
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptCurrentKey::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptCurrentKey::Construct(PerceptCurrentKey *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0xb;
		(this->parent).vtable = &Percept_VT_CurrentKey;
		return;
		}
		
	*/
	return;
}

