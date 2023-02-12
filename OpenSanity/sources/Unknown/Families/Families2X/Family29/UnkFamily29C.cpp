#include "headers/Unknown/Families/Families2X/Family29/UnkFamily29C.h"

#include "headers/Known/Math/Matrix4.h"
#include "headers/Known/Math/Vector4.h"
void UnkFamily29C::Construct(D3DXCOLOR* color, float val) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily29C::Construct(UnkFamily29C *this,D3DXCOLOR *color,float val){
		(this->parent).vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_Abstract;
		(this->parent).color.R = color->R;
		(this->parent).color.G = color->G;
		(this->parent).color.B = color->B;
		(this->parent).color.A = color->A;
		(this->parent).color.A = val;
		(this->parent).vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_C;
		this->alpha = val * val;
		return;
		}
		
	*/
	return;
}

uint UnkFamily29C::FUN_00148c50(int param_1, int* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall UnkFamily29C::FUN_00148c50(UnkFamily29C *this,int param_1,int *param_2){
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		uint uVar5;
		uint uVar6;
		uVar5 = (**(code **)(*param_2 + 0x40))();
		uVar6 = (*(code *)((this->parent).vtable)->field16_0x40)();
		if (uVar5 == uVar6) {
		param_2[7] = (int)(this->parent).color.A;
		param_2[8] = (int)this->alpha;
		fVar1 = *(float *)(param_1 + 0x30);
		fVar2 = *(float *)(param_1 + 0x34);
		fVar3 = *(float *)(param_1 + 0x38);
		param_2[4] = (int)(this->parent).color.R;
		fVar4 = (this->parent).color.G;
		param_2[5] = (int)fVar4;
		param_2[6] = (int)(this->parent).color.B;
		param_2[7] = (int)(this->parent).color.A;
		param_2[5] = (int)((float)param_2[5] + fVar2);
		param_2[4] = (int)((float)param_2[4] + fVar1);
		param_2[6] = (int)((float)param_2[6] + fVar3);
		return CONCAT31((int3)((uint)fVar4 >> 8),1);
		}
		return uVar6 & 0xffffff00;
		}
		
	*/
	return 0;
}

int UnkFamily29C::FUN_00148fd0(int** param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling int __thiscall UnkFamily29C::FUN_00148fd0(UnkFamily29C *this,int **param_1,int param_2){
		D3DXCOLOR *pDVar1;
		int iVar2;
		int *piVar3;
		int *piVar4;
		char cVar5;
		int iVar6;
		int3 extraout_var;
		UnkFamily29C **ppUVar7;
		int iVar8;
		int iVar9;
		float fVar10;
		float fVar11;
		UnkFamily29C *pUVar12;
		float fVar13;
		float fVar14;
		float fVar15;
		UnkFamily29C *pUStack32;
		UnkFamily29C *pUStack28;
		int iStack24;
		UnkFamily29C *apUStack20 [4];
		float fStack4;
		apUStack20[1] = this;
		iVar6 = (*(code *)((this->parent).vtable)->field6_0x18)(param_1,param_2);
		if (iVar6 != 2) {
		*param_1 = (int *)0x0;
		return iVar6;
		}
		pUStack32 = (UnkFamily29C *)((float)*param_1 - (float)param_1[4]);
		piVar3 = param_1[1];
		piVar4 = param_1[5];
		fVar10 = (float)param_1[2] - (float)param_1[6];
		fStack4 = FUN_000d5f30(param_1,(float *)param_1);
		pDVar1 = &(this->parent).color;
		fVar15 = FUN_000d5f30(param_1,&pDVar1->R);
		fVar14 = (this->parent).color.B - (float)param_1[2];
		fVar13 = (this->parent).color.G - (float)param_1[1];
		fVar11 = pDVar1->R - (float)*param_1;
		fStack4 = (fStack4 - fVar15) + (fStack4 - fVar15);
		cVar5 = FUN_000d4900(fVar10 * fVar10 +((float)piVar3 - (float)piVar4) * ((float)piVar3 - (float)piVar4) +(float)pUStack32 * (float)pUStack32,fStack4,(fVar14 * fVar14 + fVar13 * fVar13 + fVar11 * fVar11) - this->alpha,(float *)apUStack20);
		fStack4 = (float)CONCAT31(extraout_var,cVar5);
		if (fStack4 == 0.0 || extraout_var < 0) {
		fVar13 = (float)param_1[2] - (this->parent).color.B;
		fVar11 = (float)param_1[1] - (this->parent).color.G;
		fVar10 = (float)*param_1 - pDVar1->R;
		if ((fVar13 * fVar13 + fVar11 * fVar11 + fVar10 * fVar10 < this->alpha) &&(fVar13 = (float)param_1[6] - (this->parent).color.B,fVar11 = (float)param_1[5] - (this->parent).color.G, fVar10 = (float)param_1[4] - pDVar1->R,fVar13 * fVar13 + fVar11 * fVar11 + fVar10 * fVar10 < this->alpha)) {
		*param_1 = (int *)0x0;
		return 1;
		}
		*param_1 = (int *)0x0;
		return 0;
		}
		if (param_2 < 1) {
		*param_1 = (int *)apUStack20[0];
		if (1 < (int)fStack4) {
		if ((float)apUStack20[1] < 0.0) {
		apUStack20[1] = (UnkFamily29C *)(0.0 - (float)apUStack20[1]);
		}
		pUVar12 = (UnkFamily29C *)(0.0 - (float)apUStack20[0]);
		if (0.0 <= (float)apUStack20[0]) {
		pUVar12 = apUStack20[0];
		}
		if ((float)apUStack20[1] <= (float)pUVar12) {
		pUVar12 = apUStack20[1];
		}
		*param_1 = (int *)pUVar12;
		}
		}
		else {
		iVar8 = 0;
		ppUVar7 = &pUStack32;
		iVar9 = (int)fStack4;
		if (param_2 < 2) {
		if (3 < (int)fStack4) {
		fVar10 = 0.0 - FLOAT_003a3400;
		iVar2 = (int)fStack4 + -3;
		do {
		if (fVar10 < (float)apUStack20[iVar8] || fVar10 == (float)apUStack20[iVar8]) {
		if (0.0 < (float)apUStack20[iVar8] || (float)apUStack20[iVar8] == 0.0) {
		*ppUVar7 = apUStack20[iVar8];
		}
		else {
		*ppUVar7 = (UnkFamily29C *)0x0;
		}
		ppUVar7 = ppUVar7 + 1;
		}
		else {
		iVar9 = iVar9 + -1;
		}
		if (fVar10 < (float)apUStack20[iVar8 + 1] || fVar10 == (float)apUStack20[iVar8 + 1]) {
		if (0.0 < (float)apUStack20[iVar8 + 1] || (float)apUStack20[iVar8 + 1] == 0.0) {
		*ppUVar7 = apUStack20[iVar8 + 1];
		}
		else {
		*ppUVar7 = (UnkFamily29C *)0x0;
		}
		ppUVar7 = ppUVar7 + 1;
		}
		else {
		iVar9 = iVar9 + -1;
		}
		if (fVar10 < (float)apUStack20[iVar8 + 2] || fVar10 == (float)apUStack20[iVar8 + 2]) {
		if (0.0 < (float)apUStack20[iVar8 + 2] || (float)apUStack20[iVar8 + 2] == 0.0) {
		*ppUVar7 = apUStack20[iVar8 + 2];
		}
		else {
		*ppUVar7 = (UnkFamily29C *)0x0;
		}
		ppUVar7 = ppUVar7 + 1;
		}
		else {
		iVar9 = iVar9 + -1;
		}
		if (fVar10 < (float)apUStack20[iVar8 + 3] || fVar10 == (float)apUStack20[iVar8 + 3]) {
		if (0.0 < (float)apUStack20[iVar8 + 3] || (float)apUStack20[iVar8 + 3] == 0.0) {
		*ppUVar7 = apUStack20[iVar8 + 3];
		}
		else {
		*ppUVar7 = (UnkFamily29C *)0x0;
		}
		ppUVar7 = ppUVar7 + 1;
		}
		else {
		iVar9 = iVar9 + -1;
		}
		iVar8 = iVar8 + 4;
		}
		 while (iVar8 < iVar2);
		}
		if (iVar8 < (int)fStack4) {
		do {
		if (0.0 - FLOAT_003a3400 < (float)apUStack20[iVar8] ||0.0 - FLOAT_003a3400 == (float)apUStack20[iVar8]) {
		if (0.0 < (float)apUStack20[iVar8] || (float)apUStack20[iVar8] == 0.0) {
		*ppUVar7 = apUStack20[iVar8];
		}
		else {
		*ppUVar7 = (UnkFamily29C *)0x0;
		}
		ppUVar7 = ppUVar7 + 1;
		}
		else {
		iVar9 = iVar9 + -1;
		}
		iVar8 = iVar8 + 1;
		}
		 while (iVar8 < (int)fStack4);
		}
		}
		else {
		if (3 < (int)fStack4) {
		fVar10 = 0.0 - FLOAT_003a3400;
		iVar2 = (int)fStack4 + -3;
		do {
		if (fVar10 < (float)apUStack20[iVar8] || fVar10 == (float)apUStack20[iVar8]) {
		if (0.0 < (float)apUStack20[iVar8] || (float)apUStack20[iVar8] == 0.0) {
		if (FLOAT_003a3400 + FLOAT_0038639c < (float)apUStack20[iVar8]) {
		iVar9 = iVar9 + -1;
		goto LAB_001492a6;
		}
		if ((float)apUStack20[iVar8] <= FLOAT_0038639c) {
		*ppUVar7 = apUStack20[iVar8];
		}
		else {
		*ppUVar7 = (UnkFamily29C *)FLOAT_0038639c;
		}
		}
		else {
		*ppUVar7 = (UnkFamily29C *)0x0;
		}
		ppUVar7 = ppUVar7 + 1;
		}
		else {
		iVar9 = iVar9 + -1;
		}
		LAB_001492a6:if (fVar10 < (float)apUStack20[iVar8 + 1] || fVar10 == (float)apUStack20[iVar8 + 1]) {
		if (0.0 < (float)apUStack20[iVar8 + 1] || (float)apUStack20[iVar8 + 1] == 0.0) {
		if (FLOAT_003a3400 + FLOAT_0038639c < (float)apUStack20[iVar8 + 1]) {
		iVar9 = iVar9 + -1;
		goto LAB_001492ec;
		}
		if ((float)apUStack20[iVar8 + 1] <= FLOAT_0038639c) {
		*ppUVar7 = apUStack20[iVar8 + 1];
		}
		else {
		*ppUVar7 = (UnkFamily29C *)FLOAT_0038639c;
		}
		}
		else {
		*ppUVar7 = (UnkFamily29C *)0x0;
		}
		ppUVar7 = ppUVar7 + 1;
		}
		else {
		iVar9 = iVar9 + -1;
		}
		LAB_001492ec:if (fVar10 < (float)apUStack20[iVar8 + 2] || fVar10 == (float)apUStack20[iVar8 + 2]) {
		if (0.0 < (float)apUStack20[iVar8 + 2] || (float)apUStack20[iVar8 + 2] == 0.0) {
		if (FLOAT_003a3400 + FLOAT_0038639c < (float)apUStack20[iVar8 + 2]) {
		iVar9 = iVar9 + -1;
		goto LAB_00149332;
		}
		if ((float)apUStack20[iVar8 + 2] <= FLOAT_0038639c) {
		*ppUVar7 = apUStack20[iVar8 + 2];
		}
		else {
		*ppUVar7 = (UnkFamily29C *)FLOAT_0038639c;
		}
		}
		else {
		*ppUVar7 = (UnkFamily29C *)0x0;
		}
		ppUVar7 = ppUVar7 + 1;
		}
		else {
		iVar9 = iVar9 + -1;
		}
		LAB_00149332:if (fVar10 < (float)apUStack20[iVar8 + 3] || fVar10 == (float)apUStack20[iVar8 + 3]) {
		if (0.0 < (float)apUStack20[iVar8 + 3] || (float)apUStack20[iVar8 + 3] == 0.0) {
		if (FLOAT_003a3400 + FLOAT_0038639c < (float)apUStack20[iVar8 + 3]) {
		iVar9 = iVar9 + -1;
		goto LAB_00149378;
		}
		if ((float)apUStack20[iVar8 + 3] <= FLOAT_0038639c) {
		*ppUVar7 = apUStack20[iVar8 + 3];
		}
		else {
		*ppUVar7 = (UnkFamily29C *)FLOAT_0038639c;
		}
		}
		else {
		*ppUVar7 = (UnkFamily29C *)0x0;
		}
		ppUVar7 = ppUVar7 + 1;
		}
		else {
		iVar9 = iVar9 + -1;
		}
		LAB_00149378:iVar8 = iVar8 + 4;
		}
		 while (iVar8 < iVar2);
		}
		if (iVar8 < (int)fStack4) {
		do {
		if (0.0 - FLOAT_003a3400 < (float)apUStack20[iVar8] ||0.0 - FLOAT_003a3400 == (float)apUStack20[iVar8]) {
		if (0.0 < (float)apUStack20[iVar8] || (float)apUStack20[iVar8] == 0.0) {
		if (FLOAT_003a3400 + FLOAT_0038639c < (float)apUStack20[iVar8]) {
		iVar9 = iVar9 + -1;
		goto LAB_001493d8;
		}
		if ((float)apUStack20[iVar8] <= FLOAT_0038639c) {
		*ppUVar7 = apUStack20[iVar8];
		}
		else {
		*ppUVar7 = (UnkFamily29C *)FLOAT_0038639c;
		}
		}
		else {
		*ppUVar7 = (UnkFamily29C *)0x0;
		}
		ppUVar7 = ppUVar7 + 1;
		}
		else {
		iVar9 = iVar9 + -1;
		}
		LAB_001493d8:iVar8 = iVar8 + 1;
		}
		 while (iVar8 < (int)fStack4);
		}
		}
		if (iVar9 < 1) {
		fVar13 = (float)param_1[2] - (this->parent).color.B;
		fVar11 = (float)param_1[1] - (this->parent).color.G;
		fVar10 = (float)*param_1 - pDVar1->R;
		if ((fVar13 * fVar13 + fVar11 * fVar11 + fVar10 * fVar10 < *(float *)(iStack24 + 0x20)) &&(fVar13 = (float)param_1[6] - (this->parent).color.B,fVar11 = (float)param_1[5] - (this->parent).color.G, fVar10 = (float)param_1[4] - pDVar1->R, fVar13 * fVar13 + fVar11 * fVar11 + fVar10 * fVar10 < *(float *)(iStack24 + 0x20))) {
		*param_1 = (int *)0x0;
		return 1;
		}
		*param_1 = (int *)0x0;
		return 0;
		}
		*param_1 = (int *)pUStack32;
		if (1 < iVar9) {
		if ((float)pUStack28 <= (float)pUStack32) {
		pUStack32 = pUStack28;
		}
		*param_1 = (int *)pUStack32;
		return iVar6;
		}
		}
		return iVar6;
		}
		
	*/
	return 0;
}

uint UnkFamily29C::FUN_0014db80(int* param_1, float* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall UnkFamily29C::FUN_0014db80(UnkFamily29C *this,int *param_1,float *param_2){
		float fVar1;
		int iVar2;
		uint uVar3;
		bool bVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		bVar4 = false;
		iVar2 = (**(code **)(*param_1 + 0x40))();
		if (iVar2 == 0x1601) {
		uVar3 = (**(code **)(*param_1 + 0xc))(this);
		bVar4 = uVar3 != 0;
		if (bVar4) {
		param_2[4] = 1.401298e-45;
		uVar3 = FUN_0014bb70((int)param_1,&(this->parent).color.R,param_2);
		}
		}
		else {
		uVar3 = iVar2 - 0x1604;
		if (uVar3 == 0) {
		fVar8 = (this->parent).color.B - (float)param_1[6];
		fVar7 = (this->parent).color.G - (float)param_1[5];
		fVar6 = (this->parent).color.R - (float)param_1[4];
		fVar5 = (float)param_1[7] + (this->parent).color.A;
		if (fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6 <= fVar5 * fVar5) {
		fVar5 = (this->parent).color.G;
		fVar6 = (this->parent).color.B;
		fVar7 = (float)param_1[5];
		fVar8 = (float)param_1[6];
		*param_2 = (this->parent).color.R - (float)param_1[4];
		fVar1 = FLOAT_0038639c;
		param_2[1] = fVar5 - fVar7;
		param_2[2] = fVar6 - fVar8;
		param_2[3] = fVar1;
		param_2[4] = 2.802597e-45;
		return 1;
		}
		return 0;
		}
		}
		return uVar3 & 0xffffff00 | (uint)bVar4;
		}
		
	*/
	return 0;
}

uint UnkFamily29C::FUN_00148ae0(float* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall UnkFamily29C::FUN_00148ae0(UnkFamily29C *this,float *param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		fVar3 = param_1[1] - (this->parent).color.G;
		fVar2 = *param_1 - (this->parent).color.R;
		fVar1 = param_1[2] - (this->parent).color.B;
		fVar1 = (fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2) - this->alpha;
		if (fVar1 == 0.0) {
		return 2;
		}
		if (0.0 < fVar1) {
		return 0;
		}
		return 1;
		}
		
	*/
	return 0;
}

uint UnkFamily29C::FUN_00148b50(float* param_1, float param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall UnkFamily29C::FUN_00148b50(UnkFamily29C *this,float *param_1,float param_2){
		undefined4 uVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		fVar4 = param_1[1] - (this->parent).color.G;
		fVar3 = *param_1 - (this->parent).color.R;
		fVar2 = param_1[2] - (this->parent).color.B;
		fVar3 = fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3;
		fVar2 = (this->parent).color.A;
		fVar4 = fVar2 + param_2;
		uVar1 = 2;
		if (fVar4 * fVar4 < fVar3) {
		return 0;
		}
		fVar2 = fVar2 - param_2;
		if ((FLOAT_00386394 < fVar2) && (fVar3 < fVar2 * fVar2)) {
		uVar1 = 1;
		}
		return uVar1;
		}
		
	*/
	return 0;
}

void UnkFamily29C::FUN_00148be0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily29C::FUN_00148be0(UnkFamily29C *this){
		(this->parent).vtable = (UnkFamily29Abstract_VTable *)0x0;
		return;
		}
		
	*/
	return;
}

UnkFamily29C* UnkFamily29C::FUN_00148bf0(void* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily29C * __thiscall UnkFamily29C::FUN_00148bf0(UnkFamily29C *this,void *param_1){
		D3DXCOLOR *pDVar1;
		float fVar2;
		UnkFamily29C *pUVar3;
		pUVar3 = (UnkFamily29C *)VirtualPool::AllocateMemory(0x30);
		if (pUVar3 != (UnkFamily29C *)0x0) {
		fVar2 = (this->parent).color.A;
		pDVar1 = &(pUVar3->parent).color;
		pDVar1->R = 0.0;
		(pUVar3->parent).color.G = 0.0;
		(pUVar3->parent).color.B = 0.0;
		(pUVar3->parent).color.A = fVar2;
		(pUVar3->parent).vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_C;
		pUVar3->alpha = fVar2 * fVar2;
		Matrix4::FUN_000d4000((Matrix4 *)param_1,(Vector4 *)&(this->parent).color,(Vector4 *)pDVar1);
		return pUVar3;
		}
		return (UnkFamily29C *)0x0;
		}
		
	*/
	return null;
}

int UnkFamily29C::FUN_00148e50(float* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall UnkFamily29C::FUN_00148e50(UnkFamily29C *this,float *param_1,int param_2){
		D3DXCOLOR *pDVar1;
		undefined4 uVar2;
		int iVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float local_c;
		float local_8;
		float local_4;
		iVar3 = 2;
		uVar2 = FUN_000d5f70(param_1,&local_c,this->alpha,FLOAT_003a3400 * FLOAT_003a3400);
		if ((char)uVar2 == '\0') {
		iVar3 = (*(code *)((this->parent).vtable)->field5_0x14)(param_1);
		}
		else {
		pDVar1 = &(this->parent).color;
		fVar6 = FUN_000d5f30(param_1,&pDVar1->R);
		fVar7 = FUN_000d5f30(param_1,param_1);
		fVar6 = fVar6 - fVar7;
		fVar5 = (this->parent).color.G - param_1[1];
		fVar4 = pDVar1->R - *param_1;
		fVar7 = (this->parent).color.B - param_1[2];
		local_4 = fVar7 * fVar7 + fVar5 * fVar5 + fVar4 * fVar4;
		local_8 = local_4 * local_c - fVar6 * fVar6;
		fVar7 = FUN_000d4b80(local_8,0.0);
		if (local_c * this->alpha < fVar7) {
		iVar3 = 0;
		}
		if ((param_2 != 0) && (iVar3 == 2)) {
		if (0.0 <= fVar6) {
		if (1 < param_2) {
		fVar7 = Vector4::Distance((Vector4 *)pDVar1,(Vector4 *)(param_1 + 4));
		if ((local_c < fVar6) && (this->alpha <= fVar7 && fVar7 != this->alpha)) {
		return 0;
		}
		if ((fVar7 < this->alpha) && (local_4 < this->alpha)) {
		return 1;
		}
		}
		}
		else if (this->alpha <= local_4 && local_4 != this->alpha) {
		return 0;
		}
		}
		}
		return iVar3;
		}
		
	*/
	return 0;
}

void UnkFamily29C::FUN_001495a0(float* param_1, uint param_2, uint* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily29C::FUN_001495a0(UnkFamily29C *this,float *param_1,undefined4 param_2,undefined4 *param_3){
		int iVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		iVar1 = (*(code *)((this->parent).vtable)->field7_0x1c)(param_1,param_2,param_3);
		if ((iVar1 != 0) &&(fVar4 = param_1[2] - (this->parent).color.B, fVar3 = param_1[1] - (this->parent).color.G,fVar2 = *param_1 - (this->parent).color.R,fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2 <= this->alpha)) {
		*param_3 = 0;
		}
		return;
		}
		
	*/
	return;
}

uint UnkFamily29C::FUN_0014dac0(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall UnkFamily29C::FUN_0014dac0(UnkFamily29C *this,int *param_1){
		undefined4 uVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		fVar5 = (this->parent).color.B - (float)param_1[6];
		fVar4 = (this->parent).color.G - (float)param_1[5];
		fVar3 = (this->parent).color.R - (float)param_1[4];
		fVar2 = (float)param_1[7] + (this->parent).color.A;
		if (fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3 <= fVar2 * fVar2) {
		uVar1 = (**(code **)(*param_1 + 0x40))();
		switch(uVar1) {
		case 0x1600:case 0x1601:case 0x1605:case 0x160a:uVar1 = FUN_00144930(param_1,(int)this);
		return uVar1;
		default:return 0xffffffff;
		case 0x1604:uVar1 = FUN_00148cf0((int)this,(int)param_1);
		return uVar1;
		}
		}
		return 0;
		}
		
	*/
	return 0;
}

void UnkFamily29C::FUN_00151f60() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined UnkFamily29C::FUN_00151f60(void){
		return 1;
		}
		
	*/
	return;
}

uint UnkFamily29C::FUN_00151f70() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily29C::FUN_00151f70(void){
		return 0x1604;
		}
		
	*/
	return 0;
}

void UnkFamily29C::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily29C * __thiscall UnkFamily29C::Dispose(UnkFamily29C *this,byte param_1){
		(this->parent).vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

UnkFamily29C* UnkFamily29C::FUN_00152510() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily29C * __fastcall UnkFamily29C::FUN_00152510(UnkFamily29C *this){
		UnkFamily29C *pUVar1;
		pUVar1 = (UnkFamily29C *)VirtualPool::AllocateMemory(0x30);
		if (pUVar1 != (UnkFamily29C *)0x0) {
		(pUVar1->parent).vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_Abstract;
		D3DXCOLOR::D3DXCOLOR(&(pUVar1->parent).color,&(this->parent).color);
		(pUVar1->parent).vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_C;
		pUVar1->alpha = this->alpha;
		return pUVar1;
		}
		return (UnkFamily29C *)0x0;
		}
		
	*/
	return null;
}

void UnkFamily29C::Construct_15(Matrix4* param_1, Vector4* param_2, float val) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily29C * __thiscall UnkFamily29C::Construct(UnkFamily29C *this,Matrix4 *param_1,Vector4 *param_2,float val){
		Vector4 *pDVar1;
		pDVar1 = (Vector4 *)&(this->parent).color;
		pDVar1->x = 0.0;
		(this->parent).color.G = 0.0;
		(this->parent).color.B = 0.0;
		(this->parent).color.A = val;
		(this->parent).vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_C;
		this->alpha = val * val;
		Matrix4::FUN_000d4000(param_1,param_2,pDVar1);
		return this;
		}
		
	*/
	return;
}

void UnkFamily29C::Construct_16() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily29C::Construct(UnkFamily29C *this){
		(this->parent).color.R = 0.0;
		(this->parent).color.G = 0.0;
		(this->parent).color.B = 0.0;
		(this->parent).color.A = 0.0;
		(this->parent).vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_C;
		this->alpha = 0.0;
		return;
		}
		
	*/
	return;
}

void UnkFamily29C::Construct_17(float val) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily29C::Construct(UnkFamily29C *this,float val){
		(this->parent).color.R = 0.0;
		(this->parent).color.G = 0.0;
		(this->parent).color.B = 0.0;
		(this->parent).color.A = val;
		(this->parent).vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_C;
		this->alpha = val * val;
		return;
		}
		
	*/
	return;
}

