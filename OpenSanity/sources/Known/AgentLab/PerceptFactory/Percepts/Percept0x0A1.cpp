#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x0A1.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Percept0x0A1::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x0A1 * __thiscall Percept0x0A1::Dispose(Percept0x0A1 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float Percept0x0A1::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x0A1::GetUtilityScore(Percept0x0A1 *this,InstanceContext *param_1){
		InstanceContext *pIVar1;
		InstanceNodeAbstract *pIVar2;
		float fVar3;
		fVar3 = (param_1->parent).field14_0x20.matrix2.m43;
		if ((((uint)fVar3 & 1) != 0) &&(pIVar1 = (param_1->parent).field14_0x20.field4_0x10, pIVar1 != (InstanceContext *)0x0)) {
		if ((*(byte *)&(pIVar1->parent).flags & 1) == 0) {
		pIVar2 = (param_1->nodes).array[0xc];
		if ((pIVar2 != (InstanceNodeAbstract *)0x0) && ((*(byte *)&pIVar2->field6_0x14 & 1) != 0)) {
		(param_1->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		}
		fVar3 = FLOAT_0038639c;
		if (pIVar1 != (InstanceContext *)(param_1->nodes).array[0xc]) {
		fVar3 = 0.0;
		}
		return fVar3;
		}
		(param_1->parent).field14_0x20.field4_0x10 = (InstanceContext *)0x0;
		(param_1->parent).field14_0x20.matrix2.m43 = (float)((uint)fVar3 & 0xfffffffc);
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x0A1::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x0A1::Construct(Percept0x0A1 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0xa1;
		(this->parent).vtable = &Percept_VT_ID_0xa1;
		return;
		}
		
	*/
	return;
}

