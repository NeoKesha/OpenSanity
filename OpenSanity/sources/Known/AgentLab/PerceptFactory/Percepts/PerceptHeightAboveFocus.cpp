#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptHeightAboveFocus.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptHeightAboveFocus::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptHeightAboveFocus::GetUtilityScore(PerceptHeightAboveFocus *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		InstanceTransform *pIVar4;
		bool bVar5;
		InstanceContext *local_24;
		Vector4 local_20;
		local_24 = (InstanceContext *)0x0;
		bVar5 = InstanceContext::GetFocusRelated(param_1,&local_24,&local_20);
		if (bVar5 != false) {
		if (local_24 != (InstanceContext *)0x0) {
		pIVar4 = (local_24->parent).transform;
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
		local_20.y = (pIVar4->position).y;
		}
		pIVar4 = (((param_1->parent).ctx)->parent).transform;
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
		return (pIVar4->position).y - local_20.y;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptHeightAboveFocus::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptHeightAboveFocus * __thiscall PerceptHeightAboveFocus::Dispose(PerceptHeightAboveFocus *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptHeightAboveFocus::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptHeightAboveFocus::Construct(PerceptHeightAboveFocus *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x1d;
		(this->parent).vtable = &Percept_VT_HeightAboveFocus;
		return;
		}
		
	*/
	return;
}

