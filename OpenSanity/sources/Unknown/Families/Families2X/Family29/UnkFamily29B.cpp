#include "headers/Unknown/Families/Families2X/Family29/UnkFamily29B.h"

#include "headers/Known/Math/Matrix4.h"
#include "headers/Known/Math/Vector4.h"
void UnkFamily29B::Construct(Matrix4* param_1, Vector4* param_2, Vector4* param_3, uint param_4, uint param_5) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily29B * __thiscall UnkFamily29B::Construct(UnkFamily29B *this,Matrix4 *param_1,Vector4 *param_2,Vector4 *param_3,undefined4 param_4,float param_5){
		float fVar1;
		Vector4 local_20;
		(this->parent).color.R = 0.0;
		(this->parent).color.G = 0.0;
		(this->parent).color.B = 0.0;
		(this->parent).color.A = param_5;
		(this->parent).vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_B;
		(this->field1_0x20).R = (this->field1_0x20).R;
		(this->field1_0x20).G = (this->field1_0x20).G;
		(this->field1_0x20).B = (this->field1_0x20).B;
		Matrix4::FUN_000d4000(param_1,param_2,&local_20);
		(this->field2_0x30).R = local_20.x;
		(this->field2_0x30).G = local_20.y;
		(this->field2_0x30).B = local_20.z;
		(this->field2_0x30).A = local_20.w;
		Matrix4::FUN_000d4000(param_1,param_3,&local_20);
		(this->field3_0x40).R = local_20.x;
		(this->field3_0x40).G = local_20.y;
		(this->field3_0x40).B = local_20.z;
		(this->field3_0x40).A = local_20.w;
		(this->parent).color.R = (this->field3_0x40).R;
		(this->parent).color.G = (this->field3_0x40).G;
		(this->parent).color.B = (this->field3_0x40).B;
		(this->parent).color.A = (this->field3_0x40).A;
		(this->parent).color.R = (this->parent).color.R + (this->field2_0x30).R;
		(this->parent).color.G = (this->field2_0x30).G + (this->parent).color.G;
		(this->parent).color.B = (this->field2_0x30).B + (this->parent).color.B;
		fVar1 = FLOAT_00386ab4;
		(this->parent).color.R = (this->parent).color.R * FLOAT_00386ab4;
		(this->parent).color.G = (this->parent).color.G * fVar1;
		(this->parent).color.B = (this->parent).color.B * fVar1;
		return this;
		}
		
	*/
	return;
}

uint UnkFamily29B::FUN_0014c8d0(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall UnkFamily29B::FUN_0014c8d0(UnkFamily29B *this,int *param_1){
		undefined4 uVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		UnkFamily29C UStack64;
		fVar5 = (this->parent).color.B - (float)param_1[6];
		fVar4 = (this->parent).color.G - (float)param_1[5];
		fVar3 = (this->parent).color.R - (float)param_1[4];
		fVar2 = (this->parent).color.A + (float)param_1[7];
		if (fVar2 * fVar2 < fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) {
		return 0;
		}
		uVar1 = (**(code **)(*param_1 + 0x40))();
		switch(uVar1) {
		case 0x1600:case 0x1601:case 0x1605:case 0x160a:return 2;
		default:return 0xffffffff;
		case 0x1604:uVar1 = FUN_00146f90(this,(int)param_1);
		return uVar1;
		case 0x1606:uVar1 = FUN_00146fb0(this,param_1);
		return uVar1;
		case 0x1608:UnkFamily29C::Construct(&UStack64,(D3DXCOLOR *)(param_1 + 4),(float)param_1[7]);
		uVar1 = FUN_00146f90(this,(int)&UStack64);
		return uVar1;
		}
		}
		
	*/
	return 0;
}

uint UnkFamily29B::FUN_0014ca30(void* param_1, int* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall UnkFamily29B::FUN_0014ca30(UnkFamily29B *this,void *param_1,int *param_2){
		float fVar1;
		uint uVar2;
		uint uVar3;
		Vector4 VStack32;
		uVar2 = (**(code **)(*param_2 + 0x40))();
		uVar3 = (*(code *)((this->parent).vtable)->field16_0x40)();
		if (uVar2 == uVar3) {
		param_2[8] = (int)(this->field1_0x20).R;
		param_2[9] = (int)(this->field1_0x20).G;
		param_2[10] = (int)(this->field1_0x20).B;
		Matrix4::FUN_000d4000((Matrix4 *)param_1,(Vector4 *)&this->field2_0x30,&VStack32);
		param_2[0xc] = (int)VStack32.x;
		param_2[0xd] = (int)VStack32.y;
		param_2[0xe] = (int)VStack32.z;
		param_2[0xf] = (int)VStack32.w;
		Matrix4::FUN_000d4000((Matrix4 *)param_1,(Vector4 *)&this->field3_0x40,&VStack32);
		param_2[0x10] = (int)VStack32.x;
		param_2[0x11] = (int)VStack32.y;
		param_2[0x12] = (int)VStack32.z;
		param_2[0x13] = (int)VStack32.w;
		param_2[4] = param_2[0x10];
		param_2[5] = param_2[0x11];
		param_2[6] = param_2[0x12];
		param_2[7] = param_2[0x13];
		param_2[4] = (int)((float)param_2[0xc] + (float)param_2[4]);
		param_2[5] = (int)((float)param_2[0xd] + (float)param_2[5]);
		param_2[6] = (int)((float)param_2[0xe] + (float)param_2[6]);
		fVar1 = FLOAT_00386ab4;
		param_2[4] = (int)((float)param_2[4] * FLOAT_00386ab4);
		param_2[5] = (int)((float)param_2[5] * fVar1);
		param_2[6] = (int)((float)param_2[6] * fVar1);
		return CONCAT31((int3)((uint)param_2[0x13] >> 8),1);
		}
		return uVar3 & 0xffffff00;
		}
		
	*/
	return 0;
}

uint UnkFamily29B::FUN_0014ccb0(int* param_1, float* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall UnkFamily29B::FUN_0014ccb0(UnkFamily29B *this,int *param_1,float *param_2){
		int iVar1;
		uint uVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		byte bStack105;
		float fStack104;
		float fStack96;
		float fStack92;
		float fStack88;
		float fStack84;
		float fStack80;
		float fStack76;
		float fStack72;
		UnkFamily29C appuStack64;
		iVar1 = (**(code **)(*param_1 + 0x40))();
		uVar2 = iVar1 - 0x1600;
		switch(iVar1) {
		case 0x1600:case 0x1601:case 0x1605:case 0x160a:break;
		default:return CONCAT31((int3)(uVar2 >> 8),1);
		case 0x1604:uVar2 = FUN_00147150((int)this,(float *)(param_1 + 4),(float)param_1[7]);
		return uVar2;
		case 0x1606:uVar2 = FUN_0014cb80((int)this,(int)param_1);
		return uVar2;
		}
		fStack88 = (this->field2_0x30).B;
		fStack92 = (this->field2_0x30).G;
		fStack84 = (this->field2_0x30).A;
		fStack96 = (this->field2_0x30).R;
		fVar5 = (this->field2_0x30).B - (this->field3_0x40).B;
		fVar4 = fStack92 - (this->field3_0x40).G;
		fVar3 = fStack96 - (this->field3_0x40).R;
		fStack104 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) / (this->field1_0x20).R;
		fStack72 = FLOAT_0038639c / fStack104;
		fStack80 = fStack72 * ((this->field3_0x40).R - fStack96);
		fStack76 = ((this->field3_0x40).G - fStack92) * fStack72;
		fStack72 = ((this->field3_0x40).B - fStack88) * fStack72;
		bStack105 = 0;
		if (FLOAT_00386394 <= fStack104) {
		while( true ) {
		appuStack64.parent.color.A = (this->field1_0x20).R;
		appuStack64.parent.color.B = fStack88;
		appuStack64.alpha = appuStack64.parent.color.A * appuStack64.parent.color.A;
		appuStack64.parent.vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_C;
		appuStack64.parent.color.R = fStack96;
		appuStack64.parent.color.G = fStack92;
		uVar2 = (**(code **)(*param_1 + 0xc))(&appuStack64);
		if (uVar2 != 0) break;
		fStack96 = fStack80 + fStack96;
		fStack92 = fStack76 + fStack92;
		fStack88 = fStack72 + fStack88;
		fStack104 = fStack104 - FLOAT_0038639c;
		if ((fStack104 < 0.0) &&(uVar2 = (uint)(byte)((fStack104 == FLOAT_003869d8) << 6 | 2U | fStack104 < FLOAT_003869d8)<< 8, fStack104 != FLOAT_003869d8)) {
		fStack96 = (this->field3_0x40).R;
		fStack92 = (this->field3_0x40).G;
		fStack88 = (this->field3_0x40).B;
		fStack84 = (this->field3_0x40).A;
		fStack104 = 0.0;
		}
		if (fStack104 < 0.0) {
		return uVar2 & 0xffffff00;
		}
		}
		param_2[4] = 1.401298e-45;
		bStack105 = 1;
		uVar2 = FUN_0014bb70((int)param_1,&fStack96,param_2);
		}
		return uVar2 & 0xffffff00 | (uint)bStack105;
		}
		
	*/
	return 0;
}

void UnkFamily29B::Construct_4(UnkFamily29B* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily29B * __thiscall UnkFamily29B::Construct(UnkFamily29B *this,UnkFamily29B *other){
		float fVar1;
		fVar1 = (other->parent).color.A;
		(this->parent).vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_Abstract;
		(this->parent).color.R = (other->parent).color.R;
		(this->parent).color.G = (other->parent).color.G;
		(this->parent).color.B = (other->parent).color.B;
		(this->parent).color.A = (other->parent).color.A;
		(this->parent).color.A = fVar1;
		(this->parent).vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_B;
		(this->field1_0x20).R = (other->field1_0x20).R;
		(this->field1_0x20).G = (other->field1_0x20).G;
		(this->field1_0x20).B = (other->field1_0x20).B;
		(this->field2_0x30).R = (other->field2_0x30).R;
		(this->field2_0x30).G = (other->field2_0x30).G;
		(this->field2_0x30).B = (other->field2_0x30).B;
		(this->field2_0x30).A = (other->field2_0x30).A;
		(this->field3_0x40).R = (other->field3_0x40).R;
		(this->field3_0x40).G = (other->field3_0x40).G;
		(this->field3_0x40).B = (other->field3_0x40).B;
		(this->field3_0x40).A = (other->field3_0x40).A;
		return this;
		}
		
	*/
	return;
}

uint UnkFamily29B::FUN_00146de0(float* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall UnkFamily29B::FUN_00146de0(UnkFamily29B *this,float *param_1){
		undefined4 uVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		fVar4 = (this->parent).color.B - param_1[2];
		fVar3 = (this->parent).color.G - param_1[1];
		fVar2 = (this->parent).color.R - *param_1;
		fVar5 = (this->parent).color.A;
		if (fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2 <= fVar5 * fVar5) {
		fVar5 = FUN_000d6cb0(&this->field2_0x30,param_1);
		if (fVar5 <= (this->field1_0x20).G) {
		uVar1 = 1;
		if ((this->field1_0x20).G <= fVar5) {
		uVar1 = 2;
		}
		return uVar1;
		}
		}
		return 0;
		}
		
	*/
	return 0;
}

uint UnkFamily29B::FUN_00146e80(float* param_1, float param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall UnkFamily29B::FUN_00146e80(UnkFamily29B *this,float *param_1,float param_2){
		undefined4 uVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		fVar3 = param_2 + (this->field1_0x20).R;
		fVar6 = (this->parent).color.B - param_1[2];
		fVar5 = (this->parent).color.G - param_1[1];
		fVar2 = (this->field1_0x20).B + fVar3;
		fVar4 = (this->parent).color.R - *param_1;
		if (fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4 <= fVar2 * fVar2) {
		fVar2 = FUN_000d6cb0(&this->field2_0x30,param_1);
		if (fVar2 <= fVar3 * fVar3) {
		uVar1 = 1;
		if ((this->field1_0x20).R <= SQRT(fVar2) + param_2) {
		uVar1 = 2;
		}
		return uVar1;
		}
		}
		return 0;
		}
		
	*/
	return 0;
}

uint UnkFamily29B::FUN_00146f50() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily29B::FUN_00146f50(void){
		return 0;
		}
		
	*/
	return 0;
}

uint UnkFamily29B::FUN_00146f60() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily29B::FUN_00146f60(void){
		return 0;
		}
		
	*/
	return 0;
}

uint UnkFamily29B::FUN_00146f70() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily29B::FUN_00146f70(void){
		return 0;
		}
		
	*/
	return 0;
}

void UnkFamily29B::FUN_00146f80() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily29B::FUN_00146f80(UnkFamily29B *this){
		(this->parent).vtable = (UnkFamily29Abstract_VTable *)0x0;
		return;
		}
		
	*/
	return;
}

UnkFamily29B* UnkFamily29B::FUN_0014c9f0(void* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily29B * __thiscall UnkFamily29B::FUN_0014c9f0(UnkFamily29B *this,void *param_1){
		UnkFamily29B *pUVar1;
		pUVar1 = (UnkFamily29B *)VirtualPool::AllocateMemory(0x50);
		if (pUVar1 != (UnkFamily29B *)0x0) {
		pUVar1 = Construct(pUVar1,(Matrix4 *)param_1,(Vector4 *)&this->field2_0x30,(Vector4 *)&this->field3_0x40,&this->field1_0x20,(this->parent).color.A);
		return pUVar1;
		}
		return (UnkFamily29B *)0x0;
		}
		
	*/
	return null;
}

void UnkFamily29B::FUN_00151f20() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined UnkFamily29B::FUN_00151f20(void){
		return 1;
		}
		
	*/
	return;
}

uint UnkFamily29B::FUN_00151f30() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily29B::FUN_00151f30(void){
		return 0x1606;
		}
		
	*/
	return 0;
}

void UnkFamily29B::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily29B * __thiscall UnkFamily29B::Dispose(UnkFamily29B *this,byte param_1){
		(this->parent).vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

uint UnkFamily29B::FUN_00152290() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily29B * __fastcall UnkFamily29B::FUN_00152290(UnkFamily29B *this){
		UnkFamily29B *pUVar1;
		pUVar1 = (UnkFamily29B *)VirtualPool::AllocateMemory(0x50);
		if (pUVar1 != (UnkFamily29B *)0x0) {
		pUVar1 = Construct(pUVar1,this);
		return pUVar1;
		}
		return (UnkFamily29B *)0;
		}
		
	*/
	return 0;
}

void UnkFamily29B::Construct_16(D3DXCOLOR* color1, D3DXCOLOR* color2, float val) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily29B * __thiscall UnkFamily29B::Construct(UnkFamily29B *this,D3DXCOLOR *color1,D3DXCOLOR *color2,float val){
		float fVar1;
		float fVar2;
		float fVar3;
		(this->parent).vtable = (UnkFamily29Abstract_VTable *)&UnkFamily29_VT_B;
		(this->field2_0x30).R = color1->R;
		(this->field2_0x30).G = color1->G;
		(this->field2_0x30).B = color1->B;
		(this->field2_0x30).A = color1->A;
		(this->field3_0x40).R = color2->R;
		(this->field3_0x40).G = color2->G;
		(this->field3_0x40).B = color2->B;
		(this->field3_0x40).A = color2->A;
		(this->field1_0x20).R = val;
		(this->field1_0x20).G = val * val;
		(this->parent).color.R = (this->field3_0x40).R;
		(this->parent).color.G = (this->field3_0x40).G;
		(this->parent).color.B = (this->field3_0x40).B;
		(this->parent).color.A = (this->field3_0x40).A;
		(this->parent).color.R = (this->parent).color.R - (this->field2_0x30).R;
		(this->parent).color.G = (this->parent).color.G - (this->field2_0x30).G;
		(this->parent).color.B = (this->parent).color.B - (this->field2_0x30).B;
		fVar3 = FLOAT_00386ab4;
		(this->parent).color.R = (this->parent).color.R * FLOAT_00386ab4;
		(this->parent).color.G = (this->parent).color.G * fVar3;
		fVar3 = (this->parent).color.B * fVar3;
		(this->parent).color.B = fVar3;
		fVar1 = (this->parent).color.R;
		fVar2 = (this->parent).color.G;
		(this->field1_0x20).B = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
		(this->parent).color.R = (this->field2_0x30).R + (this->parent).color.R;
		(this->parent).color.G = (this->field2_0x30).G + (this->parent).color.G;
		(this->parent).color.B = (this->field2_0x30).B + (this->parent).color.B;
		(this->parent).color.A = (this->field1_0x20).B + (this->field1_0x20).R;
		return this;
		}
		
	*/
	return;
}

