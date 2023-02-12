#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptFocusActorEquals.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptFocusActorEquals::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptFocusActorEquals * __thiscall PerceptFocusActorEquals::Dispose(PerceptFocusActorEquals *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptFocusActorEquals::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptFocusActorEquals::GetUtilityScore(PerceptFocusActorEquals *this,InstanceContext *param_1){
		ushort uVar1;
		InstanceContext *pIVar2;
		InstanceNodeAbstract *pIVar3;
		float fVar4;
		fVar4 = (param_1->parent).field14_0x20.matrix2.m43;
		if ((((uint)fVar4 & 1) != 0) &&(pIVar2 = (param_1->parent).field14_0x20.field4_0x10, pIVar2 != (InstanceContext *)0x0)) {
		if ((*(byte *)&(pIVar2->parent).flags & 1) == 0) {
		pIVar3 = InstanceDataList::GetNode(&pIVar2->nodes,Instance);
		if ((pIVar3 != (InstanceNodeAbstract *)0x0) &&(uVar1 = *(ushort *)(pIVar3[5].time + 0x16), param_1 = (InstanceContext *)(uint)uVar1,uVar1 != 0xffff)) {
		fVar4 = FLOAT_0038639c;
		if (((uint)param_1 & 0x7fff) != (uint)(this->parent).PerceptID >> 0x11) {
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

void PerceptFocusActorEquals::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptFocusActorEquals::Construct(PerceptFocusActorEquals *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x2e;
		(this->parent).vtable = &Percept_VT_FocusActorEquals;
		return;
		}
		
	*/
	return;
}

