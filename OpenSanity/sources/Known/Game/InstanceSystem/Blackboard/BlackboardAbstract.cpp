#include "headers/Known/Game/InstanceSystem/Blackboard/BlackboardAbstract.h"

#include "headers/Unknown/NonVirtualClasses/UNV029.h"
#include "headers/Known/Game/InstanceSystem/Blackboard/BlackboardSub.h"
#include "headers/Unknown/ParameterTable.h"
void BlackboardAbstract::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	BlackboardAbstract * __fastcall BlackboardAbstract::Construct(BlackboardAbstract *this){
		this->vtable = (Blackboard_VTable *)&Blackboard_VT_Abstract;
		this->field1_0x4 = 0;
		this->blackboardSub = (BlackboardSub *)0x0;
		return this;
		}
		
	*/
	return;
}

float BlackboardAbstract::GetFloatByIndex(uint index) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall BlackboardAbstract::GetFloatByIndex(BlackboardAbstract *this,uint index){
		BlackboardSub *pBVar1;
		uint floatsCnt;
		float *value;
		floatsCnt = (*this->vtable->GetFloatsCount)();
		if (index < floatsCnt) {
		value = (*this->vtable->GetBlackboardFloatEntry2)(this,index);
		return *value;
		}
		pBVar1 = this->blackboardSub;
		if (pBVar1 == (BlackboardSub *)0x0) {
		return FLOAT_00386394;
		}
		return *(float *)((int)pBVar1 + ((uint)pBVar1->flagsCnt + (index - floatsCnt)) * 4 + 4);
		}
		
	*/
	return 0.0f;
}

int BlackboardAbstract::GetIntValue(uint index) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall BlackboardAbstract::GetIntValue(BlackboardAbstract *this,uint index){
		BlackboardSub *pBVar1;
		uint uVar2;
		int *piVar3;
		uVar2 = (*this->vtable->GetIntsCount)();
		if (index < uVar2) {
		piVar3 = (*this->vtable->GetBlackboardIntEntry2)(this,index);
		return *piVar3;
		}
		pBVar1 = this->blackboardSub;
		if (pBVar1 == (BlackboardSub *)0x0) {
		return 0;
		}
		return *(int *)((int)pBVar1 +((uint)pBVar1->floatsCnt + (uint)pBVar1->flagsCnt + (index - uVar2)) * 4 + 4);
		}
		
	*/
	return 0;
}

void BlackboardAbstract::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall BlackboardAbstract::CleanUp(BlackboardAbstract *this){
		this->vtable = (Blackboard_VTable *)&Blackboard_VT_Abstract;
		if (this->blackboardSub != (BlackboardSub *)0x0) {
		VirtualPool::FreeMemory(this->blackboardSub);
		}
		return;
		}
		
	*/
	return;
}

void BlackboardAbstract::InitBlackboard(ParameterTable* parameters) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall BlackboardAbstract::InitBlackboard(BlackboardAbstract *this,ParameterTable *parameters){
		int iVar1;
		BlackboardSub *pBVar2;
		uint uVar3;
		uint cnt1;
		uint cnt2;
		uint cnt3;
		uint uVar4;
		uint *flagEntry;
		uint cnt;
		float *floatEntry;
		int *piVar5;
		BlackboardSub *this_00;
		BlackboardSub *pbVar5;
		uint uVar6;
		uint uVar7;
		uint i;
		uint flagsCnt;
		uint floatsCnt;
		uint intsCnt;
		float floatValue;
		uint fractionValue;
		uVar3 = (uint)*(byte *)((int)&parameters->instancePropsHeader + 1);
		uVar6 = (uint)*(byte *)((int)&parameters->instancePropsHeader + 2);
		uVar7 = parameters->instancePropsHeader & 0xff;
		cnt1 = (*this->vtable->GetFractionFloatsCount)();
		cnt2 = (*this->vtable->GetFloatsCount)();
		cnt3 = (*this->vtable->GetIntsCount)();
		flagsCnt = cnt1;
		if ((int)uVar7 <= (int)cnt1) {
		flagsCnt = uVar7;
		}
		floatsCnt = cnt2;
		if ((int)uVar3 <= (int)cnt2) {
		floatsCnt = uVar3;
		}
		intsCnt = cnt3;
		if ((int)uVar6 <= (int)cnt3) {
		intsCnt = uVar6;
		}
		i = 0;
		if (0 < (int)flagsCnt) {
		do {
		fractionValue = (parameters->fractions).fraction[i];
		uVar4 = (*this->vtable->GetFractionFloatsCount)();
		if (i < uVar4) {
		flagEntry = (*this->vtable->GetBlackboardFractionFloatEntry)(this,i);
		*flagEntry = fractionValue;
		}
		else if (this->blackboardSub != (BlackboardSub *)0x0) {
		*(float *)((int)this->blackboardSub + (i - uVar4) * 4 + 4) =FLOAT_2PI * FLOAT_003863a0 * (float)fractionValue;
		}
		i = i + 1;
		}
		 while ((int)i < (int)flagsCnt);
		}
		i = 0;
		if (0 < (int)floatsCnt) {
		do {
		floatValue = (parameters->floats).floats[i];
		cnt = (*this->vtable->GetFloatsCount)();
		if (i < cnt) {
		floatEntry = (*this->vtable->GetBlackboardFloatEntry)(this,i);
		*floatEntry = floatValue;
		}
		else {
		pBVar2 = this->blackboardSub;
		if (pBVar2 != (BlackboardSub *)0x0) {
		*(float *)((int)pBVar2 + ((uint)pBVar2->flagsCnt + (i - cnt)) * 4 + 4) = floatValue;
		}
		}
		i = i + 1;
		}
		 while ((int)i < (int)floatsCnt);
		}
		i = 0;
		if (0 < (int)intsCnt) {
		do {
		iVar1 = (parameters->ints).ints[i];
		fractionValue = (*this->vtable->GetIntsCount)();
		if (i < fractionValue) {
		piVar5 = (*this->vtable->GetBlackboardIntEntry)(this,i);
		*piVar5 = iVar1;
		}
		else {
		pBVar2 = this->blackboardSub;
		if (pBVar2 != (BlackboardSub *)0x0) {
		*(int *)((int)pBVar2 +((uint)pBVar2->floatsCnt + (uint)pBVar2->flagsCnt + (i - fractionValue)) * 4 + 4)= iVar1;
		}
		}
		i = i + 1;
		}
		 while ((int)i < (int)intsCnt);
		}
		this->field1_0x4 = parameters->unkInt;
		if ((((int)cnt1 < (int)uVar7) || ((int)cnt2 < (int)uVar3)) || ((int)cnt3 < (int)uVar6)) {
		this_00 = (BlackboardSub *)VirtualPool::AllocateMemory(0x20);
		if (this_00 != (BlackboardSub *)0x0) {
		pbVar5 = BlackboardSub::Construct(this_00,parameters,this);
		this->blackboardSub = pbVar5;
		return;
		}
		this->blackboardSub = (BlackboardSub *)0x0;
		}
		return;
		}
		
	*/
	return;
}

void BlackboardAbstract::FUN_001a9130(UNV029* param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall BlackboardAbstract::FUN_001a9130(BlackboardAbstract *this,UNV029 *param_1,uint param_2){
		uint uVar1;
		uint *puVar2;
		uVar1 = (*this->vtable->GetFractionFloatsCount)();
		if (param_2 < uVar1) {
		puVar2 = (*this->vtable->GetBlackboardFractionFloatEntry2)(this,param_2);
		param_1->field0_0x0 = *puVar2;
		return;
		}
		if (this->blackboardSub == (BlackboardSub *)0x0) {
		param_1->field0_0x0 = (int)((FLOAT_003863a8 / FLOAT_2PI) * FLOAT_00386394);
		return;
		}
		param_1->field0_0x0 =(int)((FLOAT_003863a8 / FLOAT_2PI) **(float *)((int)this->blackboardSub + (param_2 - uVar1) * 4 + 4));
		return;
		}
		
	*/
	return;
}

void BlackboardAbstract::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall BlackboardAbstract::Dispose(BlackboardAbstract *this,byte param_1){
		this->vtable = (Blackboard_VTable *)&Blackboard_VT_Abstract;
		if (this->blackboardSub != (BlackboardSub *)0x0) {
		VirtualPool::FreeMemory(this->blackboardSub);
		}
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->vtable;
		}
		
	*/
	return;
}

