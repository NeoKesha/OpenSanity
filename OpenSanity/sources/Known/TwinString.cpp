#include "headers/Known/TwinString.h"

#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
#include "headers/Global.h"

TwinString::TwinString() {
	this->value = (char*)0x0;
	this->strSize = 0;
	this->strLength = 0;
}

TwinString::~TwinString() {
	delete this->value;
	this->strSize = 0;
	this->strLength = 0;
}

TwinString* TwinString::Set(const char* str) {
	this->value = (char*)0x0;
	this->strSize = 0;
	SetValue(str);
	return this;
}

void TwinString::SetValue(const char* string) {
	if (string == null || *string == '\0') {
		this->value = (char*)0x0;
		this->strSize = 0;
		this->strLength = 0;
		return;
	}

	int stringLength = 0;
	while (*(string + stringLength) != '\0') {
		++stringLength;
	}

	if (stringLength + 1 > this->strSize) {
		delete this->value;
		this->strLength = stringLength;
		this->strSize = this->strLength + 1;
		this->value = new char[this->strSize];
	}

	const char* srcPtr = string;
	char* dstPtr = this->value;
	while (*srcPtr != '\0') {
		*dstPtr = *srcPtr;
		++dstPtr;
		++srcPtr;
	}
	*dstPtr = '\0';

	return;
}

TwinString* TwinString::Copy(char* other) {
	SetValue(other);
	return this;
}

bool TwinString::SetCdRomVolume() {
	Global* GLOBAL = Global::Get();
	GLOBAL->CDROM_VOLUME.Copy(this->value);
	return true;
}

void TwinString::ToLower() {
	for (int i = 0; i < strLength; ++i) {
		if (!isupper(value[i]) || !isalpha(value[i])) {
			continue;
		}

		value[i] = _tolower(value[i]);
	}
	return;
}

TwinString* TwinString::FUN_000249e0(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	TwinString * __thiscall TwinString::FUN_000249e0(TwinString *this,uint param_1){
		TwinString *pTVar1;
		TwinString local_c;
		AppendInt(&local_c,param_1);
		pTVar1 = Append(this,local_c.value);
		Dispose(&local_c);
		return pTVar1;
		}
		
	*/
	return null;
}

void TwinString::ToUpper() {
	for (int i = 0; i < strLength; ++i) {
		if (isupper(value[i]) || !isalpha(value[i])) {
			continue;
		}

		value[i] = _toupper(value[i]);
	}
	return;
}

int TwinString::StrDiff(const char* key) {
	int diff;
	int checkLength = strLength;
	int keyLength = strlen(key);
	if (checkLength > keyLength) {
		checkLength = keyLength;
	}
	diff = _strnicmp(value, key, checkLength);
	return diff == 0;
}

int TwinString::StrDiffParseStr(const char* key, TwinString* outString) {
	//Ghidra without edits
	char cVar1;
	const char* str2endPointer;
	int str2Length;
	int diff;
	TwinString* pTVar2;
	str2endPointer = key;
	do {
		cVar1 = *str2endPointer;
		str2endPointer = str2endPointer + 1;
	} while (cVar1 != '\0');
	str2Length = (int)str2endPointer - (int)(key + 1);
	diff = _strnicmp(value, (char*)key, str2Length);
	if ((diff == 0) && (*(char*)(str2Length + value) == '=')) {
		pTVar2 = outString->Copy((char*)(str2Length + 1 + value));
		outString->ToUpper();
		return (uint)pTVar2 & 0xffffff00 | 1;
	}
	return diff == 0;
}

int TwinString::StrDiffParseFloat(const char* key, float* outFloat) {
	char cVar1;
	const char* pcVar2;
	int iVar3;
	int diff;
	TwinString local_c;
	pcVar2 = key;
	do {
		cVar1 = *pcVar2;
		pcVar2 = pcVar2 + 1;
	} while (cVar1 != '\0');
	iVar3 = (int)pcVar2 - (int)(key + 1);
	diff = _strnicmp(value, key, iVar3);
	if ((diff == 0)) {
		if ((*(char*)(iVar3 + value) == '=')) {
			local_c.Set((char*)(iVar3 + 1 + value));
			*outFloat = atof(local_c.value);
			return diff == 0;
		}
		else {
			return 0;
		}
	}
	return diff == 0;
}

int TwinString::StrParseInt(const char* key, int* outInt) {
	//Ghidra without edits
	char cVar1;
	const char* pcVar2;
	int iVar3;
	int diff;
	TwinString local_c;
	pcVar2 = key;
	do {
		cVar1 = *pcVar2;
		pcVar2 = pcVar2 + 1;
	} while (cVar1 != '\0');
	iVar3 = (int)pcVar2 - (int)(key + 1);
	diff = _strnicmp(value, key, iVar3);
	if ((diff == 0) && (*(char*)(iVar3 + value) == '=')) {
		local_c.Set((char*)(iVar3 + 1 + value));
		*outInt = atoi(local_c.value);
		return diff == 0;
	}
	return diff == 0;
}

TwinString* TwinString::Concatenate(TwinString* dst, char* str) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	TwinString * __thiscall TwinString::Concatenate(TwinString *this,TwinString *dst,char *str){
		TwinString tmpStr;
		tmpStr.value = (char *)0x0;
		tmpStr.strLength = 0;
		tmpStr.strSize = 0;
		Copy(&tmpStr,this->value);
		Append(&tmpStr,str);
		dst->value = (char *)0x0;
		dst->strLength = 0;
		dst->strSize = 0;
		Copy(dst,tmpStr.value);
		Dispose(&tmpStr);
		return dst;
		}
		
	*/
	return null;
}

uint TwinString::FUN_00135e40(char* str) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall TwinString::FUN_00135e40(TwinString *this,char *str){
		byte bVar1;
		byte *pbVar2;
		int iVar3;
		bool bVar4;
		pbVar2 = (byte *)this->value;
		if (pbVar2 == (byte *)0x0) {
		if (str != (char *)0x0) {
		return 1;
		}
		}
		else if (str == (char *)0x0) {
		return 1;
		}
		do {
		bVar1 = *pbVar2;
		bVar4 = bVar1 < (byte)*str;
		if (bVar1 != *str) {
		LAB_00135e88:iVar3 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
		goto LAB_00135e8d;
		}
		if (bVar1 == 0) break;
		bVar1 = pbVar2[1];
		bVar4 = bVar1 < ((byte *)str)[1];
		if (bVar1 != ((byte *)str)[1]) goto LAB_00135e88;
		pbVar2 = pbVar2 + 2;
		str = (char *)((byte *)str + 2);
		}
		 while (bVar1 != 0);
		iVar3 = 0;
		LAB_00135e8d:if (iVar3 != 0) {
		return 1;
		}
		return 0;
		}
		
	*/
	return 0;
}

bool TwinString::FUN_001572d0(int length) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall TwinString::FUN_001572d0(TwinString *this,int length){
		uint size;
		char *pcVar1;
		size = length + 0x20U & 0xffffffe0;
		if ((int)size <= (int)this->strSize) {
		return false;
		}
		this->strSize = size;
		pcVar1 = (char *)VirtualPool::AllocateMemory(size);
		this->value = pcVar1;
		return true;
		}
		
	*/
	return false;
}

void TwinString::ParseIntInternal(uint number, int length) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TwinString::ParseIntInternal(TwinString *this,uint number,int length){
		uint number_00;
		number_00 = number / 10;
		if ((number_00 != 0) || (1 < length)) {
		ParseIntInternal(this,number_00,length + -1);
		}
		this->value[this->strLength] = (char)number + (char)number_00 * -10 + '0';
		this->strLength = this->strLength + 1;
		return;
		}
		
	*/
	return;
}

void** TwinString::FUN_00157630(float param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void ** __thiscall TwinString::FUN_00157630(TwinString *this,float param_1){
		char *pvVar1;
		this->value = (char *)0x0;
		this->strLength = 0;
		this->strSize = 0x20;
		pvVar1 = (char *)VirtualPool::AllocateMemory(0x20);
		this->value = pvVar1;
		if (param_1 < 0.0) {
		pvVar1[this->strLength] = '-';
		param_1 = 0.0 - param_1;
		this->strLength = this->strLength + 1;
		}
		FUN_001573a0(this,param_1);
		this->value[this->strLength] = '\0';
		return &this->value;
		}
		
	*/
	return null;
}

TwinString* TwinString::ParseInt(uint number) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	TwinString * __thiscall TwinString::ParseInt(TwinString *this,uint number){
		char *str;
		int iVar1;
		uint secondDigit;
		this->value = (char *)0x0;
		this->strLength = 0;
		this->strSize = 0x20;
		str = (char *)VirtualPool::AllocateMemory(0x20);
		this->value = str;
		if ((int)number < 0) {
		str[this->strLength] = '-';
		this->strLength = this->strLength + 1;
		number = -number;
		}
		secondDigit = number / 10;
		if (secondDigit != 0) {
		ParseIntInternal(this,secondDigit,0);
		}
		this->value[this->strLength] = (char)number + (char)secondDigit * -10 + '0';
		iVar1 = this->strLength + 1;
		this->strLength = iVar1;
		this->value[iVar1] = '\0';
		return this;
		}
		
	*/
	return null;
}

TwinString* TwinString::AppendInt(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	TwinString * __thiscall TwinString::AppendInt(TwinString *this,uint param_1){
		char *pcVar1;
		int iVar2;
		uint number;
		this->value = (char *)0x0;
		this->strLength = 0;
		this->strSize = 0x20;
		pcVar1 = (char *)VirtualPool::AllocateMemory(0x20);
		this->value = pcVar1;
		if (param_1 == 0) {
		pcVar1[this->strLength] = '0';
		}
		else {
		number = param_1 / 10;
		if (number != 0) {
		ParseIntInternal(this,number,0);
		}
		this->value[this->strLength] = (char)param_1 + (char)number * -10 + '0';
		}
		iVar2 = this->strLength + 1;
		this->strLength = iVar2;
		this->value[iVar2] = '\0';
		return this;
		}
		
	*/
	return null;
}

void TwinString::AppendVariant(char* str) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TwinString::AppendVariant(TwinString *this,char *str){
		char cVar1;
		undefined4 *ptr;
		char *pcVar2;
		int strLength;
		uint lengthBothAligned;
		undefined4 *puVar3;
		int i;
		uint uVar4;
		undefined4 *puVar5;
		int lengthBoth;
		pcVar2 = str;
		do {
		cVar1 = *pcVar2;
		pcVar2 = pcVar2 + 1;
		}
		 while (cVar1 != '\0');
		strLength = (int)pcVar2 - (int)(str + 1);
		if (0 < strLength) {
		lengthBoth = this->strLength + strLength;
		ptr = (undefined4 *)this->value;
		lengthBothAligned = lengthBoth + 0x20U & 0xffffffe0;
		if ((int)this->strSize < (int)lengthBothAligned) {
		this->strSize = lengthBothAligned;
		pcVar2 = (char *)VirtualPool::AllocateMemory(lengthBothAligned);
		this->value = pcVar2;
		do {
		cVar1 = *str;
		str = str + 1;
		*pcVar2 = cVar1;
		pcVar2 = pcVar2 + 1;
		}
		 while (cVar1 != '\0');
		puVar3 = ptr;
		if (ptr != (undefined4 *)0x0) {
		do {
		cVar1 = *(char *)puVar3;
		puVar3 = (undefined4 *)((int)puVar3 + 1);
		}
		 while (cVar1 != '\0');
		lengthBothAligned = (int)puVar3 - (int)ptr;
		puVar3 = (undefined4 *)(this->value + -1);
		do {
		pcVar2 = (char *)((int)puVar3 + 1);
		puVar3 = (undefined4 *)((int)puVar3 + 1);
		}
		 while (*pcVar2 != '\0');
		puVar5 = ptr;
		for (uVar4 = lengthBothAligned >> 2;
		 uVar4 != 0;
		 uVar4 = uVar4 - 1) {
		*puVar3 = *puVar5;
		puVar5 = puVar5 + 1;
		puVar3 = puVar3 + 1;
		}
		for (lengthBothAligned = lengthBothAligned & 3;
		 lengthBothAligned != 0;
		lengthBothAligned = lengthBothAligned - 1) {
		*(undefined *)puVar3 = *(undefined *)puVar5;
		puVar5 = (undefined4 *)((int)puVar5 + 1);
		puVar3 = (undefined4 *)((int)puVar3 + 1);
		}
		VirtualPool::FreeMemory(ptr);
		this->strSize = 0;
		this->value[lengthBoth] = '\0';
		this->strLength = lengthBoth;
		return;
		}
		}
		else {
		i = 1;
		if (0 < this->strLength) {
		do {
		this->value[lengthBoth - i] = this->value[this->strLength - i];
		i = i + 1;
		}
		 while (i <= this->strLength);
		}
		i = 0;
		if (0 < strLength) {
		do {
		this->value[i] = str[i];
		i = i + 1;
		}
		 while (i < strLength);
		}
		}
		this->value[lengthBoth] = '\0';
		this->strLength = lengthBoth;
		}
		return;
		}
		
	*/
	return;
}

TwinString* TwinString::Append(char* srcStr) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	TwinString * __thiscall TwinString::Append(TwinString *this,char *srcStr){
		char cVar1;
		bool bVar2;
		char *srcStrEndPtr;
		uint newAllocationSize;
		int newLength;
		char *pcVar3;
		uint uVar4;
		char *pcVar5;
		char *pcVar6;
		undefined4 *puVar7;
		srcStrEndPtr = srcStr;
		do {
		cVar1 = *srcStrEndPtr;
		srcStrEndPtr = srcStrEndPtr + 1;
		}
		 while (cVar1 != '\0');
		if ((int)srcStrEndPtr - (int)(srcStr + 1) < 1) {
		return this;
		}
		newLength = this->strLength + ((int)srcStrEndPtr - (int)(srcStr + 1));
		this->strLength = newLength;
		newAllocationSize = newLength + 0x20U & 0xffffffe0;
		srcStrEndPtr = this->value;
		bVar2 = (int)this->strSize < (int)newAllocationSize;
		if (bVar2) {
		this->strSize = newAllocationSize;
		pcVar5 = (char *)VirtualPool::AllocateMemory(newAllocationSize);
		this->value = pcVar5;
		}
		if (srcStrEndPtr == (char *)0x0) {
		pcVar5 = this->value;
		do {
		cVar1 = *srcStr;
		srcStr = srcStr + 1;
		*pcVar5 = cVar1;
		pcVar5 = pcVar5 + 1;
		}
		 while (cVar1 != '\0');
		}
		else {
		pcVar5 = srcStr;
		if (bVar2) {
		pcVar6 = this->value;
		pcVar3 = srcStrEndPtr;
		do {
		cVar1 = *pcVar3;
		pcVar3 = pcVar3 + 1;
		*pcVar6 = cVar1;
		pcVar6 = pcVar6 + 1;
		}
		 while (cVar1 != '\0');
		}
		do {
		cVar1 = *pcVar5;
		pcVar5 = pcVar5 + 1;
		}
		 while (cVar1 != '\0');
		newAllocationSize = (int)pcVar5 - (int)srcStr;
		puVar7 = (undefined4 *)(this->value + -1);
		do {
		pcVar5 = (char *)((int)puVar7 + 1);
		puVar7 = (undefined4 *)((int)puVar7 + 1);
		}
		 while (*pcVar5 != '\0');
		for (uVar4 = newAllocationSize >> 2;
		 uVar4 != 0;
		 uVar4 = uVar4 - 1) {
		*puVar7 = *(undefined4 *)srcStr;
		srcStr = (char *)((int)srcStr + 4);
		puVar7 = puVar7 + 1;
		}
		for (newAllocationSize = newAllocationSize & 3;
		 newAllocationSize != 0;
		newAllocationSize = newAllocationSize - 1) {
		*(char *)puVar7 = *srcStr;
		srcStr = (char *)((int)srcStr + 1);
		puVar7 = (undefined4 *)((int)puVar7 + 1);
		}
		}
		if (bVar2) {
		VirtualPool::FreeMemory(srcStrEndPtr);
		this->strSize = 0;
		}
		return this;
		}
		
	*/
	return null;
}

void TwinString::ReadFromFile(MemoryStream* memoryStream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TwinString::ReadFromFile(TwinString *this,MemoryStream *memoryStream){
		int *piVar1;
		uint size;
		char *pcVar2;
		VirtualPool::FreeMemory(this->value);
		this->strSize = 0;
		this->value = (char *)0x0;
		piVar1 = &this->strLength;
		(*memoryStream->vtable->ReadInt2)(memoryStream,piVar1);
		if (0 < *piVar1) {
		size = *piVar1 + 0x20U & 0xffffffe0;
		if ((int)this->strSize < (int)size) {
		this->strSize = size;
		pcVar2 = (char *)VirtualPool::AllocateMemory(size);
		this->value = pcVar2;
		}
		(*memoryStream->vtable->Read)(memoryStream,(int *)this->value,*piVar1,1);
		this->value[*piVar1] = '\0';
		}
		return;
		}
		
	*/
	return;
}

void TwinString::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall TwinString::Write(TwinString *this,MemoryStream *stream){
		(*stream->vtable->WriteInt1)(stream,this->strLength);
		if (0 < this->strLength) {
		(*stream->vtable->Write)(stream,(byte *)this->value,this->strLength);
		}
		return;
		}
		
	*/
	return;
}



void TwinString::ReplaceByStrBeforeC(TwinString* str, char c) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __cdecl TwinString::ReplaceByStrBeforeC(TwinString *this,TwinString *str,char c){
		char *other;
		int lengthThis;
		char *strEndPtrThis;
		char *strEndPtrOther;
		char currentChar;
		other = (char *)VirtualPool::AllocateMemory(this->strLength + 1);
		strEndPtrThis = this->value;
		strEndPtrOther = other;
		if (strEndPtrThis == (char *)0x0) {
		strEndPtrThis = "";
		}
		do {
		currentChar = *strEndPtrThis;
		strEndPtrThis = strEndPtrThis + 1;
		*strEndPtrOther = currentChar;
		strEndPtrOther = strEndPtrOther + 1;
		}
		 while (currentChar != '\0');
		lengthThis = this->strLength;
		if (lengthThis != 0) {
		while (other[lengthThis] != c) {
		lengthThis = lengthThis + -1;
		if (lengthThis == 0) {
		VirtualPool::FreeMemory(other);
		return;
		}
		}
		other[lengthThis] = '\0';
		if (0 < lengthThis) {
		Copy(str,other);
		}
		}
		VirtualPool::FreeMemory(other);
		return;
		}
		
	*/
	return;
}

TwinString* TwinString::FUN_00158ec0(TwinString* param_1, int param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	TwinString * __cdecl TwinString::FUN_00158ec0(TwinString *param_1,int param_2,uint param_3){
		char cVar1;
		uint uVar2;
		uint uVar3;
		char *pcVar4;
		TwinString local_c;
		uVar3 = param_3;
		local_c.value = (char *)0x0;
		local_c.strLength = 0;
		local_c.strSize = 0;
		if (param_3 < 9) {
		uVar3 = 0;
		if (param_3 != 0) {
		do {
		cVar1 = *(char *)(uVar3 + param_2);
		if ((((cVar1 < '0') || ('9' < cVar1)) && ((cVar1 < 'A' || ('Z' < cVar1)))) && (cVar1 != '_')) {
		Copy(&local_c,"Character: ");
		param_3 = param_3 & 0xffff0000 | (uint)*(byte *)(uVar3 + param_2);
		Append(&local_c,(char *)&param_3);
		pcVar4 = "Is not ISO \'d\' standard";
		goto LAB_00158f6f;
		}
		uVar3 = uVar3 + 1;
		}
		 while (uVar3 < param_3);
		}
		}
		else {
		Copy(&local_c,"Directory: ");
		uVar2 = 0;
		if (uVar3 != 0) {
		do {
		param_3 = param_3 & 0xffff0000 | (uint)*(byte *)(uVar2 + param_2);
		Append(&local_c,(char *)&param_3);
		uVar2 = uVar2 + 1;
		}
		 while (uVar2 < uVar3);
		}
		pcVar4 = " contains too many characters.";
		LAB_00158f6f:Append(&local_c,pcVar4);
		}
		pcVar4 = local_c.value;
		param_1->value = (char *)0x0;
		param_1->strLength = 0;
		param_1->strSize = 0;
		Copy(param_1,local_c.value);
		VirtualPool::FreeMemory(pcVar4);
		return param_1;
		}
		
	*/
	return null;
}

TwinString* TwinString::FUN_00158fb0(int param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	TwinString * __cdecl TwinString::FUN_00158fb0(TwinString *this,int param_2,uint param_3){
		char cVar1;
		bool bVar2;
		uint uVar3;
		byte bVar4;
		uint uVar5;
		char *pcVar6;
		TwinString local_c;
		uVar3 = param_3;
		bVar4 = 0;
		bVar2 = false;
		uVar5 = 0;
		local_c.value = (char *)0x0;
		local_c.strLength = 0;
		local_c.strSize = 0;
		if (param_3 != 0) {
		do {
		cVar1 = *(char *)(uVar5 + param_2);
		if (cVar1 == '.') {
		if (8 < bVar4) {
		Copy(&local_c,"File length is greater than 8");
		break;
		}
		bVar4 = 0;
		bVar2 = true;
		}
		else if (bVar2) {
		if (3 < bVar4) {
		Copy(&local_c,"File extension is greater than 3");
		break;
		}
		}
		else {
		if (8 < bVar4) {
		Copy(&local_c,"Filename: ");
		uVar5 = 0;
		do {
		param_3 = param_3 & 0xffff0000 | (uint)*(byte *)(uVar5 + param_2);
		Append(&local_c,(char *)&param_3);
		uVar5 = uVar5 + 1;
		}
		 while (uVar5 < uVar3);
		pcVar6 = " contains too many characters.";
		LAB_001590a3:Append(&local_c,pcVar6);
		break;
		}
		if ((((cVar1 < '0') || ('9' < cVar1)) && ((cVar1 < 'A' || ('Z' < cVar1)))) && (cVar1 != '_')) {
		Copy(&local_c,"Character: ");
		param_3 = param_3 & 0xffff0000 | (uint)*(byte *)(uVar5 + param_2);
		Append(&local_c,(char *)&param_3);
		pcVar6 = " Is not ISO \'d\' standard";
		goto LAB_001590a3;
		}
		}
		bVar4 = bVar4 + 1;
		uVar5 = uVar5 + 1;
		}
		 while (uVar5 < param_3);
		}
		pcVar6 = local_c.value;
		this->value = (char *)0x0;
		this->strLength = 0;
		this->strSize = 0;
		Copy(this,local_c.value);
		VirtualPool::FreeMemory(pcVar6);
		return this;
		}
		
	*/
	return null;
}

TwinString* TwinString::Split(TwinString* result, TwinString* delimiter, TwinString** outStrings) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	TwinString * __cdecl TwinString::Split(TwinString *result,TwinString *delimiter,TwinString **outStrings){
		char *pcVar1;
		char cVar2;
		TwinString *pTVar3;
		uint uVar4;
		TwinString tmpStr;
		TwinString tmpStr2;
		int i;
		tmpStr.value = (char *)0x0;
		tmpStr.strLength = 0;
		tmpStr.strSize = 0;
		if (*(char *)&delimiter->value == '\\') {
		pcVar1 = (char *)((int)&delimiter->value + 1);
		uVar4 = 0;
		cVar2 = *pcVar1;
		while (cVar2 != '\0') {
		if (cVar2 == '\\') {
		pTVar3 = FUN_00158ec0(&tmpStr2,(int)pcVar1,uVar4);
		goto LAB_00159de9;
		}
		i = uVar4 + 2;
		uVar4 = uVar4 + 1;
		cVar2 = *(char *)((int)&delimiter->value + i);
		}
		pTVar3 = FUN_00158fb0(&tmpStr2,(int)pcVar1,uVar4);
		LAB_00159de9:Copy(&tmpStr,pTVar3->value);
		VirtualPool::FreeMemory(tmpStr2.value);
		*outStrings = (TwinString *)((int)&(*outStrings)->value + uVar4 + 1);
		VirtualPool::FreeMemory((void *)0x0);
		}
		else {
		Copy(&tmpStr,"Incorrect delimitor ");
		}
		pcVar1 = tmpStr.value;
		result->value = (char *)0x0;
		result->strLength = 0;
		result->strSize = 0;
		Copy(result,tmpStr.value);
		VirtualPool::FreeMemory(pcVar1);
		return result;
		}
		
	*/
	return null;
}

int TwinString::FindSubstringEndPos(int StartIndex, char* stringToFind) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall TwinString::FindSubstringEndPos(TwinString *this,int StartIndex,char *stringToFind){
		char cVar1;
		char *strPtr;
		size_t str2length;
		uint str2size;
		char *str1ptr;
		int diff;
		char *str1Substring;
		char *str2ptr;
		bool bVar2;
		TwinString tmpStr1;
		TwinString substring;
		byte chr;
		strPtr = stringToFind;
		do {
		cVar1 = *strPtr;
		strPtr = strPtr + 1;
		}
		 while (cVar1 != '\0');
		str2length = (int)strPtr - (int)(stringToFind + 1);
		tmpStr1.value = (char *)0x0;
		tmpStr1.strSize = 0;
		SetValue(&tmpStr1,stringToFind);
		substring.value = (char *)0x0;
		substring.strLength = 0;
		substring.strSize = 0;
		stringToFind = (char *)StartIndex;
		if (StartIndex <= (int)(this->strLength - str2length)) {
		str2size = str2length + 0x20 & 0xffffffe0;
		do {
		strPtr = this->value;
		str1Substring = (char *)0x0;
		if (0 < (int)str2size) {
		str1Substring = (char *)VirtualPool::AllocateMemory(str2size);
		}
		_strncpy(str1Substring,stringToFind + (int)strPtr,str2length);
		str1Substring[str2length] = '\0';
		Copy(&substring,str1Substring);
		VirtualPool::FreeMemory(str1Substring);
		str1ptr = substring.value;
		str2ptr = tmpStr1.value;
		if (substring.value == (char *)0x0) {
		if (tmpStr1.value == (char *)0x0) {
		LAB_00159fd7:do {
		chr = *str1ptr;
		bVar2 = chr < (byte)*str2ptr;
		if (chr != *str2ptr) {
		LAB_00159ffb:diff = (1 - (uint)bVar2) - (uint)(bVar2 != 0);
		goto LAB_0015a000;
		}
		if (chr == 0) break;
		chr = str1ptr[1];
		bVar2 = chr < (byte)str2ptr[1];
		if (chr != str2ptr[1]) goto LAB_00159ffb;
		str1ptr = str1ptr + 2;
		str2ptr = str2ptr + 2;
		}
		 while (chr != 0);
		diff = 0;
		LAB_0015a000:if (diff == 0) {
		VirtualPool::FreeMemory(substring.value);
		VirtualPool::FreeMemory(tmpStr1.value);
		return (int)stringToFind;
		}
		}
		}
		else if (tmpStr1.value != (char *)0x0) goto LAB_00159fd7;
		stringToFind = stringToFind + 1;
		}
		 while ((int)stringToFind <= (int)(this->strLength - str2length));
		}
		VirtualPool::FreeMemory(substring.value);
		VirtualPool::FreeMemory(tmpStr1.value);
		return -1;
		}
		
	*/
	return 0;
}

bool TwinString::SubstringRelated(char* substring) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall TwinString::SubstringRelated(TwinString *this,char *substring){
		char cVar1;
		int endPos;
		int length;
		char *strBeginning;
		endPos = FindSubstringEndPos(this,0,substring);
		if (-1 < endPos) {
		strBeginning = substring + 1;
		do {
		cVar1 = *substring;
		substring = substring + 1;
		}
		 while (cVar1 != '\0');
		length = ((int)substring - (int)strBeginning) + endPos;
		_strncpy(this->value + endPos,this->value + length,(this->strLength - length) + 1);
		endPos = this->strLength - ((int)substring - (int)strBeginning);
		this->strLength = endPos;
		this->value[endPos] = '\0';
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

uint TwinString::Replace(char* substring, char* replaceWith) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall TwinString::Replace(TwinString *this,char *substring,char *replaceWith){
		int substringEndPos;
		undefined4 uVar1;
		TwinString endingAfterSubstring;
		char chr;
		char *startPtr;
		substringEndPos = FindSubstringEndPos(this,0,substring);
		if (-1 < substringEndPos) {
		startPtr = substring + 1;
		do {
		chr = *substring;
		substring = substring + 1;
		}
		 while (chr != '\0');
		endingAfterSubstring.value = (char *)0x0;
		endingAfterSubstring.strSize = 0;
		SetValue(&endingAfterSubstring,substring + (int)(this->value + (substringEndPos - (int)startPtr)));
		if (substringEndPos < this->strLength) {
		this->value[substringEndPos] = '\0';
		this->strLength = substringEndPos;
		}
		Append(this,replaceWith);
		startPtr = endingAfterSubstring.value;
		if (endingAfterSubstring.strLength != 0) {
		Append(this,endingAfterSubstring.value);
		}
		uVar1 = VirtualPool::FreeMemory(startPtr);
		return CONCAT31((int3)((uint)uVar1 >> 8),1);
		}
		return substringEndPos & 0xffffff00;
		}
		
	*/
	return 0;
}

bool TwinString::FUN_0015a9a0(TwinString* str) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __cdecl TwinString::FUN_0015a9a0(TwinString *this,TwinString *str){
		int i;
		char *pcVar1;
		int iVar2;
		bool result;
		TwinString tmpStr;
		char *local_c [3];
		i = this->strLength;
		result = true;
		if (0 < i) {
		do {
		if (this->value[i] == '\\') {
		pcVar1 = this->value + i + 1;
		goto LAB_0015a9c0;
		}
		i = i + -1;
		}
		 while (i != 0);
		}
		pcVar1 = (char *)0x0;
		LAB_0015a9c0:Copy(str,pcVar1);
		i = str->strLength;
		if (i == 0) {
		i = this->strLength;
		if (0 < i) {
		do {
		if (this->value[i] == '/') {
		pcVar1 = this->value + i + 1;
		goto LAB_0015a9eb;
		}
		i = i + -1;
		}
		 while (i != 0);
		}
		pcVar1 = (char *)0x0;
		LAB_0015a9eb:Copy(str,pcVar1);
		i = str->strLength;
		result = 0 < i;
		if (!result) goto LAB_0015aaaa;
		}
		iVar2 = 0;
		if (0 < i) {
		do {
		if (str->value[iVar2] == '.') {
		if (-1 < iVar2) {
		tmpStr.value = (char *)0x0;
		tmpStr.strLength = 0;
		tmpStr.strSize = 0;
		FUN_0015c9b0(local_c,str->value,(char *)(iVar2 + 1));
		Copy(&tmpStr,local_c[0]);
		VirtualPool::FreeMemory(local_c[0]);
		result = tmpStr.strLength != 0;
		if (result) {
		FUN_00159270(str,&tmpStr.value,(char *)(tmpStr.strLength + -1));
		}
		else {
		Copy(str,this->value);
		}
		VirtualPool::FreeMemory(tmpStr.value);
		}
		break;
		}
		iVar2 = iVar2 + 1;
		}
		 while (iVar2 < i);
		}
		if (result != false) {
		return result;
		}
		LAB_0015aaaa:Copy(str,this->value);
		return result;
		}
		
	*/
	return false;
}

TwinString* TwinString::CopyFromCharArray(char* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	TwinString * __thiscall TwinString::CopyFromCharArray(TwinString *this,char *other){
		TwinString tmpStr;
		this->value = (char *)0x0;
		this->strLength = 0;
		this->strSize = 0;
		this[1].value = (char *)0x0;
		Set(&tmpStr,other);
		Copy(this,tmpStr.value);
		Dispose(&tmpStr);
		return this;
		}
		
	*/
	return null;
}

TwinString* TwinString::Copy_32(TwinString* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	TwinString * __thiscall TwinString::Copy(TwinString *this,TwinString *param_1){
		TwinString *pTVar1;
		pTVar1 = Copy(this,param_1->value);
		return pTVar1;
		}
		
	*/
	return null;
}

