#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x0A0.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x0A0::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x0A0::GetUtilityScore(Percept0x0A0 *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		InstanceContext *pIVar3;
		InstanceTransform *pIVar4;
		int this_00;
		float *pfVar5;
		float fVar6;
		ushort local_2c [6];
		float local_20;
		float local_1c;
		float local_18;
		float local_14;
		pIVar3 = (param_1->parent).ctx;
		this_00 = UnkFamily16A::FUN_001b3ac0(PTR_DefaultRM_2,pIVar3);
		pIVar4 = (pIVar3->parent).transform;
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
		local_20 = (pIVar4->position).x;
		local_1c = (pIVar4->position).y;
		local_18 = (pIVar4->position).z;
		local_14 = (pIVar4->position).w;
		pfVar5 = FUN_001b1cc0(this_00,&local_20,local_2c);
		if (pfVar5 != (float *)0x0) {
		fVar6 = SQRT((pfVar5[2] - local_18) * (pfVar5[2] - local_18) +(pfVar5[1] - local_1c) * (pfVar5[1] - local_1c) +(*pfVar5 - local_20) * (*pfVar5 - local_20)) - pfVar5[3];
		return fVar6 * fVar6;
		}
		return FLOAT_0039434c;
		}
		
	*/
	return 0.0f;
}

void Percept0x0A0::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x0A0 * __thiscall Percept0x0A0::Dispose(Percept0x0A0 *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Percept0x0A0::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x0A0::Construct(Percept0x0A0 *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0xa0;
		(this->parent).vtable = &Percept_VT_ID_0xa0;
		return;
		}
		
	*/
	return;
}

