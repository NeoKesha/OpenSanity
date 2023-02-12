#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x24B.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x24B::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x24B * __thiscall Percept0x24B::Dispose(Percept0x24B *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x24B::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x24B::GetUtilityScore(Percept0x24B *this,InstanceContext *param_1){
		InstanceContext *pIVar1;
		float fVar2;
		pIVar1 = (InstanceContext *)PTR_00496350;
		if (PTR_00496350 != (InstanceContextRefCounter *)0x0) {
		pIVar1 = PTR_00496350->ctx;
		}
		fVar2 = FLOAT_0038639c;
		if ((param_1->parent).ctx != pIVar1) {
		fVar2 = 0.0;
		}
		return fVar2;
		}
		
	*/
	return 0.0f;
}

void Percept0x24B::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x24B::Construct(Percept0x24B *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x24b;
		(this->parent).vtable = &Percept_VT_ID_0x24b;
		return;
		}
		
	*/
	return;
}

