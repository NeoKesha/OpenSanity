#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptMeFacingCamera.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptMeFacingCamera::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address float __thiscall PerceptMeFacingCamera::GetUtilityScore(PerceptMeFacingCamera *this,InstanceContext *param_1){
		int iVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		Vector4 local_30;
		Vector4 local_20;
		iVar1 = FUN_00182480();
		if (iVar1 != 0) {
		iVar1 = *(int *)(iVar1 + 0x18);
		if ((*(byte *)(iVar1 + 0x60) & 4) != 0) {
		*(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x30);
		*(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(iVar1 + 0x34);
		*(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(iVar1 + 0x38);
		*(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(iVar1 + 0x3c);
		*(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) & 0xfffffffa;
		}
		fVar2 = *(float *)(iVar1 + 0x40);
		fVar3 = *(float *)(iVar1 + 0x44);
		fVar4 = *(float *)(iVar1 + 0x48);
		InstanceContext::thunk_FUN_0005a4c0((param_1->parent).ctx,&local_30,&local_20);
		fVar2 = fVar2 - local_30.x;
		fVar3 = fVar3 - local_30.y;
		fVar4 = fVar4 - local_30.z;
		fVar5 = fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3;
		if (fVar5 <= _DAT_004963dc) {
		fVar5 = 0.0;
		}
		else {
		fVar5 = FLOAT_0038639c / SQRT(fVar5);
		}
		return local_20.x * fVar5 * fVar2 + local_20.y * fVar5 * fVar3 + local_20.z * fVar5 * fVar4;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptMeFacingCamera::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptMeFacingCamera * __thiscall PerceptMeFacingCamera::Dispose(PerceptMeFacingCamera *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptMeFacingCamera::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptMeFacingCamera::Construct(PerceptMeFacingCamera *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x23;
		(this->parent).vtable = &Percept_VT_MeFacingCamera;
		return;
		}
		
	*/
	return;
}

