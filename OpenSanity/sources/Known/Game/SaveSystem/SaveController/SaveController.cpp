#include "headers/Known/Game/SaveSystem/SaveController/SaveController.h"

#include "headers/Unknown/CollectionUnk2/CollectionUnk2.h"
#include "headers/Known/Game/SaveSystem/SaveFile/SaveFileA.h"
void SaveController::Construct(uint banks, CollectionUnk2* param_2, SaveFileA* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SaveController * __thiscall SaveController::Construct(SaveController *this,uint banks,CollectionUnk2 *param_2,SaveFileA *param_3){
		::SaveControllerAbstract::Construct(&this->parent,banks,param_2,param_3);
		(this->saveRoot).strLength = 0;
		(this->saveRoot).strSize = 0;
		(this->parent).vtable = (SaveController_VTable *)&SaveController_VT;
		(this->saveRoot).value = "u:\\";
		(this->savePath).value = (char *)0x0;
		(this->savePath).strLength = 0;
		(this->savePath).strSize = 0;
		this->field238_0x13c = 0;
		this->field239_0x140 = 0;
		return this;
		}
		
	*/
	return;
}

void SaveController::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SaveController::Dispose(SaveController *this){
		(this->parent).vtable = (SaveController_VTable *)&SaveController_VT;
		TwinString::Dispose(&this->savePath);
		(this->parent).vtable = (SaveController_VTable *)&SaveController_VT_Abstract;
		VirtualPool::FreeMemory((this->parent).banks);
		VirtualPool::FreeMemory((this->parent).array);
		return;
		}
		
	*/
	return;
}

void SaveController::Dispose_2(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	SaveController * __thiscall SaveController::Dispose(SaveController *this,byte param_1){
		(this->parent).vtable = (SaveController_VTable *)&SaveController_VT;
		TwinString::Dispose(&this->savePath);
		(this->parent).vtable = (SaveController_VTable *)&SaveController_VT_Abstract;
		VirtualPool::FreeMemory((this->parent).banks);
		VirtualPool::FreeMemory((this->parent).array);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

bool SaveController::FUN_002005c0(uint param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall SaveController::FUN_002005c0(SaveController *this,uint param_1,uint param_2){
		uint uVar1;
		uVar1 = (this->parent).field1_0x4;
		if ((uVar1 >> 8 & 0xf) != param_1) {
		uVar1 = (param_1 << 0xc ^ uVar1) & 0xf000 ^ uVar1;
		(this->parent).field1_0x4 = uVar1;
		switch(param_1) {
		case 1:(this->parent).field1_0x4 = uVar1 & 0xfc2fffff | 0x200000;
		break;
		case 2:(this->parent).field1_0x4 = uVar1 & 0xfc5fffff | 0x500000;
		return true;
		case 3:(this->parent).field1_0x4 = uVar1 & 0xfc8fffff | 0x800000;
		return true;
		case 4:(this->parent).field1_0x4 = uVar1 & 0xfcbfffff | 0xb00000;
		return true;
		case 5:(this->parent).field1_0x4 = uVar1 & 0xfcefffff | 0xe00000;
		return true;
		case 6:(this->parent).field1_0x4 = uVar1 & 0xfd1fffff | 0x1100000;
		return true;
		case 7:(this->parent).field1_0x4 = uVar1 & 0xfd4fffff | 0x1400000;
		return true;
		case 8:(this->parent).field1_0x4 = (param_2 & 0xf | 0x170000) << 4 | uVar1 & 0xfd7fff0f;
		return true;
		case 9:(this->parent).field1_0x4 = (param_2 & 0xf | 0x1a0000) << 4 | uVar1 & 0xfdafff0f;
		return true;
		case 10:(this->parent).field1_0x4 = uVar1 & 0xfddfffff | 0x1d00000;
		return true;
		case 0xb:(this->parent).field1_0x4 = uVar1 & 0xfdefffff | 0x1e00000;
		return true;
		case 0xc:(this->parent).field1_0x4 = uVar1 & 0xfdffffff | 0x1f00000;
		return true;
		case 0xd:(this->parent).field1_0x4 = uVar1 & 0xfe0fffff | 0x2000000;
		return true;
		default:return false;
		}
		}
		return true;
		}
		
	*/
	return false;
}

void SaveController::Method0(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SaveController::Method0(SaveController *this,int param_1){
		undefined2 uVar1;
		undefined2 uVar2;
		undefined2 uVar3;
		uint uVar4;
		uVar1 = *(undefined2 *)&this->field_0x146;
		uVar4 = *(uint *)(param_1 + 0x14);
		uVar2 = *(undefined2 *)&this->field_0x144;
		*(char *)(param_1 + 0x10) = (char)*(undefined2 *)&this->field_0x14a;
		*(uint *)(param_1 + 0x14) = uVar4 | 0x1000000;
		*(char *)(param_1 + 0x11) = (char)uVar1;
		*(undefined2 *)(param_1 + 0x12) = uVar2;
		uVar1 = *(undefined2 *)&this->field_0x14e;
		uVar2 = *(undefined2 *)&this->field_0x150;
		uVar3 = *(undefined2 *)&this->field_0x14c;
		*(uint *)(param_1 + 0x14) = uVar4 | 0x3000000;
		*(char *)(param_1 + 0x14) = (char)uVar3;
		*(char *)(param_1 + 0x15) = (char)uVar1;
		*(char *)(param_1 + 0x16) = (char)uVar2;
		return;
		}
		
	*/
	return;
}

uint SaveController::Method1(uint param_1, uint param_2, bool param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall SaveController::Method1(SaveController *this,undefined4 param_1,uint param_2,bool param_3){
		if (param_3 != false) {
		return param_2;
		}
		return (this->parent).field1_0x4 >> 0x14 & 0x3f;
		}
		
	*/
	return 0;
}

void SaveController::OperateSaveFS(uint action, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall SaveController::OperateSaveFS(SaveController *this,uint action,undefined4 param_2){
		undefined4 uVar1;
		int *fileHandle;
		uint uVar2;
		TwinString *pTVar3;
		int iVar4;
		int iVar5;
		uint *puVar6;
		int iVar7;
		undefined4 *puVar8;
		int *piVar9;
		bool bVar10;
		int local_4e0;
		undefined4 local_4dc;
		TwinString local_4d8;
		TwinString local_4cc;
		TwinString local_4c0;
		TwinString local_4b4;
		undefined local_4a8 [5];
		undefined4 local_4a3;
		undefined4 local_49f;
		undefined4 local_49b;
		undefined2 local_497;
		undefined local_495;
		undefined4 local_494 [5];
		undefined4 local_480 [4];
		int local_470;
		int aiStack1120 [5];
		char savePathBuffer [260];
		_WIN32_FIND_DATA findData;
		char local_208 [260];
		wchar_t local_104 [128];
		int cookie;
		cookie = SECURITY_COOKIE;
		switch(action) {
		case 2:break;
		case 3:fileHandle = _XFindFirstSaveGame@8((this->saveRoot).value,&findData.fileAttributes);
		if (fileHandle == (int *)0xffffffff) {
		this->field238_0x13c = 0;
		}
		else {
		TwinString::Copy(&this->savePath,local_208);
		_lstrcpyW@8(this->saveGameName,local_104);
		do {
		iVar4 = _XFindNextSaveGame@8((int)fileHandle,&findData);
		}
		 while (iVar4 != 0);
		_XFindClose@4(fileHandle);
		this->field238_0x13c = 1;
		}
		break;
		case 4:if ((this->savePath).value != (char *)0x0) break;
		uVar2 = _XCreateSaveGame@24((this->saveRoot).value,this->saveGameName,4,0,savePathBuffer,0x104);
		if (uVar2 == 0) {
		pTVar3 = TwinString::Set(&local_4b4,savePathBuffer);
		TwinString::Copy(&this->savePath,pTVar3->value);
		TwinString::Dispose(&local_4b4);
		this->field238_0x13c = 1;
		break;
		}
		goto LAB_00202c16;
		case 5:case 8:iVar4 = (this->parent).array[(this->parent).field2_0x8 & 0xf];
		local_4e0 = *(int *)(iVar4 + 0x20);
		if (local_4e0 != 0) {
		local_4e0 = *(int *)(local_4e0 + 8);
		}
		uVar1 = *(undefined4 *)(iVar4 + 0x24);
		pTVar3 = TwinString::Concatenate(&this->savePath,&local_4cc,*(char **)(iVar4 + 4));
		iVar4 = _CreateFileA@28(pTVar3->value,0x40000000,0,0,2,0x80);
		TwinString::Dispose(&local_4cc);
		if (iVar4 == -1) goto switchD_002029db_caseD_8;
		local_4a8._1_4_ = 0;
		local_4a3 = 0;
		local_49f = 0;
		local_49b = 0;
		local_497 = 0;
		local_4a8[0] = 0;
		local_495 = 0;
		iVar7 = _WriteFile@20(iVar4,local_4a8,0x14,&local_4dc,(undefined4 *)0x0);
		if (iVar7 != 0) {
		puVar6 = (uint *)XAPILIB::XCalculateSignatureBegin(0);
		if (puVar6 != (uint *)0xffffffff) {
		iVar7 = _WriteFile@20(iVar4,local_4e0,uVar1,&local_4dc,(undefined4 *)0x0);
		if (iVar7 != 0) {
		_XCalculateSignatureUpdate@12(puVar6,local_4e0,uVar1);
		_XCalculateSignatureEnd@8(puVar6,local_4a8);
		_SetFilePointer@16(iVar4,0,(uint *)0x0,0);
		_WriteFile@20(iVar4,local_4a8,0x14,&local_4dc,(undefined4 *)0x0);
		_CloseHandle@4(iVar4);
		break;
		}
		_XCalculateSignatureEnd@8(puVar6,(undefined *)0x0);
		}
		goto LAB_00202ddb;
		}
		_CloseHandle@4(iVar4);
		LAB_00202c16:(this->parent).field1_0x4 = (this->parent).field1_0x4 & 0xfff1ffff | 0x10000;
		break;
		case 6:case 9:iVar4 = (this->parent).array[(this->parent).field2_0x8 & 0xf];
		local_4e0 = *(int *)(iVar4 + 0x20);
		if (local_4e0 != 0) {
		local_4e0 = *(int *)(local_4e0 + 8);
		}
		iVar7 = *(int *)(iVar4 + 0x24);
		pTVar3 = TwinString::Concatenate(&this->savePath,&local_4d8,*(char **)(iVar4 + 4));
		iVar4 = _CreateFileA@28(pTVar3->value,0x80000000,0,0,3,0x80);
		TwinString::Dispose(&local_4d8);
		if (iVar4 != -1) {
		_GetFileInformationByHandle@8(iVar4,local_494);
		local_470 = local_470 + -0x14;
		if ((local_470 != iVar7) ||(iVar5 = _ReadFile@20(iVar4,local_4a8,0x14,&local_4dc,(undefined4 *)0x0), iVar5 == 0)) {
		LAB_00202ddb:_CloseHandle@4(iVar4);
		(this->parent).field1_0x4 = (this->parent).field1_0x4 & 0xfff1ffff | 0x10000;
		break;
		}
		puVar6 = (uint *)XAPILIB::XCalculateSignatureBegin(0);
		if (puVar6 != (uint *)0xffffffff) {
		iVar5 = _ReadFile@20(iVar4,local_4e0,iVar7,&local_4dc,(undefined4 *)0x0);
		if (iVar5 != 0) {
		_XCalculateSignatureUpdate@12(puVar6,local_4e0,iVar7);
		_XCalculateSignatureEnd@8(puVar6,(undefined *)aiStack1120);
		iVar7 = 5;
		bVar10 = true;
		fileHandle = aiStack1120;
		piVar9 = (int *)local_4a8;
		do {
		if (iVar7 == 0) break;
		iVar7 = iVar7 + -1;
		bVar10 = *fileHandle == *piVar9;
		fileHandle = fileHandle + 1;
		piVar9 = piVar9 + 1;
		}
		 while (bVar10);
		if (bVar10) goto LAB_00202b50;
		goto LAB_00202ddb;
		}
		_XCalculateSignatureEnd@8(puVar6,(undefined *)0x0);
		}
		_CloseHandle@4(iVar4);
		}
		default:switchD_002029db_caseD_8:(this->parent).field1_0x4 = (this->parent).field1_0x4 & 0xfff1ffff | 0x10000;
		break;
		case 7:pTVar3 = TwinString::Concatenate(&this->savePath,&local_4c0,*(char **)((this->parent).array[(this->parent).field2_0x8 & 0xf] + 4));
		iVar4 = _CreateFileA@28(pTVar3->value,0x80000000,0,0,3,0x80);
		TwinString::Dispose(&local_4c0);
		if (iVar4 == -1) {
		this->field239_0x140 = 0;
		break;
		}
		puVar8 = local_494;
		for (iVar7 = 0xd;
		 iVar7 != 0;
		 iVar7 = iVar7 + -1) {
		*puVar8 = 0;
		puVar8 = puVar8 + 1;
		}
		_GetFileInformationByHandle@8(iVar4,local_494);
		_FileTimeToSystemTime@8(local_480,(undefined2 *)&this->field_0x144);
		this->field239_0x140 = local_470;
		LAB_00202b50:_CloseHandle@4(iVar4);
		}
		@__security_check_cookie@4(cookie);
		return;
		}
		
	*/
	return;
}

void SaveController::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SaveController::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void SaveController::EmptyFunction_8() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void SaveController::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

bool SaveController::IsA() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool SaveController::IsA(void){
		return true;
		}
		
	*/
	return false;
}

bool SaveController::IsB() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool SaveController::IsB(void){
		return true;
		}
		
	*/
	return false;
}

bool SaveController::IsC() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall SaveController::IsC(SaveController *this){
		return this->field238_0x13c == 1;
		}
		
	*/
	return false;
}

void SaveController::Method9() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall SaveController::Method9(SaveController *this){
		(*((this->parent).vtable)->Method11)(&this->parent);
		return;
		}
		
	*/
	return;
}

int SaveController::GetSomething() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall SaveController::GetSomething(SaveController *this){
		return this->field239_0x140;
		}
		
	*/
	return 0;
}

uint SaveController::Method11() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __fastcall SaveController::Method11(SaveController *this){
		int iVar1;
		SaveFileC **ppSVar2;
		uint uVar3;
		int iVar4;
		iVar4 = *(int *)((this->parent).field5_0x14 + 4);
		iVar1 = 0;
		if (iVar4 != 0) {
		iVar1 = *(int *)(iVar4 + 0x24);
		}
		iVar1 = iVar1 + *(int *)((this->parent).field6_0x18 + 0x24);
		iVar4 = (iVar4 != 0) + 1;
		uVar3 = (this->parent).field1_0x4 & 0xf;
		if (uVar3 != 0) {
		ppSVar2 = (this->parent).banks;
		iVar4 = iVar4 + uVar3;
		do {
		iVar1 = iVar1 + ((*ppSVar2)->parent).streamLength;
		ppSVar2 = ppSVar2 + 1;
		uVar3 = uVar3 - 1;
		}
		 while (uVar3 != 0);
		}
		return iVar4 * 0x4000 + 0xffff + iVar1 & 0xffffc000;
		}
		
	*/
	return 0;
}

bool SaveController::CanSave() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall SaveController::CanSave(SaveController *this){
		int iVar1;
		byte local_8;
		iVar1 = _GetDiskFreeSpaceExA@16((this->saveRoot).value,(undefined4 *)&local_8,(undefined4 *)0x0,(undefined4 *)0x0);
		return (bool)(-(iVar1 != 0) & local_8);
		}
		
	*/
	return false;
}

bool SaveController::IsD() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool SaveController::IsD(void){
		return false;
		}
		
	*/
	return false;
}

