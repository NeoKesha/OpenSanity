#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x284.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x284::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x284 * __thiscall Percept0x284::Dispose(Percept0x284 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x284::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x284::GetUtilityScore(Percept0x284 *this,InstanceContext *param_1){
		void *pvVar1;
		int iVar2;
		InstanceContext *pIVar3;
		InstanceNodeAbstract *pIVar4;
		InstanceContext *pIVar5;
		pvVar1 = (param_1->parent).field14_0x20.field29_0x80;
		if ((pvVar1 != (void *)0x0) && (iVar2 = *(int *)((int)pvVar1 + 0x14), iVar2 != 0)) {
		pIVar3 = *(InstanceContext **)(iVar2 + 0x24);
		pIVar5 = (InstanceContext *)PTR_00496350;
		if (PTR_00496350 != (InstanceContextRefCounter *)0x0) {
		pIVar5 = PTR_00496350->ctx;
		}
		if (pIVar3 != pIVar5) {
		pIVar4 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar3->field27_0xe0 + 1),Character);
		if (pIVar4 != (InstanceNodeAbstract *)0x0) {
		return (float)(uint)(((byte)(GameController4->chunkDescriptor).flags & 0xf0) == 0x10);
		}
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x284::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x284::Construct(Percept0x284 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x284;
		(this->parent).vtable = &Percept_VT_ID_0x284;
		return;
		}
		
	*/
	return;
}

