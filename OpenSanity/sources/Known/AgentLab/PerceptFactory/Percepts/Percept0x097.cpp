#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x097.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x097::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x097 * __thiscall Percept0x097::Dispose(Percept0x097 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x097::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x097::GetUtilityScore(Percept0x097 *this,InstanceContext *param_1){
		InstanceContext *pIVar1;
		uint uVar2;
		float fVar3;
		fVar3 = (param_1->parent).field14_0x20.matrix2.m43;
		if ((((uint)fVar3 & 1) != 0) &&(pIVar1 = (param_1->parent).field14_0x20.field4_0x10, pIVar1 != (InstanceContext *)0x0)) {
		if ((*(byte *)&(pIVar1->parent).flags & 1) == 0) {
		uVar2 = (pIVar1->parent).flags;
		if ((uVar2 & 1) == 0) {
		fVar3 = FLOAT_0038639c;
		if ((uVar2 & 0x400) == 0) {
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

void Percept0x097::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x097::Construct(Percept0x097 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x97;
		(this->parent).vtable = &Percept_VT_ID_0x97;
		return;
		}
		
	*/
	return;
}

