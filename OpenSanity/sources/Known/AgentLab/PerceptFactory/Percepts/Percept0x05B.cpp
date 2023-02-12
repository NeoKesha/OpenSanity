#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x05B.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x05B::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x05B * __thiscall Percept0x05B::Dispose(Percept0x05B *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x05B::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x05B::GetUtilityScore(Percept0x05B *this,InstanceContext *param_1){
		return (float)(uint)*(byte *)(((uint)(this->parent).PerceptID >> 0x11) + 0x28 +(int)(param_1->parent).field14_0x20.matrix2.m42);
		}
		
	*/
	return 0.0f;
}

void Percept0x05B::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x05B::Construct(Percept0x05B *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x5b;
		(this->parent).vtable = &Percept_VT_ID_0x5B;
		return;
		}
		
	*/
	return;
}

