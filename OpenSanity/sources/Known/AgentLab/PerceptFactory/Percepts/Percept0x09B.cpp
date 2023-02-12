#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x09B.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x09B::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x09B::GetUtilityScore(Percept0x09B *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		InstanceTransform *pIVar4;
		uint uVar5;
		bool bVar6;
		undefined4 uVar7;
		InstanceContext *local_34;
		Vector4 local_30;
		float local_20;
		float local_1c;
		float local_18;
		local_34 = (InstanceContext *)0x0;
		bVar6 = InstanceContext::GetFocusRelated(param_1,&local_34,&local_30);
		if (bVar6 != false) {
		if (local_34 != (InstanceContext *)0x0) {
		pIVar4 = (local_34->parent).transform;
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
		local_30.x = (pIVar4->position).x;
		local_30.y = (pIVar4->position).y;
		local_30.z = (pIVar4->position).z;
		}
		uVar5 = (uint)(this->parent).PerceptID >> 0x11 & 0xff;
		local_34 = (InstanceContext *)((uint)local_34 & 0xffffff00 | uVar5);
		uVar7 = FUN_001725b0((int)(param_1->parent).ctx,(byte)uVar5,&local_20,(float *)0x0);
		if ((char)uVar7 != '\0') {
		return (local_30.y - local_1c) * (local_30.y - local_1c) +(local_30.x - local_20) * (local_30.x - local_20) +(local_30.z - local_18) * (local_30.z - local_18);
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void Percept0x09B::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x09B * __fastcall Percept0x09B::Construct(Percept0x09B *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x9b;
		(this->parent).vtable = &Percept_VT_ID_0x9b;
		return this;
		}
		
	*/
	return;
}

void Percept0x09B::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x09B * __thiscall Percept0x09B::Dispose(Percept0x09B *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

