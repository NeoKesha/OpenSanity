#include "headers/Known/Game/SaveSystem/BankSub/BankSub.h"

#include "headers/Unknown/AutoClasses/AutoClass56.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void BankSub::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall BankSub::CleanUp(BankSub *this){
		this->vtable = (BankSub_VTable *)&Bank_VT_Sub;
		TwinString::Dispose(&this->str);
		return;
		}
		
	*/
	return;
}

void BankSub::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall BankSub::Construct(BankSub *this){
		this->vtable = (BankSub_VTable *)&Bank_VT_Sub;
		(this->time).dwHighDateTime = 0;
		(this->time).dwLowDateTime = 0;
		(this->str).value = (char *)0x0;
		(this->str).strLength = 0;
		(this->str).strSize = 0;
		return;
		}
		
	*/
	return;
}

void BankSub::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	BankSub * __thiscall BankSub::Dispose(BankSub *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void BankSub::BuildPath(TwinString* outStr) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall BankSub::BuildPath(BankSub *this,TwinString *outStr){
		char *pcVar1;
		uint uVar2;
		uint uVar3;
		TwinString tmpStr;
		uVar2 = (uint)*(byte *)((int)&(this->time).dwLowDateTime + 1);
		uVar3 = (uint)*(byte *)((int)&(this->time).dwLowDateTime + 2);
		TwinString::Copy(outStr,(this->str).value);
		TwinString::Append(outStr," - ");
		TwinString::AppendInt(&tmpStr,(this->time).dwLowDateTime & 0xff);
		TwinString::Append(outStr,tmpStr.value);
		TwinString::Dispose(&tmpStr);
		pcVar1 = ":0";
		if (9 < uVar2) {
		pcVar1 = ":";
		}
		TwinString::Append(outStr,pcVar1);
		TwinString::AppendInt(&tmpStr,uVar2);
		TwinString::Append(outStr,tmpStr.value);
		TwinString::Dispose(&tmpStr);
		pcVar1 = ":0";
		if (9 < uVar3) {
		pcVar1 = ":";
		}
		TwinString::Append(outStr,pcVar1);
		TwinString::AppendInt(&tmpStr,uVar3);
		TwinString::Append(outStr,tmpStr.value);
		TwinString::Dispose(&tmpStr);
		TwinString::Append(outStr," ");
		TwinString::AppendInt(&tmpStr,(this->time).dwHighDateTime & 0xff);
		TwinString::Append(outStr,tmpStr.value);
		TwinString::Dispose(&tmpStr);
		TwinString::Append(outStr,"/");
		TwinString::AppendInt(&tmpStr,(uint)*(byte *)((int)&(this->time).dwHighDateTime + 1));
		TwinString::Append(outStr,tmpStr.value);
		TwinString::Dispose(&tmpStr);
		TwinString::Append(outStr,"/");
		TwinString::AppendInt(&tmpStr,(uint)*(ushort *)((int)&(this->time).dwHighDateTime + 2));
		TwinString::Append(outStr,tmpStr.value);
		TwinString::Dispose(&tmpStr);
		return;
		}
		
	*/
	return;
}

void BankSub::Dispose_4(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	BankSub * __thiscall BankSub::Dispose(BankSub *this,byte param_1){
		this->vtable = (BankSub_VTable *)&Bank_VT_Sub;
		TwinString::Dispose(&this->str);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void BankSub::ReadData(MemoryStream* memoryStream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall BankSub::ReadData(BankSub *this,MemoryStream *memoryStream){
		(*memoryStream->vtable->Read)(memoryStream,&(this->time).dwHighDateTime,8,1);
		TwinString::ReadFromFile(&this->str,memoryStream);
		return;
		}
		
	*/
	return;
}

void BankSub::WriteData(MemoryStream* memoryStream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall BankSub::WriteData(BankSub *this,MemoryStream *memoryStream){
		(*memoryStream->vtable->Write)(memoryStream,(byte *)&this->time,8);
		TwinString::Write(&this->str,memoryStream);
		return;
		}
		
	*/
	return;
}

void BankSub::Reset() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall BankSub::Reset(BankSub *this){
		(this->time).dwHighDateTime = 0;
		(this->time).dwLowDateTime = 0;
		return;
		}
		
	*/
	return;
}

void BankSub::UpdateTimeStamp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall BankSub::UpdateTimeStamp(BankSub *this){
		uint uVar1;
		uVar1 = (this->time).dwLowDateTime;
		if (((uVar1 & 0x1000000) != 0) && ((uVar1 & 0x2000000) != 0)) {
		SetTime(&this->time);
		}
		return;
		}
		
	*/
	return;
}

void BankSub::Read(MemoryStream* memoryStream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall BankSub::Read(BankSub *this,MemoryStream *memoryStream){
		(*memoryStream->vtable->Read)(memoryStream,&this->unkInt1,4,1);
		(*memoryStream->vtable->ReadInt2)(memoryStream,&this->unkInt2);
		ReadData(this,memoryStream);
		return;
		}
		
	*/
	return;
}

void BankSub::Write(MemoryStream* memoryStream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall BankSub::Write(BankSub *this,MemoryStream *memoryStream){
		(*memoryStream->vtable->Write)(memoryStream,(byte *)&this->unkInt1,4);
		(*memoryStream->vtable->WriteInt1)(memoryStream,this->unkInt2);
		WriteData(this,memoryStream);
		return;
		}
		
	*/
	return;
}

void BankSub::FUN_000ad360(AutoClass56* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall BankSub::FUN_000ad360(BankSub *this,AutoClass56 *param_1){
		uint uVar1;
		uVar1 = param_1->field1_0x4 & 0x1f | this->unkInt1 & 0xffffffc0U;
		this->unkInt1 = uVar1;
		uVar1 = ((uint)*(byte *)((int)&param_1->flags + 3) << 6 ^ uVar1) & 0x3c0 ^ uVar1;
		this->unkInt1 = uVar1;
		uVar1 = (param_1->flags << 0x10 ^ uVar1) & 0x7f0000 ^ uVar1;
		this->unkInt1 = uVar1;
		uVar1 = (param_1->flags << 3 ^ uVar1) & 0xfc00 ^ uVar1;
		this->unkInt1 = uVar1;
		this->unkInt1 = (param_1->flags << 10 ^ uVar1) & 0x3f800000 ^ uVar1;
		this->unkInt2 = param_1->someTicks;
		UpdateTimeStamp(this);
		return;
		}
		
	*/
	return;
}

