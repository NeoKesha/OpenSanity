#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptFocusIsBusy.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptFocusIsBusy::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptFocusIsBusy * __thiscall PerceptFocusIsBusy::Dispose(PerceptFocusIsBusy *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptFocusIsBusy::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptFocusIsBusy::GetUtilityScore(PerceptFocusIsBusy *this,InstanceContext *param_1){
		InstanceContext *pIVar1;
		uint uVar2;
		float fVar3;
		fVar3 = (param_1->parent).field14_0x20.matrix2.m43;
		if ((((uint)fVar3 & 1) != 0) &&(pIVar1 = (param_1->parent).field14_0x20.field4_0x10, pIVar1 != (InstanceContext *)0x0)) {
		if ((*(byte *)&(pIVar1->parent).flags & 1) == 0) {
		uVar2 = (pIVar1->parent).flags;
		if ((uVar2 & 1) == 0) {
		fVar3 = FLOAT_0038639c;
		if ((uVar2 & 0x100) == 0) {
		fVar3 = 0.0;
		}
		return fVar3;
		}
		}
		else {
		(param_1->parent).field14_0x20.field4_0x10 = (InstanceContext *)0x0;
		}
		(param_1->parent).field14_0x20.matrix2.m43 = (float)((uint)fVar3 & 0xfffffffc);
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptFocusIsBusy::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptFocusIsBusy::Construct(PerceptFocusIsBusy *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x42;
		(this->parent).vtable = &Percept_VT_FocusIsBusy;
		return;
		}
		
	*/
	return;
}

