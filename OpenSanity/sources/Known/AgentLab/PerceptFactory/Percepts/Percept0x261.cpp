#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x261.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x261::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling float __thiscall Percept0x261::GetUtilityScore(Percept0x261 *this,InstanceContext *param_1){
		InstanceNodeAbstract_VTable *pIVar1;
		uint uVar2;
		InstanceContext *pIVar3;
		InstanceNodeAbstract *pIVar4;
		GetIndex *local_30;
		Method5 *local_2c;
		UpdateTime *local_28;
		Step *local_24;
		float local_20;
		float fStack28;
		float fStack24;
		uVar2 = (GameController4->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar2 == 6) {
		pIVar3 = (InstanceContext *)0x0;
		}
		else {
		pIVar3 = (InstanceContext *)(GameController4->chunkDescriptor).playerInstanceContexts[uVar2];
		if (pIVar3 != (InstanceContext *)0x0) {
		pIVar3 = *(InstanceContext **)&pIVar3->parent;
		}
		}
		if (pIVar3 != (InstanceContext *)0x0) {
		pIVar4 = InstanceDataList::GetNode((InstanceDataList *)(&pIVar3->field27_0xe0 + 1),Character);
		pIVar1 = pIVar4[1].vtable;
		if ((int *)pIVar1[4].UpdateTime == (int *)0x0) {
		local_30 = pIVar1[2].GetIndex;
		local_2c = pIVar1[2].Method5;
		local_28 = pIVar1[2].UpdateTime;
		local_24 = pIVar1[2].Step;
		}
		else {
		(**(code **)(*(int *)pIVar1[4].UpdateTime + 0x20))(&local_30);
		}
		FUN_0016dcc0((int)param_1,&local_20);
		return SQRT(fStack24 * fStack24 + fStack28 * fStack28 + local_20 * local_20) -SQRT((float)local_28 * (float)local_28 + (float)local_2c * (float)local_2c +(float)local_30 * (float)local_30);
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x261::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x261 * __fastcall Percept0x261::Construct(Percept0x261 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x261;
		(this->parent).vtable = &Percept_VT_ID_0x261;
		return this;
		}
		
	*/
	return;
}

void Percept0x261::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x261 * __thiscall Percept0x261::Dispose(Percept0x261 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

