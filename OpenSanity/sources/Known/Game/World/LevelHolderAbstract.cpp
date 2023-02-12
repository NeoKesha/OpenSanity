#include "headers/Known/Game/World/LevelHolderAbstract.h"

#include "headers/Known/Game/World/WorldChunk.h"
void LevelHolderAbstract::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall LevelHolderAbstract::Construct(LevelHolderAbstract *this,WorldChunk *param_1){
		this->worldChunk = param_1;
		this->vtable = (LevelHolder_VTable *)&LevelHolder_VT_Abstract;
		this->someNum = 0;
		this->field2_0x8 = (UnkFamily18Abstract *)0x0;
		return;
		}
		
	*/
	return;
}

void LevelHolderAbstract::Unroll() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall LevelHolderAbstract::Unroll(LevelHolderAbstract *this){
		this->vtable = (LevelHolder_VTable *)&LevelHolder_VT_Abstract;
		return;
		}
		
	*/
	return;
}

bool LevelHolderAbstract::SometimesDoesRead(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall LevelHolderAbstract::SometimesDoesRead(LevelHolderAbstract *this,undefined4 param_1){
		int iVar1;
		WorldChunk *pWVar2;
		int iVar3;
		LevelHolderRM *pLVar4;
		LevelHolderSM *pLVar5;
		byte bVar6;
		char cVar7;
		bool bVar8;
		undefined4 uVar9;
		undefined *puVar10;
		byte bVar11;
		int iVar12;
		UnkFamily18Abstract **ppUVar13;
		char in_stack_00000008;
		iVar1 = this->worldChunk->someState->currentTime;
		ppUVar13 = &this->field2_0x8;
		bVar11 = *(byte *)((int)&this->worldChunk->world->flags + 3) & 0xf;
		iVar12 = 0;
		do {
		if (ppUVar13[3] == (UnkFamily18Abstract *)0x0) break;
		switch(ppUVar13[3]) {
		case (UnkFamily18Abstract *)0x1:pLVar4 = this->worldChunk->RM;
		if ((bVar11 == 1) || ((bVar11 == 2 || (bVar11 == 3)))) {
		LAB_0020532f:bVar8 = (*this->vtable->Read)(this,iVar12);
		if (bVar8 != false) {
		puVar10 = (undefined *)0x3;
		goto LAB_00205490;
		}
		}
		else if (((pLVar4 != (LevelHolderRM *)0x0) && ((pLVar4->parent).someNum == 1)) &&(cVar7 = (*(code *)(*ppUVar13)->vtable->IsA)(this->worldChunk), cVar7 != '\0')) {
		ppUVar13[2] = (UnkFamily18Abstract *)(int)TicksPerTime;
		puVar10 = (undefined *)0x2;
		goto LAB_00205490;
		}
		break;
		case (UnkFamily18Abstract *)0x2:cVar7 = (*(code *)(*ppUVar13)->vtable->IsB)(this->worldChunk);
		if (cVar7 != '\0') {
		LAB_0020548b:puVar10 = (undefined *)0x1;
		goto LAB_00205490;
		}
		if ((in_stack_00000008 != '\0') || ((int)ppUVar13[2] < iVar1 - (int)ppUVar13[1]))goto LAB_0020532f;
		break;
		case (UnkFamily18Abstract *)0x3:bVar8 = (*this->vtable->DisposeSection)(this);
		if (bVar8 == false) {
		puVar10 = (undefined *)0x4;
		goto LAB_00205490;
		}
		break;
		case (UnkFamily18Abstract *)0x4:pWVar2 = this->worldChunk;
		bVar8 = true;
		if (pWVar2->RM != (LevelHolderRM *)0x0) {
		iVar3 = (pWVar2->RM->parent).someNum;
		if ((iVar3 == 2) || (iVar3 == 3)) {
		bVar8 = true;
		}
		else {
		bVar8 = false;
		}
		}
		if (pWVar2->SM != (LevelHolderSM *)0x0) {
		iVar3 = (pWVar2->SM->parent).someNum;
		if ((iVar3 == 2) || (iVar3 == 3)) {
		bVar6 = 1;
		}
		else {
		bVar6 = 0;
		}
		bVar8 = (bool)(bVar8 & bVar6);
		}
		if ((!bVar8) && (bVar11 == 5)) {
		uVar9 = FUN_00207e40((int)pWVar2);
		if ((char)uVar9 == '\0') {
		cVar7 = (*(code *)(*ppUVar13)->vtable->IsB)(pWVar2);
		if (cVar7 == '\0') break;
		ppUVar13[2] = (UnkFamily18Abstract *)(int)(TicksPerTime * FLOAT_003962e4);
		puVar10 = &DAT_00000005;
		}
		else {
		ppUVar13[2] = (UnkFamily18Abstract *)(int)(TicksPerTime * FLOAT_003962e8);
		puVar10 = &DAT_00000005;
		}
		goto LAB_00205490;
		}
		break;
		case (UnkFamily18Abstract *)0x5:cVar7 = (*(code *)(*ppUVar13)->vtable->IsA)(this->worldChunk);
		if (cVar7 == '\0') {
		if ((((char)param_1 == '\0') && (iVar1 - (int)ppUVar13[1] <= (int)ppUVar13[2])) ||(bVar8 = (*this->vtable->DoChunkStuff)(this), bVar8 == false)) break;
		puVar10 = &PRIMITIVE_TYPE;
		}
		else {
		puVar10 = (undefined *)0x4;
		}
		LAB_00205490:ppUVar13[3] = (UnkFamily18Abstract *)puVar10;
		ppUVar13[1] = (UnkFamily18Abstract *)iVar1;
		break;
		case (UnkFamily18Abstract *)0x6:bVar8 = (*this->vtable->Method4)(this);
		if (bVar8 == false) {
		puVar10 = &DAT_00000007;
		goto LAB_00205490;
		}
		break;
		case (UnkFamily18Abstract *)0x7:pLVar4 = this->worldChunk->RM;
		pLVar5 = this->worldChunk->SM;
		if (((pLVar4 != (LevelHolderRM *)0x0) && ((pLVar4->parent).someNum == 4)) ||((pLVar5 != (LevelHolderSM *)0x0 && ((pLVar5->parent).someNum == 4)))) goto LAB_0020548b;
		}
		iVar12 = iVar12 + 1;
		ppUVar13 = ppUVar13 + 1;
		}
		 while (iVar12 == 0);
		if ((this->someNum != 1) && (this->someNum != 7)) {
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

bool LevelHolderAbstract::IsA() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall LevelHolderAbstract::IsA(LevelHolderAbstract *this){
		undefined uVar1;
		uVar1 = (*(code *)this->field2_0x8->vtable->IsA)(this->worldChunk);
		return (bool)uVar1;
		}
		
	*/
	return false;
}

bool LevelHolderAbstract::IsB() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall LevelHolderAbstract::IsB(LevelHolderAbstract *this){
		byte bVar1;
		bVar1 = (*(code *)this->field2_0x8->vtable->IsB)(this->worldChunk);
		return (bool)(bVar1 & 1);
		}
		
	*/
	return false;
}

void LevelHolderAbstract::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	LevelHolderAbstract * __thiscall LevelHolderAbstract::Dispose(LevelHolderAbstract *this,byte param_1){
		this->vtable = (LevelHolder_VTable *)&LevelHolder_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

