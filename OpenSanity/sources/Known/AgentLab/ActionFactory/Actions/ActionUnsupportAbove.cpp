#include "headers/Known/AgentLab/ActionFactory/Actions/ActionUnsupportAbove.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionUnsupportAbove::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionUnsupportAbove::Dispose(ActionUnsupportAbove *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionUnsupportAbove::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionUnsupportAbove::ExecuteFromCallContext(ActionUnsupportAbove *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		ChunkData *this_00;
		InstanceTransform *pIVar2;
		int iVar3;
		int iVar4;
		InstanceNodeAbstract *pIVar5;
		int *piVar6;
		uint uVar7;
		int iVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		float local_f0;
		float local_ec;
		float local_e8;
		float local_e4;
		int *local_d4;
		uint local_d0;
		float local_cc;
		uint local_c8;
		undefined4 local_c4;
		undefined4 local_c0;
		undefined4 local_bc;
		undefined4 local_b8;
		undefined4 local_b4;
		float local_b0;
		float local_ac;
		undefined4 local_a8;
		float local_a4;
		float local_a0;
		float local_9c;
		undefined4 local_98;
		float local_94;
		int local_90 [35];
		pIVar1 = (((ctx->parent).ctx)->parent).ctx;
		local_d4 = local_90;
		this_00 = (pIVar1->parent).chunkData;
		local_cc = FLOAT_00393c64;
		local_bc = 0;
		local_b4 = 0;
		local_b8 = 0;
		local_c8 = local_c8 & 0xfffffffe | 2;
		local_f0 = 0.0;
		local_ec = 0.0;
		local_e8 = 0.0;
		local_d0 = 0x200000;
		local_c4 = 0x10;
		local_c0 = 1;
		local_e4 = FLOAT_0038639c;
		if ((this->unlabelled12 & 0x200000U) == 0) {
		piVar6 = (int *)0x0;
		}
		else {
		piVar6 = &this->unlabelled16;
		}
		FUN_00176960(&local_f0,*(byte *)((int)&this->unlabelled12 + 2) & 0xf,(int)ctx,(float *)piVar6,*(byte *)((int)&this->unlabelled12 + 1),*(byte *)&this->unlabelled12);
		local_ac = local_ec;
		local_ec = local_ec + FLOAT_0038a770;
		local_b0 = local_f0;
		local_a8 = local_e8;
		local_a4 = local_e4;
		local_a0 = local_f0;
		local_98 = local_e8;
		local_94 = local_e4;
		local_9c = local_ec;
		FUN_00137280((int)&local_d4,(int)pIVar1);
		FUN_0013f1c0((int)this_00,&local_b0,2,&local_d4,(undefined4 *)0x0);
		fVar12 = FLOAT_00393c64;
		if ((short)local_d0 != 0) {
		pIVar2 = (pIVar1->parent).transform;
		iVar8 = 0;
		if ((*(byte *)&pIVar2->field3_0x60 & 4) != 0) {
		fVar9 = (pIVar2->matrix).m44;
		fVar10 = (pIVar2->matrix).m43;
		fVar11 = (pIVar2->matrix).m42;
		(pIVar2->position).x = (pIVar2->matrix).m41;
		(pIVar2->position).y = fVar11;
		(pIVar2->position).z = fVar10;
		(pIVar2->position).w = fVar9;
		pIVar2->field3_0x60 = (float)((uint)pIVar2->field3_0x60 & 0xfffffffa);
		}
		local_f0 = (pIVar2->position).x;
		local_ec = (pIVar2->position).y;
		local_e8 = (pIVar2->position).z;
		local_e4 = (pIVar2->position).w;
		if ((short)local_d0 != 0) {
		piVar6 = local_90;
		uVar7 = local_d0 & 0xffff;
		do {
		iVar3 = *piVar6;
		iVar4 = *(int *)(iVar3 + 0x18);
		if ((*(byte *)(iVar4 + 0x60) & 4) != 0) {
		*(undefined4 *)(iVar4 + 0x40) = *(undefined4 *)(iVar4 + 0x30);
		*(undefined4 *)(iVar4 + 0x44) = *(undefined4 *)(iVar4 + 0x34);
		*(undefined4 *)(iVar4 + 0x48) = *(undefined4 *)(iVar4 + 0x38);
		*(undefined4 *)(iVar4 + 0x4c) = *(undefined4 *)(iVar4 + 0x3c);
		*(uint *)(iVar4 + 0x60) = *(uint *)(iVar4 + 0x60) & 0xfffffffa;
		}
		fVar9 = *(float *)(iVar4 + 0x40) - local_f0;
		fVar11 = *(float *)(iVar4 + 0x48) - local_e8;
		fVar10 = *(float *)(iVar4 + 0x44) - local_ec;
		fVar9 = fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9;
		if (fVar12 < fVar9) {
		iVar8 = iVar3;
		fVar12 = fVar9;
		}
		piVar6 = piVar6 + 1;
		uVar7 = uVar7 - 1;
		}
		 while (uVar7 != 0);
		if (iVar8 != 0) {
		pIVar5 = InstanceDataList::GetNode((InstanceDataList *)(iVar8 + 0xe4),Instance);
		(**(code **)(*(int *)pIVar5[5].time + 0xc))();
		if ((*(uint *)(iVar8 + 0x14) & 0x200) == 0) {
		*(uint *)(iVar8 + 0x14) = *(uint *)(iVar8 + 0x14) | 0x200;
		}
		}
		}
		}
		return;
		}
		
	*/
	return;
}

void ActionUnsupportAbove::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionUnsupportAbove * __fastcall ActionUnsupportAbove::Construct(ActionUnsupportAbove *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_UnsupportAbove;
		this->unlabelled12 = uVar1 & 0xffc0ffff | 0xffff;
		return this;
		}
		
	*/
	return;
}

int ActionUnsupportAbove::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionUnsupportAbove::GetSize(void){
		return 0x20;
		}
		
	*/
	return 0;
}

void ActionUnsupportAbove::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionUnsupportAbove::UnkMethod(ActionUnsupportAbove *this,int *param_1){
		ushort uVar1;
		char cVar2;
		ushort *puVar3;
		float fVar4;
		float fVar5;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		this->unlabelled16 = (int)Vector4_0039ef70.x;
		this->unlabelled20 = (int)Vector4_0039ef70.y;
		this->unlabelled24 = (int)Vector4_0039ef70.z;
		this->unlabelled28 = (int)FLOAT_0038639c;
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		while (cVar2 == '\0') {
		puVar3 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar1 = *puVar3;
		if (uVar1 < 0x59) {
		switch(uVar1) {
		case 0:this->unlabelled16 = *(int *)(puVar3 + 2);
		break;
		case 1:this->unlabelled20 = *(int *)(puVar3 + 2);
		break;
		case 2:this->unlabelled24 = *(int *)(puVar3 + 2);
		break;
		case 3:case 4:case 5:break;
		case 6:*(undefined *)&this->unlabelled12 = *(undefined *)(puVar3 + 2);
		break;
		case 7:*(char *)((int)&this->unlabelled12 + 1) = *(char *)(puVar3 + 2) + -1;
		break;
		default:this->unlabelled12 = this->unlabelled12 | 0x100000;
		cVar2 = *(char *)((int)&this->unlabelled12 + 1);
		if (cVar2 != -1) {
		*(char *)((int)&this->unlabelled12 + 1) = cVar2 + '\x01';
		}
		}
		}
		else if ((uVar1 == 0xffff) && (*(char *)(puVar3 + 1) == '\x04')) {
		switch(*(undefined4 *)(puVar3 + 2)) {
		case 2:this->unlabelled12 = this->unlabelled12 & 0xfff0ffff;
		break;
		case 3:this->unlabelled12 = this->unlabelled12 & 0xfff1ffffU | 0x10000;
		break;
		case 4:this->unlabelled12 = this->unlabelled12 & 0xfff2ffffU | 0x20000;
		break;
		case 5:this->unlabelled12 = this->unlabelled12 & 0xfff3ffffU | 0x30000;
		break;
		case 0x21:this->unlabelled12 = this->unlabelled12 & 0xfff7ffffU | 0x70000;
		break;
		case 0x24:*(undefined *)((int)&this->unlabelled12 + 1) = 0xfe;
		break;
		case 0x25:*(undefined *)((int)&this->unlabelled12 + 1) = 0xfd;
		}
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		fVar5 = (float)this->unlabelled16;
		if (fVar5 < 0.0) {
		fVar5 = 0.0 - fVar5;
		}
		if (fVar5 <= FLOAT_003a35c8) {
		fVar5 = (float)this->unlabelled20;
		if (fVar5 < 0.0) {
		fVar5 = 0.0 - fVar5;
		}
		if (fVar5 <= FLOAT_003a35c8) {
		fVar5 = (float)this->unlabelled24;
		fVar4 = 0.0 - fVar5;
		if (0.0 <= fVar5) {
		fVar4 = fVar5;
		}
		if (fVar4 <= FLOAT_003a35c8) {
		return;
		}
		}
		}
		this->unlabelled12 = this->unlabelled12 | 0x200000;
		return;
		}
		
	*/
	return;
}

