#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptClearLineOfSightToCamera.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptClearLineOfSightToCamera::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptClearLineOfSightToCamera::GetUtilityScore(PerceptClearLineOfSightToCamera *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		InstanceTransform *pIVar3;
		int iVar4;
		uint uVar5;
		float fVar6;
		float local_40;
		float local_3c;
		float local_38;
		float local_34;
		undefined4 local_30;
		undefined4 local_2c;
		undefined4 local_28;
		undefined4 local_24;
		undefined local_20 [28];
		iVar4 = FUN_00182480();
		if (iVar4 != 0) {
		iVar4 = *(int *)(iVar4 + 0x18);
		if ((*(byte *)(iVar4 + 0x60) & 4) != 0) {
		*(undefined4 *)(iVar4 + 0x40) = *(undefined4 *)(iVar4 + 0x30);
		*(undefined4 *)(iVar4 + 0x44) = *(undefined4 *)(iVar4 + 0x34);
		*(undefined4 *)(iVar4 + 0x48) = *(undefined4 *)(iVar4 + 0x38);
		*(undefined4 *)(iVar4 + 0x4c) = *(undefined4 *)(iVar4 + 0x3c);
		*(uint *)(iVar4 + 0x60) = *(uint *)(iVar4 + 0x60) & 0xfffffffa;
		}
		local_30 = *(undefined4 *)(iVar4 + 0x40);
		local_2c = *(undefined4 *)(iVar4 + 0x44);
		local_28 = *(undefined4 *)(iVar4 + 0x48);
		local_24 = *(undefined4 *)(iVar4 + 0x4c);
		pIVar3 = (((param_1->parent).ctx)->parent).transform;
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
		local_40 = (pIVar3->position).x;
		local_38 = (pIVar3->position).z;
		local_3c = (pIVar3->position).y + FLOAT_00394384;
		local_34 = (pIVar3->position).w;
		uVar5 = FUN_001eab70((uint)(((param_1->parent).ctx)->parent).chunkData,&local_40,&local_30,0x80,(float *)0x0,local_20,0);
		fVar6 = 0.0;
		if ((char)uVar5 == '\0') {
		fVar6 = FLOAT_0038639c;
		}
		return fVar6;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptClearLineOfSightToCamera::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptClearLineOfSightToCamera * __thiscall PerceptClearLineOfSightToCamera::Dispose(PerceptClearLineOfSightToCamera *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptClearLineOfSightToCamera::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptClearLineOfSightToCamera::Construct(PerceptClearLineOfSightToCamera *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x26;
		(this->parent).vtable = &Percept_VT_ClearLineOfSightToCamera;
		return;
		}
		
	*/
	return;
}

