#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptClearLineOfSightToFocus.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptClearLineOfSightToFocus::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptClearLineOfSightToFocus::GetUtilityScore(PerceptClearLineOfSightToFocus *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		InstanceTransform *pIVar3;
		bool bVar4;
		uint uVar5;
		float fVar6;
		InstanceContext *local_44;
		Vector4 local_40;
		float local_30;
		float local_2c;
		float local_28;
		float local_24;
		undefined local_20 [28];
		local_44 = (InstanceContext *)0x0;
		bVar4 = InstanceContext::GetFocusRelated(param_1,&local_44,&local_40);
		if (bVar4 == false) {
		return FLOAT_00386394;
		}
		if (local_44 != (InstanceContext *)0x0) {
		pIVar3 = (local_44->parent).transform;
		if ((*(byte *)&pIVar3->field3_0x60 & 4) != 0) {
		fVar6 = (pIVar3->matrix).m44;
		fVar1 = (pIVar3->matrix).m43;
		fVar2 = (pIVar3->matrix).m42;
		(pIVar3->position).x = (pIVar3->matrix).m41;
		(pIVar3->position).y = fVar2;
		(pIVar3->position).z = fVar1;
		(pIVar3->position).w = fVar6;
		pIVar3->field3_0x60 = (float)((uint)pIVar3->field3_0x60 & 0xfffffffa);
		}
		local_40.x = (pIVar3->position).x;
		local_40.y = (pIVar3->position).y;
		local_40.z = (pIVar3->position).z;
		local_40.w = (pIVar3->position).w;
		}
		pIVar3 = (((param_1->parent).ctx)->parent).transform;
		if ((*(byte *)&pIVar3->field3_0x60 & 4) != 0) {
		fVar6 = (pIVar3->matrix).m43;
		fVar1 = (pIVar3->matrix).m44;
		fVar2 = (pIVar3->matrix).m42;
		(pIVar3->position).x = (pIVar3->matrix).m41;
		(pIVar3->position).y = fVar2;
		(pIVar3->position).z = fVar6;
		(pIVar3->position).w = fVar1;
		pIVar3->field3_0x60 = (float)((uint)pIVar3->field3_0x60 & 0xfffffffa);
		}
		local_30 = (pIVar3->position).x;
		local_28 = (pIVar3->position).z;
		local_24 = (pIVar3->position).w;
		local_2c = (pIVar3->position).y + FLOAT_00394384;
		local_40.y = local_40.y + FLOAT_00394384;
		uVar5 = FUN_001eab70((uint)(((param_1->parent).ctx)->parent).chunkData,&local_30,&local_40,0x80,(float *)0x0,local_20,0);
		fVar6 = 0.0;
		if ((char)uVar5 == '\0') {
		fVar6 = FLOAT_0038639c;
		}
		return fVar6;
		}
		
	*/
	return 0.0f;
}

void PerceptClearLineOfSightToFocus::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptClearLineOfSightToFocus * __thiscall PerceptClearLineOfSightToFocus::Dispose(PerceptClearLineOfSightToFocus *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptClearLineOfSightToFocus::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptClearLineOfSightToFocus::Construct(PerceptClearLineOfSightToFocus *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x18;
		(this->parent).vtable = &Percept_VT_ClearLineOfSightToFocus;
		return;
		}
		
	*/
	return;
}

