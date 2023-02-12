#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x08E.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x08E::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x08E::GetUtilityScore(Percept0x08E *this,InstanceContext *param_1){
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
		Vector4 local_60 [2];
		float local_40;
		float fStack60;
		float fStack56;
		float fStack52;
		pIVar3 = (param_1->parent).ctx;
		transform = (pIVar3->parent).transform;
		local_74 = (InstanceContext *)0x0;
		InstanceTransform::FillMatrix(transform);
		pIVar4 = (pIVar3->parent).transform;
		local_40 = (transform->matrix).m21;
		fStack60 = (transform->matrix).m22;
		fStack56 = (transform->matrix).m23;
		fStack52 = (transform->matrix).m24;
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
		fVar6 = fStack56 * (local_60[0].z - local_68) + fStack60 * (local_60[0].y - local_6c) +local_40 * (local_60[0].x - local_70);
		local_68 = local_68 - (fStack56 * fVar6 + local_68);
		local_6c = local_6c - (fStack60 * fVar6 + local_6c);
		local_70 = local_70 - (local_40 * fVar6 + local_70);
		return local_70 * local_70 + local_6c * local_6c + local_68 * local_68;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x08E::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x08E * __thiscall Percept0x08E::Dispose(Percept0x08E *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Percept0x08E::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x08E::Construct(Percept0x08E *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x8e;
		(this->parent).vtable = &Percept_VT_ID_0x8e;
		return;
		}
		
	*/
	return;
}

