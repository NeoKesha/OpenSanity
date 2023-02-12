#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptMeToInitPosSqrDist.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptMeToInitPosSqrDist::GetUtilityScore(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptMeToInitPosSqrDist::GetUtilityScore(PerceptMeToInitPosSqrDist *this,InstanceContext *ctx){
		float fVar1;
		float fVar2;
		float fVar3;
		InstanceTransform *pIVar4;
		float x;
		float y;
		float z;
		Vector4 *ptr;
		ptr = (Vector4 *)(ctx->parent).field14_0x20.matrix2.m32;
		x = ptr[1].x;
		y = ptr[1].y;
		z = ptr[1].z;
		pIVar4 = (((ctx->parent).ctx)->parent).transform;
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
		z = (pIVar4->position).z - z;
		y = (pIVar4->position).y - y;
		x = (pIVar4->position).x - x;
		return x * x + y * y + z * z;
		}
		
	*/
	return 0.0f;
}

void PerceptMeToInitPosSqrDist::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptMeToInitPosSqrDist * __thiscall PerceptMeToInitPosSqrDist::Dispose(PerceptMeToInitPosSqrDist *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptMeToInitPosSqrDist::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptMeToInitPosSqrDist::Construct(PerceptMeToInitPosSqrDist *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 9;
		(this->parent).vtable = &Percept_VT_MeToInitPosSqrDist;
		return;
		}
		
	*/
	return;
}

