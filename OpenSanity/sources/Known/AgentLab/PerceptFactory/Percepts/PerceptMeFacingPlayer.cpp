#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptMeFacingPlayer.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptMeFacingPlayer::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling  WARNING: Globals starting with '_' overlap smaller symbols at the same address float __thiscall PerceptMeFacingPlayer::GetUtilityScore(PerceptMeFacingPlayer *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		InstanceContextRefCounter *pIVar3;
		InstanceTransform *pIVar4;
		uint uVar5;
		InstanceContext *pIVar6;
		float fVar7;
		Vector4 local_30;
		Vector4 local_20;
		uVar5 = (GameController4->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar5 == 6) {
		pIVar6 = (InstanceContext *)0x0;
		}
		else {
		pIVar3 = (GameController4->chunkDescriptor).playerInstanceContexts[uVar5];
		if (pIVar3 == (InstanceContextRefCounter *)0x0) {
		pIVar6 = (InstanceContext *)0x0;
		}
		else {
		pIVar6 = pIVar3->ctx;
		}
		}
		if (pIVar6 != (InstanceContext *)0x0) {
		InstanceContext::thunk_FUN_0005a4c0((param_1->parent).ctx,&local_30,&local_20);
		pIVar4 = (pIVar6->parent).transform;
		if ((*(byte *)&pIVar4->field3_0x60 & 4) != 0) {
		fVar7 = (pIVar4->matrix).m44;
		fVar1 = (pIVar4->matrix).m43;
		fVar2 = (pIVar4->matrix).m42;
		(pIVar4->position).x = (pIVar4->matrix).m41;
		(pIVar4->position).y = fVar2;
		(pIVar4->position).z = fVar1;
		(pIVar4->position).w = fVar7;
		pIVar4->field3_0x60 = (float)((uint)pIVar4->field3_0x60 & 0xfffffffa);
		}
		local_30.x = (pIVar4->position).x - local_30.x;
		local_30.z = (pIVar4->position).z - local_30.z;
		local_30.y = ((pIVar4->position).y + FLOAT_00386ab4) - local_30.y;
		fVar7 = local_30.z * local_30.z + local_30.x * local_30.x + local_30.y * local_30.y;
		if (fVar7 <= _DAT_0039d978) {
		fVar7 = 0.0;
		}
		else {
		fVar7 = FLOAT_0038639c / SQRT(fVar7);
		}
		return local_20.y * fVar7 * local_30.y +local_20.x * fVar7 * local_30.x + local_20.z * fVar7 * local_30.z;
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptMeFacingPlayer::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptMeFacingPlayer * __fastcall PerceptMeFacingPlayer::Construct(PerceptMeFacingPlayer *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x21c;
		(this->parent).vtable = &Percept_VT_MeFacingPlayer;
		return this;
		}
		
	*/
	return;
}

void PerceptMeFacingPlayer::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptMeFacingPlayer * __thiscall PerceptMeFacingPlayer::Dispose(PerceptMeFacingPlayer *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

