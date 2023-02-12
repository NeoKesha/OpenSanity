#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x26C.h"

void Percept0x26C::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x26C * __fastcall Percept0x26C::Construct(Percept0x26C *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x26c;
		(this->parent).vtable = &Percept_VT_ID_0x26c;
		return this;
		}
		
	*/
	return;
}

void Percept0x26C::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x26C * __thiscall Percept0x26C::Dispose(Percept0x26C *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x26C::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x26C::GetUtilityScore(Percept0x26C *this){
		int *piVar1;
		InstanceContext *pIVar2;
		InstanceNodeAbstract *pIVar3;
		int iVar4;
		pIVar2 = (InstanceContext *)PTR_00496350;
		if (PTR_00496350 != (InstanceContextRefCounter *)0x0) {
		pIVar2 = PTR_00496350->ctx;
		}
		pIVar3 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar2->field27_0xe0 + 1),Character);
		if (pIVar3 == (InstanceNodeAbstract *)0x0) {
		return FLOAT_00386394;
		}
		piVar1 = (int *)pIVar3[1].vtable[4].UpdateTime;
		if (piVar1 != (int *)0x0) {
		iVar4 = (**(code **)(*piVar1 + 0x1c))();
		if (iVar4 == 3) {
		return (float)(uint)*(byte *)(piVar1 + 0x6b);
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

