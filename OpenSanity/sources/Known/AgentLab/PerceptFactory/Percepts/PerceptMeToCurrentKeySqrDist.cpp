#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptMeToCurrentKeySqrDist.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptMeToCurrentKeySqrDist::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling float __thiscall PerceptMeToCurrentKeySqrDist::GetUtilityScore(PerceptMeToCurrentKeySqrDist *this,InstanceContext *param_1){
		int iVar1;
		char cVar2;
		uint uVar3;
		float *pfVar4;
		InstanceNodeAbstract *this_00;
		Vector4 VStack32;
		cVar2 = (*(param_1->parent).vtable[2].Method4)(param_1);
		if (cVar2 != '\0') {
		iVar1 = (param_1->parent).field14_0x20.field27_0x78;
		if (iVar1 == 0) {
		this_00 = (param_1->nodes).array[0xf];
		}
		else {
		this_00 = *(InstanceNodeAbstract **)(iVar1 + 0x124);
		}
		if (this_00 != (InstanceNodeAbstract *)0x0) {
		uVar3 = (uint)(this->parent).PerceptID >> 0x11;
		if ((uVar3 == 0) || (uVar3 == 0xff)) {
		pfVar4 = (float *)(&this_00->vtable->DisposeSomething)[*(byte *)&this_00[2].field6_0x14];
		}
		else {
		pfVar4 = (float *)thunk_FUN_000574a0(this_00,uVar3 - 1);
		}
		if (pfVar4 != (float *)0x0) {
		InstanceNodeCharacter::GetPosition((InstanceNodeCharacter *)(param_1->parent).ctx,&VStack32);
		return (VStack32.x - *pfVar4) * (VStack32.x - *pfVar4) +(VStack32.y - pfVar4[1]) * (VStack32.y - pfVar4[1]) +(VStack32.z - pfVar4[2]) * (VStack32.z - pfVar4[2]);
		}
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptMeToCurrentKeySqrDist::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptMeToCurrentKeySqrDist * __thiscall PerceptMeToCurrentKeySqrDist::Dispose(PerceptMeToCurrentKeySqrDist *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptMeToCurrentKeySqrDist::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptMeToCurrentKeySqrDist::Construct(PerceptMeToCurrentKeySqrDist *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x45;
		(this->parent).vtable = &Percept_VT_MeToCurrentKeySqrDist;
		return;
		}
		
	*/
	return;
}

