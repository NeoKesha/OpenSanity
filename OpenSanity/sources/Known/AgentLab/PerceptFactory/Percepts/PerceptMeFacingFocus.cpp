#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptMeFacingFocus.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptMeFacingFocus::GetUtilityScore(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address float __thiscall PerceptMeFacingFocus::GetUtilityScore(PerceptMeFacingFocus *this,InstanceContext *ctx){
		float fVar1;
		InstanceTransform *pIVar2;
		bool bVar3;
		float fVar4;
		float fVar5;
		InstanceContext *focus [2];
		Vector4 focusPos;
		Vector4 local_30;
		Vector4 local_20;
		focus[0] = (InstanceContext *)0x0;
		bVar3 = InstanceContext::GetFocusRelated(ctx,focus,&focusPos);
		if (bVar3 != false) {
		if (focus[0] != (InstanceContext *)0x0) {
		pIVar2 = (focus[0]->parent).transform;
		if ((*(byte *)&pIVar2->field3_0x60 & 4) != 0) {
		fVar4 = (pIVar2->matrix).m44;
		fVar5 = (pIVar2->matrix).m43;
		fVar1 = (pIVar2->matrix).m42;
		(pIVar2->position).x = (pIVar2->matrix).m41;
		(pIVar2->position).y = fVar1;
		(pIVar2->position).z = fVar5;
		(pIVar2->position).w = fVar4;
		pIVar2->field3_0x60 = (float)((uint)pIVar2->field3_0x60 & 0xfffffffa);
		}
		focusPos.x = (pIVar2->position).x;
		focusPos.y = (pIVar2->position).y;
		focusPos.z = (pIVar2->position).z;
		}
		InstanceContext::thunk_FUN_0005a4c0((ctx->parent).ctx,&local_30,&local_20);
		fVar4 = (focusPos.y + FLOAT_00394384) - local_30.y;
		focusPos.x = focusPos.x - local_30.x;
		focusPos.z = focusPos.z - local_30.z;
		fVar5 = focusPos.z * focusPos.z + focusPos.x * focusPos.x + fVar4 * fVar4;
		if (fVar5 <= _DAT_004963dc) {
		fVar5 = 0.0;
		}
		else {
		fVar5 = FLOAT_0038639c / SQRT(fVar5);
		}
		return local_20.x * fVar5 * focusPos.x +local_20.y * fVar5 * fVar4 + local_20.z * fVar5 * focusPos.z;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptMeFacingFocus::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptMeFacingFocus * __thiscall PerceptMeFacingFocus::Dispose(PerceptMeFacingFocus *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptMeFacingFocus::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptMeFacingFocus::Construct(PerceptMeFacingFocus *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x16;
		(this->parent).vtable = &Percept_VT_MeFacingFocus;
		return;
		}
		
	*/
	return;
}

