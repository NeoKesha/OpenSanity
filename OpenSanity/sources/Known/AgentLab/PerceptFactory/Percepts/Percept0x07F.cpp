#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x07F.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x07F::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x07F * __thiscall Percept0x07F::Dispose(Percept0x07F *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x07F::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x07F::GetUtilityScore(Percept0x07F *this,InstanceContext *param_1){
		InstanceContext *pIVar1;
		InstanceNodeAbstract *pIVar2;
		BlackboardAbstract *this_00;
		uint uVar3;
		float fVar4;
		fVar4 = (param_1->parent).field14_0x20.matrix2.m43;
		if ((((uint)fVar4 & 1) != 0) &&(pIVar1 = (param_1->parent).field14_0x20.field4_0x10, pIVar1 != (InstanceContext *)0x0)) {
		if ((*(byte *)&(pIVar1->parent).flags & 1) == 0) {
		pIVar2 = InstanceDataList::GetNode(&pIVar1->nodes,Instance);
		if ((pIVar2 != (InstanceNodeAbstract *)0x0) && (*(short *)(pIVar2[5].time + 0x16) != -1)) {
		if (*(int *)&pIVar2[6].field2_0x8 == 0) {
		this_00 = *(BlackboardAbstract **)&pIVar2[5].field2_0x8;
		}
		else {
		this_00 = (BlackboardAbstract *)FUN_00017ba8(*(int *)&pIVar2[6].field2_0x8);
		}
		uVar3 = BlackboardAbstract::GetIntValue(this_00,0);
		fVar4 = FLOAT_0038639c;
		if (uVar3 != (uint)(this->parent).PerceptID >> 0x11) {
		fVar4 = 0.0;
		}
		return fVar4;
		}
		}
		else {
		(param_1->parent).field14_0x20.field4_0x10 = (InstanceContext *)0x0;
		(param_1->parent).field14_0x20.matrix2.m43 = (float)((uint)fVar4 & 0xfffffffc);
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x07F::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x07F::Construct(Percept0x07F *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x7f;
		(this->parent).vtable = &Percept_VT_ID_0x7f;
		return;
		}
		
	*/
	return;
}

