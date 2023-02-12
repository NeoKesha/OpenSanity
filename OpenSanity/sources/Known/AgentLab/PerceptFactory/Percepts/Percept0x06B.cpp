#include "headers/Known/AgentLab/PerceptFactory/Percepts/Percept0x06B.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float Percept0x06B::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall Percept0x06B::GetUtilityScore(Percept0x06B *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		InstanceNodeAbstract *pIVar4;
		InstanceContext *this_00;
		InstanceTransform *pIVar5;
		char cVar6;
		byte bVar7;
		float *pfVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		cVar6 = (*(param_1->parent).vtable[2].Method4)(param_1);
		if (cVar6 != '\0') {
		pIVar4 = (param_1->nodes).array[0xf];
		this_00 = pIVar4[2].ctx;
		if (this_00 != (InstanceContext *)0x0) {
		bVar7 = *(char *)&pIVar4[2].time - 1;
		if (bVar7 == 0xff) {
		bVar7 = 0;
		}
		pfVar8 = (float *)FUN_0015d930((int)this_00,bVar7);
		if (pfVar8 != (float *)0x0) {
		fVar9 = *pfVar8;
		fVar10 = pfVar8[1];
		fVar11 = pfVar8[2];
		pIVar5 = (((param_1->parent).ctx)->parent).transform;
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
		fVar11 = (pIVar5->position).z - fVar11;
		fVar10 = (pIVar5->position).y - fVar10;
		fVar9 = (pIVar5->position).x - fVar9;
		return fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11;
		}
		}
		}
		return FLOAT_0039434c;
		}
		
	*/
	return 0.0f;
}

void Percept0x06B::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Percept0x06B * __thiscall Percept0x06B::Dispose(Percept0x06B *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void Percept0x06B::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall Percept0x06B::Construct(Percept0x06B *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x6b;
		(this->parent).vtable = &Percept_VT_ID_0x6b;
		return;
		}
		
	*/
	return;
}

