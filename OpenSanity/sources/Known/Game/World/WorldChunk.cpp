#include "headers/Known/Game/World/WorldChunk.h"

#include "headers/Known/Game/World/WorldChunkSub.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/Game/World/World.h"
#include "headers/Known/Game/World/LevelHolderRM.h"
#include "headers/Unknown/Families/Families2X/Family27/UnkFamily27Wrapper.h"
#include "headers/Unknown/SomeState.h"
#include "headers/Known/Game/World/LevelHolderSM.h"
void WorldChunk::Construct(TwinString* chunkName, World* ac6, uint flags) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	WorldChunk * __thiscall WorldChunk::Construct(WorldChunk *this,TwinString *chunkName,World *ac6,uint flags){
		LevelHolderSM *sm;
		LevelHolderRM *rm;
		TwinString *this_00;
		TwinString *tmpStr;
		this->field0_0x0 = (WorldChunkSub *)0x0;
		this->field2_0x8 = -1;
		tmpStr = &this->chunkName;
		tmpStr->value = (char *)0x0;
		(this->chunkName).strLength = 0;
		(this->chunkName).strSize = 0;
		TwinString::Copy(tmpStr,chunkName->value);
		this->world = ac6;
		this->someState = ac6->someState;
		this->findMe = (undefined *)0x0;
		this->next = (WorldChunk *)0x0;
		this->prev = (WorldChunk *)0x0;
		this->flags = 0;
		this->flags = (flags & 0xf) << 4 | flags & 0xf;
		TwinString::ToLower(tmpStr);
		sm = (LevelHolderSM *)VirtualPool::AllocateMemory(0x20);
		if (sm == (LevelHolderSM *)0x0) {
		sm = (LevelHolderSM *)0x0;
		}
		else {
		sm = LevelHolderSM::Construct(sm,this);
		}
		this->SM = sm;
		rm = (LevelHolderRM *)VirtualPool::AllocateMemory(0x20);
		if (rm != (LevelHolderRM *)0x0) {
		rm = LevelHolderRM::Construct(rm,this);
		this->RM = rm;
		return this;
		}
		this->RM = (LevelHolderRM *)0x0;
		return this;
		}
		
	*/
	return;
}

bool WorldChunk::CheckFlags() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall WorldChunk::CheckFlags(WorldChunk *this){
		bool bVar1;
		bool bVar2;
		bVar1 = true;
		if (this->RM != (LevelHolderRM *)0x0) {
		bVar1 = (*((this->RM->parent).vtable)->IsB)();
		bVar1 = (bool)(bVar1 & 1);
		}
		if (this->SM != (LevelHolderSM *)0x0) {
		bVar2 = (*((this->SM->parent).vtable)->IsB)();
		bVar1 = (bool)(bVar1 & bVar2);
		}
		return bVar1;
		}
		
	*/
	return false;
}

bool WorldChunk::CheckSomeNum(bool flag) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall WorldChunk::CheckSomeNum(WorldChunk *this,bool flag){
		int iVar1;
		LevelHolderSM *pLVar2;
		bool result;
		LevelHolderRM *ptr;
		ptr = this->RM;
		result = true;
		if (ptr != (LevelHolderRM *)0x0) {
		if (flag == false) {
		result = (ptr->parent).someNum == 4;
		}
		else {
		iVar1 = (ptr->parent).someNum;
		if ((iVar1 == 4) || (iVar1 == 5)) {
		result = true;
		}
		else {
		result = false;
		}
		}
		}
		pLVar2 = this->SM;
		if (pLVar2 != (LevelHolderSM *)0x0) {
		if (flag != false) {
		iVar1 = (pLVar2->parent).someNum;
		if ((iVar1 != 4) && (iVar1 != 5)) {
		return false;
		}
		return result;
		}
		result = (bool)(result & (pLVar2->parent).someNum == 4);
		}
		return result;
		}
		
	*/
	return false;
}

bool WorldChunk::CheckSomeNum2(bool param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall WorldChunk::CheckSomeNum2(WorldChunk *this,bool param_1){
		LevelHolderRM *pLVar1;
		LevelHolderSM *pLVar2;
		bool bVar3;
		bool bVar4;
		int iVar5;
		undefined *ptr;
		WorldChunk *unkSub;
		ptr = this->findMe;
		do {
		if (ptr == (undefined *)0x0) {
		return true;
		}
		if (*(WorldChunk ***)(ptr + 0x10) == (WorldChunk **)0x0) {
		return false;
		}
		unkSub = **(WorldChunk ***)(ptr + 0x10);
		if (unkSub == (WorldChunk *)0x0) {
		return false;
		}
		bVar3 = CheckSomeNum(unkSub,param_1);
		if (bVar3 == false) {
		pLVar1 = unkSub->RM;
		pLVar2 = unkSub->SM;
		if ((pLVar1 == (LevelHolderRM *)0x0) ||(bVar3 = (*((pLVar1->parent).vtable)->IsB)(), bVar3 == false)) {
		bVar3 = false;
		}
		else {
		bVar3 = true;
		}
		if ((pLVar2 == (LevelHolderSM *)0x0) ||(bVar4 = (*((pLVar2->parent).vtable)->IsB)(), bVar4 == false)) {
		if (!bVar3) {
		return false;
		}
		if (param_1 != false) {
		iVar5 = (pLVar2->parent).someNum;
		goto joined_r0x0020515b;
		}
		iVar5 = (pLVar2->parent).someNum;
		LAB_0020516c:if (iVar5 != 4) {
		return false;
		}
		}
		else if (!bVar3) {
		if (param_1 == false) {
		iVar5 = (pLVar1->parent).someNum;
		goto LAB_0020516c;
		}
		iVar5 = (pLVar1->parent).someNum;
		joined_r0x0020515b:if ((iVar5 != 4) && (iVar5 != 5)) {
		return false;
		}
		}
		}
		ptr = *(undefined **)(ptr + 0xc4);
		}
		 while( true );
		}
		
	*/
	return false;
}

bool WorldChunk::MaybeRead(int param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall WorldChunk::MaybeRead(WorldChunk *this,int param_1,undefined4 param_2){
		LevelHolderSM *pLVar1;
		ChunkData *pCVar2;
		uint uVar3;
		byte bVar5;
		byte bVar6;
		int iVar7;
		bool bVar4;
		bool bVar8;
		bVar4 = false;
		if ((this->world->restrict).strLength != 0) {
		iVar7 = TwinString::FindSubstringEndPos(&this->chunkName,0,(this->world->restrict).value);
		if (iVar7 != 0) goto LAB_002051df;
		}
		if (this->field2_0x8 != param_1) {
		this->flags = this->flags | 0xff;
		}
		bVar5 = (*((this->SM->parent).vtable)->SometimesDoesRead)(&this->SM->parent,param_2);
		bVar6 = (*((this->RM->parent).vtable)->SometimesDoesRead)(&this->RM->parent,param_2);
		bVar4 = (bool)(bVar5 | bVar6);
		LAB_002051df:pLVar1 = this->SM;
		if (((pLVar1 != (LevelHolderSM *)0x0) && (pLVar1->chunkDataRef != (ChunkDataRefCounter *)0x0)) &&(pCVar2 = pLVar1->chunkDataRef->chunk, pCVar2 != (ChunkData *)0x0)) {
		bVar8 = true;
		if (this->RM != (LevelHolderRM *)0x0) {
		bVar8 = (this->RM->parent).someNum == 4;
		}
		uVar3 = pCVar2->sceneryFlags;
		if ((bool)(bVar8 & (pLVar1->parent).someNum == 4)) {
		if ((uVar3 & 0x3c0000) == 0) {
		pCVar2->sceneryFlags = uVar3 & 0xffc7ffff | 0x40000;
		return bVar4;
		}
		}
		else if ((uVar3 & 0x3c0000) == 0x40000) {
		pCVar2->sceneryFlags = uVar3 & 0xffc3ffff;
		}
		}
		return bVar4;
		}
		
	*/
	return false;
}

void WorldChunk::FUN_00206990() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall WorldChunk::FUN_00206990(WorldChunk *this){
		undefined *puVar1;
		undefined *ptr;
		ptr = this->findMe;
		while (ptr != (undefined *)0x0) {
		puVar1 = *(undefined **)(ptr + 0xc4);
		if (this->SM != (LevelHolderSM *)0x0) {
		LevelHolderSM::FUN_001547d0(this->SM,ptr);
		}
		if (this->RM != (LevelHolderRM *)0x0) {
		::EmptyFunction();
		}
		FUN_00207a60((int)ptr,&this->findMe,200,0xc4);
		FUN_00205f20((int)ptr);
		VirtualPool::FreeMemory(ptr);
		ptr = puVar1;
		}
		return;
		}
		
	*/
	return;
}

void WorldChunk::FUN_00206af0(int param_1, uint param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall WorldChunk::FUN_00206af0(WorldChunk *this,int param_1,uint param_2,uint param_3){
		int iVar1;
		InstanceContextRefCounter *pIVar2;
		LevelHolderRM *pLVar3;
		LevelHolderSM *pLVar4;
		WorldChunk *pWVar5;
		byte bVar6;
		uint uVar7;
		uint uVar8;
		byte bVar9;
		WorldChunk *worldChunk;
		undefined *this_02;
		bool bVar10;
		bool bVar11;
		bool bVar12;
		bool local_36;
		bool local_35;
		uint local_2c;
		uint local_28;
		Vector4 local_20;
		InstanceNodeCharacter *this_03;
		bVar12 = this->field2_0x8 == param_1;
		uVar8 = this->flags;
		bVar10 = param_2 < (uVar8 >> 4 & 0xf);
		bVar11 = param_3 < (uVar8 & 0xf);
		if (((!bVar12) || (bVar10)) || (bVar11)) {
		bVar6 = *(byte *)((int)&this->world->flags + 3);
		bVar9 = bVar6 & 0xf;
		if (bVar12) {
		if (bVar10) {
		this->flags = (param_2 << 4 ^ uVar8) & 0xf0 ^ uVar8;
		}
		if (bVar11) {
		this->flags = this->flags ^ (this->flags ^ param_3) & 0xf;
		}
		}
		else {
		this->flags = (param_2 & 0xf) << 4 | uVar8 & 0xffffff00 | param_3 & 0xf;
		this->field2_0x8 = param_1;
		}
		if (((bVar6 & 0xf) != 0) &&((((this->flags & 0x200) != 0 || (bVar9 != 5)) ||(bVar10 = CheckFlags(this), bVar10 == false)))) {
		this_02 = this->findMe;
		local_36 = this_02 != (undefined *)0x0;
		uVar7 = (uint)local_36;
		uVar8 = uVar7;
		local_35 = local_36;
		if (this_02 != (undefined *)0x0) {
		do {
		bVar10 = (*(uint *)(this_02 + 0x20) & 0x3f80) == 0;
		if ((param_2 == 0xf) || (bVar10)) {
		local_28 = 0xf;
		}
		else {
		local_28 = param_2 + 1;
		}
		if (param_3 == 0xf) {
		local_2c = 0xf;
		}
		else {
		local_2c = param_3 + 1;
		}
		if (*(WorldChunk ***)(this_02 + 0x10) == (WorldChunk **)0x0) {
		worldChunk = (WorldChunk *)0x0;
		}
		else {
		worldChunk = **(WorldChunk ***)(this_02 + 0x10);
		}
		if (this->SM != (LevelHolderSM *)0x0) {
		LevelHolderSM::FUN_00154770(this->SM,(int)this_02);
		}
		if (this->RM != (LevelHolderRM *)0x0) {
		FUN_001b3ff0((int)this_02);
		}
		if (worldChunk == (WorldChunk *)0x0) {
		worldChunk = World::GetChunkByName(this->world,(TwinString *)(this_02 + 4));
		if ((worldChunk == (WorldChunk *)0x0) && (bVar9 != 1)) {
		worldChunk = World::AddChunkByName(this->world,(TwinString *)(this_02 + 4),0xf);
		}
		pWVar5 = worldChunk;
		if (worldChunk != (WorldChunk *)0x0) {
		pWVar5 = (WorldChunk *)FUN_00207fa0(worldChunk,worldChunk,0);
		}
		FUN_00208900((int)this_02,&pWVar5->field0_0x0);
		if (worldChunk != (WorldChunk *)0x0) goto LAB_00206ce4;
		local_36 = false;
		local_35 = false;
		}
		else {
		LAB_00206ce4:iVar1 = *(int *)(this_02 + 0xc0);
		if (((this->flags & 0x200) == 0) && (iVar1 != 0)) {
		pIVar2 = (this->world->ctxPtr).refCounter;
		if ((pIVar2 == (InstanceContextRefCounter *)0x0) ||(this_03 = (InstanceNodeCharacter *)pIVar2->ctx,this_03 == (InstanceNodeCharacter *)0x0)) {
		bVar11 = (*(uint *)this_02 >> 1 & 1) == 0;
		}
		else {
		InstanceNodeCharacter::GetPosition(this_03,&local_20);
		bVar11 = FUN_00204290(iVar1,&local_20.x);
		bVar11 = bVar11 == false;
		}
		if (!bVar11) goto LAB_00206d35;
		}
		else {
		LAB_00206d35:FUN_00206af0(worldChunk,param_1,local_28,local_2c);
		}
		if (!bVar10) {
		pLVar3 = worldChunk->RM;
		if ((pLVar3 == (LevelHolderRM *)0x0) || ((pLVar3->parent).someNum != 4)) {
		bVar6 = 0;
		}
		else {
		bVar6 = 1;
		}
		local_36 = (bool)(local_36 & bVar6);
		if ((pLVar3 == (LevelHolderRM *)0x0) ||((iVar1 = (pLVar3->parent).someNum, iVar1 != 1 && (iVar1 != 4)))) {
		bVar6 = 0;
		}
		else {
		bVar6 = 1;
		}
		local_35 = (bool)(local_35 & bVar6);
		}
		pLVar4 = worldChunk->SM;
		if ((pLVar4 == (LevelHolderSM *)0x0) || ((pLVar4->parent).someNum != 4)) {
		bVar6 = 0;
		}
		else {
		bVar6 = 1;
		}
		local_36 = (bool)(local_36 & bVar6);
		if ((pLVar4 == (LevelHolderSM *)0x0) ||((iVar1 = (pLVar4->parent).someNum, iVar1 != 1 && (iVar1 != 4)))) {
		bVar6 = 0;
		}
		else {
		bVar6 = 1;
		}
		local_35 = (bool)(local_35 & bVar6);
		}
		this_02 = *(undefined **)(this_02 + 0xc4);
		}
		 while (this_02 != (undefined *)0x0);
		uVar8 = (uint)local_36;
		uVar7 = (uint)local_35;
		}
		this->flags = (uVar7 << 1 | uVar8) << 10 | this->flags & 0xfffff3ff;
		}
		}
		return;
		}
		
	*/
	return;
}

void WorldChunk::SetHackyShit(WorldChunk** other, int fieldIndex1, int fieldIndex2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __cdecl WorldChunk::SetHackyShit(WorldChunk *this,WorldChunk **other,int fieldIndex1,int fieldIndex2){
		int iVar1;
		int iVar2;
		iVar1 = *(int *)((int)&this->field0_0x0 + fieldIndex1);
		if (iVar1 != 0) {
		iVar2 = *(int *)((int)&this->field0_0x0 + fieldIndex2);
		if (iVar2 == 0) {
		*(undefined4 *)(iVar1 + fieldIndex2) = 0;
		*(undefined4 *)((int)&this->field0_0x0 + fieldIndex2) = 0;
		*(undefined4 *)((int)&this->field0_0x0 + fieldIndex1) = 0;
		return;
		}
		*(int *)(iVar1 + fieldIndex2) = iVar2;
		*(undefined4 *)(fieldIndex1 + *(int *)((int)&this->field0_0x0 + fieldIndex2)) =*(undefined4 *)((int)&this->field0_0x0 + fieldIndex1);
		*(undefined4 *)((int)&this->field0_0x0 + fieldIndex2) = 0;
		*(undefined4 *)((int)&this->field0_0x0 + fieldIndex1) = 0;
		return;
		}
		iVar1 = *(int *)((int)&this->field0_0x0 + fieldIndex2);
		if (iVar1 == 0) {
		*other = (WorldChunk *)0x0;
		*(undefined4 *)((int)&this->field0_0x0 + fieldIndex2) = 0;
		*(undefined4 *)((int)&this->field0_0x0 + fieldIndex1) = 0;
		return;
		}
		*(undefined4 *)(iVar1 + fieldIndex1) = 0;
		*other = *(WorldChunk **)((int)&this->field0_0x0 + fieldIndex2);
		*(undefined4 *)((int)&this->field0_0x0 + fieldIndex2) = 0;
		*(undefined4 *)((int)&this->field0_0x0 + fieldIndex1) = 0;
		return;
		}
		
	*/
	return;
}

WorldChunkSub* WorldChunk::FUN_00207fa0(WorldChunk* param_1, byte param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	WorldChunkSub * __thiscall WorldChunk::FUN_00207fa0(WorldChunk *this,WorldChunk *param_1,byte param_2){
		uint uVar1;
		WorldChunkSub *pWVar2;
		if (this->field0_0x0 == (WorldChunkSub *)0x0) {
		pWVar2 = (WorldChunkSub *)VirtualPool::AllocateMemory(8);
		if (pWVar2 == (WorldChunkSub *)0x0) {
		pWVar2 = (WorldChunkSub *)0x0;
		}
		else {
		pWVar2->worldChunk = param_1;
		pWVar2->field1_0x4 = (param_2 & 1) << 0x18 | pWVar2->field1_0x4 & 0xfe000000;
		}
		this->field0_0x0 = pWVar2;
		}
		uVar1 = this->field0_0x0->field1_0x4;
		this->field0_0x0->field1_0x4 = (uVar1 + 1 ^ uVar1) & 0xffffff ^ uVar1;
		return this->field0_0x0;
		}
		
	*/
	return null;
}

uint WorldChunk::FUN_00207550(UnkFamily27Wrapper* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall WorldChunk::FUN_00207550(WorldChunk *this,UnkFamily27Wrapper *param_1){
		int *piVar1;
		UnkFamily27A *pUVar2;
		UnkFamily27Wrapper *pUVar3;
		bool bVar4;
		byte bVar5;
		undefined3 extraout_var;
		uint uVar6;
		undefined3 extraout_var_00;
		uint uVar7;
		undefined4 *this_00;
		byte bVar8;
		undefined *puVar9;
		uint local_c;
		uint uStack8;
		WorldChunk *local_4;
		pUVar3 = param_1;
		local_c = 0;
		if (param_1->field1_0x4 == 1) {
		for (puVar9 = this->findMe;
		 puVar9 != (undefined *)0x0;
		 puVar9 = *(undefined **)(puVar9 + 0xc4)){
		local_c = local_c + 1;
		}
		}
		local_4 = this;
		bVar4 = UnkFamily27A::FUN_0020c0a0(param_1->ptr);
		uVar6 = CONCAT31(extraout_var,bVar4);
		if (bVar4 != false) {
		if (param_1->field1_0x4 == 0) {
		uVar6 = (*(code *)((param_1->ptr->parent).vtable)->somethingTemplate)(0xc01,&local_c);
		goto LAB_002075ce;
		}
		uVar6 = param_1->field1_0x4 - 1;
		if (uVar6 == 0) {
		uVar6 = (*(code *)((param_1->ptr->parent).vtable)->field9_0x24)(0xc01,local_c);
		goto LAB_002075ce;
		}
		}
		uVar6 = uVar6 & 0xffffff00;
		LAB_002075ce:piVar1 = &param_1->field1_0x4;
		uVar7 = uVar6 & 0xffffff01;
		param_1 = (UnkFamily27Wrapper *)(uVar6 & 1);
		if (*piVar1 == 1) {
		puVar9 = this->findMe;
		if (puVar9 != (undefined *)0x0) {
		do {
		bVar4 = UnkFamily27A::FUN_0020c0a0(pUVar3->ptr);
		uVar6 = CONCAT31(extraout_var_00,bVar4);
		if (bVar4 == false) {
		LAB_00207694:bVar8 = 0;
		}
		else if (pUVar3->field1_0x4 == 0) {
		pUVar2 = pUVar3->ptr;
		bVar5 = (*(code *)((pUVar2->parent).vtable)->field42_0xa8)(0xc02,0x1d01,0);
		bVar8 = bVar5 & 1;
		if ((bVar5 & 1) != 0) {
		uVar6 = FUN_00207120(puVar9,(int **)(pUVar2->parent).field410_0x1ac);
		bVar8 = bVar5 & 1 & (byte)uVar6;
		}
		uVar6 = (*(code *)((pUVar2->parent).vtable)->field43_0xac)(0xc02,0x1d01);
		}
		else {
		uVar6 = pUVar3->field1_0x4 - 1;
		if (uVar6 != 0) goto LAB_00207694;
		pUVar2 = pUVar3->ptr;
		uVar6 = (*(code *)((pUVar2->parent).vtable)->field17_0x44)(0xc02,0x1d01,0);
		bVar5 = (byte)uVar6;
		bVar8 = bVar5 & 1;
		if ((uVar6 & 1) != 0) {
		uVar7 = FUN_00207120(puVar9,(int **)(pUVar2->parent).field410_0x1ac);
		uVar6 = (*(code *)((pUVar2->parent).vtable)->field18_0x48)(0xc02,0x1d01);
		bVar8 = bVar5 & 1 & (byte)uVar7 & (byte)uVar6;
		}
		}
		puVar9 = *(undefined **)(puVar9 + 0xc4);
		param_1 = (UnkFamily27Wrapper *)(uint)((byte)param_1 & bVar8);
		if (puVar9 == (undefined *)0x0) {
		return uVar6 & 0xffffff00 | (uint)((byte)param_1 & bVar8);
		}
		}
		 while( true );
		}
		}
		else {
		uStack8 = 0;
		if (local_c != 0) {
		do {
		this_00 = (undefined4 *)VirtualPool::AllocateMemory(0xd0);
		if (this_00 == (undefined4 *)0x0) {
		this_00 = (undefined4 *)0x0;
		}
		else {
		this_00[1] = 0;
		this_00[2] = 0;
		this_00[3] = 0;
		this_00[4] = 0;
		UNV024::Construct((UNV024 *)(this_00 + 8));
		this_00[0x30] = 0;
		this_00[0x31] = 0;
		this_00[0x32] = 0;
		*this_00 = 0;
		}
		bVar4 = UnkFamily27A::FUN_0020c0a0(pUVar3->ptr);
		if (bVar4 == false) {
		LAB_002077b5:bVar8 = 0;
		}
		else if (pUVar3->field1_0x4 == 0) {
		pUVar2 = pUVar3->ptr;
		bVar5 = (*(code *)((pUVar2->parent).vtable)->field42_0xa8)(0xc02,0x1d01,0);
		bVar8 = bVar5 & 1;
		if ((bVar5 & 1) != 0) {
		uVar6 = FUN_00207120(this_00,(int **)(pUVar2->parent).field410_0x1ac);
		bVar8 = bVar5 & 1 & (byte)uVar6;
		}
		(*(code *)((pUVar2->parent).vtable)->field43_0xac)(0xc02,0x1d01);
		}
		else {
		if (pUVar3->field1_0x4 != 1) goto LAB_002077b5;
		pUVar2 = pUVar3->ptr;
		bVar5 = (*(code *)((pUVar2->parent).vtable)->field17_0x44)(0xc02,0x1d01,0);
		bVar8 = bVar5 & 1;
		if ((bVar5 & 1) != 0) {
		uVar6 = FUN_00207120(this_00,(int **)(pUVar2->parent).field410_0x1ac);
		bVar8 = (*(code *)((pUVar2->parent).vtable)->field18_0x48)(0xc02,0x1d01);
		bVar8 = bVar5 & 1 & (byte)uVar6 & bVar8;
		}
		}
		param_1 = (UnkFamily27Wrapper *)(uint)((byte)param_1 & bVar8);
		if (local_4->findMe == (undefined *)0x0) {
		local_4->findMe = (undefined *)this_00;
		this_00[0x32] = 0;
		this_00[0x31] = 0;
		}
		else {
		*(undefined4 **)(local_4->findMe + 200) = this_00;
		this_00[0x31] = local_4->findMe;
		local_4->findMe = (undefined *)this_00;
		}
		uStack8 = uStack8 + 1;
		}
		 while (uStack8 < local_c);
		uVar7 = uStack8 & 0xffffff00 | (uint)param_1;
		}
		}
		return uVar7;
		}
		
	*/
	return 0;
}

