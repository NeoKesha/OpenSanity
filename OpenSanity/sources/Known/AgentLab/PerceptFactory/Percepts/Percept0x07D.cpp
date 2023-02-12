#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x07D.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x07D::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x07D * __thiscall Percept0x07D::Dispose(Percept0x07D *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x07D::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x07D::GetUtilityScore(Percept0x07D *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		float fVar2;
		fVar2 = FLOAT_0038639c;
		pIVar1 = (param_1->nodes).array[0x11];
		if ((pIVar1 != (InstanceNodeAbstract *)0x0) && (((uint)pIVar1[6].vtable >> 0x14 & 1) != 0)) {
		pIVar1[6].vtable = (InstanceNodeAbstract_VTable *)((uint)pIVar1[6].vtable & 0xffefffff);
		return fVar2;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x07D::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x07D::Construct(Percept0x07D *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x7d;
		(this->parent).vtable = &Percept_VT_ID_0x7d;
		return;
		}
		
	*/
	return;
}

