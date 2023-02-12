#include "headers/Unknown/Families/Families2X/Family29/UnkFamily29A.h"
uint UnkFamily29A::FUN_001445d0(float* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall UnkFamily29A::FUN_001445d0(UnkFamily29A *this,float *param_1){
		int iVar1;
		undefined4 uVar2;
		D3DXCOLOR *pDVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		iVar1 = 0;
		pDVar3 = &this->field1_0x20;
		while ((param_1[iVar1] < pDVar3[1].R || param_1[iVar1] == pDVar3[1].R &&(pDVar3->R < param_1[iVar1] || pDVar3->R == param_1[iVar1]))) {
		iVar1 = iVar1 + 1;
		pDVar3 = (D3DXCOLOR *)&pDVar3->G;
		if (2 < iVar1) {
		LAB_00144612:fVar4 = *param_1 - (this->parent).color.R;
		fVar5 = param_1[1] - (this->parent).color.G;
		fVar6 = param_1[2] - (this->parent).color.B;
		if ((((fVar4 <= 0.0 - (this->field3_0x40).R) || (fVar5 <= 0.0 - (this->field3_0x40).G)) ||(fVar6 <= 0.0 - (this->field3_0x40).B)) ||((((this->field3_0x40).R <= fVar4 || ((this->field3_0x40).G <= fVar5)) ||(uVar2 = 1, (this->field3_0x40).B <= fVar6)))) {
		uVar2 = 2;
		}
		return uVar2;
		}
		}
		if (iVar1 < 3) {
		return 0;
		}
		goto LAB_00144612;
		}
		
	*/
	return 0;
}

void UnkFamily29A::Construct(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily29A * __thiscall UnkFamily29A::Construct(UnkFamily29A *this,int *param_1){
		float *pfVar1;
		float fVar2;
		float fVar3;
		float *pfVar4;
		char cVar5;
		float **ppfVar6;
		float fVar7;
		fVar3 = FLOAT_003935e8;
		fVar2 = FLOAT_0038639c;
		(this->parent).vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_A;
		(this->field2_0x30).A = fVar2;
		(this->field2_0x30).B = fVar3;
		(this->field2_0x30).G = fVar3;
		(this->field2_0x30).R = fVar3;
		(this->field1_0x20).R = fVar3;
		(this->field1_0x20).G = (this->field2_0x30).G;
		(this->field1_0x20).B = (this->field2_0x30).B;
		(this->field1_0x20).A = (this->field2_0x30).A;
		(this->field2_0x30).R = 0.0 - (this->field2_0x30).R;
		(this->field2_0x30).G = 0.0 - (this->field2_0x30).G;
		(this->field2_0x30).B = 0.0 - (this->field2_0x30).B;
		cVar5 = (*(code *)PTR_IsEnd_00393704)();
		while (cVar5 == '\0') {
		ppfVar6 = (float **)(*(code *)PTR_Get_00393708)();
		pfVar4 = *ppfVar6;
		fVar2 = (this->field1_0x20).R;
		if (*pfVar4 <= fVar2 && fVar2 != *pfVar4) {
		(this->field1_0x20).R = *pfVar4;
		}
		if ((this->field2_0x30).R <= *pfVar4 && *pfVar4 != (this->field2_0x30).R) {
		(this->field2_0x30).R = *pfVar4;
		}
		fVar2 = (this->field1_0x20).G;
		if (pfVar4[1] <= fVar2 && fVar2 != pfVar4[1]) {
		(this->field1_0x20).G = pfVar4[1];
		}
		pfVar1 = &(this->field2_0x30).G;
		if (*pfVar1 <= pfVar4[1] && pfVar4[1] != *pfVar1) {
		(this->field2_0x30).G = pfVar4[1];
		}
		fVar2 = (this->field1_0x20).B;
		if (pfVar4[2] <= fVar2 && fVar2 != pfVar4[2]) {
		(this->field1_0x20).B = pfVar4[2];
		}
		pfVar1 = &(this->field2_0x30).B;
		if (*pfVar1 <= pfVar4[2] && pfVar4[2] != *pfVar1) {
		(this->field2_0x30).B = pfVar4[2];
		}
		cVar5 = (*(code *)PTR_IsEnd_00393704)();
		}
		(this->field3_0x40).R = (this->field2_0x30).R;
		(this->field3_0x40).G = (this->field2_0x30).G;
		(this->field3_0x40).B = (this->field2_0x30).B;
		(this->field3_0x40).A = (this->field2_0x30).A;
		(this->field3_0x40).R = (this->field1_0x20).R + (this->field3_0x40).R;
		(this->field3_0x40).G = (this->field1_0x20).G + (this->field3_0x40).G;
		(this->field3_0x40).B = (this->field1_0x20).B + (this->field3_0x40).B;
		fVar2 = FLOAT_00386ab4;
		(this->field3_0x40).R = (this->field3_0x40).R * FLOAT_00386ab4;
		(this->field3_0x40).G = (this->field3_0x40).G * fVar2;
		(this->field3_0x40).B = (this->field3_0x40).B * fVar2;
		(this->parent).color.R = (this->field3_0x40).R;
		(this->parent).color.G = (this->field3_0x40).G;
		(this->parent).color.B = (this->field3_0x40).B;
		(this->field3_0x40).R = (this->field3_0x40).R - (this->field1_0x20).R;
		(this->field3_0x40).G = (this->field3_0x40).G - (this->field1_0x20).G;
		fVar7 = (this->field3_0x40).B - (this->field1_0x20).B;
		(this->field3_0x40).B = fVar7;
		fVar2 = (this->field3_0x40).R;
		fVar3 = (this->field3_0x40).G;
		(this->parent).color.A = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar7 * fVar7);
		return this;
		}
		
	*/
	return;
}

uint UnkFamily29A::FUN_00151680(void** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall UnkFamily29A::FUN_00151680(UnkFamily29A *this,void **param_1){
		bool bVar1;
		byte bVar2;
		byte bVar3;
		byte bVar4;
		uint uVar5;
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar1 == false) {
		LAB_001516c5:bVar2 = 0;
		}
		else if (param_1[1] == (void *)0x0) {
		bVar2 = UnkFamily27A::FUN_000f3360((UnkFamily27A *)*param_1,(AiPosition *)&this->field1_0x20,0x603,0);
		}
		else {
		if (param_1[1] != (void *)0x1) goto LAB_001516c5;
		bVar2 = UnkFamily27A::FUN_000f33b0((UnkFamily27A *)*param_1,&this->field1_0x20,0x603,0);
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar1 == false) {
		LAB_00151706:bVar3 = 0;
		}
		else if (param_1[1] == (void *)0x0) {
		bVar3 = UnkFamily27A::FUN_000f3360((UnkFamily27A *)*param_1,(AiPosition *)&this->field2_0x30,0x602,0);
		}
		else {
		if (param_1[1] != (void *)0x1) goto LAB_00151706;
		bVar3 = UnkFamily27A::FUN_000f33b0((UnkFamily27A *)*param_1,&this->field2_0x30,0x602,0);
		}
		bVar1 = UnkFamily27A::FUN_0020c0a0((UnkFamily27A *)*param_1);
		if (bVar1 != false) {
		if (param_1[1] == (void *)0x0) {
		bVar4 = UnkFamily27A::FUN_000f3360((UnkFamily27A *)*param_1,(AiPosition *)&this->field3_0x40,0x606,0);
		goto LAB_0015174f;
		}
		if (param_1[1] == (void *)0x1) {
		bVar4 = UnkFamily27A::FUN_000f33b0((UnkFamily27A *)*param_1,&this->field3_0x40,0x606,0);
		goto LAB_0015174f;
		}
		}
		bVar4 = 0;
		LAB_0015174f:uVar5 = UnkFamily29Abstract::FUN_00151130(&this->parent,param_1);
		return uVar5 & 0xffffff00 | (uint)(bVar4 & bVar2 & 1 & bVar3);
		}
		
	*/
	return 0;
}

uint UnkFamily29A::FUN_00151df0(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall UnkFamily29A::FUN_00151df0(UnkFamily29A *this,int *param_1){
		undefined4 uVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		fVar5 = (this->parent).color.B - (float)param_1[6];
		fVar4 = (this->parent).color.G - (float)param_1[5];
		fVar3 = (this->parent).color.R - (float)param_1[4];
		fVar2 = (this->parent).color.A + (float)param_1[7];
		if (fVar2 * fVar2 < fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) {
		return 0;
		}
		uVar1 = (**(code **)(*param_1 + 0x40))();
		switch(uVar1) {
		case 0x1600:case 0x1601:case 0x1605:case 0x160a:uVar1 = FUN_00144840((int)this,(int)param_1);
		return uVar1;
		default:return 0xffffffff;
		case 0x1604:uVar1 = FUN_00144930(this,(int)param_1);
		return uVar1;
		case 0x1606:uVar1 = FUN_00151770(this,(int)param_1);
		return uVar1;
		case 0x1608:uVar1 = (*(code *)((this->parent).vtable)->field4_0x10)(param_1 + 4,param_1[7]);
		return uVar1;
		}
		}
		
	*/
	return 0;
}

void UnkFamily29A::FUN_001515e0(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily29A::FUN_001515e0(UnkFamily29A *this,int *param_1){
		(**(code **)(*param_1 + 4))(&(this->parent).color,0x10,1);
		(**(code **)(*param_1 + 4))(&this->field1_0x20,0x10,1);
		(**(code **)(*param_1 + 4))(&this->field2_0x30,0x10,1);
		(**(code **)(*param_1 + 4))(&this->field3_0x40,0x10,1);
		return;
		}
		
	*/
	return;
}

void UnkFamily29A::Construct_5(UnkFamily29A* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily29A * __thiscall UnkFamily29A::Construct(UnkFamily29A *this,UnkFamily29A *param_1){
		float alpha;
		alpha = (param_1->parent).color.A;
		(this->parent).vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_Abstract;
		D3DXCOLOR::D3DXCOLOR(&(this->parent).color,&(param_1->parent).color);
		(this->parent).color.A = alpha;
		(this->parent).vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_A;
		(this->field1_0x20).R = (param_1->field1_0x20).R;
		(this->field1_0x20).G = (param_1->field1_0x20).G;
		(this->field1_0x20).B = (param_1->field1_0x20).B;
		(this->field1_0x20).A = (param_1->field1_0x20).A;
		(this->field2_0x30).R = (param_1->field2_0x30).R;
		(this->field2_0x30).G = (param_1->field2_0x30).G;
		(this->field2_0x30).B = (param_1->field2_0x30).B;
		(this->field2_0x30).A = (param_1->field2_0x30).A;
		(this->field3_0x40).R = (param_1->field3_0x40).R;
		(this->field3_0x40).G = (param_1->field3_0x40).G;
		(this->field3_0x40).B = (param_1->field3_0x40).B;
		(this->field3_0x40).A = (param_1->field3_0x40).A;
		return this;
		}
		
	*/
	return;
}

void UnkFamily29A::FUN_001363c0(uint param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily29A::FUN_001363c0(UnkFamily29A *this,undefined4 param_1,undefined4 param_2){
		(*(code *)(this->parent).vtable[1].Dispose)(param_1,param_2,&this->field1_0x20,&this->field2_0x30);
		return;
		}
		
	*/
	return;
}

void UnkFamily29A::FUN_00136410() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined UnkFamily29A::FUN_00136410(void){
		return 0;
		}
		
	*/
	return;
}

uint UnkFamily29A::FUN_00136420() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily29A::FUN_00136420(void){
		return 0x1601;
		}
		
	*/
	return 0;
}

void UnkFamily29A::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily29A * __thiscall UnkFamily29A::Dispose(UnkFamily29A *this,byte param_1){
		(this->parent).vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

uint* UnkFamily29A::FUN_00136450() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __fastcall UnkFamily29A::FUN_00136450(UnkFamily29A *this){
		UnkFamily29A *pUVar1;
		pUVar1 = (UnkFamily29A *)VirtualPool::AllocateMemory(0x50);
		if (pUVar1 != (UnkFamily29A *)0x0) {
		pUVar1 = Construct(pUVar1,this);
		return (undefined4 *)pUVar1;
		}
		return (undefined4 *)0x0;
		}
		
	*/
	return null;
}

void UnkFamily29A::FUN_00144590(uint* param_1, uint* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily29A::FUN_00144590(UnkFamily29A *this,undefined4 *param_1,undefined4 *param_2){
		*param_1 = (this->field1_0x20).R;
		param_1[1] = (this->field1_0x20).G;
		param_1[2] = (this->field1_0x20).B;
		param_1[3] = (this->field1_0x20).A;
		*param_2 = (this->field2_0x30).R;
		param_2[1] = (this->field2_0x30).G;
		param_2[2] = (this->field2_0x30).B;
		param_2[3] = (this->field2_0x30).A;
		return;
		}
		
	*/
	return;
}

void UnkFamily29A::FUN_001446a0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily29A::FUN_001446a0(UnkFamily29A *this){
		(this->parent).vtable = (UnkFamily29Abstract_VTable *)0x0;
		return;
		}
		
	*/
	return;
}

uint UnkFamily29A::FUN_00144b70() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily29A::FUN_00144b70(void){
		return 0;
		}
		
	*/
	return 0;
}

uint UnkFamily29A::FUN_00144b80() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily29A::FUN_00144b80(void){
		return 0;
		}
		
	*/
	return 0;
}

uint UnkFamily29A::FUN_00146bd0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily29A::FUN_00146bd0(void){
		return 0;
		}
		
	*/
	return 0;
}

uint UnkFamily29A::FUN_0014c0f0(float param_2, float* param_3, float* param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily29A::FUN_0014c0f0(UnkFamily29A *this,float param_2,float *param_3,float *param_4){
		undefined *puVar1;
		UnkFamily29Abstract_VTable *pUVar2;
		float fVar3;
		float fVar4;
		fVar4 = *param_3;
		fVar3 = 0.0;
		if (fVar4 < (float)(this->parent).vtable || fVar4 == (float)(this->parent).vtable) {
		pUVar2 = (this->parent).vtable;
		if (*param_4 <= (float)pUVar2 && (float)pUVar2 != *param_4) {
		fVar4 = (float)pUVar2 - *param_4;
		goto LAB_0014c13f;
		}
		}
		else {
		fVar4 = (float)(this->parent).vtable - fVar4;
		LAB_0014c13f:fVar3 = fVar4 * fVar4;
		}
		puVar1 = &(this->parent).field_0x4;
		fVar4 = *(float *)&(this->parent).field_0x4;
		if (param_3[1] < *(float *)puVar1 || param_3[1] == *(float *)puVar1) {
		if (param_4[1] <= fVar4 && fVar4 != param_4[1]) {
		fVar4 = *(float *)&(this->parent).field_0x4 - param_4[1];
		goto LAB_0014c16a;
		}
		}
		else {
		fVar4 = fVar4 - param_3[1];
		LAB_0014c16a:fVar3 = fVar4 * fVar4 + fVar3;
		}
		puVar1 = &(this->parent).field_0x8;
		fVar4 = *(float *)&(this->parent).field_0x8;
		if (param_3[2] < *(float *)puVar1 || param_3[2] == *(float *)puVar1) {
		if (fVar4 < param_4[2] || fVar4 == param_4[2]) goto LAB_0014c1ad;
		fVar4 = *(float *)&(this->parent).field_0x8 - param_4[2];
		}
		else {
		fVar4 = fVar4 - param_3[2];
		}
		fVar3 = fVar4 * fVar4 + fVar3;
		LAB_0014c1ad:if (fVar3 <= 0.0) {
		fVar4 = FUN_00144b90((float *)this,param_3,param_4);
		if (param_2 * param_2 < fVar4) {
		return 1;
		}
		}
		else if (param_2 * param_2 < fVar3) {
		return 0;
		}
		return 2;
		}
		
	*/
	return 0;
}

void UnkFamily29A::FUN_0014c1e0(float* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily29A::FUN_0014c1e0(UnkFamily29A *this,float *param_1){
		FUN_00144980(&(this->field1_0x20).R,&(this->field2_0x30).R,param_1);
		return;
		}
		
	*/
	return;
}

uint UnkFamily29A::FUN_0014c200() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily29A::FUN_0014c200(void){
		return 0;
		}
		
	*/
	return 0;
}

uint UnkFamily29A::FUN_0014c210() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily29A::FUN_0014c210(void){
		return 0;
		}
		
	*/
	return 0;
}

uint UnkFamily29A::FUN_0014c690(int param_1, int* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall UnkFamily29A::FUN_0014c690(UnkFamily29A *this,int param_1,int *param_2){
		uint uVar1;
		uVar1 = (**(code **)(*param_2 + 0x40))();
		if (uVar1 != 0x1608) {
		uVar1 = (**(code **)(*param_2 + 0x40))();
		if (uVar1 != 0x1601) {
		return uVar1 & 0xffffff00;
		}
		FUN_000d3d00(param_1,&(this->field1_0x20).R,(float *)(param_2 + 8));
		FUN_000d3d00(param_1,&(this->field2_0x30).R,(float *)(param_2 + 0xc));
		param_2[0x10] = (int)(this->field3_0x40).R;
		param_2[0x11] = (int)(this->field3_0x40).G;
		param_2[0x12] = (int)(this->field3_0x40).B;
		param_2[0x13] = (int)(this->field3_0x40).A;
		uVar1 = FUN_000d3d00(param_1,&(this->parent).color.R,(float *)(param_2 + 4));
		param_2[7] = (int)(this->parent).color.A;
		}
		return uVar1 & 0xffffff00 | 1;
		}
		
	*/
	return 0;
}

void UnkFamily29A::FUN_00151630(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily29A::FUN_00151630(UnkFamily29A *this,int *param_1){
		(**(code **)(*param_1 + 0xc))(&(this->parent).color,0x10);
		(**(code **)(*param_1 + 0xc))(&this->field1_0x20,0x10);
		(**(code **)(*param_1 + 0xc))(&this->field2_0x30,0x10);
		(**(code **)(*param_1 + 0xc))(&this->field3_0x40,0x10);
		return;
		}
		
	*/
	return;
}

void UnkFamily29A::Unroll(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily29A::Unroll(undefined4 *param_1){
		*param_1 = &UnkFamily29_VT_A;
		return;
		}
		
	*/
	return;
}

void UnkFamily29A::Construct_23(float val) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address UnkFamily29A * __thiscall UnkFamily29A::Construct(UnkFamily29A *this,float val){
		float fVar1;
		(this->parent).color.R = 0.0;
		(this->parent).color.G = 0.0;
		(this->parent).color.B = 0.0;
		(this->parent).color.A = val * _DAT_003935d4;
		fVar1 = FLOAT_0038639c;
		(this->parent).vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_A;
		(this->field1_0x20).R = val;
		(this->field1_0x20).G = val;
		(this->field1_0x20).B = val;
		(this->field1_0x20).A = fVar1;
		(this->field2_0x30).R = val;
		(this->field2_0x30).G = val;
		(this->field2_0x30).B = val;
		(this->field2_0x30).A = fVar1;
		(this->field3_0x40).R = val;
		(this->field3_0x40).G = val;
		(this->field3_0x40).B = val;
		(this->field3_0x40).A = fVar1;
		(this->field1_0x20).R = 0.0 - (this->field1_0x20).R;
		(this->field1_0x20).G = 0.0 - (this->field1_0x20).G;
		(this->field1_0x20).B = 0.0 - (this->field1_0x20).B;
		return this;
		}
		
	*/
	return;
}

void UnkFamily29A::Construct_24(D3DXCOLOR* color, float val) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address UnkFamily29A * __thiscall UnkFamily29A::Construct(UnkFamily29A *this,D3DXCOLOR *color,float val){
		float fVar1;
		(this->parent).vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_Abstract;
		(this->parent).color.R = color->R;
		(this->parent).color.G = color->G;
		(this->parent).color.B = color->B;
		(this->parent).color.A = color->A;
		(this->parent).vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_A;
		(this->parent).color.A = val * _DAT_003935d4;
		(this->field1_0x20).R = color->R;
		(this->field1_0x20).G = color->G;
		(this->field1_0x20).B = color->B;
		(this->field1_0x20).A = color->A;
		fVar1 = FLOAT_0038639c;
		(this->field2_0x30).R = color->R;
		(this->field2_0x30).G = color->G;
		(this->field2_0x30).B = color->B;
		(this->field2_0x30).A = color->A;
		(this->field3_0x40).A = fVar1;
		(this->field3_0x40).R = val;
		(this->field3_0x40).G = val;
		(this->field3_0x40).B = val;
		(this->field2_0x30).R = val + (this->field2_0x30).R;
		(this->field2_0x30).G = (this->field2_0x30).G + val;
		(this->field2_0x30).B = (this->field2_0x30).B + val;
		(this->field1_0x20).R = (this->field1_0x20).R - val;
		(this->field1_0x20).G = (this->field1_0x20).G - val;
		(this->field1_0x20).B = (this->field1_0x20).B - val;
		return this;
		}
		
	*/
	return;
}

void UnkFamily29A::Construct_25(D3DXCOLOR* color1, D3DXCOLOR* color2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily29A * __thiscall UnkFamily29A::Construct(UnkFamily29A *this,D3DXCOLOR *color1,D3DXCOLOR *color2){
		float fVar1;
		float fVar2;
		float fVar3;
		fVar1 = color2->R;
		fVar2 = color2->G;
		fVar3 = color2->B;
		(this->parent).vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_Abstract;
		(this->parent).color.R = color1->R;
		(this->parent).color.G = color1->G;
		(this->parent).color.B = color1->B;
		(this->parent).color.A = color1->A;
		(this->parent).vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_A;
		(this->parent).color.A = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
		(this->field1_0x20).R = color1->R;
		(this->field1_0x20).G = color1->G;
		(this->field1_0x20).B = color1->B;
		(this->field1_0x20).A = color1->A;
		(this->field2_0x30).R = color1->R;
		(this->field2_0x30).G = color1->G;
		(this->field2_0x30).B = color1->B;
		(this->field2_0x30).A = color1->A;
		(this->field3_0x40).R = color2->R;
		(this->field3_0x40).G = color2->G;
		(this->field3_0x40).B = color2->B;
		(this->field3_0x40).A = color2->A;
		(this->field2_0x30).R = (this->field2_0x30).R + color2->R;
		(this->field2_0x30).G = (this->field2_0x30).G + color2->G;
		(this->field2_0x30).B = (this->field2_0x30).B + color2->B;
		(this->field1_0x20).R = (this->field1_0x20).R - color2->R;
		(this->field1_0x20).G = (this->field1_0x20).G - color2->G;
		(this->field1_0x20).B = (this->field1_0x20).B - color2->B;
		return this;
		}
		
	*/
	return;
}

void UnkFamily29A::Construct_26(D3DXCOLOR* color) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily29A * __thiscall UnkFamily29A::Construct(UnkFamily29A *this,D3DXCOLOR *color){
		(this->parent).color.A = SQRT(color->R * color->R + color->G * color->G + color->B * color->B);
		(this->parent).color.R = 0.0;
		(this->parent).color.G = 0.0;
		(this->parent).color.B = 0.0;
		(this->parent).vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_A;
		(this->field1_0x20).R = color->R;
		(this->field1_0x20).G = color->G;
		(this->field1_0x20).B = color->B;
		(this->field1_0x20).A = color->A;
		(this->field2_0x30).R = color->R;
		(this->field2_0x30).G = color->G;
		(this->field2_0x30).B = color->B;
		(this->field2_0x30).A = color->A;
		(this->field3_0x40).R = color->R;
		(this->field3_0x40).G = color->G;
		(this->field3_0x40).B = color->B;
		(this->field3_0x40).A = color->A;
		(this->field1_0x20).R = 0.0 - (this->field1_0x20).R;
		(this->field1_0x20).G = 0.0 - (this->field1_0x20).G;
		(this->field1_0x20).B = 0.0 - (this->field1_0x20).B;
		return this;
		}
		
	*/
	return;
}

