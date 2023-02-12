#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x08F.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x08F::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x08F::GetUtilityScore(Percept0x08F *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		InstanceContext *pIVar3;
		InstanceTransform *transform;
		InstanceTransform *pIVar4;
		bool bVar5;
		float fVar6;
		InstanceContext *local_74;
		float local_70;
		float local_6c;
		float local_68;
		Vector4 local_60 [3];
		float local_30;
		float fStack44;
		float fStack40;
		float fStack36;
		pIVar3 = (param_1->parent).ctx;
		transform = (pIVar3->parent).transform;
		local_74 = (InstanceContext *)0x0;
		InstanceTransform::FillMatrix(transform);
		pIVar4 = (pIVar3->parent).transform;
		local_30 = (transform->matrix).m31;
		fStack44 = (transform->matrix).m32;
		fStack40 = (transform->matrix).m33;
		fStack36 = (transform->matrix).m34;
		if ((*(byte *)&pIVar4->field3_0x60 & 4) != 0) {
		fVar6 = (pIVar4->matrix).m44;
		fVar1 = (pIVar4->matrix).m43;
		fVar2 = (pIVar4->matrix).m42;
		(pIVar4->position).x = (pIVar4->matrix).m41;
		(pIVar4->position).y = fVar2;
		(pIVar4->position).z = fVar1;
		(pIVar4->position).w = fVar6;
		pIVar4->field3_0x60 = (float)((uint)pIVar4->field3_0x60 & 0xfffffffa);
		}
		local_70 = (pIVar4->position).x;
		local_6c = (pIVar4->position).y;
		local_68 = (pIVar4->position).z;
		bVar5 = InstanceContext::GetFocusRelated(param_1,&local_74,local_60);
		if (bVar5 != false) {
		fVar6 = fStack40 * (local_60[0].z - local_68) + fStack44 * (local_60[0].y - local_6c) +local_30 * (local_60[0].x - local_70);
		local_68 = local_68 - (fStack40 * fVar6 + local_68);
		local_6c = local_6c - (fStack44 * fVar6 + local_6c);
		local_70 = local_70 - (local_30 * fVar6 + local_70);
		return local_70 * local_70 + local_6c * local_6c + local_68 * local_68;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x08F::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x08F * __thiscall Percept0x08F::Dispose(Percept0x08F *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Percept0x08F::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x08F::Construct(Percept0x08F *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x8f;
		(this->parent).vtable = &Percept_VT_ID_0x8f;
		return;
		}
		
	*/
	return;
}

