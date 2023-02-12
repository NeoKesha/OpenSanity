#include "headers/Unknown/Families/Families3X/Family33/UnkFamily33BA.h"

#include "headers/Known/Math/Vector4.h"
int UnkFamily33BA::FUN_001375a0(float* param_1, float* param_2, int param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall UnkFamily33BA::FUN_001375a0(UnkFamily33BA *this,float *param_1,float *param_2,int param_3){
		float fVar1;
		float fVar2;
		float fVar3;
		undefined *puVar4;
		int iVar5;
		undefined **ppuVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		int local_38;
		float local_34;
		int local_30;
		fVar7 = (*param_2 - *param_1) * FLOAT_00386ab4;
		fVar9 = (param_2[1] - param_1[1]) * FLOAT_00386ab4;
		fVar11 = (param_2[2] - param_1[2]) * FLOAT_00386ab4;
		fVar1 = *param_1;
		fVar2 = param_1[1];
		fVar3 = param_1[2];
		local_30 = -1;
		local_34 = FLOAT_00393188;
		local_38 = 0;
		ppuVar6 = &this->field13_0x70;
		do {
		if (*ppuVar6 != (undefined *)0x0) {
		iVar5 = FUN_001488f0(*ppuVar6 + 0x10,(int)param_1,(int)param_2);
		if (iVar5 == 1) {
		puVar4 = *ppuVar6;
		fVar12 = (*(float *)(puVar4 + 0x28) + *(float *)(puVar4 + 0x18)) * FLOAT_00386ab4 -(fVar3 + fVar11);
		fVar10 = (*(float *)(puVar4 + 0x24) + *(float *)(puVar4 + 0x14)) * FLOAT_00386ab4 -(fVar2 + fVar9);
		fVar8 = (*(float *)(puVar4 + 0x20) + *(float *)(puVar4 + 0x10)) * FLOAT_00386ab4 -(fVar1 + fVar7);
		fVar8 = SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar8 * fVar8);
		if (fVar8 < local_34) {
		local_30 = local_38;
		local_34 = fVar8;
		}
		}
		}
		local_38 = local_38 + 1;
		ppuVar6 = ppuVar6 + 1;
		}
		 while (local_38 < 8);
		if (local_30 != -1) {
		iVar5 = (**(code **)(*(int *)(&this->field13_0x70)[local_30] + 0x24))(param_1,param_2,param_3 + -1);
		return iVar5;
		}
		return (int)this;
		}
		
	*/
	return 0;
}

void UnkFamily33BA::FUN_0013cf50(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33BA::FUN_0013cf50(UnkFamily33BA *this,int *param_1){
		undefined4 uVar1;
		uint uVar2;
		undefined **ppuVar3;
		undefined **ppuVar4;
		int iVar5;
		undefined4 local_20 [8];
		UnkFamily33Abstract::FUN_0013c430((UnkFamily33Abstract *)this,param_1);
		ppuVar3 = &this->field13_0x70;
		uVar2 = 0;
		ppuVar4 = ppuVar3;
		do {
		if ((int *)*ppuVar4 == (int *)0x0) {
		uVar1 = 3;
		}
		else {
		uVar1 = (**(code **)(*(int *)*ppuVar4 + 0x6c))();
		}
		local_20[uVar2] = uVar1;
		uVar2 = uVar2 + 1;
		ppuVar4 = ppuVar4 + 1;
		}
		 while (uVar2 < 8);
		(**(code **)(*param_1 + 0xc))(local_20,0x20);
		iVar5 = 8;
		do {
		if ((int *)*ppuVar3 != (int *)0x0) {
		(**(code **)(*(int *)*ppuVar3 + 0x68))(param_1);
		}
		ppuVar3 = ppuVar3 + 1;
		iVar5 = iVar5 + -1;
		}
		 while (iVar5 != 0);
		return;
		}
		
	*/
	return;
}

void UnkFamily33BA::Construct(Vector4* param_1, Vector4* param_2, int param_3, int param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily33BA * __thiscall UnkFamily33BA::Construct(UnkFamily33BA *this,Vector4 *param_1,Vector4 *param_2,int param_3,int param_4){
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		int iVar12;
		undefined4 *puVar13;
		(this->parent).parent.vtable = (UnkFamily33Abstract_VTable *)&UnkFamily33_VT_Abstract;
		(this->parent).parent.list1 = (undefined *)0x0;
		(this->parent).parent.list2 = (undefined *)0x0;
		(this->parent).parent.field17_0x38 = param_3;
		(this->parent).parent.field18_0x3c = 0;
		(this->parent).parent.field19_0x40 = 0;
		fVar1 = param_2->y;
		fVar2 = param_1->x;
		fVar3 = param_2->x;
		fVar4 = param_1->z;
		fVar5 = param_2->z;
		fVar6 = param_1->y;
		fVar7 = param_2->y;
		fVar8 = param_1->z;
		fVar9 = param_2->z;
		fVar10 = param_1->y;
		(this->parent).parent.field13_0x10.x = param_1->x - param_2->x;
		fVar11 = FLOAT_0038639c;
		(this->parent).parent.field13_0x10.y = fVar6 - fVar7;
		(this->parent).parent.field13_0x10.z = fVar8 - fVar9;
		(this->parent).parent.field13_0x10.w = fVar11;
		(this->parent).parent.field14_0x20.x = fVar2 + fVar3;
		(this->parent).parent.field14_0x20.y = fVar1 + fVar10;
		(this->parent).parent.field14_0x20.z = fVar4 + fVar5;
		(this->parent).parent.field14_0x20.w = fVar11;
		(this->parent).parent.field20_0x44 = 0;
		(this->parent).parent.field21_0x48 = 0;
		(this->parent).parent.field22_0x4c = 0;
		(this->parent).parent.field23_0x50 = 0;
		(this->parent).field13_0x60 = (undefined *)param_4;
		(this->parent).parent.vtable = (UnkFamily33Abstract_VTable *)&UnkFamily33_VT_BA;
		iVar12 = (*(code *)PTR_FUN_00393514)();
		puVar13 = (undefined4 *)(*(code *)((this->parent).parent.vtable)->field37_0x94)();
		if (0 < iVar12) {
		for (;
		 iVar12 != 0;
		 iVar12 = iVar12 + -1) {
		*puVar13 = 0;
		puVar13 = puVar13 + 1;
		}
		}
		return this;
		}
		
	*/
	return;
}

void UnkFamily33BA::Construct_3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily33BA * __fastcall UnkFamily33BA::Construct(UnkFamily33BA *this){
		int iVar1;
		undefined4 *puVar2;
		(this->parent).parent.list1 = (undefined *)0x0;
		(this->parent).parent.list2 = (undefined *)0x0;
		(this->parent).parent.field17_0x38 = 0;
		(this->parent).parent.field18_0x3c = 0;
		(this->parent).parent.field19_0x40 = 0;
		(this->parent).parent.field20_0x44 = 0;
		(this->parent).parent.field21_0x48 = 0;
		(this->parent).parent.field22_0x4c = 0;
		(this->parent).parent.field23_0x50 = 0;
		(this->parent).parent.vtable = (UnkFamily33Abstract_VTable *)&UnkFamily33_VT_BA;
		iVar1 = (*(code *)PTR_FUN_00393514)();
		puVar2 = (undefined4 *)(*(code *)((this->parent).parent.vtable)->field37_0x94)();
		if (0 < iVar1) {
		for (;
		 iVar1 != 0;
		 iVar1 = iVar1 + -1) {
		*puVar2 = 0;
		puVar2 = puVar2 + 1;
		}
		}
		return this;
		}
		
	*/
	return;
}

void UnkFamily33BA::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily33BA::Dispose(UnkFamily33BA *this){
		undefined **ppuVar1;
		int iVar2;
		(this->parent).parent.vtable = (UnkFamily33Abstract_VTable *)&UnkFamily33_VT_BA;
		ppuVar1 = &this->field13_0x70;
		iVar2 = 8;
		do {
		if ((undefined4 *)*ppuVar1 != (undefined4 *)0x0) {
		(***(code ***)*ppuVar1)(1);
		}
		ppuVar1 = ppuVar1 + 1;
		iVar2 = iVar2 + -1;
		}
		 while (iVar2 != 0);
		(this->parent).parent.vtable = (UnkFamily33Abstract_VTable *)&UnkFamily33_VT_B;
		UnkFamily33Abstract::CleanUp((UnkFamily33Abstract *)this);
		return;
		}
		
	*/
	return;
}

void UnkFamily33BA::FUN_0013efb0(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33BA::FUN_0013efb0(UnkFamily33BA *this,int *param_1){
		int iVar1;
		GameReaderStorage *this_00;
		UnkFamily33BA *this_01;
		SectionReaderUnknownV *reader;
		FileResourceDescB *pFVar2;
		undefined4 unaff_EBX;
		UnkFamily33A *piVar4;
		uint uVar3;
		uint uVar4;
		undefined **ppuVar5;
		int aiStack44 [2];
		UnkFamily33BA *local_24;
		undefined local_20 [24];
		int *piStack8;
		local_24 = this;
		UnkFamily33Abstract::FUN_0013c340((UnkFamily33Abstract *)this,param_1);
		(**(code **)(*param_1 + 4))(local_20,0x20,1);
		ppuVar5 = &this->field13_0x70;
		uVar3 = 0;
		do {
		iVar1 = aiStack44[uVar3];
		if (iVar1 == 3) {
		LAB_0013effb:piVar4 = (UnkFamily33A *)0x0;
		}
		else {
		uVar4 = uVar3;
		if (iVar1 != 0x1600) {
		if (iVar1 == 0x1605) {
		piVar4 = (UnkFamily33A *)VirtualPool::AllocateMemory(0x60);
		if ((UnkFamily33BA *)piVar4 != (UnkFamily33BA *)0x0) {
		(((UnkFamily33BA *)piVar4)->parent).parent.list1 = (undefined *)0x0;
		(((UnkFamily33BA *)piVar4)->parent).parent.list2 = (undefined *)0x0;
		(((UnkFamily33BA *)piVar4)->parent).parent.field17_0x38 = 0;
		(((UnkFamily33BA *)piVar4)->parent).parent.field18_0x3c = 0;
		(((UnkFamily33BA *)piVar4)->parent).parent.field19_0x40 = 0;
		(((UnkFamily33BA *)piVar4)->parent).parent.field20_0x44 = 0;
		(((UnkFamily33BA *)piVar4)->parent).parent.field21_0x48 = 0;
		(((UnkFamily33BA *)piVar4)->parent).parent.field22_0x4c = 0;
		(((UnkFamily33BA *)piVar4)->parent).parent.field23_0x50 = 0;
		(((UnkFamily33BA *)piVar4)->parent).parent.vtable =(UnkFamily33Abstract_VTable *)&UnkFamily33_VT_A;
		goto LAB_0013f04d;
		}
		}
		goto LAB_0013effb;
		}
		this_01 = (UnkFamily33BA *)VirtualPool::AllocateMemory(0x90);
		if (this_01 == (UnkFamily33BA *)0x0) goto LAB_0013effb;
		piVar4 = (UnkFamily33A *)Construct(this_01);
		LAB_0013f04d:this_00 = GAME_READER_STORAGE[0];
		if ((UnkFamily33BA *)piVar4 != (UnkFamily33BA *)0x0) {
		reader = (SectionReaderUnknownV *)VirtualPool::AllocateMemory(0xc);
		if (reader == (SectionReaderUnknownV *)0x0) {
		reader = (SectionReaderUnknownV *)0x0;
		}
		else {
		reader->field1_0x4 = (undefined *)param_1;
		(reader->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_V;
		reader->field2_0x8 = (undefined *)piVar4;
		}
		pFVar2 = (FileResourceDescB *)VirtualPool::AllocateMemory(0x10);
		if (pFVar2 == (FileResourceDescB *)0x0) {
		pFVar2 = (FileResourceDescB *)0x0;
		uVar3 = uVar4;
		}
		else {
		pFVar2 = FileResourceDescB::Construct(pFVar2,&reader->parent,0,0);
		uVar3 = uVar4;
		}
		(((UnkFamily33BA *)piVar4)->parent).parent.field17_0x38 = unaff_EBX;
		GameReaderStorage::AddFileDesc(this_00,&pFVar2->parent,0);
		param_1 = piStack8;
		}
		}
		uVar3 = uVar3 + 1;
		*ppuVar5 = (undefined *)piVar4;
		ppuVar5 = ppuVar5 + 1;
		if (7 < uVar3) {
		return;
		}
		}
		 while( true );
		}
		
	*/
	return;
}

uint UnkFamily33BA::FUN_00140070(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall UnkFamily33BA::FUN_00140070(UnkFamily33BA *this,int **param_1){
		int *piVar1;
		int **ppiVar2;
		bool bVar3;
		byte bVar4;
		byte bVar5;
		uint uVar6;
		int iVar7;
		undefined **ppuVar8;
		ppiVar2 = param_1;
		ppuVar8 = &(this->parent).field13_0x60;
		bVar3 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar3 != false) {
		if (ppiVar2[1] == (int *)0x0) {
		bVar4 = (**(code **)(**ppiVar2 + 0x74))(0x613,ppuVar8);
		goto LAB_001400ba;
		}
		if (ppiVar2[1] == (int *)0x1) {
		bVar4 = (**(code **)(**ppiVar2 + 0x24))(0x613,*ppuVar8);
		goto LAB_001400ba;
		}
		}
		bVar4 = 0;
		LAB_001400ba:bVar4 = bVar4 & 1;
		ppuVar8 = &this->field13_0x70;
		iVar7 = 8;
		do {
		piVar1 = ppiVar2[1];
		if (piVar1 == (int *)0x0) {
		uVar6 = FUN_00143810(*ppiVar2,&param_1,0x601,0);
		bVar4 = bVar4 & (byte)uVar6;
		*ppuVar8 = (undefined *)param_1;
		if (param_1 != (int **)0x0) {
		param_1[0xe] = (int *)this;
		}
		}
		else {
		if (piVar1 == (int *)0x0) {
		uVar6 = FUN_00143810(*ppiVar2,ppuVar8,0x601,0);
		bVar5 = (byte)uVar6;
		}
		else if (piVar1 == (int *)0x1) {
		uVar6 = FUN_00143280(*ppiVar2,*ppuVar8,0x601,0);
		bVar5 = (byte)uVar6;
		}
		else {
		bVar5 = 0;
		}
		bVar4 = bVar4 & bVar5;
		}
		ppuVar8 = ppuVar8 + 1;
		iVar7 = iVar7 + -1;
		}
		 while (iVar7 != 0);
		uVar6 = UnkFamily33Abstract::FUN_0013c4d0((UnkFamily33Abstract *)this,ppiVar2);
		return uVar6 & 0xffffff00 | (uint)((byte)uVar6 & bVar4);
		}
		
	*/
	return 0;
}

void UnkFamily33BA::FUN_00137770(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33BA::FUN_00137770(UnkFamily33BA *this,undefined4 *param_1){
		int iVar1;
		undefined **ppuVar2;
		ppuVar2 = &this->field13_0x70;
		iVar1 = 8;
		do {
		if ((undefined4 *)*ppuVar2 == param_1) {
		if (param_1 != (undefined4 *)0x0) {
		(**(code **)*param_1)(1);
		}
		*ppuVar2 = (undefined *)0x0;
		}
		ppuVar2 = ppuVar2 + 1;
		iVar1 = iVar1 + -1;
		}
		 while (iVar1 != 0);
		return;
		}
		
	*/
	return;
}

void UnkFamily33BA::FUN_0013cfd0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily33BA::FUN_0013cfd0(UnkFamily33BA *this){
		int *piVar1;
		ushort *puVar2;
		int iVar3;
		uint **ppuVar4;
		undefined **ppuVar5;
		ppuVar5 = &this->field13_0x70;
		iVar3 = 8;
		do {
		if ((int *)*ppuVar5 == (int *)0xffffffff) {
		*ppuVar5 = (undefined *)0x0;
		}
		else {
		piVar1 = (int *)((int)*ppuVar5 + (int)this);
		*ppuVar5 = (undefined *)piVar1;
		piVar1[0xe] = (int)this;
		(**(code **)(*(int *)*ppuVar5 + 0x34))();
		}
		ppuVar5 = ppuVar5 + 1;
		iVar3 = iVar3 + -1;
		}
		 while (iVar3 != 0);
		iVar3 = (this->parent).parent.field18_0x3c;
		if (iVar3 == -1) {
		(this->parent).parent.field18_0x3c = 0;
		return;
		}
		puVar2 = (ushort *)((int)&(this->parent).parent.vtable + iVar3);
		(this->parent).parent.field18_0x3c = puVar2;
		if (*(int *)(puVar2 + 6) == -1) {
		*(undefined4 *)(puVar2 + 6) = 0;
		}
		else {
		*(int *)(puVar2 + 6) = *(int *)(puVar2 + 6) + (int)puVar2;
		}
		ppuVar4 = (uint **)(*(int *)(puVar2 + 4) + (int)puVar2);
		*(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + (int)puVar2;
		*(uint ***)(puVar2 + 4) = ppuVar4;
		FUN_00136cc0((uint)*puVar2,(uint)puVar2[1],ppuVar4,ppuVar4);
		return;
		}
		
	*/
	return;
}

int UnkFamily33BA::FUN_0013ee90(uint param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall UnkFamily33BA::FUN_0013ee90(UnkFamily33BA *this,uint param_1,int param_2){
		UnkFamily33BA *pUVar1;
		UnkFamily33A *this_00;
		undefined *extraout_ECX;
		Vector4 local_30;
		Vector4 local_20;
		local_30.x = ((this->parent).parent.field14_0x20.x - (this->parent).parent.field13_0x10.x) *FLOAT_00386ab4;
		local_30.y = ((this->parent).parent.field14_0x20.y - (this->parent).parent.field13_0x10.y) *FLOAT_00386ab4;
		local_30.z = ((this->parent).parent.field14_0x20.z - (this->parent).parent.field13_0x10.z) *FLOAT_00386ab4;
		local_30.w = FLOAT_0038639c;
		FUN_00138c00(this,&local_20.x,param_1);
		local_30.x = local_30.x * FLOAT_00386ab4;
		local_30.y = local_30.y * FLOAT_00386ab4;
		local_30.z = local_30.z * FLOAT_00386ab4;
		if (param_2 < 2) {
		this_00 = (UnkFamily33A *)VirtualPool::AllocateMemory(0x60);
		if (this_00 != (UnkFamily33A *)0x0) {
		pUVar1 = (UnkFamily33BA *)UnkFamily33A::Construct(this_00,&local_20,&local_30,this);
		goto LAB_0013ef8d;
		}
		}
		else {
		pUVar1 = (UnkFamily33BA *)VirtualPool::AllocateMemory(0x90);
		if (pUVar1 != (UnkFamily33BA *)0x0) {
		pUVar1 = Construct(pUVar1,&local_20,&local_30,(int)this,param_2 + -1);
		goto LAB_0013ef8d;
		}
		}
		pUVar1 = (UnkFamily33BA *)0x0;
		LAB_0013ef8d:FUN_00136c30((int)pUVar1);
		*(undefined4 *)(extraout_ECX + 0x40) = (this->parent).parent.field19_0x40;
		(&this->field13_0x70)[param_1] = extraout_ECX;
		return (int)extraout_ECX;
		}
		
	*/
	return 0;
}

void UnkFamily33BA::Dispose_10(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily33BA * __thiscall UnkFamily33BA::Dispose(UnkFamily33BA *this,byte param_1){
		Dispose(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

uint UnkFamily33BA::FUN_00143490() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily33BA::FUN_00143490(void){
		return 8;
		}
		
	*/
	return 0;
}

void UnkFamily33BA::FUN_0013e120(int* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33BA::FUN_0013e120(UnkFamily33BA *this,int *param_1,int param_2){
		int iVar1;
		undefined **ppuVar2;
		iVar1 = FUN_0020bfb0(param_1,param_2,this,0x90);
		ppuVar2 = &this->field13_0x70;
		param_2 = 8;
		do {
		FUN_00141680((int **)ppuVar2,iVar1,(int)this,param_1);
		ppuVar2 = ppuVar2 + 1;
		param_2 = param_2 + -1;
		}
		 while (param_2 != 0);
		iVar1 = FUN_0020bfb0(param_1,iVar1,this,0x70);
		iVar1 = FUN_0020bfb0(param_1,iVar1,this,0x60);
		FUN_001429e0((ushort **)&(this->parent).parent.field18_0x3c,iVar1,(int)this,param_1);
		return;
		}
		
	*/
	return;
}

uint UnkFamily33BA::FUN_00137740() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __fastcall UnkFamily33BA::FUN_00137740(UnkFamily33BA *this){
		undefined *puVar1;
		undefined **ppuVar2;
		puVar1 = (undefined *)(this->parent).parent.field18_0x3c;
		if ((puVar1 == (undefined *)0x0) &&(puVar1 = (this->parent).parent.list1, puVar1 == (undefined *)0x0)) {
		puVar1 = (undefined *)0x0;
		ppuVar2 = &this->field13_0x70;
		while (*ppuVar2 == (undefined *)0x0) {
		puVar1 = puVar1 + 1;
		ppuVar2 = ppuVar2 + 1;
		if (7 < (int)puVar1) {
		return CONCAT31((int3)((uint)puVar1 >> 8),1);
		}
		}
		}
		return (uint)puVar1 & 0xffffff00;
		}
		
	*/
	return 0;
}

void UnkFamily33BA::FUN_0013b110(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33BA::FUN_0013b110(UnkFamily33BA *this,uint *param_1){
		undefined **ppuVar1;
		int iVar2;
		ppuVar1 = &this->field13_0x70;
		iVar2 = 8;
		do {
		if ((int *)*ppuVar1 != (int *)0x0) {
		(**(code **)(*(int *)*ppuVar1 + 0x5c))(param_1);
		}
		ppuVar1 = ppuVar1 + 1;
		iVar2 = iVar2 + -1;
		}
		 while (iVar2 != 0);
		UnkFamily33Abstract::FUN_00139080((UnkFamily33Abstract *)this,param_1);
		return;
		}
		
	*/
	return;
}

void UnkFamily33BA::FUN_0013b150(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33BA::FUN_0013b150(UnkFamily33BA *this,uint *param_1){
		undefined **ppuVar1;
		int iVar2;
		ppuVar1 = &this->field13_0x70;
		iVar2 = 8;
		do {
		if ((int *)*ppuVar1 != (int *)0x0) {
		(**(code **)(*(int *)*ppuVar1 + 0x60))(param_1);
		}
		ppuVar1 = ppuVar1 + 1;
		iVar2 = iVar2 + -1;
		}
		 while (iVar2 != 0);
		UnkFamily33Abstract::FUN_001390d0((UnkFamily33Abstract *)this,param_1);
		return;
		}
		
	*/
	return;
}

void UnkFamily33BA::FUN_0013b190(char param_1, char param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33BA::FUN_0013b190(UnkFamily33BA *this,char param_1,char param_2){
		undefined *puVar1;
		GameReaderStorage *this_00;
		SectionReaderUnknownU *reader;
		FileResourceDescB *pFVar2;
		undefined **ppuVar3;
		this_00 = GAME_READER_STORAGE[0];
		UnkFamily33Abstract::FUN_00139170((UnkFamily33Abstract *)this,param_1,param_2);
		ppuVar3 = &this->field13_0x70;
		_param_2 = 8;
		do {
		puVar1 = *ppuVar3;
		if (puVar1 != (undefined *)0x0) {
		reader = (SectionReaderUnknownU *)VirtualPool::AllocateMemory(0xc);
		if (reader == (SectionReaderUnknownU *)0x0) {
		reader = (SectionReaderUnknownU *)0x0;
		}
		else {
		reader->field1_0x4 = puVar1;
		(reader->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_U;
		reader->field_0x8 = param_1;
		reader->field_0x9 = param_2;
		}
		pFVar2 = (FileResourceDescB *)VirtualPool::AllocateMemory(0x10);
		if (pFVar2 == (FileResourceDescB *)0x0) {
		pFVar2 = (FileResourceDescB *)0x0;
		}
		else {
		pFVar2 = FileResourceDescB::Construct(pFVar2,&reader->parent,0,0);
		}
		GameReaderStorage::AddFileDesc(this_00,&pFVar2->parent,1);
		if (param_2 != '\0') {
		*ppuVar3 = (undefined *)0x0;
		}
		}
		ppuVar3 = ppuVar3 + 1;
		_param_2 = _param_2 + -1;
		}
		 while (_param_2 != 0);
		return;
		}
		
	*/
	return;
}

int UnkFamily33BA::FUN_001434a0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall UnkFamily33BA::FUN_001434a0(UnkFamily33BA *this){
		return (int)&this->field13_0x70;
		}
		
	*/
	return 0;
}

int UnkFamily33BA::FUN_001434b0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall UnkFamily33BA::FUN_001434b0(UnkFamily33BA *this){
		return (int)&this->field13_0x70;
		}
		
	*/
	return 0;
}

uint UnkFamily33BA::FUN_001434c0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily33BA::FUN_001434c0(void){
		return 0x1600;
		}
		
	*/
	return 0;
}

void UnkFamily33BA::Construct_20(Vector4* param_1, float param_2, uint param_3, uint param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily33BA * __thiscall UnkFamily33BA::Construct(UnkFamily33BA *this,Vector4 *param_1,float param_2,undefined4 param_3,undefined4 param_4){
		int iVar1;
		undefined4 *puVar2;
		UnkFamily33B::Construct(&this->parent,param_1,param_2,param_3,param_4);
		(this->parent).parent.vtable = (UnkFamily33Abstract_VTable *)&UnkFamily33_VT_BA;
		iVar1 = (*(code *)PTR_FUN_00393514)();
		puVar2 = (undefined4 *)(*(code *)((this->parent).parent.vtable)->field37_0x94)();
		if (0 < iVar1) {
		for (;
		 iVar1 != 0;
		 iVar1 = iVar1 + -1) {
		*puVar2 = 0;
		puVar2 = puVar2 + 1;
		}
		}
		return this;
		}
		
	*/
	return;
}

