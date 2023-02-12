#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptIsLoadZoneStateSet.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void PerceptIsLoadZoneStateSet::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptIsLoadZoneStateSet * __thiscall PerceptIsLoadZoneStateSet::Dispose(PerceptIsLoadZoneStateSet *this,byte param_1){
		(this->parent).vtable = &Percept_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float PerceptIsLoadZoneStateSet::GetUtilityScore(InstanceContext* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall PerceptIsLoadZoneStateSet::GetUtilityScore(PerceptIsLoadZoneStateSet *this,InstanceContext *param_1){
		ushort uVar1;
		int iVar2;
		bool bVar3;
		AutoClass16 *pAVar4;
		UnkFamily15A *this_00;
		float fVar5;
		fVar5 = (param_1->parent).field14_0x20.matrix2.m42;
		iVar2 = *(int *)((int)fVar5 + 0x1c);
		if ((*(byte *)(iVar2 + 4) & 0x40) == 0) {
		return FLOAT_00386394;
		}
		uVar1 = *(ushort *)((int)fVar5 + 0x26);
		pAVar4 = UnkFamily16A::FUN_001b1e00(PTR_DefaultRM_2,*(short *)((int)fVar5 + 0x24));
		if (*(char *)(iVar2 + 4) < '\0') {
		this_00 = pAVar4->field7_0x1c;
		}
		else {
		this_00 = pAVar4->field8_0x20;
		}
		if (this_00 == (UnkFamily15A *)0x0) {
		return FLOAT_00386394;
		}
		bVar3 = UnkFamily15A::FUN_001b1fc0(this_00,(uint)uVar1);
		fVar5 = FLOAT_0038639c;
		if (bVar3 == false) {
		fVar5 = 0.0;
		}
		return fVar5;
		}
		
	*/
	return 0.0f;
}

void PerceptIsLoadZoneStateSet::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptIsLoadZoneStateSet::Construct(PerceptIsLoadZoneStateSet *this){
		(this->parent).PerceptID = 0;
		*(undefined2 *)&(this->parent).PerceptID = 0xc;
		(this->parent).vtable = &Percept_VT_IsLoadZoneStateSet;
		return;
		}
		
	*/
	return;
}

