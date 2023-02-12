#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptFocusHeadLookingAtMe.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptFocusHeadLookingAtMe::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address float __thiscall PerceptFocusHeadLookingAtMe::GetUtilityScore(PerceptFocusHeadLookingAtMe *this,InstanceContext *param_1){
		InstanceContext *pIVar1;
		bool bVar2;
		uint uVar3;
		float fVar4;
		InstanceContext *local_48 [2];
		Vector4 local_40;
		float local_30;
		float local_2c;
		float local_28;
		Vector4 local_20;
		local_48[0] = (InstanceContext *)0x0;
		bVar2 = InstanceContext::GetFocusRelated(param_1,local_48,&local_20);
		pIVar1 = local_48[0];
		if ((bVar2 != false) && (local_48[0] != (InstanceContext *)0x0)) {
		uVar3 = (uint)(this->parent).PerceptID >> 0x11 & 0xff;
		local_48[0] = (InstanceContext *)((uint)local_48[0] & 0xffffff00 | uVar3);
		uVar3 = FUN_00172520((int)pIVar1,(byte)uVar3,&local_30,&local_20.x);
		if ((char)uVar3 != '\0') {
		InstanceNodeCharacter::GetPosition((InstanceNodeCharacter *)(param_1->parent).ctx,&local_40);
		local_2c = (local_40.y + FLOAT_00394384) - local_2c;
		local_40.x = local_40.x - local_30;
		local_40.z = local_40.z - local_28;
		fVar4 = local_40.z * local_40.z + local_40.x * local_40.x + local_2c * local_2c;
		if (fVar4 <= _DAT_004963dc) {
		fVar4 = 0.0;
		}
		else {
		fVar4 = FLOAT_0038639c / SQRT(fVar4);
		}
		return local_20.x * fVar4 * local_40.x +local_20.y * fVar4 * local_2c + local_20.z * local_40.z * fVar4;
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptFocusHeadLookingAtMe::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptFocusHeadLookingAtMe * __thiscall PerceptFocusHeadLookingAtMe::Dispose(PerceptFocusHeadLookingAtMe *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptFocusHeadLookingAtMe::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptFocusHeadLookingAtMe::Construct(PerceptFocusHeadLookingAtMe *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x2b;
		(this->parent).vtable = &Percept_VT_FocusHeadLookingAtMe;
		return;
		}
		
	*/
	return;
}

