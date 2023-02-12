#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x26D.h"

void Percept0x26D::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x26D * __fastcall Percept0x26D::Construct(Percept0x26D *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x26d;
		(this->parent).vtable = &Percept_VT_ID_0x26d;
		return this;
		}
		
	*/
	return;
}

void Percept0x26D::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x26D * __thiscall Percept0x26D::Dispose(Percept0x26D *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x26D::GetUtilityScore() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling float __thiscall Percept0x26D::GetUtilityScore(Percept0x26D *this){
		InstanceContextRefCounter *pIVar1;
		uint uVar2;
		InstanceNodeAbstract *pIVar3;
		InstanceContext *pIVar4;
		float fVar5;
		uVar2 = (GameController4->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar2 == 6) {
		pIVar4 = (InstanceContext *)0x0;
		}
		else {
		pIVar1 = (GameController4->chunkDescriptor).playerInstanceContexts[uVar2];
		if (pIVar1 == (InstanceContextRefCounter *)0x0) {
		pIVar4 = (InstanceContext *)0x0;
		}
		else {
		pIVar4 = pIVar1->ctx;
		}
		}
		pIVar3 = InstanceDataList::GetNode(&pIVar4->nodes,Character);
		fVar5 = FLOAT_0038639c;
		if ((ChunkData *)pIVar3[1].vtable[3].UpdateTime == (pIVar4->parent).chunkData) {
		fVar5 = 0.0;
		}
		return fVar5;
		}
		
	*/
	return 0.0f;
}

