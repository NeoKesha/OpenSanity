#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x0AB.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x0AB::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x0AB * __thiscall Percept0x0AB::Dispose(Percept0x0AB *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x0AB::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x0AB::GetUtilityScore(Percept0x0AB *this,InstanceContext *param_1){
		byte bVar1;
		bVar1 = *(byte *)&(param_1->parent).field14_0x20.matrix2.m44;
		if ((bVar1 != 0xff) && (BYTE_003a35ec != 0xff)) {
		return (float)((uint)bVar1 - (uint)BYTE_003a35ec);
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x0AB::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x0AB::Construct(Percept0x0AB *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0xab;
		(this->parent).vtable = &Percept_VT_ID_0xab;
		return;
		}
		
	*/
	return;
}

