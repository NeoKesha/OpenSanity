#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x274.h"

void Percept0x274::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x274 * __fastcall Percept0x274::Construct(Percept0x274 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x274;
		(this->parent).vtable = &Percept_VT_ID_0x274;
		return this;
		}
		
	*/
	return;
}

void Percept0x274::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x274 * __thiscall Percept0x274::Dispose(Percept0x274 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x274::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling float __thiscall Percept0x274::GetUtilityScore(Percept0x274 *this){
		InstanceNodeAbstract *pIVar1;
		uint uVar2;
		InstanceContext *pIVar3;
		pIVar3 = (InstanceContext *)(GameController4->chunkDescriptor).playerInstanceContexts[1];
		if (pIVar3 != (InstanceContext *)0x0) {
		pIVar3 = *(InstanceContext **)&pIVar3->parent;
		}
		if (pIVar3 != (InstanceContext *)0x0) {
		pIVar1 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar3->field27_0xe0 + 1),Character);
		if ((pIVar1 != (InstanceNodeAbstract *)0x0) &&(((uint)pIVar1[1].vtable[2].Method8 >> 0xe & 1) != 0)) {
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
		if (pIVar3 != (InstanceContext *)0x0) {
		pIVar1 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar3->field27_0xe0 + 1),Character);
		if ((pIVar1 != (InstanceNodeAbstract *)0x0) &&(((uint)pIVar1[1].vtable[2].Method8 >> 0xe & 1) == 0)) {
		return FLOAT_0038639c;
		}
		}
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

