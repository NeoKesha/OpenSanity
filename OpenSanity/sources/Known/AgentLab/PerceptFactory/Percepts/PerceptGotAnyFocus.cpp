#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptGotAnyFocus.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptGotAnyFocus::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptGotAnyFocus * __thiscall PerceptGotAnyFocus::Dispose(PerceptGotAnyFocus *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptGotAnyFocus::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptGotAnyFocus::GetUtilityScore(PerceptGotAnyFocus *this,InstanceContext *param_1){
		float fVar1;
		InstanceContext *pIVar2;
		fVar1 = (param_1->parent).field14_0x20.matrix2.m43;
		if ((((uint)fVar1 & 1) != 0) &&(pIVar2 = (param_1->parent).field14_0x20.field4_0x10, pIVar2 != (InstanceContext *)0x0)) {
		if ((*(byte *)&(pIVar2->parent).flags & 1) == 0) {
		if ((*(byte *)&(pIVar2->parent).flags & 1) == 0) {
		return FLOAT_0038639c;
		}
		(param_1->parent).field14_0x20.matrix2.m43 = (float)((uint)fVar1 & 0xfffffffc);
		return FLOAT_00386394;
		}
		(param_1->parent).field14_0x20.field4_0x10 = (InstanceContext *)0x0;
		(param_1->parent).field14_0x20.matrix2.m43 = (float)((uint)fVar1 & 0xfffffffc);
		}
		if ((*(byte *)&(param_1->parent).field14_0x20.matrix2.m43 & 3) != 0) {
		return FLOAT_0038639c;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptGotAnyFocus::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptGotAnyFocus::Construct(PerceptGotAnyFocus *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x2d;
		(this->parent).vtable = &Percept_VT_GotAnyFocus;
		return;
		}
		
	*/
	return;
}

