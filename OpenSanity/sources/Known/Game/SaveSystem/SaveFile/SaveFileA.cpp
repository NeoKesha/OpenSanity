#include "headers/Known/Game/SaveSystem/SaveFile/SaveFileA.h"

#include "headers/Known/Game/SaveSystem/BankSub/BankSub.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void SaveFileA::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SaveFileA::Dispose(SaveFileA *this){
		int iVar1;
		MemoryStream *this_00;
		uint uVar2;
		BankSub *bankSub;
		iVar1 = this->bankCnt;
		uVar2 = 0;
		(this->parent).vtable = (SaveFileAbstract_VTable *)&SaveFile_VT_A;
		if (iVar1 != 0) {
		do {
		bankSub = this->bankSubs[uVar2];
		if (bankSub != (BankSub *)0x0) {
		(*bankSub->vtable->Dispose)(bankSub,1);
		}
		uVar2 = uVar2 + 1;
		}
		 while (uVar2 < (uint)this->bankCnt);
		}
		VirtualPool::FreeMemory(this->bankSubs);
		this_00 = (this->parent).stream;
		(this->parent).vtable = (SaveFileAbstract_VTable *)&SaveFile_VT_Abstract;
		if (this_00 != (MemoryStream *)0x0) {
		(*this_00->vtable->Dispose)(this_00,1);
		}
		TwinString::Dispose(&(this->parent).name);
		return;
		}
		
	*/
	return;
}

void SaveFileA::Construct(char* headerBin, uint banks, uint param_3, int length, uint start) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SaveFileA * __thiscall SaveFileA::Construct(SaveFileA *this,char *headerBin,uint banks,undefined4 param_3,int length,byte *start){
		int *piVar1;
		uint i;
		(this->parent).vtable = (SaveFileAbstract_VTable *)&SaveFile_VT_Abstract;
		TwinString::Set(&(this->parent).name,headerBin);
		(this->parent).saveTime.dwHighDateTime = 0;
		(this->parent).saveTime.dwLowDateTime = 0;
		(this->parent).field3_0x18 = param_3;
		(this->parent).saveHash = 0;
		(this->parent).stream = (MemoryStream *)0x0;
		(this->parent).streamLength = length;
		(this->parent).streamStartPtr = start;
		(this->parent).vtable = (SaveFileAbstract_VTable *)&SaveFile_VT_A;
		this->bankCnt = banks;
		piVar1 = (int *)VirtualPool::AllocateMemory(banks * 4);
		this->bankSubs = (BankSub **)piVar1;
		i = 0;
		if (banks != 0) {
		do {
		this->bankSubs[i] = (BankSub *)0x0;
		i = i + 1;
		}
		 while (i < banks);
		}
		return this;
		}
		
	*/
	return;
}

void SaveFileA::ReadBanks(MemoryStream* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SaveFileA::ReadBanks(SaveFileA *this,MemoryStream *param_1){
		uint i;
		i = 0;
		if (this->bankCnt != 0) {
		do {
		(*this->bankSubs[i]->vtable->Read)(this->bankSubs[i],param_1);
		i = i + 1;
		}
		 while (i < (uint)this->bankCnt);
		}
		return;
		}
		
	*/
	return;
}

void SaveFileA::WriteBanks(MemoryStream* memoryStream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SaveFileA::WriteBanks(SaveFileA *this,MemoryStream *memoryStream){
		uint i;
		i = 0;
		if (this->bankCnt != 0) {
		do {
		(*this->bankSubs[i]->vtable->Write)(this->bankSubs[i],memoryStream);
		i = i + 1;
		}
		 while (i < (uint)this->bankCnt);
		}
		return;
		}
		
	*/
	return;
}

void SaveFileA::Dispose_4(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SaveFileA * __thiscall SaveFileA::Dispose(SaveFileA *this,byte param_1){
		Dispose(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void SaveFileA::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SaveFileA::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SaveFileA::Construct_6(char* name, uint cnt, uint param_3, uint param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SaveFileA * __thiscall SaveFileA::Construct(SaveFileA *this,char *name,uint cnt,undefined4 param_3,undefined4 param_4){
		BankSub **ppBVar1;
		uint uVar2;
		(this->parent).vtable = (SaveFileAbstract_VTable *)&SaveFile_VT_Abstract;
		TwinString::Set(&(this->parent).name,name);
		(this->parent).saveTime.dwHighDateTime = 0;
		(this->parent).saveTime.dwLowDateTime = 0;
		(this->parent).saveHash = 0;
		(this->parent).stream = (MemoryStream *)0x0;
		(this->parent).field3_0x18 = param_3;
		(this->parent).streamLength = param_4;
		(this->parent).streamStartPtr = (byte *)0x0;
		(this->parent).vtable = (SaveFileAbstract_VTable *)&SaveFile_VT_A;
		this->bankCnt = cnt;
		ppBVar1 = (BankSub **)VirtualPool::AllocateMemory(cnt * 4);
		this->bankSubs = ppBVar1;
		uVar2 = 0;
		if (cnt != 0) {
		do {
		this->bankSubs[uVar2] = (BankSub *)0x0;
		uVar2 = uVar2 + 1;
		}
		 while (uVar2 < cnt);
		}
		return this;
		}
		
	*/
	return;
}

