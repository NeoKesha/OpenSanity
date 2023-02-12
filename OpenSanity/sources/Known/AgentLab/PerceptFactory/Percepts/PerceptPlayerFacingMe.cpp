#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptPlayerFacingMe.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptPlayerFacingMe::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address float __thiscall PerceptPlayerFacingMe::GetUtilityScore(PerceptPlayerFacingMe *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		InstanceContextRefCounter *pIVar3;
		InstanceTransform *pIVar4;
		uint uVar5;
		InstanceContext *this_00;
		float fVar6;
		Vector4 local_30;
		Vector4 local_20;
		uVar5 = (GameController4->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar5 == 6) {
		this_00 = (InstanceContext *)0x0;
		}
		else {
		pIVar3 = (GameController4->chunkDescriptor).playerInstanceContexts[uVar5];
		if (pIVar3 == (InstanceContextRefCounter *)0x0) {
		this_00 = (InstanceContext *)0x0;
		}
		else {
		this_00 = pIVar3->ctx;
		}
		}
		if (this_00 != (InstanceContext *)0x0) {
		InstanceContext::thunk_FUN_0005a4c0(this_00,&local_30,&local_20);
		pIVar4 = (((param_1->parent).ctx)->parent).transform;
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
		local_30.x = (pIVar4->position).x - local_30.x;
		local_30.z = (pIVar4->position).z - local_30.z;
		local_30.y = ((pIVar4->position).y + FLOAT_00386ab4) - local_30.y;
		fVar6 = local_30.z * local_30.z + local_30.x * local_30.x + local_30.y * local_30.y;
		if (fVar6 <= _DAT_0039d978) {
		fVar6 = 0.0;
		}
		else {
		fVar6 = FLOAT_0038639c / SQRT(fVar6);
		}
		return local_20.y * fVar6 * local_30.y +local_20.x * fVar6 * local_30.x + local_20.z * fVar6 * local_30.z;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptPlayerFacingMe::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptPlayerFacingMe * __fastcall PerceptPlayerFacingMe::Construct(PerceptPlayerFacingMe *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x21d;
		(this->parent).vtable = &Percept_VT_PlayerFacingMe;
		return this;
		}
		
	*/
	return;
}

void PerceptPlayerFacingMe::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptPlayerFacingMe * __thiscall PerceptPlayerFacingMe::Dispose(PerceptPlayerFacingMe *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

