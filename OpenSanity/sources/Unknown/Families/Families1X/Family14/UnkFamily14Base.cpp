#include "headers/Unknown/Families/Families1X/Family14/UnkFamily14Base.h"

#include "headers/Known/Math/Matrix4.h"
#include "headers/Known/Math/Vector2.h"
#include "headers/Known/Game/Chunks/ChunkData.h"
#include "headers/Unknown/AutoClasses/AutoClass25/AutoClass25.h"
void UnkFamily14Base::FUN_0014ba20(ChunkData* chunkData) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __cdecl UnkFamily14Base::FUN_0014ba20(UnkFamily14Base *this,ChunkData *chunkData){
		int iVar1;
		if ((DAT_0049375c != 0) && (iVar1 = 0, 0 < DAT_0049375c)) {
		do {
		FUN_00139af0((void *)(&DAT_00492cc8)[iVar1],this,chunkData);
		iVar1 = iVar1 + 1;
		}
		 while (iVar1 < DAT_0049375c);
		}
		if ((DAT_00493758 != 0) && (iVar1 = 0, 0 < DAT_00493758)) {
		do {
		FUN_00139ba0((void *)(&DAT_00491cc0)[iVar1],this,chunkData);
		iVar1 = iVar1 + 1;
		}
		 while (iVar1 < DAT_00493758);
		}
		DAT_00493758 = 0;
		DAT_0049375c = 0;
		return;
		}
		
	*/
	return;
}

void UnkFamily14Base::FUN_00153b30(float* param_1, float* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __thiscall UnkFamily14Base::FUN_00153b30(UnkFamily14Base *this,float *param_1,float *param_2){
		uint uVar2;
		int iVar3;
		uint uVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		float fVar14;
		float fVar15;
		float fVar16;
		float fVar17;
		float fVar18;
		float fVar19;
		float fVar20;
		float fVar21;
		float fVar22;
		float fVar23;
		float fVar24;
		float fVar25;
		float fVar26;
		float fVar27;
		float fVar28;
		float fVar29;
		float fVar30;
		float fVar31;
		float fVar32;
		float fVar33;
		float fVar34;
		float fVar35;
		float fVar36;
		float fVar37;
		float fVar38;
		float fVar39;
		float fVar40;
		float fVar41;
		float in_xmmTmp2_Dd;
		undefined local_84 [20];
		float local_70;
		float fStack108;
		undefined auVar1 [12];
		fVar5 = (param_1[5] + param_1[1]) * FLOAT_00386ab4;
		fVar26 = (*param_1 + param_1[4]) * FLOAT_00386ab4;
		fVar6 = (fVar26 * *param_2 + fVar5 * param_2[4] + param_2[8] * 0.0 + param_2[0xc]) -(this->field144_0xf0).x;
		fVar5 = (fVar26 * param_2[1] + fVar5 * param_2[5] + param_2[9] * 0.0 + param_2[0xd]) -(this->field144_0xf0).y;
		fVar5 = ROUND(fVar6 * fVar6 + fVar5 * fVar5 + 0.0);
		this->distance = (int)fVar5;
		if (0xffffff < (uint)fVar5) {
		this->distance = 0xffffff;
		}
		fVar5 = *param_2;
		fVar6 = param_2[1];
		fVar26 = param_2[3];
		fVar18 = (this->field13_0x10).m41;
		fVar34 = (this->field13_0x10).m42;
		fVar11 = (this->field13_0x10).m43;
		fVar35 = (this->field13_0x10).m44;
		fVar21 = (this->field13_0x10).m31;
		fVar14 = (this->field13_0x10).m32;
		fVar23 = (this->field13_0x10).m33;
		fVar36 = (this->field13_0x10).m34;
		fVar17 = (this->field13_0x10).m11;
		fVar25 = (this->field13_0x10).m12;
		fVar37 = (this->field13_0x10).m13;
		fVar19 = (this->field13_0x10).m14;
		fVar20 = (this->field13_0x10).m21;
		fVar22 = (this->field13_0x10).m22;
		fVar24 = (this->field13_0x10).m23;
		fVar27 = (this->field13_0x10).m24;
		fVar7 = fVar5 * fVar17 + fVar6 * fVar20 + fVar21 * 0.0 + fVar26 * fVar18;
		fVar9 = fVar5 * fVar25 + fVar6 * fVar22 + fVar14 * 0.0 + fVar26 * fVar34;
		fVar12 = fVar5 * fVar37 + fVar6 * fVar24 + fVar23 * 0.0 + fVar26 * fVar11;
		fVar15 = fVar5 * fVar19 + fVar6 * fVar27 + fVar36 * 0.0 + fVar26 * fVar35;
		fVar5 = param_2[7];
		fVar6 = param_2[5];
		fVar26 = param_2[4];
		fVar28 = param_2[9];
		fVar8 = fVar26 * fVar17 + fVar6 * fVar20 + fVar21 * 0.0 + fVar5 * fVar18;
		fVar10 = fVar26 * fVar25 + fVar6 * fVar22 + fVar14 * 0.0 + fVar5 * fVar34;
		fVar13 = fVar26 * fVar37 + fVar6 * fVar24 + fVar23 * 0.0 + fVar5 * fVar11;
		fVar16 = fVar26 * fVar19 + fVar6 * fVar27 + fVar36 * 0.0 + fVar5 * fVar35;
		fVar5 = param_2[0xb];
		fVar6 = param_2[8];
		fVar26 = param_2[0xf];
		fVar38 = fVar6 * fVar17 + fVar28 * fVar20 + fVar21 * 0.0 + fVar5 * fVar18;
		fVar39 = fVar6 * fVar25 + fVar28 * fVar22 + fVar14 * 0.0 + fVar5 * fVar34;
		fVar40 = fVar6 * fVar37 + fVar28 * fVar24 + fVar23 * 0.0 + fVar5 * fVar11;
		fVar41 = fVar6 * fVar19 + fVar28 * fVar27 + fVar36 * 0.0 + fVar5 * fVar35;
		fVar28 = param_2[0xd];
		local_70 = SUB124(*(undefined (*) [12])(param_2 + 0xc),0);
		fVar5 = *param_1;
		fVar6 = param_1[1];
		fVar18 = local_70 * fVar17 + fVar28 * fVar20 + fVar21 * 0.0 + fVar26 * fVar18;
		fVar21 = local_70 * fVar25 + fVar28 * fVar22 + fVar14 * 0.0 + fVar26 * fVar34;
		fVar23 = local_70 * fVar37 + fVar28 * fVar24 + fVar23 * 0.0 + fVar26 * fVar11;
		fVar25 = local_70 * fVar19 + fVar28 * fVar27 + fVar36 * 0.0 + fVar26 * fVar35;
		auVar1 = *(undefined (*) [12])(param_1 + 4);
		fVar34 = fVar38 * 0.0 + fVar18;
		fVar35 = fVar39 * 0.0 + fVar21;
		fVar36 = fVar40 * 0.0 + fVar23;
		fVar37 = fVar41 * 0.0 + fVar25;
		fVar19 = fVar6 * fVar8;
		fVar22 = fVar6 * fVar10;
		fVar24 = fVar6 * fVar13;
		fVar6 = fVar6 * fVar16;
		fVar31 = fVar5 * fVar7;
		fVar32 = fVar5 * fVar9;
		fVar33 = fVar5 * fVar12;
		fVar5 = fVar5 * fVar15;
		fVar27 = fVar31 + fVar19;
		fVar28 = fVar32 + fVar22;
		fVar29 = fVar33 + fVar24;
		fVar30 = fVar5 + fVar6;
		fVar26 = fVar27 + fVar34;
		fVar11 = fVar28 + fVar35;
		fVar14 = fVar29 + fVar36;
		fVar17 = fVar30 + fVar37;
		_DAT_00494850 = CONCAT412(fVar17,CONCAT48(fVar14,CONCAT44(fVar11,fVar26)));
		fVar20 = 0.0 - fVar17;
		uVar2 = movmskps(local_84,ZEXT1216(CONCAT48(-(uint)(fVar17 < in_xmmTmp2_Dd),CONCAT44(-(uint)(fVar17 < in_xmmTmp2_Dd),-(uint)(fVar14 < fVar20)))) << 0x20);
		iVar3 = movmskps(0x494850,CONCAT412(-(uint)(fVar11 < fVar20),CONCAT48(-(uint)(fVar17 < fVar11),CONCAT44(-(uint)(fVar26 < fVar20),-(uint)(fVar17 < fVar26)))));
		uVar2 = (uVar2 & 3) * 0x10 + iVar3;
		if (uVar2 != 0) {
		local_70 = SUB124(auVar1,0);
		fStack108 = SUB124(auVar1 >> 0x20,0);
		fVar18 = fVar38 * 0.0 + fVar18;
		fVar21 = fVar39 * 0.0 + fVar21;
		fVar23 = fVar40 * 0.0 + fVar23;
		fVar25 = fVar41 * 0.0 + fVar25;
		fVar27 = fVar27 + fVar18;
		fVar28 = fVar28 + fVar21;
		fVar29 = fVar29 + fVar23;
		fVar30 = fVar30 + fVar25;
		_DAT_00494850 = CONCAT412(fVar30,CONCAT48(fVar29,CONCAT44(fVar28,fVar27)));
		fVar26 = 0.0 - fVar30;
		uVar4 = movmskps(local_84,ZEXT1216(CONCAT48(-(uint)(fVar30 < in_xmmTmp2_Dd),CONCAT44(-(uint)(fVar30 < in_xmmTmp2_Dd),-(uint)(fVar29 < fVar26)))) << 0x20);
		iVar3 = movmskps((undefined (*) [12])(param_1 + 4),CONCAT412(-(uint)(fVar28 < fVar26),CONCAT48(-(uint)(fVar30 < fVar28),CONCAT44(-(uint)(fVar27 < fVar26),-(uint)(fVar30 < fVar27)))));
		uVar2 = uVar2 & (uVar4 & 3) * 0x10 + iVar3;
		if (uVar2 != 0) {
		fVar8 = fStack108 * fVar8;
		fVar10 = fStack108 * fVar10;
		fVar13 = fStack108 * fVar13;
		fStack108 = fStack108 * fVar16;
		fVar31 = fVar31 + fVar8;
		fVar32 = fVar32 + fVar10;
		fVar33 = fVar33 + fVar13;
		fVar5 = fVar5 + fStack108;
		fVar26 = fVar31 + fVar34;
		fVar11 = fVar32 + fVar35;
		fVar14 = fVar33 + fVar36;
		fVar17 = fVar5 + fVar37;
		_DAT_00494850 = CONCAT412(fVar17,CONCAT48(fVar14,CONCAT44(fVar11,fVar26)));
		fVar20 = 0.0 - fVar17;
		uVar4 = movmskps(local_84,ZEXT1216(CONCAT48(-(uint)(fVar17 < in_xmmTmp2_Dd),CONCAT44(-(uint)(fVar17 < in_xmmTmp2_Dd),-(uint)(fVar14 < fVar20)))) << 0x20);
		iVar3 = movmskps(iVar3,CONCAT412(-(uint)(fVar11 < fVar20),CONCAT48(-(uint)(fVar17 < fVar11),CONCAT44(-(uint)(fVar26 < fVar20),-(uint)(fVar17 < fVar26)))));
		uVar2 = uVar2 & (uVar4 & 3) * 0x10 + iVar3;
		if (uVar2 != 0) {
		fVar31 = fVar31 + fVar18;
		fVar32 = fVar32 + fVar21;
		fVar33 = fVar33 + fVar23;
		fVar5 = fVar5 + fVar25;
		_DAT_00494850 = CONCAT412(fVar5,CONCAT48(fVar33,CONCAT44(fVar32,fVar31)));
		fVar26 = 0.0 - fVar5;
		uVar4 = movmskps(local_84,ZEXT1216(CONCAT48(-(uint)(fVar5 < in_xmmTmp2_Dd),CONCAT44(-(uint)(fVar5 < in_xmmTmp2_Dd),-(uint)(fVar33 < fVar26)))) << 0x20);
		iVar3 = movmskps(iVar3,CONCAT412(-(uint)(fVar32 < fVar26),CONCAT48(-(uint)(fVar5 < fVar32),CONCAT44(-(uint)(fVar31 < fVar26),-(uint)(fVar5 < fVar31)))));
		uVar2 = uVar2 & (uVar4 & 3) * 0x10 + iVar3;
		if (uVar2 != 0) {
		fVar7 = local_70 * fVar7;
		fVar9 = local_70 * fVar9;
		fVar12 = local_70 * fVar12;
		local_70 = local_70 * fVar15;
		fVar19 = fVar7 + fVar19;
		fVar22 = fVar9 + fVar22;
		fVar24 = fVar12 + fVar24;
		fVar6 = local_70 + fVar6;
		fVar5 = fVar19 + fVar34;
		fVar26 = fVar22 + fVar35;
		fVar11 = fVar24 + fVar36;
		fVar14 = fVar6 + fVar37;
		_DAT_00494850 = CONCAT412(fVar14,CONCAT48(fVar11,CONCAT44(fVar26,fVar5)));
		fVar17 = 0.0 - fVar14;
		uVar4 = movmskps(local_84,ZEXT1216(CONCAT48(-(uint)(fVar14 < in_xmmTmp2_Dd),CONCAT44(-(uint)(fVar14 < in_xmmTmp2_Dd),-(uint)(fVar11 < fVar17)))) << 0x20);
		iVar3 = movmskps(iVar3,CONCAT412(-(uint)(fVar26 < fVar17),CONCAT48(-(uint)(fVar14 < fVar26),CONCAT44(-(uint)(fVar5 < fVar17),-(uint)(fVar14 < fVar5)))));
		uVar2 = uVar2 & (uVar4 & 3) * 0x10 + iVar3;
		if (uVar2 != 0) {
		fVar19 = fVar19 + fVar18;
		fVar22 = fVar22 + fVar21;
		fVar24 = fVar24 + fVar23;
		fVar6 = fVar6 + fVar25;
		_DAT_00494850 = CONCAT412(fVar6,CONCAT48(fVar24,CONCAT44(fVar22,fVar19)));
		fVar5 = 0.0 - fVar6;
		uVar4 = movmskps(local_84,ZEXT1216(CONCAT48(-(uint)(fVar6 < in_xmmTmp2_Dd),CONCAT44(-(uint)(fVar6 < in_xmmTmp2_Dd),-(uint)(fVar24 < fVar5)))) << 0x20);
		iVar3 = movmskps(iVar3,CONCAT412(-(uint)(fVar22 < fVar5),CONCAT48(-(uint)(fVar6 < fVar22),CONCAT44(-(uint)(fVar19 < fVar5),-(uint)(fVar6 < fVar19)))));
		uVar2 = uVar2 & (uVar4 & 3) * 0x10 + iVar3;
		if (uVar2 != 0) {
		fVar7 = fVar7 + fVar8;
		fVar9 = fVar9 + fVar10;
		fVar12 = fVar12 + fVar13;
		local_70 = local_70 + fStack108;
		fVar34 = fVar7 + fVar34;
		fVar35 = fVar9 + fVar35;
		fVar36 = fVar12 + fVar36;
		fVar37 = local_70 + fVar37;
		_DAT_00494850 = CONCAT412(fVar37,CONCAT48(fVar36,CONCAT44(fVar35,fVar34)));
		fVar5 = 0.0 - fVar37;
		uVar4 = movmskps(local_84,ZEXT1216(CONCAT48(-(uint)(fVar37 < in_xmmTmp2_Dd),CONCAT44(-(uint)(fVar37 < in_xmmTmp2_Dd),-(uint)(fVar36 < fVar5)))) <<0x20);
		iVar3 = movmskps(iVar3,CONCAT412(-(uint)(fVar35 < fVar5),CONCAT48(-(uint)(fVar37 < fVar35),CONCAT44(-(uint)(fVar34 < fVar5),-(uint)(fVar37 < fVar34)))));
		uVar2 = uVar2 & (uVar4 & 3) * 0x10 + iVar3;
		if (uVar2 != 0) {
		fVar7 = fVar7 + fVar18;
		fVar9 = fVar9 + fVar21;
		fVar12 = fVar12 + fVar23;
		local_70 = local_70 + fVar25;
		_DAT_00494850 = CONCAT412(local_70,CONCAT48(fVar12,CONCAT44(fVar9,fVar7)));
		fVar5 = 0.0 - local_70;
		uVar4 = movmskps(local_84,ZEXT1216(CONCAT48(-(uint)(local_70 < in_xmmTmp2_Dd),CONCAT44(-(uint)(local_70 <in_xmmTmp2_Dd),-(uint)(fVar12 < fVar5)))) <<0x20);
		iVar3 = movmskps(iVar3,CONCAT412(-(uint)(fVar9 < fVar5),CONCAT48(-(uint)(local_70 < fVar9),CONCAT44(-(uint)(fVar7 < fVar5),-(uint)(local_70 < fVar7)))));
		if ((uVar2 & (uVar4 & 3) * 0x10 + iVar3) != 0) {
		this->field147_0x108 = 0;
		this->field148_0x10c = 0;
		return;
		}
		}
		}
		}
		}
		}
		}
		}
		this->field147_0x108 = 2;
		this->field148_0x10c = 2;
		return;
		}
		
	*/
	return;
}

void UnkFamily14Base::FUN_00154250(Vector2* vec) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily14Base::FUN_00154250(UnkFamily14Base *this,Vector2 *vec){
		byte bVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		fVar2 = vec->x;
		fVar6 = vec->y;
		fVar3 = fVar2 * (this->field13_0x10).m11 + fVar6 * (this->field13_0x10).m21 +(this->field13_0x10).m31 * 0.0 + (this->field13_0x10).m41;
		fVar4 = fVar2 * (this->field13_0x10).m12 + fVar6 * (this->field13_0x10).m22 +(this->field13_0x10).m32 * 0.0 + (this->field13_0x10).m42;
		fVar5 = fVar2 * (this->field13_0x10).m13 + fVar6 * (this->field13_0x10).m23 +(this->field13_0x10).m33 * 0.0 + (this->field13_0x10).m43;
		fVar6 = fVar2 * (this->field13_0x10).m14 + fVar6 * (this->field13_0x10).m24 +(this->field13_0x10).m34 * 0.0 + (this->field13_0x10).m44;
		bVar1 = fVar6 < fVar3;
		fVar2 = 0.0 - fVar6;
		if (fVar3 < fVar2) {
		bVar1 = bVar1 | 2;
		}
		if (fVar6 < fVar4) {
		bVar1 = bVar1 | 4;
		}
		if (fVar4 < fVar2) {
		bVar1 = bVar1 | 8;
		}
		if (fVar6 < fVar5) {
		bVar1 = bVar1 | 0x10;
		}
		if (fVar5 < fVar2) {
		bVar1 = bVar1 | 0x20;
		}
		if (bVar1 != 0) {
		this->field147_0x108 = 0;
		this->field148_0x10c = 0;
		return;
		}
		this->field147_0x108 = 1;
		this->field148_0x10c = 1;
		return;
		}
		
	*/
	return;
}

void UnkFamily14Base::Init() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily14Base::Init(UnkFamily14Base *this){
		AutoClass25 *pAVar1;
		float fVar2;
		Matrix4 local_90;
		Matrix4 local_50;
		fVar2 = FLOAT_0038a828;
		pAVar1 = this->field146_0x104;
		if (pAVar1 == (AutoClass25 *)0x0) {
		(this->field142_0xd0).x = FLOAT_0038a828;
		(this->field142_0xd0).y = fVar2;
		fVar2 = FLOAT_0038639c;
		(this->field142_0xd0).z = FLOAT_0038639c;
		(this->field142_0xd0).w = fVar2;
		}
		else {
		(this->field142_0xd0).x = (pAVar1->vec1).x;
		(this->field142_0xd0).y = (pAVar1->vec1).y;
		(this->field142_0xd0).z = (pAVar1->vec1).z;
		(this->field142_0xd0).w = (pAVar1->vec1).w;
		}
		_D3DDevice_GetTransform@8(1,&local_90);
		_D3DDevice_GetTransform@8(0,&local_50);
		Matrix4::Multiply4443(&local_50,&local_90,&this->field13_0x10);
		this->field147_0x108 = 0;
		this->field148_0x10c = 0;
		this->distance = 0;
		(this->field143_0xe0).x = Vector4_0039ef70.x;
		(this->field143_0xe0).y = Vector4_0039ef70.y;
		(this->field143_0xe0).z = Vector4_0039ef70.z;
		(this->field143_0xe0).w = Vector4_0039ef70.w;
		return;
		}
		
	*/
	return;
}

void UnkFamily14Base::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily14Base * __fastcall UnkFamily14Base::Construct(UnkFamily14Base *this){
		this->vtable = (UnkFamily14Base_VTable *)&UnkFamily14_VT_Base;
		this->field146_0x104 = FontRenderer->field1_0x4;
		Init(this);
		return this;
		}
		
	*/
	return;
}

void UnkFamily14Base::Construct_5(AutoClass25* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily14Base * __thiscall UnkFamily14Base::Construct(UnkFamily14Base *this,AutoClass25 *param_1){
		this->vtable = (UnkFamily14Base_VTable *)&UnkFamily14_VT_Base;
		this->field146_0x104 = param_1;
		Init(this);
		return this;
		}
		
	*/
	return;
}

void UnkFamily14Base::FUN_001535f0(float* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __thiscall UnkFamily14Base::FUN_001535f0(UnkFamily14Base *this,float *param_1){
		uint uVar1;
		int iVar2;
		uint uVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		float in_xmmTmp2_Dd;
		undefined local_44 [64];
		fVar4 = (*param_1 + param_1[4]) * FLOAT_00386ab4 - (this->field144_0xf0).x;
		fVar6 = (param_1[5] + param_1[1]) * FLOAT_00386ab4 - (this->field144_0xf0).y;
		fVar4 = ROUND(fVar4 * fVar4 + fVar6 * fVar6 + 0.0);
		this->distance = (int)fVar4;
		if (0xffffff < (uint)fVar4) {
		this->distance = 0xffffff;
		}
		fVar6 = *param_1;
		fVar10 = param_1[1];
		fVar11 = param_1[4];
		fVar12 = param_1[5];
		fVar5 = fVar6 * (this->field13_0x10).m11 + fVar10 * (this->field13_0x10).m21 +(this->field13_0x10).m31 * 0.0 + (this->field13_0x10).m41;
		fVar7 = fVar6 * (this->field13_0x10).m12 + fVar10 * (this->field13_0x10).m22 +(this->field13_0x10).m32 * 0.0 + (this->field13_0x10).m42;
		fVar8 = fVar6 * (this->field13_0x10).m13 + fVar10 * (this->field13_0x10).m23 +(this->field13_0x10).m33 * 0.0 + (this->field13_0x10).m43;
		fVar9 = fVar6 * (this->field13_0x10).m14 + fVar10 * (this->field13_0x10).m24 +(this->field13_0x10).m34 * 0.0 + (this->field13_0x10).m44;
		_DAT_00494850 = CONCAT412(fVar9,CONCAT48(fVar8,CONCAT44(fVar7,fVar5)));
		fVar13 = 0.0 - fVar9;
		uVar1 = movmskps(0x494850,ZEXT1216(CONCAT48(-(uint)(fVar9 < in_xmmTmp2_Dd),CONCAT44(-(uint)(fVar9 < in_xmmTmp2_Dd),-(uint)(fVar8 < fVar13)))) << 0x20);
		iVar2 = movmskps(local_44,CONCAT412(-(uint)(fVar7 < fVar13),CONCAT48(-(uint)(fVar9 < fVar7),CONCAT44(-(uint)(fVar5 < fVar13),-(uint)(fVar9 < fVar5)))));
		uVar1 = (uVar1 & 3) * 0x10 + iVar2;
		if (uVar1 != 0) {
		fVar5 = fVar6 * (this->field13_0x10).m11 + fVar10 * (this->field13_0x10).m21 +(this->field13_0x10).m31 * 0.0 + (this->field13_0x10).m41;
		fVar7 = fVar6 * (this->field13_0x10).m12 + fVar10 * (this->field13_0x10).m22 +(this->field13_0x10).m32 * 0.0 + (this->field13_0x10).m42;
		fVar8 = fVar6 * (this->field13_0x10).m13 + fVar10 * (this->field13_0x10).m23 +(this->field13_0x10).m33 * 0.0 + (this->field13_0x10).m43;
		fVar9 = fVar6 * (this->field13_0x10).m14 + fVar10 * (this->field13_0x10).m24 +(this->field13_0x10).m34 * 0.0 + (this->field13_0x10).m44;
		_DAT_00494850 = CONCAT412(fVar9,CONCAT48(fVar8,CONCAT44(fVar7,fVar5)));
		fVar13 = 0.0 - fVar9;
		uVar3 = movmskps(local_44,ZEXT1216(CONCAT48(-(uint)(fVar9 < in_xmmTmp2_Dd),CONCAT44(-(uint)(fVar9 < in_xmmTmp2_Dd),-(uint)(fVar8 < fVar13)))) << 0x20);
		iVar2 = movmskps(fVar4,CONCAT412(-(uint)(fVar7 < fVar13),CONCAT48(-(uint)(fVar9 < fVar7),CONCAT44(-(uint)(fVar5 < fVar13),-(uint)(fVar9 < fVar5)))));
		uVar1 = uVar1 & (uVar3 & 3) * 0x10 + iVar2;
		if (uVar1 != 0) {
		fVar4 = fVar6 * (this->field13_0x10).m11 + fVar12 * (this->field13_0x10).m21 +(this->field13_0x10).m31 * 0.0 + (this->field13_0x10).m41;
		fVar5 = fVar6 * (this->field13_0x10).m12 + fVar12 * (this->field13_0x10).m22 +(this->field13_0x10).m32 * 0.0 + (this->field13_0x10).m42;
		fVar7 = fVar6 * (this->field13_0x10).m13 + fVar12 * (this->field13_0x10).m23 +(this->field13_0x10).m33 * 0.0 + (this->field13_0x10).m43;
		fVar8 = fVar6 * (this->field13_0x10).m14 + fVar12 * (this->field13_0x10).m24 +(this->field13_0x10).m34 * 0.0 + (this->field13_0x10).m44;
		_DAT_00494850 = CONCAT412(fVar8,CONCAT48(fVar7,CONCAT44(fVar5,fVar4)));
		fVar9 = 0.0 - fVar8;
		uVar3 = movmskps(local_44,ZEXT1216(CONCAT48(-(uint)(fVar8 < in_xmmTmp2_Dd),CONCAT44(-(uint)(fVar8 < in_xmmTmp2_Dd),-(uint)(fVar7 < fVar9)))) << 0x20);
		iVar2 = movmskps(iVar2,CONCAT412(-(uint)(fVar5 < fVar9),CONCAT48(-(uint)(fVar8 < fVar5),CONCAT44(-(uint)(fVar4 < fVar9),-(uint)(fVar8 < fVar4)))));
		uVar1 = uVar1 & (uVar3 & 3) * 0x10 + iVar2;
		if (uVar1 != 0) {
		fVar4 = fVar6 * (this->field13_0x10).m11 + fVar12 * (this->field13_0x10).m21 +(this->field13_0x10).m31 * 0.0 + (this->field13_0x10).m41;
		fVar5 = fVar6 * (this->field13_0x10).m12 + fVar12 * (this->field13_0x10).m22 +(this->field13_0x10).m32 * 0.0 + (this->field13_0x10).m42;
		fVar7 = fVar6 * (this->field13_0x10).m13 + fVar12 * (this->field13_0x10).m23 +(this->field13_0x10).m33 * 0.0 + (this->field13_0x10).m43;
		fVar6 = fVar6 * (this->field13_0x10).m14 + fVar12 * (this->field13_0x10).m24 +(this->field13_0x10).m34 * 0.0 + (this->field13_0x10).m44;
		_DAT_00494850 = CONCAT412(fVar6,CONCAT48(fVar7,CONCAT44(fVar5,fVar4)));
		fVar8 = 0.0 - fVar6;
		uVar3 = movmskps(local_44,ZEXT1216(CONCAT48(-(uint)(fVar6 < in_xmmTmp2_Dd),CONCAT44(-(uint)(fVar6 < in_xmmTmp2_Dd),-(uint)(fVar7 < fVar8)))) << 0x20);
		iVar2 = movmskps(iVar2,CONCAT412(-(uint)(fVar5 < fVar8),CONCAT48(-(uint)(fVar6 < fVar5),CONCAT44(-(uint)(fVar4 < fVar8),-(uint)(fVar6 < fVar4)))));
		uVar1 = uVar1 & (uVar3 & 3) * 0x10 + iVar2;
		if (uVar1 != 0) {
		fVar4 = fVar11 * (this->field13_0x10).m11 + fVar10 * (this->field13_0x10).m21 +(this->field13_0x10).m31 * 0.0 + (this->field13_0x10).m41;
		fVar6 = fVar11 * (this->field13_0x10).m12 + fVar10 * (this->field13_0x10).m22 +(this->field13_0x10).m32 * 0.0 + (this->field13_0x10).m42;
		fVar5 = fVar11 * (this->field13_0x10).m13 + fVar10 * (this->field13_0x10).m23 +(this->field13_0x10).m33 * 0.0 + (this->field13_0x10).m43;
		fVar7 = fVar11 * (this->field13_0x10).m14 + fVar10 * (this->field13_0x10).m24 +(this->field13_0x10).m34 * 0.0 + (this->field13_0x10).m44;
		_DAT_00494850 = CONCAT412(fVar7,CONCAT48(fVar5,CONCAT44(fVar6,fVar4)));
		fVar8 = 0.0 - fVar7;
		uVar3 = movmskps(local_44,ZEXT1216(CONCAT48(-(uint)(fVar7 < in_xmmTmp2_Dd),CONCAT44(-(uint)(fVar7 < in_xmmTmp2_Dd),-(uint)(fVar5 < fVar8)))) << 0x20);
		iVar2 = movmskps(iVar2,CONCAT412(-(uint)(fVar6 < fVar8),CONCAT48(-(uint)(fVar7 < fVar6),CONCAT44(-(uint)(fVar4 < fVar8),-(uint)(fVar7 < fVar4)))));
		uVar1 = uVar1 & (uVar3 & 3) * 0x10 + iVar2;
		if (uVar1 != 0) {
		fVar4 = fVar11 * (this->field13_0x10).m11 + fVar10 * (this->field13_0x10).m21 +(this->field13_0x10).m31 * 0.0 + (this->field13_0x10).m41;
		fVar6 = fVar11 * (this->field13_0x10).m12 + fVar10 * (this->field13_0x10).m22 +(this->field13_0x10).m32 * 0.0 + (this->field13_0x10).m42;
		fVar5 = fVar11 * (this->field13_0x10).m13 + fVar10 * (this->field13_0x10).m23 +(this->field13_0x10).m33 * 0.0 + (this->field13_0x10).m43;
		fVar10 = fVar11 * (this->field13_0x10).m14 + fVar10 * (this->field13_0x10).m24 +(this->field13_0x10).m34 * 0.0 + (this->field13_0x10).m44;
		_DAT_00494850 = CONCAT412(fVar10,CONCAT48(fVar5,CONCAT44(fVar6,fVar4)));
		fVar7 = 0.0 - fVar10;
		uVar3 = movmskps(local_44,ZEXT1216(CONCAT48(-(uint)(fVar10 < in_xmmTmp2_Dd),CONCAT44(-(uint)(fVar10 < in_xmmTmp2_Dd),-(uint)(fVar5 < fVar7)))) << 0x20);
		iVar2 = movmskps(iVar2,CONCAT412(-(uint)(fVar6 < fVar7),CONCAT48(-(uint)(fVar10 < fVar6),CONCAT44(-(uint)(fVar4 < fVar7),-(uint)(fVar10 < fVar4)))));
		uVar1 = uVar1 & (uVar3 & 3) * 0x10 + iVar2;
		if (uVar1 != 0) {
		fVar4 = fVar11 * (this->field13_0x10).m11 + fVar12 * (this->field13_0x10).m21 +(this->field13_0x10).m31 * 0.0 + (this->field13_0x10).m41;
		fVar6 = fVar11 * (this->field13_0x10).m12 + fVar12 * (this->field13_0x10).m22 +(this->field13_0x10).m32 * 0.0 + (this->field13_0x10).m42;
		fVar10 = fVar11 * (this->field13_0x10).m13 + fVar12 * (this->field13_0x10).m23 +(this->field13_0x10).m33 * 0.0 + (this->field13_0x10).m43;
		fVar5 = fVar11 * (this->field13_0x10).m14 + fVar12 * (this->field13_0x10).m24 +(this->field13_0x10).m34 * 0.0 + (this->field13_0x10).m44;
		_DAT_00494850 = CONCAT412(fVar5,CONCAT48(fVar10,CONCAT44(fVar6,fVar4)));
		fVar7 = 0.0 - fVar5;
		uVar3 = movmskps(local_44,ZEXT1216(CONCAT48(-(uint)(fVar5 < in_xmmTmp2_Dd),CONCAT44(-(uint)(fVar5 < in_xmmTmp2_Dd),-(uint)(fVar10 < fVar7)))) <<0x20);
		iVar2 = movmskps(iVar2,CONCAT412(-(uint)(fVar6 < fVar7),CONCAT48(-(uint)(fVar5 < fVar6),CONCAT44(-(uint)(fVar4 < fVar7),-(uint)(fVar5 < fVar4)))));
		uVar1 = uVar1 & (uVar3 & 3) * 0x10 + iVar2;
		if (uVar1 != 0) {
		fVar4 = fVar11 * (this->field13_0x10).m11 + fVar12 * (this->field13_0x10).m21 +(this->field13_0x10).m31 * 0.0 + (this->field13_0x10).m41;
		fVar6 = fVar11 * (this->field13_0x10).m12 + fVar12 * (this->field13_0x10).m22 +(this->field13_0x10).m32 * 0.0 + (this->field13_0x10).m42;
		fVar10 = fVar11 * (this->field13_0x10).m13 + fVar12 * (this->field13_0x10).m23 +(this->field13_0x10).m33 * 0.0 + (this->field13_0x10).m43;
		fVar11 = fVar11 * (this->field13_0x10).m14 + fVar12 * (this->field13_0x10).m24 +(this->field13_0x10).m34 * 0.0 + (this->field13_0x10).m44;
		_DAT_00494850 = CONCAT412(fVar11,CONCAT48(fVar10,CONCAT44(fVar6,fVar4)));
		fVar12 = 0.0 - fVar11;
		uVar3 = movmskps(local_44,ZEXT1216(CONCAT48(-(uint)(fVar11 < in_xmmTmp2_Dd),CONCAT44(-(uint)(fVar11 < in_xmmTmp2_Dd),-(uint)(fVar10 < fVar12)))) <<0x20);
		iVar2 = movmskps(iVar2,CONCAT412(-(uint)(fVar6 < fVar12),CONCAT48(-(uint)(fVar11 < fVar6),CONCAT44(-(uint)(fVar4 < fVar12),-(uint)(fVar11 < fVar4)))));
		if ((uVar1 & (uVar3 & 3) * 0x10 + iVar2) != 0) {
		this->field147_0x108 = 0;
		this->field148_0x10c = 0;
		return;
		}
		}
		}
		}
		}
		}
		}
		}
		this->field147_0x108 = 2;
		this->field148_0x10c = 2;
		return;
		}
		
	*/
	return;
}

bool UnkFamily14Base::IsB() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool UnkFamily14Base::IsB(void){
		return true;
		}
		
	*/
	return false;
}

bool UnkFamily14Base::IsC() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool UnkFamily14Base::IsC(void){
		return false;
		}
		
	*/
	return false;
}

bool UnkFamily14Base::FUN_00140bf0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool UnkFamily14Base::FUN_00140bf0(UnkFamily14Base *this){
		if (FLOAT_00386394 <*(float *)&this->field_0x8 * Vector4_00494870.z +*(float *)&this->field_0x4 * Vector4_00494870.y + (float)this->vtable * Vector4_00494870.x) {
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

Matrix4* UnkFamily14Base::FUN_00153590(Matrix4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Matrix4 * __thiscall UnkFamily14Base::FUN_00153590(UnkFamily14Base *this,Matrix4 *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		uint distance;
		fVar1 = param_1->m41 - (this->field144_0xf0).x;
		fVar3 = param_1->m42 - (this->field144_0xf0).y;
		fVar2 = param_1->m43 - (this->field144_0xf0).z;
		distance = __ftol2(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
		if (0xffffff < distance) {
		distance = 0xffffff;
		}
		this->distance = distance;
		return param_1;
		}
		
	*/
	return null;
}

bool UnkFamily14Base::IsA() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool UnkFamily14Base::IsA(void){
		return false;
		}
		
	*/
	return false;
}

void UnkFamily14Base::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily14Base * __thiscall UnkFamily14Base::Dispose(UnkFamily14Base *this,byte param_1){
		this->vtable = (UnkFamily14Base_VTable *)&UnkFamily14_VT_Base;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

