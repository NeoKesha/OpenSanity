#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Misc/InstanceNodeObjectLink.h"

uint InstanceNodeObjectLink::FUN_000f6c20(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall InstanceNodeObjectLink::FUN_000f6c20(InstanceNodeObjectLink *this,int param_1){
		uint uVar1;
		InstanceContextRefCounter *pIVar2;
		uint uVar3;
		uVar1 = 0;
		uVar3 = this->field7_0x18 & 0x1f;
		if (uVar3 != 0) {
		pIVar2 = &this->field9_0x20;
		do {
		if (pIVar2->ctx == (InstanceContext *)param_1) {
		return uVar1;
		}
		uVar1 = uVar1 + 1;
		pIVar2 = (InstanceContextRefCounter *)&pIVar2->refCount;
		}
		 while (uVar1 < uVar3);
		}
		return 0xffffffff;
		}
		
	*/
	return 0;
}

bool InstanceNodeObjectLink::FUN_000f6cd0(int param_1, char param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodeObjectLink::FUN_000f6cd0(InstanceNodeObjectLink *this,int param_1,char param_2){
		uint uVar1;
		byte bVar2;
		InstanceContextRefCounter *pIVar3;
		if ((param_1 != 0) && (uVar1 = 0, (this->field7_0x18 & 0x1f) != 0)) {
		pIVar3 = &this->field9_0x20;
		do {
		if (pIVar3->ctx == (InstanceContext *)param_1) {
		if (-1 < (int)uVar1) {
		return true;
		}
		break;
		}
		uVar1 = uVar1 + 1;
		pIVar3 = (InstanceContextRefCounter *)&pIVar3->refCount;
		}
		 while (uVar1 < (this->field7_0x18 & 0x1f));
		}
		uVar1 = this->field7_0x18 & 0x1f;
		if (uVar1 < 0x10) {
		bVar2 = *(byte *)((int)&(this->vec).x + uVar1);
		if (param_2 == '\0') {
		bVar2 = bVar2 & 0xfe;
		}
		else {
		bVar2 = bVar2 | 1;
		}
		*(byte *)((int)&(this->vec).x + uVar1) = bVar2;
		(&(this->field9_0x20).ctx)[this->field7_0x18 & 0x1f] = (InstanceContext *)param_1;
		uVar1 = this->field7_0x18;
		this->field7_0x18 = (uVar1 + 1 ^ uVar1) & 0x1f ^ uVar1;
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

void InstanceNodeObjectLink::FUN_000f6d60(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeObjectLink::FUN_000f6d60(InstanceNodeObjectLink *this,int param_1){
		int *piVar1;
		uint uVar2;
		uVar2 = 0;
		if ((*(uint *)(param_1 + 0x18) & 0x1f) != 0) {
		piVar1 = (int *)(param_1 + 0x20);
		do {
		if (*piVar1 != 0) {
		FUN_000f6cd0(this,*piVar1,*(byte *)(uVar2 + 0x60 + param_1) & 1);
		}
		uVar2 = uVar2 + 1;
		piVar1 = piVar1 + 1;
		}
		 while (uVar2 < (*(uint *)(param_1 + 0x18) & 0x1f));
		}
		return;
		}
		
	*/
	return;
}

InstanceNodeObjectLink* InstanceNodeObjectLink::Build(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeObjectLink * __cdecl InstanceNodeObjectLink::Build(int param_1){
		InstanceNodeObjectLink *ctx;
		InstanceNodeObjectLink *pIVar1;
		pIVar1 = *(InstanceNodeObjectLink **)(param_1 + 0x100);
		if (pIVar1 == (InstanceNodeObjectLink *)0x0) {
		ctx = (InstanceNodeObjectLink *)VirtualPool::AllocateMemory(0x74);
		pIVar1 = (InstanceNodeObjectLink *)0x0;
		if (ctx != (InstanceNodeObjectLink *)0x0) {
		ctx->field1_0x4 = (InstanceContext *)0x0;
		ctx->field2_0x8 = 0;
		ctx->field3_0xa = 0;
		ctx->field4_0xc = 0;
		ctx->field7_0x18 = ctx->field7_0x18 & 0xfffff040;
		ctx->field5_0x10 = 0;
		ctx->field6_0x14 = 0;
		ctx->field67_0x70 = (UNV009 *)0x0;
		ctx->parent_ = &InstanceNode_VT_ObjectLink;
		ctx->field8_0x1c = 0;
		(ctx->vec).x = 0.0;
		(ctx->vec).y = 0.0;
		(ctx->vec).z = 0.0;
		(ctx->vec).w = 0.0;
		pIVar1 = ctx;
		}
		thunk_FUN_00064960(param_1,pIVar1);
		}
		return pIVar1;
		}
		
	*/
	return null;
}

bool InstanceNodeObjectLink::FUN_000f9df0(uint param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodeObjectLink::FUN_000f9df0(InstanceNodeObjectLink *this,undefined4 param_1,undefined4 param_2){
		ushort *puVar1;
		undefined4 uVar2;
		undefined4 *puVar3;
		float fVar4;
		UNV009 *pUVar5;
		UNV010 *pUVar6;
		undefined4 uVar7;
		if (this->field67_0x70 == (UNV009 *)0x0) {
		pUVar5 = (UNV009 *)VirtualPool::AllocateMemory(0x44);
		if (pUVar5 == (UNV009 *)0x0) {
		pUVar5 = (UNV009 *)0x0;
		}
		else {
		*(uint *)&pUVar5->field_0x40 = *(uint *)&pUVar5->field_0x40 & 0xffffffe0;
		}
		this->field67_0x70 = pUVar5;
		this->field7_0x18 = this->field7_0x18 & 0xffffffdf;
		}
		if (((byte)*(undefined4 *)&this->field67_0x70->field_0x40 & 0x1f) < 0x10) {
		pUVar6 = (UNV010 *)VirtualPool::AllocateMemory(0xc0);
		if (pUVar6 == (UNV010 *)0x0) {
		pUVar6 = (UNV010 *)0x0;
		}
		else {
		pUVar6 = UNV010::Construct(pUVar6,param_1,param_2);
		}
		pUVar6->field160_0xb8 = pUVar6->field160_0xb8 & 0xfffffff1 | 1;
		uVar7 = FUN_000f94d0((int)this->field67_0x70,(int)pUVar6);
		if ((char)uVar7 != '\0') {
		this->field7_0x18 = this->field7_0x18 & 0xffffffdf;
		puVar3 = (undefined4 *)pUVar6->field146_0x98;
		uVar7 = puVar3[1];
		uVar2 = puVar3[2];
		*(undefined4 *)&pUVar6->field_0x80 = *puVar3;
		fVar4 = FLOAT_0038639c;
		*(undefined4 *)&pUVar6->field_0x84 = uVar7;
		*(undefined4 *)&pUVar6->field_0x88 = uVar2;
		*(float *)&pUVar6->field_0x8c = fVar4;
		puVar1 = (ushort *)(pUVar6->field146_0x98 + 0x1c);
		*puVar1 = *puVar1 | DAT_00495d10;
		FUN_000f8150(pUVar6,'\0');
		DAT_003ea704 = pUVar6;
		return true;
		}
		}
		return false;
		}
		
	*/
	return false;
}

void InstanceNodeObjectLink::FUN_000fb110() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeObjectLink::FUN_000fb110(InstanceNodeObjectLink *this){
		UNV009 *ptr;
		ptr = this->field67_0x70;
		if ((ptr != (UNV009 *)0x0) && ((ptr->field_0x40 & 0x1f) == 0)) {
		FUN_000f9c70((int)ptr);
		VirtualPool::FreeMemory(ptr);
		this->field67_0x70 = (UNV009 *)0x0;
		this->field7_0x18 = this->field7_0x18 | 0x20;
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeObjectLink::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeObjectLink::CleanUp(InstanceNodeObjectLink *this){
		UNV009 *ptr;
		ptr = this->field67_0x70;
		this->parent_ = &InstanceNode_VT_ObjectLink;
		if (ptr != (UNV009 *)0x0) {
		FUN_000f9c70((int)ptr);
		VirtualPool::FreeMemory(ptr);
		}
		this->field7_0x18 = this->field7_0x18 & 0xfffff040;
		this->field67_0x70 = (UNV009 *)0x0;
		this->field8_0x1c = 0;
		(this->vec).x = 0.0;
		(this->vec).y = 0.0;
		(this->vec).z = 0.0;
		(this->vec).w = 0.0;
		this->parent_ = &InstanceNode_VT_Abstract;
		return;
		}
		
	*/
	return;
}

bool InstanceNodeObjectLink::FUN_000fbcc0(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodeObjectLink::FUN_000fbcc0(InstanceNodeObjectLink *this,int param_1){
		UNV009 *ptr;
		InstanceContextRefCounter *pIVar1;
		uint uVar2;
		uint uVar3;
		if (param_1 != 0) {
		*(undefined4 *)(param_1 + 0x38) = 0;
		ptr = this->field67_0x70;
		if ((ptr != (UNV009 *)0x0) && ((ptr->field_0x40 & 0x1f) == 0)) {
		FUN_000f9c70((int)ptr);
		VirtualPool::FreeMemory(ptr);
		this->field67_0x70 = (UNV009 *)0x0;
		this->field7_0x18 = this->field7_0x18 | 0x20;
		}
		uVar2 = this->field7_0x18;
		uVar3 = 0;
		if ((uVar2 & 0x1f) != 0) {
		pIVar1 = &this->field9_0x20;
		do {
		if (pIVar1->ctx == (InstanceContext *)param_1) {
		if (uVar3 == 0xffffffff) {
		return false;
		}
		if ((*(byte *)((int)&(this->vec).x + uVar3) & 1) != 0) {
		return false;
		}
		uVar2 = (uVar2 - 1 ^ uVar2) & 0x1f ^ uVar2;
		this->field7_0x18 = uVar2;
		uVar2 = uVar2 & 0x1f;
		if (uVar2 != 0) {
		(&(this->field9_0x20).ctx)[uVar3] = (&(this->field9_0x20).ctx)[uVar2];
		*(undefined *)((int)&(this->vec).x + uVar3) =*(undefined *)((int)&(this->vec).x + (this->field7_0x18 & 0x1f));
		}
		return true;
		}
		uVar3 = uVar3 + 1;
		pIVar1 = (InstanceContextRefCounter *)&pIVar1->refCount;
		}
		 while (uVar3 < (this->field7_0x18 & 0x1f));
		}
		}
		return false;
		}
		
	*/
	return false;
}

uint InstanceNodeObjectLink::FUN_000fbd70(int* param_1, int** param_2, byte param_3, byte param_4, uint* param_5, char param_6) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall InstanceNodeObjectLink::FUN_000fbd70(InstanceNodeObjectLink *this,int *param_1,int **param_2,byte param_3,byte param_4,undefined4 *param_5,char param_6){
		byte *pbVar1;
		bool bVar2;
		undefined3 extraout_var;
		UNV009 *pUVar3;
		int iVar4;
		UNV010 *this_00;
		uint uVar5;
		InstanceContextRefCounter *pIVar6;
		UNV010 *this_01;
		undefined local_20 [28];
		if (param_6 == '\0') {
		bVar2 = FUN_000f6cd0(this,(int)param_2,'\0');
		pUVar3 = (UNV009 *)CONCAT31(extraout_var,bVar2);
		if (bVar2 == false) goto LAB_000fbed5;
		}
		pUVar3 = this->field67_0x70;
		this_01 = (UNV010 *)0x0;
		if (pUVar3 == (UNV009 *)0x0) {
		pUVar3 = (UNV009 *)VirtualPool::AllocateMemory(0x44);
		if (pUVar3 == (UNV009 *)0x0) {
		this->field67_0x70 = (UNV009 *)0x0;
		this->field7_0x18 = this->field7_0x18 & 0xffffffdf;
		}
		else {
		*(uint *)&pUVar3->field_0x40 = *(uint *)&pUVar3->field_0x40 & 0xffffffe0;
		this->field67_0x70 = pUVar3;
		this->field7_0x18 = this->field7_0x18 & 0xffffffdf;
		}
		}
		else if ((param_4 & 2) != 0) {
		if ((param_4 & 4) == 0) {
		FUN_000fbb90((int)pUVar3,param_3);
		}
		else {
		iVar4 = FUN_000fbb90((int)pUVar3,param_3);
		if (iVar4 != 0) {
		*(uint *)(iVar4 + 0x14) = *(uint *)(iVar4 + 0x14) & 0xffffffbf;
		*(undefined4 *)(iVar4 + 0xe0) = 0;
		if (*(int **)(iVar4 + 0xec) != (int *)0x0) {
		(**(code **)(**(int **)(iVar4 + 0xec) + 100))(local_20,0xbf800000);
		}
		}
		}
		}
		pUVar3 = this->field67_0x70;
		if (((byte)*(undefined4 *)&pUVar3->field_0x40 & 0x1f) < 0x10) {
		this_00 = (UNV010 *)VirtualPool::AllocateMemory(0xc0);
		if (this_00 != (UNV010 *)0x0) {
		this_01 = UNV010::Construct(this_00,param_1,(InstanceContext *)param_2);
		}
		FUN_000fa630(this_01,param_3,param_4 & 1,param_5);
		uVar5 = FUN_000f94d0((int)this->field67_0x70,(int)this_01);
		uVar5 = uVar5 & 0xffffff00;
		this->field7_0x18 = this->field7_0x18 & 0xffffffdf;
		DAT_003ea704 = this_01;
		param_2[5] = (int *)((uint)param_2[5] | 0x40);
		param_2[0x38] = param_1;
		param_2[0xe] = param_1;
		if ((param_4 & 8) != 0) {
		uVar5 = 0;
		if ((this->field7_0x18 & 0x1f) != 0) {
		pIVar6 = &this->field9_0x20;
		do {
		if (pIVar6->ctx == (InstanceContext *)param_2) goto LAB_000fbec5;
		uVar5 = uVar5 + 1;
		pIVar6 = (InstanceContextRefCounter *)&pIVar6->refCount;
		}
		 while (uVar5 < (this->field7_0x18 & 0x1f));
		}
		uVar5 = 0xffffffff;
		LAB_000fbec5:pbVar1 = (byte *)((int)&(this->vec).x + uVar5);
		*pbVar1 = *pbVar1 | 2;
		}
		return CONCAT31((int3)(uVar5 >> 8),1);
		}
		LAB_000fbed5:return (uint)pUVar3 & 0xffffff00;
		}
		
	*/
	return 0;
}

bool InstanceNodeObjectLink::FUN_000fbee0(int* param_1, int** param_2, byte param_3, uint* param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodeObjectLink::FUN_000fbee0(InstanceNodeObjectLink *this,int *param_1,int **param_2,byte param_3,undefined4 *param_4){
		byte *pbVar1;
		bool bVar2;
		UNV009 *pUVar3;
		int iVar4;
		UNV010 *this_00;
		uint uVar5;
		UNV010 *this_01;
		undefined local_20 [28];
		this_01 = (UNV010 *)0x0;
		bVar2 = FUN_000f6cd0(this,(int)param_2,'\0');
		if (bVar2 != false) {
		pUVar3 = this->field67_0x70;
		if (pUVar3 == (UNV009 *)0x0) {
		pUVar3 = (UNV009 *)VirtualPool::AllocateMemory(0x44);
		if (pUVar3 == (UNV009 *)0x0) {
		this->field67_0x70 = (UNV009 *)0x0;
		this->field7_0x18 = this->field7_0x18 & 0xffffffdf;
		}
		else {
		*(uint *)&pUVar3->field_0x40 = *(uint *)&pUVar3->field_0x40 & 0xffffffe0;
		this->field67_0x70 = pUVar3;
		this->field7_0x18 = this->field7_0x18 & 0xffffffdf;
		}
		}
		else if ((param_3 & 2) != 0) {
		if ((param_3 & 4) == 0) {
		FUN_000fbab0((int)pUVar3);
		}
		else {
		iVar4 = FUN_000fbab0((int)pUVar3);
		if (iVar4 != 0) {
		*(uint *)(iVar4 + 0x14) = *(uint *)(iVar4 + 0x14) & 0xffffffbf;
		*(undefined4 *)(iVar4 + 0xe0) = 0;
		if (*(int **)(iVar4 + 0xec) != (int *)0x0) {
		(**(code **)(**(int **)(iVar4 + 0xec) + 100))(local_20,0xbf800000);
		}
		}
		}
		}
		if (((byte)*(undefined4 *)&this->field67_0x70->field_0x40 & 0x1f) < 0x10) {
		this_00 = (UNV010 *)VirtualPool::AllocateMemory(0xc0);
		if (this_00 != (UNV010 *)0x0) {
		this_01 = UNV010::Construct(this_00,param_1,(InstanceContext *)param_2);
		}
		FUN_000fa420(this_01,param_3 & 1,param_4,(float)this->field8_0x1c);
		FUN_000f94d0((int)this->field67_0x70,(int)this_01);
		this->field7_0x18 = this->field7_0x18 & 0xffffffdf;
		DAT_003ea704 = this_01;
		param_2[5] = (int *)((uint)param_2[5] | 0x40);
		param_2[0x38] = param_1;
		param_2[0xe] = param_1;
		if ((param_3 & 8) != 0) {
		uVar5 = FUN_000f6c20(this,(int)param_2);
		pbVar1 = (byte *)((int)&(this->vec).x + uVar5);
		*pbVar1 = *pbVar1 | 2;
		}
		return true;
		}
		}
		return false;
		}
		
	*/
	return false;
}

uint InstanceNodeObjectLink::FUN_000fc0b0(uint* param_1, uint param_2, char param_3, char param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall InstanceNodeObjectLink::FUN_000fc0b0(InstanceNodeObjectLink *this,undefined4 *param_1,undefined4 param_2,char param_3,char param_4){
		uint uVar1;
		undefined4 uVar2;
		uint uVar3;
		InstanceContextRefCounter *pIVar4;
		byte bVar5;
		uint uVar6;
		uVar1 = 0;
		uVar3 = this->field7_0x18 & 0x1f;
		if (uVar3 != 0) {
		pIVar4 = &this->field9_0x20;
		do {
		uVar6 = uVar1;
		if (pIVar4->ctx == (InstanceContext *)param_1) goto LAB_000fc0d6;
		uVar1 = uVar1 + 1;
		pIVar4 = (InstanceContextRefCounter *)&pIVar4->refCount;
		}
		 while (uVar1 < uVar3);
		}
		uVar6 = 0xffffffff;
		LAB_000fc0d6:bVar5 = 0;
		if (-1 < (int)uVar6) {
		if ((this->field67_0x70 != (UNV009 *)0x0) &&(uVar2 = FUN_000fbc30((int)this->field67_0x70,param_1,param_2,param_3), (char)uVar2 != '\0')){
		param_1[0xe] = 0;
		FUN_000fb110(this);
		bVar5 = 1;
		}
		if ((*(byte *)((int)&(this->vec).x + uVar6) & 1) == 0) {
		uVar1 = FUN_000f6c50((int)this,uVar6,param_4);
		return uVar1 & 0xffffff00 | (uint)bVar5;
		}
		uVar1 = FUN_000f6c50((int)this,uVar6,param_4);
		}
		return uVar1 & 0xffffff00 | (uint)bVar5;
		}
		
	*/
	return 0;
}

uint* InstanceNodeObjectLink::FUN_000fc4d0(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall InstanceNodeObjectLink::FUN_000fc4d0(InstanceNodeObjectLink *this,int param_1){
		InstanceContext *pIVar1;
		UNV009 *this_00;
		uint uVar2;
		pIVar1 = (&(this->field9_0x20).ctx)[param_1];
		this_00 = this->field67_0x70;
		if (this_00 == (UNV009 *)0x0) {
		if ((*(byte *)((int)&(this->vec).x + param_1) & 1) != 0) {
		return (undefined4 *)0x0;
		}
		uVar2 = this->field7_0x18;
		uVar2 = (uVar2 - 1 ^ uVar2) & 0x1f ^ uVar2;
		this->field7_0x18 = uVar2;
		uVar2 = uVar2 & 0x1f;
		if (uVar2 != 0) {
		(&(this->field9_0x20).ctx)[param_1] = (&(this->field9_0x20).ctx)[uVar2];
		*(undefined *)((int)&(this->vec).x + param_1) =*(undefined *)((int)&(this->vec).x + (this->field7_0x18 & 0x1f));
		return (undefined4 *)pIVar1;
		}
		}
		else {
		uVar2 = FUN_000f82d0((int)this_00,(undefined4 *)pIVar1);
		if (uVar2 != 0xffffffff) {
		FUN_000fb570(*(Matrix4 **)(&this_00->field_0x0 + uVar2 * 4));
		FUN_000fb9b0((int)this_00,uVar2,'\x01');
		}
		FUN_000fbcc0(this,(int)pIVar1);
		}
		return (undefined4 *)pIVar1;
		}
		
	*/
	return null;
}

void InstanceNodeObjectLink::FUN_000fc600(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeObjectLink::FUN_000fc600(InstanceNodeObjectLink *this,byte param_1){
		uint uVar1;
		uVar1 = 0;
		if ((this->field7_0x18 & 0x1f) != 0) {
		do {
		if ((*(byte *)((int)&(this->vec).x + uVar1) & param_1) == 0) {
		uVar1 = (uint)(byte)((char)uVar1 + 1);
		}
		else {
		FUN_000fc4d0(this,uVar1);
		}
		}
		 while (uVar1 < (this->field7_0x18 & 0x1f));
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeObjectLink::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall InstanceNodeObjectLink::Dispose(InstanceNodeObjectLink *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent_;
		}
		
	*/
	return;
}

bool InstanceNodeObjectLink::IsA(uint param_1, uint* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodeObjectLink::IsA(InstanceNodeObjectLink *this,undefined4 param_1,uint *param_2){
		int iVar1;
		bool bVar2;
		uint uVar3;
		InstanceContextRefCounter *pIVar4;
		if ((*param_2 >> 0x12 & 1) == 0) {
		return false;
		}
		uVar3 = 0;
		bVar2 = true;
		if ((this->field7_0x18 & 0x1f) != 0) {
		pIVar4 = &this->field9_0x20;
		do {
		if (pIVar4->ctx != (InstanceContext *)0x0) {
		iVar1 = FUN_000f8b00(pIVar4->ctx,(int)param_2);
		bVar2 = (bool)(bVar2 & iVar1 != 0);
		}
		uVar3 = uVar3 + 1;
		pIVar4 = (InstanceContextRefCounter *)&pIVar4->refCount;
		}
		 while (uVar3 < (this->field7_0x18 & 0x1f));
		}
		return bVar2;
		}
		
	*/
	return false;
}

bool InstanceNodeObjectLink::Step(byte* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodeObjectLink::Step(InstanceNodeObjectLink *this,byte *param_1){
		undefined4 *puVar1;
		if ((*param_1 & 1) == 0) {
		return true;
		}
		if ((this->field67_0x70 == (UNV009 *)0x0) ||((puVar1 = (undefined4 *)FUN_000fbc70((int)this->field67_0x70), puVar1 != (undefined4 *)0x0 &&(FUN_000fc0b0(this,puVar1,0,'\0','\0'), this->field67_0x70 == (UNV009 *)0x0)))) {
		(this->field1_0x4->parent).flags = (this->field1_0x4->parent).flags & 0xffffff7f;
		}
		if ((*param_1 & 1) != 0) {
		if (((~*(byte *)&this->field2_0x8 & 1) == 0) && (this->field4_0xc != 0)) {
		*(byte *)&this->field2_0x8 = *(byte *)&this->field2_0x8 & 0xfe;
		return true;
		}
		this->field4_0xc = *(int *)(param_1 + 4);
		}
		return true;
		}
		
	*/
	return false;
}

void InstanceNodeObjectLink::UpdateTime(InstanceNodeObjectLink* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeObjectLink::UpdateTime(InstanceNodeObjectLink *param_1){
		uint uVar1;
		uint uVar2;
		FUN_000fc240(param_1,'\0','\0','\x01');
		FUN_000f6e30((int)param_1);
		(param_1->field1_0x4->parent).flags = (param_1->field1_0x4->parent).flags & 0xffffff7f;
		(param_1->field1_0x4->parent).flags = (param_1->field1_0x4->parent).flags & 0xffffffbf;
		param_1->field1_0x4->field27_0xe0 = 0;
		uVar1 = param_1->field7_0x18;
		param_1->field7_0x18 = uVar1 & 0xfffff07f;
		uVar2 = 0;
		param_1->field8_0x1c = 0;
		if ((uVar1 & 0x1f) != 0) {
		do {
		if ((*(byte *)((int)&(param_1->vec).x + uVar2) & 1) != 0) {
		return;
		}
		uVar2 = uVar2 + 1;
		}
		 while (uVar2 < (param_1->field7_0x18 & 0x1f));
		}
		FUN_000fd4d0((int)param_1->field1_0x4,(int *)param_1);
		if (DAT_003ea70c != (InstanceNodeObjectLink *)0x0) {
		*(InstanceNodeObjectLink **)((int)DAT_003ea70c + 0x10) = param_1;
		param_1->field6_0x14 = (uint)DAT_003ea70c;
		DAT_003ea70c = param_1;
		return;
		}
		DAT_003ea70c = param_1;
		param_1->field5_0x10 = 0;
		param_1->field6_0x14 = 0;
		return;
		}
		
	*/
	return;
}

byte InstanceNodeObjectLink::GetIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	byte InstanceNodeObjectLink::GetIndex(void){
		return 6;
		}
		
	*/
	return 0;
}

uint InstanceNodeObjectLink::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 InstanceNodeObjectLink::GetBuilderIndex(void){
		return 0x130a;
		}
		
	*/
	return 0;
}

void InstanceNodeObjectLink::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeObjectLink::Construct(InstanceNodeObjectLink *this){
		this->field1_0x4 = (InstanceContext *)0x0;
		this->field2_0x8 = 0;
		this->field3_0xa = 0;
		this->field4_0xc = 0;
		this->field5_0x10 = 0;
		this->field6_0x14 = 0;
		this->field67_0x70 = (UNV009 *)0x0;
		this->field7_0x18 = this->field7_0x18 & 0xfffff040;
		this->parent_ = &InstanceNode_VT_ObjectLink;
		this->field8_0x1c = 0;
		(this->vec).x = 0.0;
		(this->vec).y = 0.0;
		(this->vec).z = 0.0;
		(this->vec).w = 0.0;
		return;
		}
		
	*/
	return;
}

