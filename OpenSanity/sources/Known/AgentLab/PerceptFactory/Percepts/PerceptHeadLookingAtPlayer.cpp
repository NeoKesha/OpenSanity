#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptHeadLookingAtPlayer.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptHeadLookingAtPlayer::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling  WARNING: Globals starting with '_' overlap smaller symbols at the same address float __thiscall PerceptHeadLookingAtPlayer::GetUtilityScore(PerceptHeadLookingAtPlayer *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		InstanceContextRefCounter *pIVar3;
		InstanceTransform *pIVar4;
		uint uVar5;
		InstanceContext *pIVar6;
		float fVar7;
		float local_40;
		float local_3c;
		float local_38;
		float local_20;
		float local_1c;
		float local_18;
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
		uVar5 = FUN_00172520((int)(param_1->parent).ctx,(byte)((uint)(this->parent).PerceptID >> 0x11),&local_40,&local_20);
		if ((char)uVar5 != '\0') {
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
		local_40 = (pIVar4->position).x - local_40;
		local_38 = (pIVar4->position).z - local_38;
		local_3c = ((pIVar4->position).y + FLOAT_00386ab4) - local_3c;
		fVar7 = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
		if (fVar7 <= _DAT_0039d978) {
		fVar7 = 0.0;
		}
		else {
		fVar7 = FLOAT_0038639c / SQRT(fVar7);
		}
		return local_1c * fVar7 * local_3c + local_20 * fVar7 * local_40 + local_18 * fVar7 * local_38;
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptHeadLookingAtPlayer::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptHeadLookingAtPlayer * __fastcall PerceptHeadLookingAtPlayer::Construct(PerceptHeadLookingAtPlayer *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x229;
		(this->parent).vtable = &Percept_VT_HeadLookingAtPlayer;
		return this;
		}
		
	*/
	return;
}

void PerceptHeadLookingAtPlayer::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptHeadLookingAtPlayer * __thiscall PerceptHeadLookingAtPlayer::Dispose(PerceptHeadLookingAtPlayer *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

