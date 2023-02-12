#include "headers/Unknown/Families/Families3X/Family33/UnkFamily33Abstract.h"

#include "headers/Known/Math/Vector4.h"
void UnkFamily33Abstract::FUN_0013c340(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33Abstract::FUN_0013c340(UnkFamily33Abstract *this,int *param_1){
		void *this_00;
		int unaff_EBX;
		UnkFamily29A local_64;
		(**(code **)(*param_1 + 0x50))(&local_64);
		if (unaff_EBX == 3) {
		this->field18_0x3c = 0;
		}
		else if (unaff_EBX == 0x1613) {
		this_00 = VirtualPool::AllocateMemory(0x30);
		if (this_00 == (void *)0x0) {
		this->field18_0x3c = 0;
		}
		else {
		*(undefined4 *)((int)this_00 + 4) = 0;
		*(undefined4 *)((int)this_00 + 8) = 0;
		BoundingBox::SetInfiniteSizes((BoundingBox *)((int)this_00 + 0x10));
		FUN_00138ad0(this_00,param_1);
		this->field18_0x3c = this_00;
		}
		}
		local_64.parent.vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_A;
		(*(code *)PTR_FUN_0039314c)(param_1);
		(this->field13_0x10).x = local_64.parent.color.A;
		(this->field13_0x10).y = local_64.field1_0x20.R;
		(this->field13_0x10).z = local_64.field1_0x20.G;
		(this->field13_0x10).w = local_64.field1_0x20.B;
		(this->field14_0x20).x = local_64.field1_0x20.A;
		(this->field14_0x20).y = local_64.field2_0x30.R;
		(this->field14_0x20).z = local_64.field2_0x30.G;
		(this->field14_0x20).w = local_64.field2_0x30.B;
		(**(code **)(*param_1 + 4))(&this->field20_0x44,0x10,1);
		return;
		}
		
	*/
	return;
}

void UnkFamily33Abstract::FUN_0013c430(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33Abstract::FUN_0013c430(UnkFamily33Abstract *this,int *param_1){
		ushort uVar1;
		ushort uVar2;
		ushort *this_00;
		UnkFamily33Abstract *unaff_EBX;
		UnkFamily29A local_64;
		local_64.parent.vtable = (UnkFamily29Abstract_VTable *)this;
		(**(code **)(*param_1 + 0x7c))((-(uint)(this->field18_0x3c != 0) & 0x1610) + 3);
		this_00 = (ushort *)this->field18_0x3c;
		if (this_00 != (ushort *)0x0) {
		uVar1 = this_00[1];
		uVar2 = *this_00;
		this = unaff_EBX;
		FUN_00139310(this_00,param_1);
		if ((uint)uVar1 + (uint)uVar2 != 0) {
		(**(code **)(*param_1 + 0xc))(*(undefined4 *)(this_00 + 6),((uint)uVar1 + (uint)uVar2) * 0x40);
		}
		}
		local_64.parent.vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_A;
		FUN_0014bfb0((int)&local_64,&(this->field13_0x10).x,&(this->field14_0x20).x);
		(*(code *)(local_64.parent.vtable)->field14_0x38)(param_1);
		(**(code **)(*param_1 + 0xc))(&this->field20_0x44,0x10);
		return;
		}
		
	*/
	return;
}

uint UnkFamily33Abstract::FUN_0013c4d0(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall UnkFamily33Abstract::FUN_0013c4d0(UnkFamily33Abstract *this,int **param_1){
		byte bVar1;
		undefined4 *puVar3;
		undefined4 local_64;
		UnkFamily29A local_60;
		uint uVar2;
		local_60.parent.vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_A;
		if (param_1[1] == (int *)0x0) {
		uVar2 = FUN_00142980(param_1,(int *)&local_60,0x616,0);
		bVar1 = (byte)uVar2;
		(this->field13_0x10).x = local_60.field1_0x20.R;
		(this->field13_0x10).y = local_60.field1_0x20.G;
		(this->field13_0x10).z = local_60.field1_0x20.B;
		(this->field13_0x10).w = local_60.field1_0x20.A;
		(this->field14_0x20).x = local_60.field2_0x30.R;
		(this->field14_0x20).y = local_60.field2_0x30.G;
		(this->field14_0x20).z = local_60.field2_0x30.B;
		(this->field14_0x20).w = local_60.field2_0x30.A;
		}
		else {
		FUN_0014bfb0((int)&local_60,&(this->field13_0x10).x,&(this->field14_0x20).x);
		uVar2 = FUN_00142980(param_1,(int *)&local_60,0x616,0);
		bVar1 = (byte)uVar2;
		}
		local_64 = 0x10;
		puVar3 = &this->field20_0x44;
		if (param_1[1] == (int *)0x0) {
		puVar3 = (undefined4 *)(**(code **)(**param_1 + 0x90))(0x986,&local_64,puVar3);
		}
		else if (param_1[1] == (int *)0x1) {
		uVar2 = (**(code **)(**param_1 + 0x40))(0x986,0x10,puVar3);
		return uVar2 & 0xffffff00 | (uint)(bVar1 & 1);
		}
		return (uint)puVar3 & 0xffffff00 | (uint)(bVar1 & 1);
		}
		
	*/
	return 0;
}

void UnkFamily33Abstract::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily33Abstract::CleanUp(UnkFamily33Abstract *this){
		ushort *ptr;
		int *piVar1;
		ptr = (ushort *)this->field18_0x3c;
		this->vtable = (UnkFamily33Abstract_VTable *)&UnkFamily33_VT_Abstract;
		if (ptr != (ushort *)0x0) {
		VirtualPool::FreeMemory(*(void **)(ptr + 6));
		FUN_00136ef0(ptr);
		if (*(int *)(ptr + 2) != 0) {
		VirtualPool::FreeMemory((void *)(*(int *)(ptr + 2) + -0x10));
		}
		VirtualPool::FreeMemory(*(void **)(ptr + 4));
		VirtualPool::FreeMemory(ptr);
		}
		piVar1 = (int *)this->list2;
		while (piVar1 != (int *)0x0) {
		(**(code **)(*piVar1 + 0xc))();
		piVar1 = (int *)this->list2;
		}
		piVar1 = (int *)this->list1;
		while (piVar1 != (int *)0x0) {
		(**(code **)(*piVar1 + 0xc))();
		piVar1 = (int *)this->list1;
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily33Abstract::Construct(Vector4* param_1, Vector4* param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily33Abstract * __thiscall UnkFamily33Abstract::Construct(UnkFamily33Abstract *this,Vector4 *param_1,Vector4 *param_2,undefined4 param_3){
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
		this->vtable = (UnkFamily33Abstract_VTable *)&UnkFamily33_VT_Abstract;
		this->list1 = (undefined *)0x0;
		this->list2 = (undefined *)0x0;
		this->field18_0x3c = 0;
		this->field19_0x40 = 0;
		this->field17_0x38 = param_3;
		fVar1 = param_1->x;
		fVar2 = param_1->z;
		fVar3 = param_1->y;
		fVar4 = param_1->z;
		fVar5 = param_2->y;
		fVar6 = param_1->y;
		fVar7 = param_2->x;
		fVar8 = param_2->z;
		fVar9 = param_2->y;
		fVar10 = param_2->z;
		(this->field13_0x10).x = param_1->x - param_2->x;
		fVar11 = FLOAT_0038639c;
		(this->field13_0x10).y = fVar3 - fVar9;
		(this->field13_0x10).z = fVar4 - fVar10;
		(this->field13_0x10).w = fVar11;
		(this->field14_0x20).x = fVar1 + fVar7;
		(this->field14_0x20).y = fVar5 + fVar6;
		(this->field14_0x20).z = fVar2 + fVar8;
		(this->field14_0x20).w = fVar11;
		this->field20_0x44 = 0;
		this->field21_0x48 = 0;
		this->field22_0x4c = 0;
		this->field23_0x50 = 0;
		return this;
		}
		
	*/
	return;
}

void UnkFamily33Abstract::Construct_5(Vector4* param_1, float param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily33Abstract * __thiscall UnkFamily33Abstract::Construct(UnkFamily33Abstract *this,Vector4 *param_1,float param_2,undefined4 param_3){
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		this->vtable = (UnkFamily33Abstract_VTable *)&UnkFamily33_VT_Abstract;
		this->list1 = (undefined *)0x0;
		this->list2 = (undefined *)0x0;
		this->field18_0x3c = 0;
		this->field19_0x40 = 0;
		this->field17_0x38 = param_3;
		fVar1 = param_1->w;
		fVar2 = param_1->x;
		fVar3 = param_1->y;
		fVar4 = param_1->z;
		(this->field13_0x10).w = fVar1;
		(this->field13_0x10).x = fVar2 - param_2;
		(this->field13_0x10).y = fVar3 - param_2;
		(this->field13_0x10).z = fVar4 - param_2;
		(this->field14_0x20).x = fVar2 + param_2;
		(this->field14_0x20).y = fVar3 + param_2;
		(this->field14_0x20).z = fVar4 + param_2;
		(this->field14_0x20).w = fVar1;
		this->field20_0x44 = 0;
		this->field21_0x48 = 0;
		this->field22_0x4c = 0;
		this->field23_0x50 = 0;
		return this;
		}
		
	*/
	return;
}

void UnkFamily33Abstract::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily33Abstract::Dispose(UnkFamily33Abstract *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->vtable;
		}
		
	*/
	return;
}

uint UnkFamily33Abstract::FUN_0013c5e0(int* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall UnkFamily33Abstract::FUN_0013c5e0(UnkFamily33Abstract *this,int *param_1,int param_2){
		undefined *puVar1;
		int iVar2;
		InstanceNodeAbstract *this_00;
		uint uVar3;
		bool bVar4;
		bVar4 = this->list1 != (undefined *)0x0;
		if (bVar4) {
		FUN_00139af0(&this->list1,(UnkFamily14Base *)param_1,(ChunkData *)param_2);
		}
		uVar3 = (uint)bVar4;
		if ((void *)this->field18_0x3c != (void *)0x0) {
		iVar2 = FUN_00138760((void *)this->field18_0x3c,param_1);
		uVar3 = uVar3 + iVar2;
		}
		for (puVar1 = this->list2;
		 puVar1 != (undefined *)0x0;
		 puVar1 = *(undefined **)(puVar1 + 0x154)) {
		this_00 = InstanceDataList::GetNode((InstanceDataList *)(puVar1 + 0xe4),Undefined4);
		iVar2 = FUN_0014bae0((int)this_00,param_1);
		uVar3 = uVar3 + iVar2;
		}
		return uVar3;
		}
		
	*/
	return 0;
}

uint UnkFamily33Abstract::FUN_0013c650(int* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall UnkFamily33Abstract::FUN_0013c650(UnkFamily33Abstract *this,int *param_1,int param_2){
		undefined *puVar1;
		uint uVar2;
		InstanceNodeAbstract *this_00;
		int iVar3;
		uint uVar4;
		bool bVar5;
		bVar5 = this->list1 != (undefined *)0x0;
		if (bVar5) {
		FUN_00139ba0(&this->list1,(UnkFamily14Base *)param_1,(ChunkData *)param_2);
		}
		uVar4 = (uint)bVar5;
		if ((void *)this->field18_0x3c != (void *)0x0) {
		uVar2 = FUN_00138810((void *)this->field18_0x3c,param_1);
		uVar4 = uVar4 + uVar2;
		}
		for (puVar1 = this->list2;
		 puVar1 != (undefined *)0x0;
		 puVar1 = *(undefined **)(puVar1 + 0x154)) {
		this_00 = InstanceDataList::GetNode((InstanceDataList *)(puVar1 + 0xe4),Undefined4);
		iVar3 = FUN_0014baf0((int)this_00,param_1);
		uVar4 = uVar4 + iVar3;
		}
		return uVar4;
		}
		
	*/
	return 0;
}

void UnkFamily33Abstract::FUN_0013c6c0(char param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33Abstract::FUN_0013c6c0(UnkFamily33Abstract *this,char param_1){
		ushort *ptr;
		if (param_1 == '\0') {
		ptr = (ushort *)this->field18_0x3c;
		if (ptr != (ushort *)0x0) {
		VirtualPool::FreeMemory(*(void **)(ptr + 6));
		FUN_00136ef0(ptr);
		if (*(int *)(ptr + 2) != 0) {
		VirtualPool::FreeMemory((void *)(*(int *)(ptr + 2) + -0x10));
		}
		VirtualPool::FreeMemory(*(void **)(ptr + 4));
		VirtualPool::FreeMemory(ptr);
		}
		this->field18_0x3c = 0;
		}
		else if ((ushort *)this->field18_0x3c != (ushort *)0x0) {
		FUN_00136ef0((ushort *)this->field18_0x3c);
		return;
		}
		return;
		}
		
	*/
	return;
}

int UnkFamily33Abstract::FUN_0013f470(float* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall UnkFamily33Abstract::FUN_0013f470(UnkFamily33Abstract *this,float *param_1,int param_2){
		int iVar1;
		iVar1 = FUN_00148930(&this->field13_0x10,param_1);
		if ((iVar1 != 0) && (this->list1 != (undefined *)0x0)) {
		param_1 = (float *)this;
		if (iVar1 == 1) {
		FUN_00143220(*(int *)(param_2 + 8),&param_1);
		return 1;
		}
		FUN_00143220(*(int *)(param_2 + 8) + 0x14,&param_1);
		}
		return iVar1;
		}
		
	*/
	return 0;
}

void UnkFamily33Abstract::FUN_00139080(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33Abstract::FUN_00139080(UnkFamily33Abstract *this,uint *param_1){
		int *piVar1;
		int *piVar2;
		piVar1 = (int *)this->list1;
		while (piVar2 = piVar1, piVar2 != (int *)0x0) {
		piVar1 = (int *)piVar2[0x55];
		if ((((piVar2[5] & param_1[1]) == param_1[1]) && ((param_1[2] & piVar2[5]) == 0)) &&((piVar2[0x39] & *param_1) != 0)) {
		(**(code **)(*piVar2 + 8))();
		}
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily33Abstract::FUN_001390d0(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33Abstract::FUN_001390d0(UnkFamily33Abstract *this,uint *param_1){
		int *piVar1;
		int *piVar2;
		piVar1 = (int *)this->list1;
		while (piVar2 = piVar1, piVar2 != (int *)0x0) {
		piVar1 = (int *)piVar2[0x55];
		if ((((piVar2[5] & param_1[1]) == param_1[1]) && ((param_1[2] & piVar2[5]) == 0)) &&((piVar2[0x39] & *param_1) != 0)) {
		(**(code **)(*piVar2 + 0xc))();
		}
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily33Abstract::FUN_00139170(char param_1, char param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33Abstract::FUN_00139170(UnkFamily33Abstract *this,char param_1,char param_2){
		int *piVar1;
		GameReaderStorage *this_00;
		SectionReaderUnknownT *reader;
		FileResourceDescB *pFVar2;
		this_00 = GAME_READER_STORAGE[0];
		if (param_2 == '\0') {
		if (param_1 != '\0') {
		piVar1 = (int *)this->list1;
		while (piVar1 != (int *)0x0) {
		(**(code **)(*piVar1 + 0xc))();
		piVar1 = (int *)this->list1;
		}
		}
		return;
		}
		reader = (SectionReaderUnknownT *)VirtualPool::AllocateMemory(8);
		if (reader == (SectionReaderUnknownT *)0x0) {
		reader = (SectionReaderUnknownT *)0x0;
		}
		else {
		(reader->parent).vtable = (SectionReaderAbstract_VTable *)&SectionReader_VT_Unknown_T;
		reader->field1_0x4 = (undefined *)this;
		}
		pFVar2 = (FileResourceDescB *)VirtualPool::AllocateMemory(0x10);
		if (pFVar2 == (FileResourceDescB *)0x0) {
		pFVar2 = (FileResourceDescB *)0x0;
		}
		else {
		pFVar2 = FileResourceDescB::Construct(pFVar2,&reader->parent,0,0);
		}
		GameReaderStorage::AddFileDesc(this_00,&pFVar2->parent,1);
		piVar1 = (int *)this->list1;
		while (piVar1 != (int *)0x0) {
		(**(code **)(*piVar1 + 0xc))();
		piVar1 = (int *)this->list1;
		}
		this->field17_0x38 = 0;
		return;
		}
		
	*/
	return;
}

bool UnkFamily33Abstract::FUN_00136310() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall UnkFamily33Abstract::FUN_00136310(UnkFamily33Abstract *this){
		return this->list1 != (undefined *)0x0;
		}
		
	*/
	return false;
}

uint UnkFamily33Abstract::FUN_00136b90(int param_1, int* param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall UnkFamily33Abstract::FUN_00136b90(UnkFamily33Abstract *this,int param_1,int *param_2,undefined4 param_3){
		undefined4 uVar1;
		if (param_1 == 1) {
		uVar1 = (*(code *)this->vtable->field14_0x38)(param_2,param_3);
		return uVar1;
		}
		(**(code **)(*param_2 + 8))(&this->field13_0x10);
		if (param_2[0x43] != 0) {
		if (param_2[0x43] == 2) {
		uVar1 = (*(code *)this->vtable->field15_0x3c)();
		return uVar1;
		}
		uVar1 = (*(code *)this->vtable->field14_0x38)(param_2,param_2);
		return uVar1;
		}
		return 0;
		}
		
	*/
	return 0;
}

uint UnkFamily33Abstract::Passthrough() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily33Abstract * __fastcall UnkFamily33Abstract::Passthrough(UnkFamily33Abstract *this){
		return this;
		}
		
	*/
	return 0;
}

int UnkFamily33Abstract::FUN_00139000(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall UnkFamily33Abstract::FUN_00139000(UnkFamily33Abstract *this,int *param_1){
		ushort uVar1;
		undefined *puVar2;
		uint unaff_ESI;
		uVar1 = *(ushort *)(param_1 + 1);
		for (puVar2 = this->list1;
		 puVar2 != (undefined *)0x0;
		 puVar2 = *(undefined **)(puVar2 + 0x154)) {
		if (*(ushort *)(param_1 + 1) < *(ushort *)((int)param_1 + 6)) {
		*(undefined **)(*param_1 + (uint)*(ushort *)(param_1 + 1) * 4) = puVar2;
		*(short *)(param_1 + 1) = *(short *)(param_1 + 1) + 1;
		}
		else {
		param_1[3] = param_1[3] | 1;
		}
		}
		return (uint)*(ushort *)(param_1 + 1) - (unaff_ESI & 0xffff0000 | (uint)uVar1);
		}
		
	*/
	return 0;
}

void UnkFamily33Abstract::FUN_00139050(uint param_1, int param_2, int param_3, uint param_4, int param_5) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33Abstract::FUN_00139050(UnkFamily33Abstract *this,undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5){
		if ((param_2 != 0) || (param_2 = param_3, param_3 != 0)) {
		*(int *)(*(int *)(this->field18_0x3c + 8) + param_5 * 4) = param_2;
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily33Abstract::FUN_00139120() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily33Abstract::FUN_00139120(UnkFamily33Abstract *this){
		ushort *puVar1;
		uint **ppuVar2;
		if (this->field18_0x3c == -1) {
		this->field18_0x3c = 0;
		return;
		}
		puVar1 = (ushort *)((int)&this->vtable + this->field18_0x3c);
		this->field18_0x3c = puVar1;
		if (*(int *)(puVar1 + 6) == -1) {
		*(undefined4 *)(puVar1 + 6) = 0;
		}
		else {
		*(int *)(puVar1 + 6) = *(int *)(puVar1 + 6) + (int)puVar1;
		}
		ppuVar2 = (uint **)(*(int *)(puVar1 + 4) + (int)puVar1);
		*(uint ***)(puVar1 + 4) = ppuVar2;
		*(int *)(puVar1 + 2) = *(int *)(puVar1 + 2) + (int)puVar1;
		FUN_00136cc0((uint)*puVar1,(uint)puVar1[1],ppuVar2,ppuVar2);
		return;
		}
		
	*/
	return;
}

void UnkFamily33Abstract::FUN_0013c7a0(int* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33Abstract::FUN_0013c7a0(UnkFamily33Abstract *this,int *param_1,int param_2){
		int iVar1;
		iVar1 = FUN_0020bfb0(param_1,param_2,this,0x60);
		FUN_001429e0((ushort **)&this->field18_0x3c,iVar1,(int)this,param_1);
		return;
		}
		
	*/
	return;
}

uint UnkFamily33Abstract::FUN_0013dc00(uint param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall UnkFamily33Abstract::FUN_0013dc00(UnkFamily33Abstract *this,undefined4 param_1,int param_2){
		undefined4 extraout_ECX;
		FUN_0013c7d0((int)this,(InstanceContext *)param_2);
		return extraout_ECX;
		}
		
	*/
	return 0;
}

void UnkFamily33Abstract::FUN_0013f3d0(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33Abstract::FUN_0013f3d0(UnkFamily33Abstract *this,int param_1){
		char cVar1;
		UnkFamily33Abstract *pUStack4;
		pUStack4 = this;
		cVar1 = (*(code *)this->vtable->field22_0x58)();
		if (cVar1 != '\0') {
		pUStack4 = this;
		FUN_00143220(*(int *)(param_1 + 8),&pUStack4);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily33Abstract::FUN_0013f400(int* param_1, int* param_2, uint param_3, int* param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33Abstract::FUN_0013f400(UnkFamily33Abstract *this,int *param_1,int *param_2,uint param_3,int *param_4){
		if (param_1 == (int *)0x1) {
		FUN_0013f1f0((int)this,param_2,param_3);
		return;
		}
		(**(code **)(*param_4 + 8))(&this->field13_0x10);
		if (param_4[0x43] != 0) {
		if (param_4[0x43] == 2) {
		FUN_0013f2c0((int)this,param_1,(uint)param_2,param_4);
		return;
		}
		FUN_0013f1f0((int)this,param_1,(uint)param_2);
		}
		return;
		}
		
	*/
	return;
}

uint UnkFamily33Abstract::Passthrough_24() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily33Abstract * __fastcall UnkFamily33Abstract::Passthrough(UnkFamily33Abstract *this){
		return this;
		}
		
	*/
	return 0;
}

void UnkFamily33Abstract::FUN_00142e00() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined UnkFamily33Abstract::FUN_00142e00(void){
		return 0;
		}
		
	*/
	return;
}

uint UnkFamily33Abstract::FUN_00142e10() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily33Abstract::FUN_00142e10(void){
		return 0;
		}
		
	*/
	return 0;
}

uint UnkFamily33Abstract::FUN_00142e20() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily33Abstract::FUN_00142e20(void){
		return 0;
		}
		
	*/
	return 0;
}

float UnkFamily33Abstract::FUN_00142e30() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float UnkFamily33Abstract::FUN_00142e30(void){
		return FLOAT_00386394;
		}
		
	*/
	return 0.0f;
}

uint UnkFamily33Abstract::FUN_00142e40() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily33Abstract::FUN_00142e40(void){
		return 0xffffffff;
		}
		
	*/
	return 0;
}

uint UnkFamily33Abstract::FUN_00142e50() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily33Abstract::FUN_00142e50(void){
		return 0x1612;
		}
		
	*/
	return 0;
}

uint UnkFamily33Abstract::FUN_00142e60() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __fastcall UnkFamily33Abstract::FUN_00142e60(UnkFamily33Abstract *this){
		return this->field17_0x38;
		}
		
	*/
	return 0;
}

void UnkFamily33Abstract::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily33Abstract::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily33Abstract::FUN_00142e80(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily33Abstract::FUN_00142e80(UnkFamily33Abstract *this,undefined4 param_1){
		this->field19_0x40 = param_1;
		return;
		}
		
	*/
	return;
}

void UnkFamily33Abstract::Construct_34() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily33Abstract * __fastcall UnkFamily33Abstract::Construct(UnkFamily33Abstract *this){
		this->vtable = (UnkFamily33Abstract_VTable *)&UnkFamily33_VT_Abstract;
		this->list1 = (undefined *)0x0;
		this->list2 = (undefined *)0x0;
		this->field17_0x38 = 0;
		this->field18_0x3c = 0;
		this->field19_0x40 = 0;
		this->field20_0x44 = 0;
		this->field21_0x48 = 0;
		this->field22_0x4c = 0;
		this->field23_0x50 = 0;
		return this;
		}
		
	*/
	return;
}

void UnkFamily33Abstract::Construct_35(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily33Abstract * __thiscall UnkFamily33Abstract::Construct(UnkFamily33Abstract *this,int *param_1){
		this->vtable = (UnkFamily33Abstract_VTable *)&UnkFamily33_VT_Abstract;
		this->list1 = (undefined *)0x0;
		this->list2 = (undefined *)0x0;
		this->field17_0x38 = 0;
		this->field19_0x40 = 0;
		FUN_0013c340(this,param_1);
		return this;
		}
		
	*/
	return;
}

