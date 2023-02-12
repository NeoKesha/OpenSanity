#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x269.h"

void Percept0x269::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x269 * __fastcall Percept0x269::Construct(Percept0x269 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x269;
		(this->parent).vtable = &Percept_VT_ID_0x269;
		return this;
		}
		
	*/
	return;
}

void Percept0x269::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x269 * __thiscall Percept0x269::Dispose(Percept0x269 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x269::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling float __thiscall Percept0x269::GetUtilityScore(Percept0x269 *this){
		int *piVar1;
		uint uVar2;
		InstanceContext *pIVar3;
		InstanceNodeAbstract *pIVar4;
		uVar2 = (GameController4->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar2 == 6) {
		pIVar3 = (InstanceContext *)0x0;
		}
		else {
		pIVar3 = (InstanceContext *)(GameController4->chunkDescriptor).playerInstanceContexts[uVar2];
		if (pIVar3 != (InstanceContext *)0x0) {
		pIVar3 = *(InstanceContext **)&pIVar3->parent;
		}
		}
		pIVar4 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar3->field27_0xe0 + 1),Character);
		piVar1 = (int *)pIVar4[1].vtable[0x10].GetIndex;
		if (piVar1 == (int *)0x0) {
		return 0.0;
		}
		return (float)(uint)(*piVar1 != 0);
		}
		
	*/
	return 0.0f;
}

