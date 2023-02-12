#include "headers/Unknown/Families/Families1X/Family17/UnkFamily17Base.h"

#include "headers/Unknown/Families/Families1X/Family17/UnkFamily17Data.h"
#include "headers/Known/Math/Vector4.h"
void UnkFamily17Base::Unroll() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily17Base::Unroll(UnkFamily17Base *this){
		this->vtable = (UnkFamily17Base_VTable *)&UnkFamily17_VT_Base;
		return;
		}
		
	*/
	return;
}

void UnkFamily17Base::FUN_0015d400(uint param_1, int param_2, ushort param_3, ushort param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily17Base::FUN_0015d400(UnkFamily17Base *this,undefined4 param_1,int param_2,ushort param_3,ushort param_4){
		int iVar1;
		void *pvVar2;
		int iVar3;
		pvVar2 = VirtualPool::AllocateMemory(0x402);
		if (pvVar2 == (void *)0x0) {
		pvVar2 = (void *)0x0;
		}
		else {
		*(undefined *)((int)pvVar2 + 0x400) = 0;
		}
		iVar3 = 0;
		while( true ) {
		*(ushort *)((int)pvVar2 + (uint)*(byte *)((int)pvVar2 + 0x400) * 2) = param_3;
		*(ushort *)((int)pvVar2 + (uint)*(byte *)((int)pvVar2 + 0x400) * 2 + 0x200) = param_4;
		*(char *)((int)pvVar2 + 0x400) = *(char *)((int)pvVar2 + 0x400) + '\x01';
		iVar1 = *(int *)(*(int *)(this->ptrArray[param_3] + 4) + (uint)param_4 * 4);
		iVar3 = iVar3 + 1;
		if (0xfe < iVar3) {
		return;
		}
		param_4 = *(ushort *)(iVar1 + 0x1a);
		if (param_4 == 0xff) break;
		param_3 = *(ushort *)(iVar1 + 0x18);
		*(undefined2 *)(iVar1 + 0x1a) = 0xff;
		if (iVar1 == param_2) {
		return;
		}
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily17Base::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily17Base * __fastcall UnkFamily17Base::Construct(UnkFamily17Base *this){
		int i;
		undefined **arrayPtr;
		this->vtable = (UnkFamily17Base_VTable *)&UnkFamily17_VT_Base;
		arrayPtr = this->ptrArray;
		for (i = 0x80;
		 i != 0;
		 i = i + -1) {
		*arrayPtr = (undefined *)0x0;
		arrayPtr = arrayPtr + 1;
		}
		DAT_004958a0 = 0;
		return this;
		}
		
	*/
	return;
}

uint UnkFamily17Base::FUN_00160f20(UnkFamily17Data* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Could not reconcile some variable overlaps undefined4 __thiscall UnkFamily17Base::FUN_00160f20(UnkFamily17Base *this,UnkFamily17Data *param_1){
		int *piVar1;
		undefined2 uVar2;
		undefined2 uVar3;
		undefined4 uVar4;
		int iVar5;
		void *this_00;
		int iVar6;
		uint i;
		float fVar7;
		float fVar9;
		float fVar10;
		float fVar11;
		uint uVar8;
		char cVar9;
		float *pfVar10;
		uint uStack52;
		uint uStack48;
		int iStack44;
		undefined4 uStack28;
		undefined4 uStack24;
		float fStack20;
		undefined *puStack16;
		float local_c;
		UnkFamily17Data *pUStack4;
		FUN_0015d3b0(this);
		this->unkPtr = &param_1->flags;
		fVar7 = *(float *)(*(int *)(this->ptrArray[param_1->index2] + 4) + (uint)param_1->field10_0x1c * 4);
		uVar4 = *(undefined4 *)(*(int *)(this->ptrArray[param_1->index1] + 4) + (uint)param_1->field11_0x1e * 4);
		this->field2052_0xa0c = 0;
		local_c = fVar7;
		_fVar9 = (float10)(*(code *)this->vtable->GetDistance2)(fVar7,uVar4);
		this->field2053_0xa10 = (float)_fVar9;
		this->field2049_0xa04 = fVar7;
		this->field2050_0xa08 = param_1->index2;
		this->field2051_0xa0a = param_1->field10_0x1c;
		*(undefined2 *)((int)fVar7 + 0x1a) = 0xff;
		uStack48 = 0x7f;
		i = 0x7f;
		do {
		iVar5 = *(int *)(&this->field_0x214 + i * 0x10);
		puStack16 = &this->field_0x214 + i * 0x10;
		if (iVar5 == iStack44) {
		i = (uint)*(ushort *)(puStack16 + 4);
		FUN_0015d400(this,param_1,(int)fVar7,*(ushort *)(puStack16 + 4),*(ushort *)(puStack16 + 6));
		return i;
		}
		uVar2 = *(undefined2 *)(puStack16 + 4);
		uVar3 = *(undefined2 *)(puStack16 + 6);
		uStack52 = i + 1;
		uVar8 = 0;
		if ((*(uint *)(iVar5 + 0x10) >> 0xf & 0x1f) != 0) {
		pfVar10 = (float *)(&this->field_0x230 + i * 0x10);
		do {
		cVar9 = (char)(uVar8 >> 0x18);
		this_00 = *(void **)(*(int *)(iVar5 + 0x14) + (uVar8 >> 0x18) * 4);
		iVar6 = FUN_0016c420(this_00,iVar5,(int)this,(ushort *)&uStack24,(ushort *)&uStack28);
		if ((iVar6 != 0) && ((*(uint *)(iVar6 + 0x10) & 0x7fff) != DAT_004958a0)) {
		_fVar10 = (float10)(*(code *)this->vtable->GetDistance1)(this_00,iVar5,iVar6);
		if (FLOAT_00386394 < (float)_fVar10) {
		*(uint *)(iVar6 + 0x10) =*(uint *)(iVar6 + 0x10) ^ (*(uint *)(iVar6 + 0x10) ^ DAT_004958a0) & 0x7fff;
		if (iVar6 == iStack44) {
		*(undefined2 *)(iVar6 + 0x18) = uVar2;
		*(undefined2 *)(iVar6 + 0x1a) = uVar3;
		FUN_0015d400(this,pUStack4,(int)fStack20,(ushort)uStack24,(ushort)uStack28);
		return pUStack4;
		}
		local_c = *(float *)(puStack16 + 8) + (float)_fVar10;
		_fVar11 = (float10)(*(code *)this->vtable->GetDistance2)(iVar6,iStack44);
		if (*pfVar10 <= (float)_fVar11 + local_c) {
		if (uStack48 == 0xfe) {
		return 0;
		}
		i = uStack48 + 1;
		uStack48 = i;
		}
		else {
		if (uStack52 == 0) {
		return 0;
		}
		i = uStack52 - 1;
		pfVar10 = pfVar10 + -4;
		uStack52 = i;
		}
		piVar1 = (int *)(&this->field_0x214 + (i & 0xffff) * 0x10);
		*(undefined2 *)(piVar1 + 1) = (undefined2)uStack24;
		*piVar1 = iVar6;
		*(undefined2 *)((int)piVar1 + 6) = (undefined2)uStack28;
		piVar1[2] = (int)local_c;
		piVar1[3] = (int)((float)_fVar11 + local_c);
		*(undefined2 *)(iVar6 + 0x18) = uVar2;
		*(undefined2 *)(iVar6 + 0x1a) = uVar3;
		}
		}
		uVar8 = (uint)(byte)(cVar9 + 1U) << 0x18;
		fVar7 = fStack20;
		param_1 = pUStack4;
		}
		 while ((byte)(cVar9 + 1U) < ((byte)(*(uint *)(iVar5 + 0x10) >> 0xf) & 0x1f));
		}
		i = uStack52;
		}
		 while (uStack52 <= uStack48);
		param_1->flags = param_1->flags | 0x400;
		return 0;
		}
		
	*/
	return 0;
}

void UnkFamily17Base::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily17Base * __thiscall UnkFamily17Base::Dispose(UnkFamily17Base *this,byte param_1){
		this->vtable = (UnkFamily17Base_VTable *)&UnkFamily17_VT_Base;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

float UnkFamily17Base::GetDistance1(Vector4* vec1, Vector4* vec2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float UnkFamily17Base::GetDistance1(UnkFamily17Base *this,Vector4 *vec1,Vector4 *vec2){
		float fVar1;
		float fVar2;
		float fVar3;
		fVar1 = vec1->x - vec2->x;
		fVar3 = vec1->y - vec2->y;
		fVar2 = vec1->z - vec2->z;
		return fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
		}
		
	*/
	return 0.0f;
}

float UnkFamily17Base::GetDistance2(Vector4* vec1, Vector4* vec2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float UnkFamily17Base::GetDistance2(Vector4 *vec1,Vector4 *vec2){
		float fVar1;
		float fVar2;
		float fVar3;
		fVar1 = vec1->x - vec2->x;
		fVar3 = vec1->y - vec2->y;
		fVar2 = vec1->z - vec2->z;
		return fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2;
		}
		
	*/
	return 0.0f;
}

