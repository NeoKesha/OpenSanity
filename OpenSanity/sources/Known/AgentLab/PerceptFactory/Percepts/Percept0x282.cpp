#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x282.h"

void Percept0x282::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x282 * __thiscall Percept0x282::Dispose(Percept0x282 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x282::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling float __thiscall Percept0x282::GetUtilityScore(Percept0x282 *this){
		uint uVar1;
		InstanceContext *pIVar2;
		InstanceNodeAbstract *pIVar3;
		uVar1 = (GameController4->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar1 == 6) {
		pIVar2 = (InstanceContext *)0x0;
		}
		else {
		pIVar2 = (InstanceContext *)(GameController4->chunkDescriptor).playerInstanceContexts[uVar1];
		if (pIVar2 != (InstanceContext *)0x0) {
		pIVar2 = *(InstanceContext **)&pIVar2->parent;
		}
		}
		if (pIVar2 != (InstanceContext *)0x0) {
		pIVar3 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar2->field27_0xe0 + 1),Character);
		if ((pIVar3 != (InstanceNodeAbstract *)0x0) &&(((uint)pIVar3[1].vtable[2].Method8 >> 0xe & 1) != 0)) {
		return FLOAT_0038639c;
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x282::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x282::Construct(Percept0x282 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x282;
		(this->parent).vtable = &Percept_VT_ID_0x282;
		return;
		}
		
	*/
	return;
}

