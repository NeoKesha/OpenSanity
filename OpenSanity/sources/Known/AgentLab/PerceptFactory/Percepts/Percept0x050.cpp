#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x050.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x050::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x050::GetUtilityScore(Percept0x050 *this,InstanceContext *param_1){
		ushort uVar1;
		InstanceNodeAbstract *pIVar2;
		float fVar3;
		pIVar2 = (param_1->nodes).array[0xd];
		if (((pIVar2 != (InstanceNodeAbstract *)0x0) && ((*(byte *)&pIVar2->field6_0x14 & 1) != 0)) &&((~(byte)((uint)(param_1->parent).field14_0x20.matrix2.m43 >> 0x14) & 1) != 0)) {
		(param_1->nodes).array[0xd] = (InstanceNodeAbstract *)0x0;
		}
		pIVar2 = (param_1->nodes).array[0xd];
		if (pIVar2 != (InstanceNodeAbstract *)0x0) {
		pIVar2 = InstanceDataList::GetNode((InstanceDataList *)&pIVar2[9].time,Instance);
		if ((pIVar2 != (InstanceNodeAbstract *)0x0) &&(uVar1 = *(ushort *)(pIVar2[5].time + 0x16), param_1 = (InstanceContext *)(uint)uVar1,uVar1 != 0xffff)) {
		fVar3 = FLOAT_0038639c;
		if (((uint)param_1 & 0x7fff) != (uint)(this->parent).PerceptID >> 0x11) {
		fVar3 = 0.0;
		}
		return fVar3;
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x050::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x050 * __thiscall Percept0x050::Dispose(Percept0x050 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Percept0x050::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x050::Construct(Percept0x050 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x50;
		(this->parent).vtable = &Percept_VT_ID_0x50;
		return;
		}
		
	*/
	return;
}

