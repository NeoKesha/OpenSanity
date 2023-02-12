#include "headers/Known/Oleg/Modules/OlegModuleAIA.h"

#include "headers/Known/Oleg/UIElement/UIElementImage.h"
void OlegModuleAIA::Construct(float param_1, UIElementImage* param_2, uint param_3, uint param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OlegModuleAIA * __thiscall OlegModuleAIA::Construct(OlegModuleAIA *this,float param_1,UIElementImage *param_2,undefined4 param_3,undefined4 param_4){
		OlegModuleAI::Construct(&this->parent,param_1,param_2,param_3);
		*(undefined4 *)&this->field_0x90 = param_4;
		(this->parent).parent.parent.vtable = (OlegModuleAbstract_VTable *)&OlegModule_VT_AIA;
		return this;
		}
		
	*/
	return;
}

void OlegModuleAIA::FUN_000b5310(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall OlegModuleAIA::FUN_000b5310(OlegModuleAIA *this,int param_1){
		int iVar1;
		bool bVar2;
		uint uVar3;
		int iVar4;
		int *local_bc;
		float local_b8;
		Vector2 local_b4;
		Vector2 local_ac;
		float local_a4;
		uint local_a0;
		uint local_9c;
		float local_98;
		int local_94;
		Matrix4 local_90;
		Matrix4 local_50;
		uVar3 = (this->parent).parent.parent.flags;
		if (((~(byte)(uVar3 >> 9) & 1) != 0) && (1 < ((byte)uVar3 & 0xf))) {
		local_ac.x = (this->parent).parent.array[2].x;
		local_98 = (this->parent).parent.array[0].x;
		iVar1 = *(int *)&this->field_0x90;
		local_ac.y = (this->parent).parent.array[2].y;
		local_b4.x = (this->parent).parent.array[6].x;
		local_9c = uVar3 >> 0xb & 0xf;
		local_b4.y = (this->parent).parent.array[6].y;
		uVar3 = *(uint *)(*(int *)&(this->parent).field_0x8c + 8) & 0xfff;
		local_94 = *(int *)(&DAT_0039e020 + uVar3 * 4);
		if ((*(uint *)(iVar1 + 0x534) >> 0x1a & 0x1f) < uVar3) {
		iVar4 = 0x1d;
		}
		else {
		iVar4 = local_94 + 0x1e;
		}
		OlegModuleAF::FUN_001a0e30((OlegModuleAF *)this,false,&local_ac);
		OlegModuleAF::FUN_001a0e60((OlegModuleAF *)this,false,&local_b4);
		local_a4 = local_b4.x * FLOAT_0038d6b0;
		bVar2 = FUN_001a2b90((int)this,0);
		if (bVar2 == false) {
		FUN_00101ea0(&local_98,&local_bc,0.5);
		local_bc = (int *)(local_b4.x * FLOAT_0038a828);
		local_b8 = local_b4.y;
		}
		else {
		local_bc = (int *)(local_b4.x * DAT_003e2dfc * FLOAT_0038a828);
		local_b8 = local_b4.y * DAT_003e2dfc;
		}
		local_b8 = local_b8 * FLOAT_0038b3cc;
		Matrix4::Construct1(&local_90);
		local_90.m11 = (float)local_bc;
		local_90.m22 = local_b8;
		local_90.m41 = local_b4.x * FLOAT_0038a76c;
		*(float *)(param_1 + 0x10) = local_98;
		local_90.m41 = local_ac.x - local_90.m41;
		local_90.m42 = local_ac.y;
		FUN_00104260(param_1,&local_90.m11,iVar4 * 0x20 + 0x111c + iVar1,local_9c);
		local_90.m11 = local_a4;
		local_90.m22 = local_b4.y;
		local_90.m41 = local_ac.x - (local_b4.x - local_a4 * FLOAT_0038807c) * FLOAT_00386ab4;
		local_90.m42 = local_ac.y - local_b4.y * FLOAT_00386ab4;
		Matrix4::Construct1(&local_50);
		local_bc = (int *)(iVar1 + 0xe24);
		local_a0 = 0;
		do {
		iVar4 = local_a0 + 0xd;
		if ((*(byte *)(iVar1 + 0x564 + local_94 * 4) & (byte)(1 << ((byte)local_a0 & 0x1f))) == 0) {
		iVar4 = 0xc;
		}
		FUN_00104260(param_1,&local_90.m11,iVar4 * 0x20 + 0x111c + iVar1,local_9c);
		bVar2 = FUN_001a2b90((int)this,0);
		if ((bVar2 != false) && (iVar4 != 0xc)) {
		local_50.m41 = local_a4 * FLOAT_00386ab4 + local_90.m41;
		local_50.m42 = local_ac.y;
		(**(code **)(*local_bc + 0xc))(&local_50);
		}
		local_90.m41 = local_90.m41 + local_a4;
		local_a0 = local_a0 + 1;
		local_bc = local_bc + 0x13;
		}
		 while (local_a0 < 6);
		}
		OlegModuleAbstract::Render((OlegModuleAbstract *)this);
		return;
		}
		
	*/
	return;
}

void OlegModuleAIA::FUN_000b5620() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall OlegModuleAIA::FUN_000b5620(OlegModuleAIA *this){
		int iVar1;
		GameController *pGVar2;
		bool bVar3;
		UnkFamily20Base *this_00;
		int iVar4;
		UnkFamily20BaseSub *this_01;
		uint uVar5;
		float fVar6;
		float fVar7;
		float local_2c;
		float local_28;
		float local_24;
		Vector2 local_20;
		float local_18;
		undefined4 local_14;
		undefined4 local_10;
		float local_c;
		this[1].parent.parent.parent.vtable = (OlegModuleAbstract_VTable *)0x0;
		bVar3 = FUN_001a2b90((int)this,0);
		pGVar2 = GameController3;
		if (bVar3 != false) {
		if (DAT_003e5f7c != this) {
		DAT_003e5f78 = 0.0;
		this_01 = &(GameController3->oleg).unkStruct12array[0].subStruct;
		iVar4 = 6;
		DAT_003e5f7c = this;
		do {
		UnkFamily20BaseSub::thunk_FUN_000c3ac0(this_01);
		this_01 = (UnkFamily20BaseSub *)&this_01[3].unkArray;
		iVar4 = iVar4 + -1;
		}
		 while (iVar4 != 0);
		}
		local_2c = (float)(int)((FLOAT_003863a8 / FLOAT_0039e238) * DAT_003e5f78);
		FUN_000d2a10(&local_2c,&local_24,&local_28);
		fVar6 = FLOAT_0038ca60;
		this[1].parent.parent.parent.vtable = (OlegModuleAbstract_VTable *)(local_28 * FLOAT_0038b3b8);
		DAT_003e5f78 = DAT_003e5f78 + FLOAT_0038d6b4;
		if (fVar6 <= DAT_003e5f78) {
		DAT_003e5f78 = DAT_003e5f78 - fVar6;
		}
		local_20.x = (this->parent).parent.array[6].x;
		iVar4 = *(int *)&this->field_0x90;
		iVar1 = *(int *)(&DAT_0039e020 + (*(uint *)(*(int *)&(this->parent).field_0x8c + 8) & 0xfff) * 4);
		local_20.y = (this->parent).parent.array[6].y;
		OlegModuleAF::FUN_001a0e60((OlegModuleAF *)this,false,&local_20);
		fVar7 = local_20.x * FLOAT_0038d6b0;
		local_20.x = local_20.x * FLOAT_00386ab4;
		fVar6 = local_20.y * FLOAT_00386ab4;
		uVar5 = 0;
		this_00 = (pGVar2->oleg).unkStruct12array;
		local_2c = fVar7;
		local_20.y = fVar6;
		do {
		if (((*(byte *)(iVar4 + 0x564 + iVar1 * 4) & (byte)(1 << ((byte)uVar5 & 0x1f))) != 0) &&(uVar5 != 0xffffffff)) {
		local_14 = 0;
		local_10 = 0;
		local_18 = fVar7;
		local_c = fVar6;
		UnkFamily20Base::FUN_00109e40(this_00,0.01666667,&local_10);
		fVar6 = local_20.y;
		fVar7 = local_2c;
		}
		uVar5 = uVar5 + 1;
		this_00 = this_00 + 1;
		}
		 while (uVar5 < 6);
		}
		OlegModuleAbstract::CallOther1((OlegModuleAbstract *)this);
		return;
		}
		
	*/
	return;
}

void OlegModuleAIA::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OlegModuleAIA * __thiscall OlegModuleAIA::Dispose(OlegModuleAIA *this,byte param_1){
		OlegModuleAbstract::Unroll((OlegModuleAbstract *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

