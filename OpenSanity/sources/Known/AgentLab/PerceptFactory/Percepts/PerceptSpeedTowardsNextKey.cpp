#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptSpeedTowardsNextKey.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
float PerceptSpeedTowardsNextKey::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling float __thiscall PerceptSpeedTowardsNextKey::GetUtilityScore(PerceptSpeedTowardsNextKey *this,InstanceContext *param_1){
		InstanceNodeAbstract *pIVar1;
		char cVar2;
		byte bVar3;
		uint uVar4;
		float *pfVar5;
		Vector4 VStack48;
		float fStack32;
		float fStack28;
		float fStack24;
		float fStack20;
		cVar2 = (*(param_1->parent).vtable[2].Method4)(param_1);
		if ((cVar2 != '\0') &&(pIVar1 = (param_1->nodes).array[0xf], pIVar1 != (InstanceNodeAbstract *)0x0)) {
		uVar4 = (uint)(this->parent).PerceptID >> 0x11;
		if ((uVar4 == 0) || (uVar4 == 0xff)) {
		bVar3 = *(char *)&pIVar1[2].field6_0x14 + 1;
		if (*(byte *)((int)&pIVar1[2].field6_0x14 + 2) < bVar3) {
		bVar3 = *(byte *)((int)&pIVar1[2].field6_0x14 + 1);
		}
		pfVar5 = (float *)(&pIVar1->vtable->DisposeSomething)[bVar3];
		}
		else {
		pfVar5 = (float *)thunk_FUN_000574a0(pIVar1,uVar4 - 1);
		}
		if (pfVar5 != (float *)0x0) {
		InstanceNodeCharacter::GetPosition((InstanceNodeCharacter *)(param_1->parent).ctx,&VStack48);
		fStack32 = *pfVar5 - VStack48.x;
		fStack28 = pfVar5[1] - VStack48.y;
		fStack24 = pfVar5[2] - VStack48.z;
		fStack20 = FLOAT_0038639c;
		thunk_FUN_000543a0(&fStack32);
		pIVar1 = (param_1->nodes).array[0x11];
		VStack48.x = 0.0;
		VStack48.y = 0.0;
		VStack48.z = 0.0;
		if ((pIVar1 == (InstanceNodeAbstract *)0x0) || (uVar4 = pIVar1[8].field6_0x14, uVar4 == 0)) {
		pIVar1 = (param_1->nodes).array[0x10];
		if (pIVar1 != (InstanceNodeAbstract *)0x0) {
		VStack48.x = *(float *)&pIVar1[1].field2_0x8;
		VStack48.y = (float)pIVar1[1].time;
		VStack48.z = (float)pIVar1[1].field5_0x10;
		}
		}
		else {
		VStack48.x = *(float *)(uVar4 + 0x150);
		VStack48.y = *(float *)(uVar4 + 0x154);
		VStack48.z = *(float *)(uVar4 + 0x158);
		}
		return VStack48.x * fStack32 + VStack48.y * fStack28 + VStack48.z * fStack24;
		}
		}
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

void PerceptSpeedTowardsNextKey::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptSpeedTowardsNextKey * __thiscall PerceptSpeedTowardsNextKey::Dispose(PerceptSpeedTowardsNextKey *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void PerceptSpeedTowardsNextKey::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptSpeedTowardsNextKey::Construct(PerceptSpeedTowardsNextKey *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0x47;
		(this->parent).vtable = &Percept_VT_SpeedTowardsNextKey;
		return;
		}
		
	*/
	return;
}

