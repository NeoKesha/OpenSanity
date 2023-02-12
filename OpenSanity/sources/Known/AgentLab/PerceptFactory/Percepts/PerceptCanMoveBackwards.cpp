#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptCanMoveBackwards.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptCanMoveBackwards::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptCanMoveBackwards::GetUtilityScore(PerceptCanMoveBackwards *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		InstanceContext *pIVar4;
		InstanceTransform *pIVar5;
		uint uVar6;
		float local_50;
		float local_4c;
		float local_48;
		float local_44;
		float local_40;
		float local_3c;
		float local_38;
		float local_34;
		float local_28;
		undefined local_20 [28];
		pIVar4 = (param_1->parent).ctx;
		pIVar5 = (pIVar4->parent).transform;
		if ((*(byte *)&pIVar5->field3_0x60 & 4) != 0) {
		fVar1 = (pIVar5->matrix).m44;
		fVar2 = (pIVar5->matrix).m43;
		fVar3 = (pIVar5->matrix).m42;
		(pIVar5->position).x = (pIVar5->matrix).m41;
		(pIVar5->position).y = fVar3;
		(pIVar5->position).z = fVar2;
		(pIVar5->position).w = fVar1;
		pIVar5->field3_0x60 = (float)((uint)pIVar5->field3_0x60 & 0xfffffffa);
		}
		local_50 = (pIVar5->position).x;
		local_48 = (pIVar5->position).z;
		local_4c = (pIVar5->position).y + FLOAT_00386ab4;
		local_44 = (pIVar5->position).w;
		local_28 = 0.0 - (this->parent).Threshold;
		pIVar5 = (pIVar4->parent).transform;
		local_40 = local_50;
		local_3c = local_4c;
		local_38 = local_48;
		local_34 = local_44;
		InstanceTransform::FillMatrix(pIVar5);
		local_50 = ((pIVar5->matrix).m21 + (pIVar5->matrix).m11) * 0.0 + (pIVar5->matrix).m31 * local_28 +local_50;
		local_4c = local_4c +((pIVar5->matrix).m22 + (pIVar5->matrix).m12) * 0.0 + (pIVar5->matrix).m32 * local_28;
		local_48 = local_48 +((pIVar5->matrix).m23 + (pIVar5->matrix).m13) * 0.0 + (pIVar5->matrix).m33 * local_28;
		uVar6 = FUN_001eab70((uint)(((param_1->parent).ctx)->parent).chunkData,&local_40,&local_50,0x40,(float *)0x0,local_20,0);
		if ((char)uVar6 != '\0') {
		fVar1 = (this->parent).Threshold;
		return fVar1 + fVar1;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptCanMoveBackwards::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptCanMoveBackwards * __fastcall PerceptCanMoveBackwards::Construct(PerceptCanMoveBackwards *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x20e;
		(this->parent).vtable = &Percept_VT_CanMoveBackwards;
		return this;
		}
		
	*/
	return;
}

void PerceptCanMoveBackwards::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptCanMoveBackwards * __thiscall PerceptCanMoveBackwards::Dispose(PerceptCanMoveBackwards *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

