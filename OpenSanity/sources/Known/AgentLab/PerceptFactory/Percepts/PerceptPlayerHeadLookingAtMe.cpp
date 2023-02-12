#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptPlayerHeadLookingAtMe.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptPlayerHeadLookingAtMe::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address float __thiscall PerceptPlayerHeadLookingAtMe::GetUtilityScore(PerceptPlayerHeadLookingAtMe *this,InstanceContext *param_1){
		float fVar1;
		float fVar2;
		InstanceTransform *pIVar3;
		uint uVar4;
		InstanceContext *pIVar5;
		float fVar6;
		float local_40;
		float local_3c;
		float local_38;
		float local_20;
		float local_1c;
		float local_18;
		uVar4 = (GameController4->chunkDescriptor).flags >> 8 & 0xf;
		if (uVar4 == 6) {
		pIVar5 = (InstanceContext *)0x0;
		}
		else {
		pIVar5 = (InstanceContext *)(GameController4->chunkDescriptor).playerInstanceContexts[uVar4];
		if (pIVar5 != (InstanceContext *)0x0) {
		pIVar5 = *(InstanceContext **)&pIVar5->parent;
		}
		}
		if (pIVar5 != (InstanceContext *)0x0) {
		uVar4 = FUN_00172520((int)pIVar5,(byte)((uint)(this->parent).PerceptID >> 0x11),&local_40,&local_20);
		if ((char)uVar4 != '\0') {
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
		local_40 = (pIVar3->position).x - local_40;
		local_38 = (pIVar3->position).z - local_38;
		local_3c = ((pIVar3->position).y + FLOAT_00386ab4) - local_3c;
		fVar6 = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
		if (fVar6 <= _DAT_0039d978) {
		fVar6 = 0.0;
		}
		else {
		fVar6 = FLOAT_0038639c / SQRT(fVar6);
		}
		return local_1c * fVar6 * local_3c + local_20 * fVar6 * local_40 + local_18 * fVar6 * local_38;
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptPlayerHeadLookingAtMe::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptPlayerHeadLookingAtMe * __fastcall PerceptPlayerHeadLookingAtMe::Construct(PerceptPlayerHeadLookingAtMe *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x22b;
		(this->parent).vtable = &Percept_VT_PlayerHeadLookingAtMe;
		return this;
		}
		
	*/
	return;
}

void PerceptPlayerHeadLookingAtMe::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptPlayerHeadLookingAtMe * __thiscall PerceptPlayerHeadLookingAtMe::Dispose(PerceptPlayerHeadLookingAtMe *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

