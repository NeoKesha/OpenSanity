#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptCameraFacingMe.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptCameraFacingMe::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address float __thiscall PerceptCameraFacingMe::GetUtilityScore(PerceptCameraFacingMe *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		InstanceTransform *pIVar3;
		InstanceContext *this_00;
		float fVar4;
		Vector4 local_30;
		Vector4 local_20;
		this_00 = (InstanceContext *)FUN_00182480();
		if (this_00 != (InstanceContext *)0x0) {
		InstanceContext::thunk_FUN_0005a4c0(this_00,&local_30,&local_20);
		pIVar3 = (((param_1->parent).ctx)->parent).transform;
		if ((*(byte *)&pIVar3->field3_0x60 & 4) != 0) {
		fVar4 = (pIVar3->matrix).m44;
		fVar1 = (pIVar3->matrix).m43;
		fVar2 = (pIVar3->matrix).m42;
		(pIVar3->position).x = (pIVar3->matrix).m41;
		(pIVar3->position).y = fVar2;
		(pIVar3->position).z = fVar1;
		(pIVar3->position).w = fVar4;
		pIVar3->field3_0x60 = (float)((uint)pIVar3->field3_0x60 & 0xfffffffa);
		}
		local_30.x = (pIVar3->position).x - local_30.x;
		local_30.z = (pIVar3->position).z - local_30.z;
		local_30.y = ((pIVar3->position).y + FLOAT_00394384) - local_30.y;
		fVar4 = local_30.z * local_30.z + local_30.x * local_30.x + local_30.y * local_30.y;
		if (fVar4 <= _DAT_004963dc) {
		fVar4 = 0.0;
		}
		else {
		fVar4 = FLOAT_0038639c / SQRT(fVar4);
		}
		return local_20.x * fVar4 * local_30.x +local_20.y * fVar4 * local_30.y + local_20.z * fVar4 * local_30.z;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptCameraFacingMe::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptCameraFacingMe * __thiscall PerceptCameraFacingMe::Dispose(PerceptCameraFacingMe *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptCameraFacingMe::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptCameraFacingMe::Construct(PerceptCameraFacingMe *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x24;
		(this->parent).vtable = &Percept_VT_CameraFacingMe;
		return;
		}
		
	*/
	return;
}

