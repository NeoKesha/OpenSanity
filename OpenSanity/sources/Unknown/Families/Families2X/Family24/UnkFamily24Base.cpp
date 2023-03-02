#include "headers/Unknown/Families/Families2X/Family24/UnkFamily24Base.h"

void UnkFamily24Base::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily24Base::Dispose(UnkFamily24Base *this){
		undefined4 *puVar1;
		code **ppcVar2;
		puVar1 = *(undefined4 **)&(this->subStruct).field_0x34;
		*(undefined ***)&(this->subStruct).field_0x2c = &UnkFamily24_VT_Base;
		while (puVar1 != (undefined4 *)0x0) {
		ppcVar2 = (code **)*puVar1;
		puVar1 = (undefined4 *)puVar1[1];
		(**ppcVar2)(1);
		}
		*(undefined ***)&(this->subStruct).field_0x30 = &UnkFamily23_VT_Base;
		return;
		}
		
	*/
	return;
}

void UnkFamily24Base::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily24Base * __fastcall UnkFamily24Base::Construct(UnkFamily24Base *this){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		this->vtable = (UnkFamily24Base_VTable *)&UnkFamily24_VT_Base;
		(this->subStruct).vtable = (UnkFamily23Base_VTable *)&UnkFamily23_VT_Base;
		(this->subStruct).field1_0x4 = 0;
		(this->subStruct).field2_0x8 = 0;
		(this->subStruct).field3_0xc = 0;
		(this->subStruct).field4_0x10 = 0;
		(this->subStruct).field5_0x14 = 0;
		(this->subStruct).field6_0x18 = fVar1;
		(this->subStruct).field7_0x1c = 0.0;
		(this->subStruct).field_0x28 = 0;
		(this->subStruct).field_0x3c = 0;
		(this->subStruct).field34_0x40 = fVar1;
		UnkFamily23Base::Init(&this->subStruct);
		this->field4_0x50 = 0;
		return this;
		}
		
	*/
	return;
}

void UnkFamily24Base::Dispose_2(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void * __thiscall UnkFamily24Base::Dispose(UnkFamily24Base *this,byte param_1){
		Dispose(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void UnkFamily24Base::Init(int param_1, uint* param_2, int param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily24Base::Init(UnkFamily24Base *this,int param_1,undefined4 *param_2,int param_3){
		undefined4 uVar1;
		UnkFamily23Base *pUVar2;
		UnkFamily23Base *pUVar3;
		int iVar4;
		UnkFamily23Base *pUVar5;
		int iVar6;
		float local_8;
		int local_4;
		pUVar5 = (UnkFamily23Base *)0x0;
		if (param_3 == 0) {
		iVar6 = 0;
		if (0 < param_1) {
		do {
		uVar1 = param_2[iVar6];
		pUVar2 = &this->subStruct;
		iVar4 = (this->subStruct).field1_0x4;
		while (iVar4 != 0) {
		pUVar2 = (UnkFamily23Base *)pUVar2->field1_0x4;
		iVar4 = pUVar2->field1_0x4;
		}
		pUVar3 = (UnkFamily23Base *)VirtualPool::AllocateMemory(0x44);
		if (pUVar3 == (UnkFamily23Base *)0x0) {
		pUVar5 = (UnkFamily23Base *)0x0;
		}
		else {
		pUVar3->field5_0x14 = uVar1;
		pUVar3->field34_0x40 = FLOAT_0038639c;
		local_8 = (float)(int)((FLOAT_003863a8 / FLOAT_0039eec0) * 0.0);
		pUVar3->vtable = (UnkFamily23Base_VTable *)&UnkFamily23_VT_Base;
		pUVar3->field1_0x4 = 0;
		pUVar3->field2_0x8 = pUVar5;
		pUVar3->field3_0xc = 0;
		pUVar3->field4_0x10 = 0;
		pUVar3->field_0x28 = 0;
		pUVar3->field_0x3c = 0;
		Global::Trigonometry(&local_8,&pUVar3->field6_0x18,&pUVar3->field7_0x1c);
		UnkFamily23Base::Init(pUVar3);
		pUVar5 = pUVar3;
		}
		iVar6 = iVar6 + 1;
		pUVar2->field1_0x4 = pUVar5;
		}
		 while (iVar6 < param_1);
		}
		}
		else if (0 < param_1) {
		iVar6 = param_3 - (int)param_2;
		do {
		local_8 = *(float *)(iVar6 + (int)param_2);
		pUVar2 = &this->subStruct;
		uVar1 = *param_2;
		iVar4 = (this->subStruct).field1_0x4;
		while (iVar4 != 0) {
		pUVar2 = (UnkFamily23Base *)pUVar2->field1_0x4;
		iVar4 = pUVar2->field1_0x4;
		}
		pUVar3 = (UnkFamily23Base *)VirtualPool::AllocateMemory(0x44);
		if (pUVar3 == (UnkFamily23Base *)0x0) {
		pUVar5 = (UnkFamily23Base *)0x0;
		}
		else {
		pUVar3->field3_0xc = 0;
		pUVar3->field4_0x10 = 0;
		pUVar3->field5_0x14 = uVar1;
		pUVar3->field34_0x40 = FLOAT_0038639c;
		local_4 = (int)((FLOAT_003863a8 / FLOAT_0039eec0) * local_8);
		pUVar3->vtable = (UnkFamily23Base_VTable *)&UnkFamily23_VT_Base;
		pUVar3->field1_0x4 = 0;
		pUVar3->field2_0x8 = pUVar5;
		pUVar3->field_0x28 = 0;
		pUVar3->field_0x3c = 0;
		Global::Trigonometry(&local_4,&pUVar3->field6_0x18,&pUVar3->field7_0x1c);
		UnkFamily23Base::Init(pUVar3);
		pUVar5 = pUVar3;
		}
		param_2 = param_2 + 1;
		param_1 = param_1 + -1;
		pUVar2->field1_0x4 = pUVar5;
		}
		 while (param_1 != 0);
		}
		iVar4 = 0;
		for (iVar6 = (this->subStruct).field1_0x4;
		 iVar6 != 0;
		 iVar6 = *(int *)(iVar6 + 4)) {
		iVar4 = iVar4 + 1;
		}
		this->field4_0x50 = iVar4;
		return;
		}
		
	*/
	return;
}

void UnkFamily24Base::Dispose_4(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily24Base * __thiscall UnkFamily24Base::Dispose(UnkFamily24Base *this,byte param_1){
		undefined4 *puVar1;
		code **ppcVar2;
		puVar1 = (undefined4 *)(this->subStruct).field1_0x4;
		this->vtable = (UnkFamily24Base_VTable *)&UnkFamily24_VT_Base;
		while (puVar1 != (undefined4 *)0x0) {
		ppcVar2 = (code **)*puVar1;
		puVar1 = (undefined4 *)puVar1[1];
		(**ppcVar2)(1);
		}
		(this->subStruct).vtable = (UnkFamily23Base_VTable *)&UnkFamily23_VT_Base;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void UnkFamily24Base::Construct_5(int param_1, uint* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily24Base * __thiscall UnkFamily24Base::Construct(UnkFamily24Base *this,int param_1,undefined4 *param_2){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		this->vtable = (UnkFamily24Base_VTable *)&UnkFamily24_VT_Base;
		(this->subStruct).vtable = (UnkFamily23Base_VTable *)&UnkFamily23_VT_Base;
		(this->subStruct).field1_0x4 = 0;
		(this->subStruct).field2_0x8 = 0;
		(this->subStruct).field3_0xc = 0;
		(this->subStruct).field4_0x10 = 0;
		(this->subStruct).field5_0x14 = 0;
		(this->subStruct).field6_0x18 = fVar1;
		(this->subStruct).field7_0x1c = 0.0;
		(this->subStruct).field_0x28 = 0;
		(this->subStruct).field_0x3c = 0;
		(this->subStruct).field34_0x40 = fVar1;
		UnkFamily23Base::Init(&this->subStruct);
		Init(this,param_1,param_2,0);
		return this;
		}
		
	*/
	return;
}

void UnkFamily24Base::Construct_6(uint param_1, uint param_2, uint param_3, uint param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily24Base * __thiscall UnkFamily24Base::Construct(UnkFamily24Base *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		this->vtable = (UnkFamily24Base_VTable *)&UnkFamily24_VT_Base;
		(this->subStruct).vtable = (UnkFamily23Base_VTable *)&UnkFamily23_VT_Base;
		(this->subStruct).field1_0x4 = 0;
		(this->subStruct).field2_0x8 = 0;
		(this->subStruct).field3_0xc = 0;
		(this->subStruct).field4_0x10 = 0;
		(this->subStruct).field5_0x14 = 0;
		(this->subStruct).field6_0x18 = fVar1;
		(this->subStruct).field7_0x1c = 0.0;
		(this->subStruct).field_0x28 = 0;
		(this->subStruct).field_0x3c = 0;
		(this->subStruct).field34_0x40 = fVar1;
		UnkFamily23Base::Init(&this->subStruct);
		this->field2_0x48 = param_1;
		this->field3_0x4c = param_2;
		this->field5_0x54 = param_3;
		this->field6_0x58 = param_4;
		return this;
		}
		
	*/
	return;
}

void UnkFamily24Base::Dispose_7() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily24Base::Dispose(UnkFamily24Base *this){
		undefined4 *puVar1;
		code **ppcVar2;
		puVar1 = (undefined4 *)(this->subStruct).field1_0x4;
		this->vtable = (UnkFamily24Base_VTable *)&UnkFamily24_VT_Base;
		while (puVar1 != (undefined4 *)0x0) {
		ppcVar2 = (code **)*puVar1;
		puVar1 = (undefined4 *)puVar1[1];
		(**ppcVar2)(1);
		}
		(this->subStruct).vtable = (UnkFamily23Base_VTable *)&UnkFamily23_VT_Base;
		return;
		}
		
	*/
	return;
}

