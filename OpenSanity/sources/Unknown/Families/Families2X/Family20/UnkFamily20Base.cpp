#include "headers/Unknown/Families/Families2X/Family20/UnkFamily20Base.h"

#include "headers/Known/Math/Matrix4.h"
#include "headers/Known/Math/Vector2.h"

UnkFamily20Base::UnkFamily20Base()
{
	this->field5_0x30 = 0;
	this->field6_0x34 = 0.0;
	this->field7_0x38 = 0.0;
	this->field8_0x3c = 1;
	this->field9_0x40 = 0;
	this->field10_0x44 = 0;
	this->field3_0x28 = 0.0;
	this->field4_0x2c = 0.0;
}

UnkFamily20Base::~UnkFamily20Base()
{

}

int UnkFamily20Base::FUN_00109e40(float step, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall UnkFamily20Base::FUN_00109e40(UnkFamily20Base *this,float step,undefined4 param_2){
		int i;
		(*(code *)this->vtable->field1_0x4)(step);
		for (i = this->field8_0x3c;
		 i != 0;
		 i = i + -1) {
		if ((this->subStruct).totalSpace != (this->subStruct).occupiedElements) {
		(*(code *)this->vtable->field0_0x0)(step,param_2);
		}
		}
		return (int)(this->subStruct).occupiedElements;
		}
		
	*/
	return 0;
}

void UnkFamily20Base::FUN_00113af0(uint param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily20Base::FUN_00113af0(UnkFamily20Base *this,undefined4 param_1,uint param_2){
		short sVar1;
		short sVar2;
		this->field5_0x30 = param_1;
		sVar1 = (this->subStruct).totalSpace;
		if ((uint)(int)sVar1 < param_2) {
		sVar2 = (this->subStruct).field2_0x6;
		(this->subStruct).field2_0x6 = (short)param_2 - sVar1;
		FUN_0011b650(&this->subStruct);
		(this->subStruct).field2_0x6 = sVar2;
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily20Base::FUN_0010f280(Matrix4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily20Base::FUN_0010f280(UnkFamily20Base *this,Matrix4 *param_1){
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
		IteratorC2 local_d4;
		float local_c8;
		float fStack196;
		float fStack192;
		float fStack188;
		float fStack184;
		float fStack180;
		Matrix4 local_b0;
		Matrix4 MStack112;
		float fStack48;
		float fStack44;
		float fStack40;
		float fStack36;
		int local_14;
		local_14 = SECURITY_COOKIE;
		if ((this->subStruct).occupiedElements != 0) {
		local_d4.collection = (undefined *)&this->subStruct;
		local_d4.parent = (IteratorCBase_VTable *)&IteratorC_VT_2;
		local_d4.index = 0;
		local_d4.minFreeIndex = 0;
		local_c8 = FLOAT_0038e420;
		if (IS_WIDESCREEN == false) {
		local_c8 = FLOAT_0038e41c;
		}
		IteratorC2::Reset(&local_d4);
		cVar3 = (*(local_d4.parent)->IsEnd)((IteratorCAbstract *)&local_d4);
		while (cVar3 == '\0') {
		Matrix4::Construct1(&local_b0);
		puVar4 = (undefined4 *)(*(local_d4.parent)->Get)((IteratorCAbstract *)&local_d4);
		D3DXCOLOR(&fStack192,puVar4);
		piVar1 = (int *)this->field10_0x44;
		fStack196 = fStack184 / this->field6_0x34;
		fVar11 = FLOAT_0038639c;
		local_b0.m22 = FLOAT_0038639c;
		if (piVar1 != (int *)0x0) {
		iVar2 = piVar1[1];
		iVar9 = *piVar1;
		if (FLOAT_0038639c <= fStack196) {
		fVar11 = *(float *)(iVar2 + -8 + iVar9 * 8);
		local_b0.m22 = *(float *)(iVar2 + -4 + iVar9 * 8);
		}
		else {
		fVar10 = (float)(iVar9 + -1) * fStack196;
		iVar9 = (int)fVar10;
		fVar11 = *(float *)(iVar2 + iVar9 * 8);
		local_b0.m22 = *(float *)(iVar2 + 4 + iVar9 * 8);
		fVar10 = fVar10 - (float)iVar9;
		fVar11 = (*(float *)(iVar2 + iVar9 * 8 + 8) - fVar11) * fVar10 + fVar11;
		local_b0.m22 = (*(float *)(iVar2 + 0xc + iVar9 * 8) - local_b0.m22) * fVar10 +local_b0.m22;
		}
		}
		local_b0.m11 = fVar11 * local_c8 * (this->vec).x;
		piVar1 = (int *)this->field11_0x48;
		local_b0.m22 = (this->vec).y * local_b0.m22;
		if (piVar1 != (int *)0x0) {
		iVar2 = piVar1[1];
		if (FLOAT_0038639c <= fStack196) {
		fVar11 = *(float *)(iVar2 + -4 + *piVar1 * 4);
		}
		else {
		fVar10 = (float)(*piVar1 + -1) * fStack196;
		iVar9 = (int)fVar10;
		fVar11 = *(float *)(iVar2 + iVar9 * 4);
		fVar11 = (fVar10 - (float)iVar9) * (*(float *)(iVar2 + iVar9 * 4 + 4) - fVar11) + fVar11;
		}
		FUN_000e2680(&MStack112,(int)((FLOAT_003863a8 / FLOAT_0039f4c0) * fVar11));
		Matrix4::Multiply4443(&local_b0,&MStack112,&local_b0);
		}
		local_b0.m41 = fStack192;
		fStack184 = 0.0;
		fStack180 = FLOAT_0038639c;
		local_b0.m42 = fStack188;
		local_b0.m43 = 0.0;
		local_b0.m44 = FLOAT_0038639c;
		Matrix4::Multiply4443(&local_b0,param_1,&local_b0);
		if ((void *)this->field9_0x40 == (void *)0x0) {
		(**(code **)(*(int *)this->field5_0x30 + 0x14))(&local_b0);
		}
		else {
		FUN_00119880((void *)this->field9_0x40,fStack196,&fStack48);
		lVar5 = __ftol2(fStack48 * FLOAT_00386448);
		lVar6 = __ftol2(fStack44 * FLOAT_00386448);
		lVar7 = __ftol2(fStack40 * FLOAT_00386448);
		lVar8 = __ftol2(fStack36 * FLOAT_00386448);
		(**(code **)(*(int *)this->field5_0x30 + 0x10))(&local_b0,CONCAT13((char)lVar8,CONCAT12((char)lVar7,CONCAT11((char)lVar6,(char)lVar5))));
		}
		IteratorC2::Iterate(&local_d4);
		cVar3 = (*(local_d4.parent)->IsEnd)((IteratorCAbstract *)&local_d4);
		}
		}
		@__security_check_cookie@4(local_14);
		return;
		}
		
	*/
	return;
}

void UnkFamily20Base::FUN_00113b30(Vector2* vec1, Vector2* vec2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily20Base::FUN_00113b30(UnkFamily20Base *this,Vector2 *vec1,Vector2 *vec2){
		short *psVar1;
		int index;
		short fVar8;
		float fVar2;
		float fVar3;
		float fVar1;
		float fVar9;
		fVar3 = PerceptRandom::GetUtilityScoreInternal();
		if (fVar3 < this->field7_0x38) {
		fVar1 = FUN_000d4400();
		fVar9 = FUN_000d4400();
		fVar3 = (this->vec).z * (vec2->x - vec1->x) * FLOAT_00386ab4;
		fVar2 = (this->vec).w * (vec2->y - vec1->y) * FLOAT_00386ab4;
		if ((this->subStruct).occupiedElements < (this->subStruct).totalSpace) {
		index = (int)(this->subStruct).lastIndex;
		psVar1 = (this->subStruct).indexes;
		(this->subStruct).lastIndex = psVar1[index];
		psVar1[index] = -1;
		psVar1 = &(this->subStruct).occupiedElements;
		*psVar1 = *psVar1 + 1;
		}
		else {
		FUN_0011b650(&this->subStruct);
		index = FUN_0011ce80(&this->subStruct);
		}
		(this->subStruct).unkArray[index].x = this->field3_0x28 + fVar3 * fVar1;
		(this->subStruct).unkArray[index].y = this->field4_0x2c + fVar2 * fVar9;
		(this->subStruct).unkArray[index].z = 0.0;
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily20Base::FUN_00113c30(float* param_1, float* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __thiscall UnkFamily20Base::FUN_00113c30(UnkFamily20Base *this,float *param_1,float *param_2){
		short *psVar1;
		int index;
		float fVar2;
		float fVar3;
		float local_8;
		float local_4;
		fVar3 = PerceptRandom::GetUtilityScoreInternal();
		if (fVar3 < this->field7_0x38) {
		fVar3 = PerceptRandom::GetUtilityScoreInternal();
		FUN_000d2b50(fVar3 * FLOAT_0039f4c0);
		fVar3 = (this->vec).z * (*param_2 - *param_1) * FLOAT_00386ab4;
		fVar2 = (this->vec).w * (param_2[1] - param_1[1]) * FLOAT_00386ab4;
		fVar3 = SQRT(fVar2 * fVar2 + fVar3 * fVar3);
		FUN_000e2380(&local_8,&local_4);
		if ((this->subStruct).occupiedElements < (this->subStruct).totalSpace) {
		index = (int)(this->subStruct).lastIndex;
		psVar1 = (this->subStruct).indexes;
		(this->subStruct).lastIndex = psVar1[index];
		psVar1[index] = -1;
		psVar1 = &(this->subStruct).occupiedElements;
		*psVar1 = *psVar1 + 1;
		}
		else {
		FUN_0011b650(&this->subStruct);
		index = FUN_0011ce80(&this->subStruct);
		}
		(this->subStruct).unkArray[index].x = local_8 * fVar3 + this->field3_0x28;
		(this->subStruct).unkArray[index].y = local_4 * fVar3 + this->field4_0x2c;
		(this->subStruct).unkArray[index].z = 0.0;
		local_4 = local_4 * _DAT_0039229c;
		(this->subStruct).unkArray[index].a = (short)(int)(local_8 * _DAT_0039229c);
		(this->subStruct).unkArray[index].b = (short)(int)local_4;
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily20Base::FUN_0010f1c0(float param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily20Base::FUN_0010f1c0(UnkFamily20Base *this,float param_1){
		char cVar1;
		undefined *puVar2;
		float fVar3;
		IteratorC1 local_c;
		if ((this->subStruct).occupiedElements != 0) {
		local_c.index = 0;
		local_c.field2_0x6 = 0;
		local_c.collection = (undefined *)&this->subStruct;
		local_c.parent = (IteratorCBase_VTable *)&IteratorC_VT_1;
		IteratorC1::Reset(&local_c);
		cVar1 = (*(local_c.parent)->IsEnd)((IteratorCAbstract *)&local_c);
		while (cVar1 == '\0') {
		puVar2 = (*(local_c.parent)->Get)((IteratorCAbstract *)&local_c);
		fVar3 = param_1 + *(float *)(puVar2 + 8);
		*(float *)(puVar2 + 8) = fVar3;
		if (fVar3 < this->field6_0x34 || fVar3 == this->field6_0x34) {
		IteratorC1::Iterate(&local_c);
		}
		else {
		(*(short **)((int)local_c.collection + 0xc))[local_c.index] =*(short *)((int)local_c.collection + 10);
		*(short *)((int)local_c.collection + 8) = *(short *)((int)local_c.collection + 8) + -1;
		*(short *)((int)local_c.collection + 10) = local_c.index;
		local_c.field2_0x6 = local_c.field2_0x6 + -1;
		(*(local_c.parent)->Iterate)((IteratorCAbstract *)&local_c);
		}
		cVar1 = (*(local_c.parent)->IsEnd)((IteratorCAbstract *)&local_c);
		}
		}
		return;
		}
		
	*/
	return;
}

