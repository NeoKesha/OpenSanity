#include "headers/Unknown/Families/Families2X/Family20/UnkFamily20A.h"

#include "headers/Known/Math/Matrix4.h"
#include "headers/Unknown/Families/Families2X/Family20/UnkFamily20Base.h"
void UnkFamily20A::Construct(UnkFamily20A* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily20A * __fastcall UnkFamily20A::Construct(UnkFamily20A *param_1){
		UnkFamily20Base::Construct(&param_1->parent);
		(param_1->parent).vtable = (UnkFamily20Base_VTable *)&UnkFamily20_VT_A;
		return param_1;
		}
		
	*/
	return;
}

UnkFamily20Base* UnkFamily20A::FUN_000c3ee0(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily20Base * __thiscall UnkFamily20A::FUN_000c3ee0(UnkFamily20A *this,byte param_1){
		UnkFamily20Base::Dispose(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return null;
}

void UnkFamily20A::FUN_0010f560(float param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily20A::FUN_0010f560(UnkFamily20A *this,float param_1){
		float *pfVar1;
		char cVar2;
		float *pfVar3;
		float fVar4;
		IteratorC1 local_c;
		if ((this->parent).subStruct.occupiedElements != 0) {
		local_c.index = 0;
		local_c.field2_0x6 = 0;
		local_c.collection = (undefined *)&(this->parent).subStruct;
		local_c.parent = (IteratorCBase_VTable *)&IteratorC_VT_1;
		IteratorC1::Reset(&local_c);
		cVar2 = (*(local_c.parent)->IsEnd)((IteratorCAbstract *)&local_c);
		while (cVar2 == '\0') {
		pfVar3 = (float *)(*(local_c.parent)->Get)((IteratorCAbstract *)&local_c);
		fVar4 = param_1 + pfVar3[2];
		pfVar3[2] = fVar4;
		pfVar1 = &(this->parent).field6_0x34;
		if (fVar4 < *pfVar1 || fVar4 == *pfVar1) {
		fVar4 = (float)(int)*(short *)((int)pfVar3 + 0xe) * FLOAT_0038d854;
		*pfVar3 = (float)(int)*(short *)(pfVar3 + 3) * FLOAT_0038d854 * param_1 + *pfVar3;
		pfVar3[1] = pfVar3[1] + fVar4 * param_1;
		IteratorC1::Iterate(&local_c);
		}
		else {
		(*(short **)((int)local_c.collection + 0xc))[local_c.index] =*(short *)((int)local_c.collection + 10);
		*(short *)((int)local_c.collection + 8) = *(short *)((int)local_c.collection + 8) + -1;
		*(short *)((int)local_c.collection + 10) = local_c.index;
		local_c.field2_0x6 = local_c.field2_0x6 + -1;
		(*(local_c.parent)->Iterate)((IteratorCAbstract *)&local_c);
		}
		cVar2 = (*(local_c.parent)->IsEnd)((IteratorCAbstract *)&local_c);
		}
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily20A::FUN_0010f670(Matrix4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily20A::FUN_0010f670(UnkFamily20A *this,Matrix4 *param_1){
		int *piVar1;
		int iVar2;
		char cVar3;
		undefined4 *puVar4;
		long lVar5;
		long lVar6;
		long lVar7;
		long lVar8;
		int iVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		IteratorC2 local_b0;
		float local_a4;
		float fStack160;
		float fStack156;
		float fStack152;
		float fStack148;
		Matrix4 local_90;
		Matrix4 MStack80;
		if ((this->parent).subStruct.occupiedElements != 0) {
		local_b0.collection = (undefined *)&(this->parent).subStruct;
		local_b0.parent = (IteratorCBase_VTable *)&IteratorC_VT_2;
		local_b0.index = 0;
		local_b0.minFreeIndex = 0;
		local_a4 = FLOAT_0038e420;
		if (IS_WIDESCREEN == false) {
		local_a4 = FLOAT_0038e41c;
		}
		IteratorC2::Reset(&local_b0);
		cVar3 = (*(local_b0.parent)->IsEnd)((IteratorCAbstract *)&local_b0);
		while (cVar3 == '\0') {
		Matrix4::Construct1(&local_90);
		puVar4 = (undefined4 *)(*(local_b0.parent)->Get)((IteratorCAbstract *)&local_b0);
		D3DXCOLOR(&fStack160,puVar4);
		piVar1 = (int *)(this->parent).field10_0x44;
		fVar12 = fStack152 / (this->parent).field6_0x34;
		iVar2 = piVar1[1];
		iVar9 = *piVar1;
		if (FLOAT_0038639c <= fVar12) {
		local_90.m11 = *(float *)(iVar2 + -8 + iVar9 * 8);
		fVar11 = *(float *)(iVar2 + -4 + iVar9 * 8);
		}
		else {
		fVar10 = (float)(iVar9 + -1) * fVar12;
		iVar9 = (int)fVar10;
		local_90.m11 = *(float *)(iVar2 + iVar9 * 8);
		fVar11 = *(float *)(iVar2 + 4 + iVar9 * 8);
		fVar10 = fVar10 - (float)iVar9;
		local_90.m11 = (*(float *)(iVar2 + iVar9 * 8 + 8) - local_90.m11) * fVar10 + local_90.m11;
		fVar11 = (*(float *)(iVar2 + 0xc + iVar9 * 8) - fVar11) * fVar10 + fVar11;
		}
		piVar1 = (int *)(this->parent).field11_0x48;
		local_90.m11 = (this->parent).vec.x * local_90.m11;
		local_90.m22 = (this->parent).vec.y * fVar11 * local_a4;
		iVar2 = piVar1[1];
		iVar9 = *piVar1;
		if (FLOAT_0038639c <= fVar12) {
		fVar11 = *(float *)(iVar2 + -4 + iVar9 * 4);
		}
		else {
		fVar12 = (float)(iVar9 + -1) * fVar12;
		iVar9 = (int)fVar12;
		fVar11 = *(float *)(iVar2 + iVar9 * 4);
		fVar11 = (fVar12 - (float)iVar9) * (*(float *)(iVar2 + iVar9 * 4 + 4) - fVar11) + fVar11;
		}
		FUN_000e2680(&MStack80,(int)((FLOAT_003863a8 / FLOAT_0039f4c0) * fVar11));
		Matrix4::Multiply4443(&local_90,&MStack80,&local_90);
		local_90.m41 = fStack160;
		fStack152 = 0.0;
		fStack148 = FLOAT_0038639c;
		local_90.m42 = fStack156;
		local_90.m43 = 0.0;
		local_90.m44 = FLOAT_0038639c;
		Matrix4::Multiply4443(&local_90,param_1,&local_90);
		lVar5 = __ftol2((float)this[1].parent.subStruct.vtable * FLOAT_00386448);
		lVar6 = __ftol2(*(float *)&this[1].parent.subStruct.totalSpace * FLOAT_00386448);
		lVar7 = __ftol2(*(float *)&this[1].parent.subStruct.occupiedElements * FLOAT_00386448);
		lVar8 = __ftol2((float)this[1].parent.subStruct.indexes * FLOAT_00386448);
		(**(code **)(*(int *)(this->parent).field5_0x30 + 0x10))(&local_90,CONCAT13((char)lVar8,CONCAT12((char)lVar7,CONCAT11((char)lVar6,(char)lVar5))));
		IteratorC2::Iterate(&local_b0);
		cVar3 = (*(local_b0.parent)->IsEnd)((IteratorCAbstract *)&local_b0);
		}
		}
		return;
		}
		
	*/
	return;
}

