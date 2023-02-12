#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x08B.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x08B::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x08B::GetUtilityScore(Percept0x08B *this,InstanceContext *param_1){
		float fVar1;
		InstanceTransform *pIVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		InstanceContext *pIVar6;
		float fVar7;
		float fVar8;
		fVar5 = (param_1->parent).field14_0x20.matrix2.m32;
		fVar3 = *(float *)((int)fVar5 + 0x10);
		fVar4 = *(float *)((int)fVar5 + 0x14);
		fVar5 = *(float *)((int)fVar5 + 0x18);
		fVar7 = (param_1->parent).field14_0x20.matrix2.m43;
		if ((((uint)fVar7 & 1) != 0) &&(pIVar6 = (param_1->parent).field14_0x20.field4_0x10, pIVar6 != (InstanceContext *)0x0)) {
		if ((*(byte *)&(pIVar6->parent).flags & 1) == 0) {
		pIVar2 = (pIVar6->parent).transform;
		if ((*(byte *)&pIVar2->field3_0x60 & 4) != 0) {
		fVar7 = (pIVar2->matrix).m44;
		fVar8 = (pIVar2->matrix).m43;
		fVar1 = (pIVar2->matrix).m42;
		(pIVar2->position).x = (pIVar2->matrix).m41;
		(pIVar2->position).y = fVar1;
		(pIVar2->position).z = fVar8;
		(pIVar2->position).w = fVar7;
		pIVar2->field3_0x60 = (float)((uint)pIVar2->field3_0x60 & 0xfffffffa);
		}
		pIVar6 = (InstanceContext *)(pIVar2->position).x;
		fVar7 = (pIVar2->position).y;
		fVar8 = (pIVar2->position).z;
		goto LAB_001602c4;
		}
		(param_1->parent).field14_0x20.field4_0x10 = (InstanceContext *)0x0;
		(param_1->parent).field14_0x20.matrix2.m43 = (float)((uint)fVar7 & 0xfffffffc);
		}
		if ((*(byte *)&(param_1->parent).field14_0x20.matrix2.m43 & 2) == 0) {
		return 0.0;
		}
		pIVar6 = (param_1->parent).field14_0x20.field4_0x10;
		fVar7 = (float)(param_1->parent).field14_0x20.field5_0x14;
		fVar8 = (float)(param_1->parent).field14_0x20.field6_0x18;
		LAB_001602c4:fVar3 = fVar3 - (float)pIVar6;
		fVar5 = fVar5 - fVar8;
		fVar4 = fVar4 - fVar7;
		return fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3;
		}
		
	*/
	return 0.0f;
}

void Percept0x08B::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x08B * __thiscall Percept0x08B::Dispose(Percept0x08B *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Percept0x08B::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x08B::Construct(Percept0x08B *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x8b;
		(this->parent).vtable = &Percept_VT_ID_0x8b;
		return;
		}
		
	*/
	return;
}

