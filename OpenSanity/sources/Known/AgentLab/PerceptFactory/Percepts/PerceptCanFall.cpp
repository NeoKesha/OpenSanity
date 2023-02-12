#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptCanFall.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptCanFall::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptCanFall::GetUtilityScore(PerceptCanFall *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		InstanceTransform *pIVar4;
		uint uVar5;
		float local_40;
		float local_3c;
		float local_38;
		float local_34;
		float local_30;
		float local_2c;
		float local_28;
		float local_24;
		undefined local_20 [28];
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
		local_40 = (pIVar4->position).x;
		local_38 = (pIVar4->position).z;
		local_34 = (pIVar4->position).w;
		local_3c = (pIVar4->position).y + FLOAT_003865d4;
		local_2c = (0.0 - ((this->parent).Threshold + FLOAT_003865d4)) + local_3c;
		local_24 = FLOAT_0038639c;
		local_30 = local_40;
		local_28 = local_38;
		uVar5 = FUN_001eab70((uint)(((param_1->parent).ctx)->parent).chunkData,&local_40,&local_30,0x40,(float *)0x0,local_20,0);
		if ((char)uVar5 == '\0') {
		fVar1 = (this->parent).Threshold;
		return fVar1 + fVar1 + FLOAT_00386608;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptCanFall::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptCanFall * __fastcall PerceptCanFall::Construct(PerceptCanFall *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x212;
		(this->parent).vtable = &Percept_VT_CanFall;
		return this;
		}
		
	*/
	return;
}

void PerceptCanFall::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptCanFall * __thiscall PerceptCanFall::Dispose(PerceptCanFall *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

