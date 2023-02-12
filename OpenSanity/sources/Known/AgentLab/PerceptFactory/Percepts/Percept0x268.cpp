#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x268.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x268::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x268::GetUtilityScore(Percept0x268 *this,InstanceContext *param_1){
		InstanceTransform *pIVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		if ((PTR_00496350 != (InstanceContextRefCounter *)0x0) &&(PTR_00496350->ctx != (InstanceContext *)0x0)) {
		pIVar1 = (PTR_00496350->ctx->parent).transform;
		if ((*(byte *)&pIVar1->field3_0x60 & 4) != 0) {
		fVar2 = (pIVar1->matrix).m44;
		fVar3 = (pIVar1->matrix).m43;
		fVar4 = (pIVar1->matrix).m42;
		(pIVar1->position).x = (pIVar1->matrix).m41;
		(pIVar1->position).y = fVar4;
		(pIVar1->position).z = fVar3;
		(pIVar1->position).w = fVar2;
		pIVar1->field3_0x60 = (float)((uint)pIVar1->field3_0x60 & 0xfffffffa);
		}
		if ((*(byte *)&(param_1->parent).field14_0x20.matrix2.m43 & 2) != 0) {
		fVar4 = (float)(param_1->parent).field14_0x20.field6_0x18 - (pIVar1->position).z;
		fVar3 = (float)(param_1->parent).field14_0x20.field5_0x14 - (pIVar1->position).y;
		fVar2 = (float)(param_1->parent).field14_0x20.field4_0x10 - (pIVar1->position).x;
		return fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
		}
		}
		return FLOAT_0038ad18;
		}
		
	*/
	return 0.0f;
}

void Percept0x268::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x268 * __thiscall Percept0x268::Dispose(Percept0x268 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Percept0x268::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x268::Construct(Percept0x268 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x268;
		(this->parent).vtable = &Percept_VT_ID_0x268;
		return;
		}
		
	*/
	return;
}

