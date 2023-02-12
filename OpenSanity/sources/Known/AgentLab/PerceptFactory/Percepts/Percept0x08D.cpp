#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x08D.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x08D::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x08D::GetUtilityScore(Percept0x08D *this,InstanceContext *param_1){
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
		Vector4 local_60;
		float local_50;
		float fStack76;
		float fStack72;
		float fStack68;
		pIVar3 = (param_1->parent).ctx;
		transform = (pIVar3->parent).transform;
		local_74 = (InstanceContext *)0x0;
		InstanceTransform::FillMatrix(transform);
		pIVar4 = (pIVar3->parent).transform;
		local_50 = (transform->matrix).m11;
		fStack76 = (transform->matrix).m12;
		fStack72 = (transform->matrix).m13;
		fStack68 = (transform->matrix).m14;
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
		bVar5 = InstanceContext::GetFocusRelated(param_1,&local_74,&local_60);
		if (bVar5 != false) {
		fVar6 = fStack72 * (local_60.z - local_68) + fStack76 * (local_60.y - local_6c) +local_50 * (local_60.x - local_70);
		local_68 = local_68 - (fStack72 * fVar6 + local_68);
		local_6c = local_6c - (fStack76 * fVar6 + local_6c);
		local_70 = local_70 - (local_50 * fVar6 + local_70);
		return local_70 * local_70 + local_6c * local_6c + local_68 * local_68;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x08D::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x08D * __thiscall Percept0x08D::Dispose(Percept0x08D *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Percept0x08D::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x08D::Construct(Percept0x08D *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x8d;
		(this->parent).vtable = &Percept_VT_ID_0x8d;
		return;
		}
		
	*/
	return;
}

