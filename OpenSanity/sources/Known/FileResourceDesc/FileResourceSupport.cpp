#include "headers/Known/FileResourceDesc/FileResourceSupport.h"

int FileResourceSupport::FUN_002104e0(char* fname) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall FileResourceSupport::FUN_002104e0(FileResourceSupport *this,char *fname){
		int iVar1;
		uint uVar2;
		undefined4 uVar3;
		int iVar4;
		undefined *puVar5;
		TwinString *in_stack_ffffffcc;
		TwinString local_18;
		TwinString tmpStr;
		TwinString::Set(&tmpStr,fname);
		puVar5 = (undefined *)0x0;
		iVar4 = 0;
		if (0 < tmpStr.strLength) {
		do {
		iVar1 = _toupper((int)tmpStr.value[iVar4]);
		tmpStr.value[iVar4] = (char)iVar1;
		iVar4 = iVar4 + 1;
		}
		 while (iVar4 < tmpStr.strLength);
		}
		TwinString::SubstringRelated(&tmpStr,"HOST0:");
		local_18.value = (char *)0x0;
		local_18.strLength = 0;
		local_18.strSize = 0;
		TwinString::Copy(&local_18,tmpStr.value);
		if (this->field1_0x4 != 0) {
		uVar2 = FUN_00211df0(this,(byte **)&local_18);
		puVar5 = this->field0_0x0 + uVar2 * 0x14;
		uVar3 = TwinString::FUN_00135e40((TwinString *)(puVar5 + 8),local_18.value);
		if ((char)uVar3 != '\0') {
		TwinString::Dispose(&local_18);
		puVar5 = (undefined *)0x0;
		goto LAB_0021058d;
		}
		}
		TwinString::Dispose(&local_18);
		LAB_0021058d:this->field4_0xc = puVar5;
		TwinString::Set((TwinString *)&stack0xffffffcc,fname);
		StringCollection::AddString(&this->stringCollection,in_stack_ffffffcc);
		TwinString::Dispose(&tmpStr);
		return (int)puVar5;
		}
		
	*/
	return 0;
}

void FileResourceSupport::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Type propagation algorithm not settling void __fastcall FileResourceSupport::Dispose(FileResourceSupport *this){
		TwinString *str;
		int iVar1;
		undefined *ptr;
		ptr = this->field0_0x0;
		if (ptr != (undefined *)0x0) {
		iVar1 = *(int *)(ptr + -4);
		if (-1 < iVar1 + -1) {
		str = (TwinString *)(ptr + iVar1 * 0x14 + 8);
		do {
		str = (TwinString *)((int)(str + 0xfffffffe) + 4);
		TwinString::Dispose(str);
		iVar1 = iVar1 + -1;
		}
		 while (iVar1 != 0);
		}
		VirtualPool::FreeMemory(ptr + -4);
		}
		this->field0_0x0 = (undefined *)0x0;
		this->field1_0x4 = 0;
		this->field2_0x6 = 0;
		return;
		}
		
	*/
	return;
}

void FileResourceSupport::WriteRequestedFiles() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall FileResourceSupport::WriteRequestedFiles(FileResourceSupport *this){
		char cVar1;
		undefined4 *puVar2;
		uint uVar3;
		int iVar4;
		undefined1 *puVar5;
		char *pcVar6;
		uint uVar7;
		char *pcVar8;
		int iVar9;
		undefined4 *puVar10;
		int iVar11;
		undefined4 local_434;
		FileResourceSupport *local_430;
		TwinString tmpStr2;
		TwinString local_420;
		TwinString tmpStr1;
		char local_408 [1028];
		int cookie;
		iVar9 = (this->stringCollection).strCnt;
		cookie = SECURITY_COOKIE;
		local_430 = this;
		TwinString::Set(&tmpStr1,"\r\n");
		tmpStr2.value = (char *)0x0;
		tmpStr2.strLength = 0;
		tmpStr2.strSize = 0;
		TwinString::FUN_0015a9a0(&this->str,&tmpStr2);
		TwinString::Append(&tmpStr2,"_RequestedFiles.txt");
		puVar10 = (undefined4 *)tmpStr2.value;
		local_420.value = (char *)0x0;
		local_420.strLength = 0;
		local_420.strSize = 0;
		TwinString::Copy(&local_420,CdRomVolume.value);
		pcVar6 = local_420.value;
		if (local_420.value == (char *)0x0) {
		pcVar6 = "";
		}
		pcVar8 = local_408;
		do {
		cVar1 = *pcVar6;
		pcVar6 = pcVar6 + 1;
		*pcVar8 = cVar1;
		pcVar8 = pcVar8 + 1;
		puVar2 = puVar10;
		}
		 while (cVar1 != '\0');
		do {
		cVar1 = *(char *)puVar2;
		puVar2 = (undefined4 *)((int)puVar2 + 1);
		}
		 while (cVar1 != '\0');
		uVar3 = (int)puVar2 - (int)puVar10;
		puVar2 = (undefined4 *)((int)&tmpStr1.strSize + 3);
		do {
		pcVar6 = (char *)((int)puVar2 + 1);
		puVar2 = (undefined4 *)((int)puVar2 + 1);
		}
		 while (*pcVar6 != '\0');
		for (uVar7 = uVar3 >> 2;
		 uVar7 != 0;
		 uVar7 = uVar7 - 1) {
		*puVar2 = *puVar10;
		puVar10 = puVar10 + 1;
		puVar2 = puVar2 + 1;
		}
		for (uVar3 = uVar3 & 3;
		 uVar3 != 0;
		 uVar3 = uVar3 - 1) {
		*(undefined *)puVar2 = *(undefined *)puVar10;
		puVar10 = (undefined4 *)((int)puVar10 + 1);
		puVar2 = (undefined4 *)((int)puVar2 + 1);
		}
		iVar4 = _CreateFileA@28(local_408,0x40000000,0,0,2,0);
		XAPILIB::GetLastError();
		TwinString::Dispose(&local_420);
		if (iVar9 != 0) {
		iVar11 = 0;
		do {
		puVar10 = (undefined4 *)((int)&((local_430->stringCollection).array)->value + iVar11);
		puVar5 = (undefined1 *)*puVar10;
		if (puVar5 == (undefined1 *)0x0) {
		puVar5 = &DAT_00388031;
		}
		local_434 = 0;
		_WriteFile@20(iVar4,puVar5,puVar10[1],&local_434,(undefined4 *)0x0);
		XAPILIB::GetLastError();
		local_434 = 0;
		_WriteFile@20(iVar4,tmpStr1.value,tmpStr1.strLength,&local_434,(undefined4 *)0x0);
		XAPILIB::GetLastError();
		iVar11 = iVar11 + 0xc;
		iVar9 = iVar9 + -1;
		}
		 while (iVar9 != 0);
		}
		if (iVar4 != -1) {
		_CloseHandle@4(iVar4);
		}
		(local_430->stringCollection).strCnt = 0;
		TwinString::Dispose(&tmpStr2);
		TwinString::Dispose(&tmpStr1);
		@__security_check_cookie@4(cookie);
		return;
		}
		
	*/
	return;
}

FileResourceSupport* FileResourceSupport::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	FileResourceSupport * FileResourceSupport::Get(void){
		return DAT_004a7a84;
		}
		
	*/
	return null;
}

