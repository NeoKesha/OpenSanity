#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptPlayerToMyFocusSqrDist.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptPlayerToMyFocusSqrDist::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptPlayerToMyFocusSqrDist::GetUtilityScore(PerceptPlayerToMyFocusSqrDist *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		InstanceTransform *pIVar4;
		bool bVar5;
		InstanceContext *local_34;
		float local_30;
		float local_2c;
		float local_28;
		Vector4 local_20;
		if ((PTR_00496350 != (InstanceContextRefCounter *)0x0) &&(PTR_00496350->ctx != (InstanceContext *)0x0)) {
		pIVar4 = (PTR_00496350->ctx->parent).transform;
		if ((*(byte *)&pIVar4->field3_0x60 & 4) != 0) {
		fVar1 = (pIVar4->matrix).m44;
		fVar2 = (pIVar4->matrix).m43;
		fVar3 = (pIVar4->matrix).m42;
		(pIVar4->position).x = (pIVar4->matrix).m41;
		(pIVar4->position).y = fVar3;
		(pIVar4->position).z = fVar2;
		(pIVar4->position).w = fVar1;
		pIVar4->field3_0x60 = (float)((uint)pIVar4->field3_0x60 & 0xfffffffa);
		}
		local_30 = (pIVar4->position).x;
		local_2c = (pIVar4->position).y;
		local_28 = (pIVar4->position).z;
		local_34 = (InstanceContext *)0x0;
		bVar5 = InstanceContext::GetFocusRelated(param_1,&local_34,&local_20);
		if (bVar5 != false) {
		if (local_34 != (InstanceContext *)0x0) {
		InstanceNodeCharacter::GetPosition((InstanceNodeCharacter *)local_34,&local_20);
		}
		return (local_20.x - local_30) * (local_20.x - local_30) +(local_20.y - local_2c) * (local_20.y - local_2c) +(local_20.z - local_28) * (local_20.z - local_28);
		}
		}
		return FLOAT_0038ad18;
		}
		
	*/
	return 0.0f;
}

void PerceptPlayerToMyFocusSqrDist::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptPlayerToMyFocusSqrDist * __thiscall PerceptPlayerToMyFocusSqrDist::Dispose(PerceptPlayerToMyFocusSqrDist *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptPlayerToMyFocusSqrDist::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptPlayerToMyFocusSqrDist::Construct(PerceptPlayerToMyFocusSqrDist *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x21a;
		(this->parent).vtable = &Percept_VT_PlayerToMyFocusSqrDist;
		return;
		}
		
	*/
	return;
}

