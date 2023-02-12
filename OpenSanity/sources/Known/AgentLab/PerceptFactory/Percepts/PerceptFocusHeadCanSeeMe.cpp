#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptFocusHeadCanSeeMe.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptFocusHeadCanSeeMe::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address float __thiscall PerceptFocusHeadCanSeeMe::GetUtilityScore(PerceptFocusHeadCanSeeMe *this,InstanceContext *param_1){
		float *pfVar1;
		bool bVar2;
		uint uVar3;
		InstanceContext *pIVar4;
		float fVar5;
		InstanceContext *local_58;
		float local_54;
		Vector4 local_50;
		float local_40;
		float local_3c;
		float local_38;
		float local_34;
		float local_30;
		float local_2c;
		float local_28;
		Vector4 local_20;
		local_58 = (InstanceContext *)0x0;
		bVar2 = InstanceContext::GetFocusRelated(param_1,&local_58,&local_20);
		pIVar4 = local_58;
		if ((bVar2 != false) && (local_58 != (InstanceContext *)0x0)) {
		uVar3 = (uint)(this->parent).PerceptID >> 0x11 & 0xff;
		local_58 = (InstanceContext *)((uint)local_58 & 0xffffff00 | uVar3);
		uVar3 = FUN_00172520((int)pIVar4,(byte)uVar3,&local_30,&local_20.x);
		if ((char)uVar3 != '\0') {
		InstanceNodeCharacter::GetPosition((InstanceNodeCharacter *)(param_1->parent).ctx,&local_50);
		local_3c = local_50.y + FLOAT_00394384;
		local_40 = local_50.x;
		local_50.x = local_50.x - local_30;
		local_34 = local_50.w;
		local_2c = local_3c - local_2c;
		local_38 = local_50.z;
		local_50.z = local_50.z - local_28;
		pIVar4 = (InstanceContext *)(local_50.z * local_50.z + local_2c * local_2c + local_50.x * local_50.x);
		if ((float)pIVar4 <= _DAT_004963dc) {
		fVar5 = 0.0;
		}
		else {
		local_54 = SQRT((float)pIVar4);
		fVar5 = FLOAT_0038639c / local_54;
		local_58 = pIVar4;
		}
		local_50.x = fVar5 * local_50.x;
		local_50.y = fVar5 * local_2c;
		local_50.z = local_50.z * fVar5;
		fVar5 = local_20.z * local_50.z + local_20.y * local_50.y + local_20.x * local_50.x;
		pfVar1 = &(this->parent).Threshold;
		if (*pfVar1 <= fVar5 && fVar5 != *pfVar1) {
		uVar3 = FUN_001eab70((uint)(((param_1->parent).ctx)->parent).chunkData,&local_30,&local_40,0x80,(float *)0x0,&local_50,0);
		if ((char)uVar3 == '\0') {
		fVar5 = (this->parent).Threshold;
		return fVar5 + fVar5;
		}
		}
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptFocusHeadCanSeeMe::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptFocusHeadCanSeeMe * __thiscall PerceptFocusHeadCanSeeMe::Dispose(PerceptFocusHeadCanSeeMe *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptFocusHeadCanSeeMe::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptFocusHeadCanSeeMe::Construct(PerceptFocusHeadCanSeeMe *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x2c;
		(this->parent).vtable = &Percept_VT_FocusHeadCanSeeMe;
		return;
		}
		
	*/
	return;
}

