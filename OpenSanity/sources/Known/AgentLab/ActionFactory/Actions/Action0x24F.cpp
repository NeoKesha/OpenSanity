#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x24F.h"

void Action0x24F::ExecuteFromCallContext() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x24F::ExecuteFromCallContext(Action0x24F *this){
		InstanceNodeKSubModule3A *pIVar1;
		GameController *pGVar2;
		uint uVar3;
		InstanceNodeKSubA *pIVar4;
		float fVar5;
		float fVar6;
		InputBinding2 *pIVar7;
		float *pfVar8;
		float local_11c;
		float local_118;
		InstanceNodeKSubModule2A *local_114;
		float local_110;
		float local_10c;
		float local_108;
		float local_104;
		float local_100;
		float local_fc;
		float local_f8;
		float local_f4;
		float local_ec;
		float local_e8;
		float local_e4;
		Vector4 local_e0;
		float local_cc;
		InputBinding2 *local_c8;
		float local_c4;
		float local_c0;
		float local_bc;
		float local_b8;
		float local_b0;
		float local_ac;
		float local_a8;
		float local_a4;
		InputBinding2 *local_98;
		int local_94;
		undefined local_90 [140];
		pGVar2 = GameController1;
		pIVar4 = &GameController1->unkStruct3;
		local_cc = (GameController1->unkStruct3).struct4.parent.fov;
		pIVar1 = &(GameController1->unkStruct3).struct4;
		local_114 = &(GameController1->unkStruct3).struct3;
		if ((this->unlabelled12 & 0x200000U) == 0) {
		this->unlabelled56 = (int)local_cc;
		}
		local_118 = (float)(pGVar2->unkStruct3).field75_0xb4;
		local_11c = (float)(pGVar2->unkStruct3).field76_0xb8;
		(pGVar2->unkStruct3).struct3.field38_0xb8 = (int)local_118;
		(pGVar2->unkStruct3).struct4.field49_0x98 = local_11c;
		if ((local_118 != 0.0) || (local_11c != 0.0)) {
		thunk_FUN_00038230((int)this,(int)local_114,(int)pIVar1,(float)this->unlabelled24,(float)this->unlabelled28);
		if (local_118 == 0.0) {
		thunk_FUN_00040f00((int)this,(int)pIVar4,&local_100);
		fVar6 = (float)this->unlabelled52;
		LAB_00047e10:pfVar8 = &local_110;
		fVar5 = local_11c;
		}
		else {
		if (local_11c != 0.0) {
		if (local_118 == local_11c) {
		FUN_000ecf20((int)local_118,&local_100,(float)this->unlabelled48);
		FUN_000efff0((int)local_118,&local_110,(float)this->unlabelled48);
		(local_114->field29_0xa0).x = local_110 + local_100;
		(local_114->field29_0xa0).w = FLOAT_0038639c;
		(local_114->field29_0xa0).y = local_10c + local_fc;
		(local_114->field29_0xa0).z = local_108 + local_f8;
		(pGVar2->unkStruct3).struct4.field24_0x70.x = local_100;
		(pGVar2->unkStruct3).struct4.field24_0x70.y = local_fc;
		(pGVar2->unkStruct3).struct4.field24_0x70.z = local_f8;
		local_104 = local_f4;
		goto LAB_00047e7c;
		}
		FUN_000ecf20((int)local_118,&local_100,(float)this->unlabelled48);
		fVar6 = (float)this->unlabelled52;
		goto LAB_00047e10;
		}
		thunk_FUN_00040f00((int)this,(int)pIVar4,&local_110);
		fVar6 = (float)this->unlabelled48;
		pfVar8 = &local_100;
		fVar5 = local_118;
		}
		FUN_000ecf20((int)fVar5,pfVar8,fVar6);
		(local_114->field29_0xa0).x = local_100;
		(local_114->field29_0xa0).y = local_fc;
		(local_114->field29_0xa0).z = local_f8;
		(local_114->field29_0xa0).w = local_f4;
		(pGVar2->unkStruct3).struct4.field24_0x70.x = local_110;
		(pGVar2->unkStruct3).struct4.field24_0x70.y = local_10c;
		(pGVar2->unkStruct3).struct4.field24_0x70.z = local_108;
		LAB_00047e7c:(pGVar2->unkStruct3).struct4.field24_0x70.w = local_104;
		*(int *)&(pGVar2->unkStruct3).struct4.field_0x84 = this->unlabelled56;
		return;
		}
		local_e8 = FUN_000d2b60((int *)&local_cc);
		local_e8 = local_e8 * FLOAT_00386684;
		local_98 = (pGVar2->unkStruct3).parent.inputWrapper.array2;
		local_c8 = (InputBinding2 *)(pGVar2->unkStruct3).parent.inputWrapper.array1;
		local_b0 = 0.0;
		local_ac = 0.0;
		local_a8 = 0.0;
		local_a4 = FLOAT_0038639c;
		local_c4 = 0.0;
		local_11c = 0.0;
		local_ec = 0.0;
		local_c0 = 0.0;
		local_bc = 0.0;
		local_b8 = 0.0;
		local_118 = 0.0;
		local_e0.x = 0.0;
		local_e0.y = 0.0;
		local_e0.z = 0.0;
		local_e0.w = FLOAT_0038639c;
		thunk_FUN_00038230((int)this,(int)local_114,(int)pIVar1,(float)this->unlabelled24,(float)this->unlabelled28);
		thunk_FUN_00040f00((int)this,(int)pIVar4,&local_b0);
		thunk_FUN_000411f0((int)this,(int)pIVar4,(int)local_cc,&local_94,(int *)&local_e4,&local_c4);
		thunk_FUN_00038330((int)this,&local_11c,&local_ec);
		uVar3 = (uint)this->unlabelled12 >> 9 & 7;
		fVar6 = FLOAT_00386ab4;
		if (uVar3 == 0) {
		LAB_00047a0a:pIVar7 = local_98;
		if (local_98 == (InputBinding2 *)0x0) {
		local_bc = (float)this->unlabelled32;
		}
		else {
		fVar5 = (float)local_98[0x10].flags - (float)local_98[0xe].flags;
		local_bc = ((float)this->unlabelled32 + local_11c) * fVar5 * FLOAT_00386618 +fVar5 * FLOAT_00386ab4;
		}
		}
		else {
		if (uVar3 != 1) {
		if (uVar3 != 2) goto LAB_00047a8a;
		goto LAB_00047a0a;
		}
		thunk_FUN_00038470((int)this,(int)local_c8,local_11c,(int)&local_c0);
		pIVar7 = local_c8;
		}
		local_118 = thunk_FUN_000384d0((int)pIVar7,local_11c);
		LAB_00047a8a:fVar6 = (local_118 * local_c4) / (local_e8 * fVar6 * local_ec);
		local_ec = 0.0 - fVar6;
		if (0.0 <= fVar6) {
		local_ec = fVar6;
		}
		local_ec = (float)this->unlabelled20 + local_ec;
		local_e8 = thunk_FUN_00041070((int)this,(int)pIVar4,&local_b0);
		thunk_FUN_00041330((int)this,(int *)&local_e4,(int)pIVar4,local_ec,local_e8,(int)local_e4);
		local_e0.z = 0.0 - local_ec;
		FUN_000e2ac0(local_90 + 0x40,(float)(int)((float)this->unlabelled16 * FLOAT_003863a4),local_e4,(float)(int)((FLOAT_003863a8 / FLOAT_0039d7e8) * 0.0));
		InstanceTransform::FUN_000d3ed0((InstanceTransform *)(local_90 + 0x40),&local_e0);
		FUN_001d2550((int)pIVar4);
		local_90._0_4_ = *(float *)&(pGVar2->unkStruct3).field_0x70;
		local_90._4_4_ = *(float *)&(pGVar2->unkStruct3).field_0x74;
		local_90._8_4_ = *(float *)&(pGVar2->unkStruct3).field_0x78;
		local_90._12_4_ = *(float *)&(pGVar2->unkStruct3).field_0x7c;
		local_90._16_4_ = *(float *)&(pGVar2->unkStruct3).field_0x80;
		local_90._20_4_ = *(float *)&(pGVar2->unkStruct3).field_0x84;
		local_90._24_4_ = *(float *)&(pGVar2->unkStruct3).field_0x88;
		local_90._28_4_ = *(float *)&(pGVar2->unkStruct3).field_0x8c;
		local_90._32_4_ = *(float *)&(pGVar2->unkStruct3).field_0x90;
		local_90._36_4_ = *(float *)&(pGVar2->unkStruct3).field_0x94;
		local_90._40_4_ = *(float *)&(pGVar2->unkStruct3).field_0x98;
		local_90._44_4_ = *(float *)&(pGVar2->unkStruct3).field_0x9c;
		local_90._48_4_ = *(float *)&(pGVar2->unkStruct3).field_0xa0;
		local_90._52_4_ = *(float *)&(pGVar2->unkStruct3).field_0xa4;
		local_90._56_4_ = *(float *)&(pGVar2->unkStruct3).field_0xa8;
		local_90._60_4_ = *(float *)&(pGVar2->unkStruct3).field_0xac;
		InstanceTransform::FUN_000d3ed0((InstanceTransform *)local_90,&local_e0);
		local_108 = local_e0.z * FLOAT_003869d8;
		local_10c = local_e0.y * FLOAT_003869d8;
		local_110 = local_e0.x * FLOAT_003869d8;
		local_104 = FLOAT_0038639c;
		local_100 = 0.0;
		local_fc = FLOAT_0038639c;
		local_f8 = 0.0;
		local_f4 = FLOAT_0038639c;
		FUN_000ebf10(&local_110,&local_100,-local_94,1);
		fVar6 = FLOAT_0038639c;
		(local_114->field29_0xa0).y = local_bc + local_ac + local_e0.y + local_10c;
		(local_114->field29_0xa0).z = local_b8 + local_a8 + local_e0.z + local_108;
		(local_114->field29_0xa0).x = local_c0 + local_b0 + local_e0.x + local_110;
		(local_114->field29_0xa0).w = fVar6;
		(pGVar2->unkStruct3).struct4.field24_0x70.x = local_c0 + local_b0 + local_e0.x;
		(pGVar2->unkStruct3).struct4.field24_0x70.y = local_bc + local_ac + local_e0.y;
		(pGVar2->unkStruct3).struct4.field24_0x70.z = local_b8 + local_a8 + local_e0.z;
		(pGVar2->unkStruct3).struct4.field24_0x70.w = fVar6;
		*(int *)&(pGVar2->unkStruct3).struct4.field_0x84 = this->unlabelled56;
		return;
		}
		
	*/
	return;
}

void Action0x24F::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x24F::Dispose(Action0x24F *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x24F::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x24F * __fastcall Action0x24F::Construct(Action0x24F *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x24F;
		this->unlabelled12 = uVar1 & 0xff003030 | 0x3030;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		this->unlabelled24 = 0;
		this->unlabelled28 = 0;
		this->unlabelled32 = 0;
		this->unlabelled36 = 0;
		this->unlabelled40 = 0;
		this->unlabelled44 = 0;
		this->unlabelled48 = 0;
		this->unlabelled52 = 0;
		this->unlabelled56 = 0;
		return this;
		}
		
	*/
	return;
}

int Action0x24F::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x24F::GetSize(void){
		return 0x3c;
		}
		
	*/
	return 0;
}

