#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptMeToFocusSqrDist.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptMeToFocusSqrDist::GetUtilityScore(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptMeToFocusSqrDist::GetUtilityScore(PerceptMeToFocusSqrDist *this,InstanceContext *ctx){
		float fVar1;
		float fVar2;
		float fVar3;
		InstanceTransform *pIVar4;
		bool bVar5;
		InstanceContext *focus;
		Vector4 focusPos;
		float x1;
		float y1;
		float z1;
		focus = (InstanceContext *)0x0;
		bVar5 = InstanceContext::GetFocusRelated(ctx,&focus,&focusPos);
		if (bVar5 != false) {
		pIVar4 = (((ctx->parent).ctx)->parent).transform;
		if ((*(byte *)&pIVar4->field3_0x60 & 4) != 0) {
		x1 = (pIVar4->matrix).m44;
		y1 = (pIVar4->matrix).m43;
		z1 = (pIVar4->matrix).m42;
		(pIVar4->position).x = (pIVar4->matrix).m41;
		(pIVar4->position).y = z1;
		(pIVar4->position).z = y1;
		(pIVar4->position).w = x1;
		pIVar4->field3_0x60 = (float)((uint)pIVar4->field3_0x60 & 0xfffffffa);
		}
		x1 = (pIVar4->position).x;
		y1 = (pIVar4->position).y;
		z1 = (pIVar4->position).z;
		if (focus != (InstanceContext *)0x0) {
		pIVar4 = (focus->parent).transform;
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
		focusPos.x = (pIVar4->position).x;
		focusPos.y = (pIVar4->position).y;
		focusPos.z = (pIVar4->position).z;
		}
		x1 = x1 - focusPos.x;
		y1 = y1 - focusPos.y;
		z1 = z1 - focusPos.z;
		return x1 * x1 + y1 * y1 + z1 * z1;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptMeToFocusSqrDist::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptMeToFocusSqrDist * __thiscall PerceptMeToFocusSqrDist::Dispose(PerceptMeToFocusSqrDist *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptMeToFocusSqrDist::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptMeToFocusSqrDist::Construct(PerceptMeToFocusSqrDist *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 10;
		(this->parent).vtable = &Percept_VT_MeToFocusSqrDist;
		return;
		}
		
	*/
	return;
}

