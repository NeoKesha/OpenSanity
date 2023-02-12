#include "headers/Unknown/Families/Families3X/Family39/UnkFamily39Abstract.h"

void UnkFamily39Abstract::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily39Abstract::Dispose(UnkFamily39Abstract *this){
		TwinString *pTVar1;
		int iVar2;
		this->vtable = (UnkFamily39Abstract_VTable *)&UnkFamily39_VT_Abstract;
		iVar2 = 9;
		pTVar1 = (TwinString *)&this->cnt;
		do {
		VirtualPool::FreeMemory(pTVar1[-1].value);
		iVar2 = iVar2 + -1;
		pTVar1[-1].strSize = 0;
		pTVar1[-1].value = (char *)0x0;
		pTVar1 = pTVar1 + -1;
		}
		 while (iVar2 != 0);
		return;
		}
		
	*/
	return;
}

void UnkFamily39Abstract::ShiftStrArray(char param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily39Abstract::ShiftStrArray(UnkFamily39Abstract *this,char param_1){
		int iVar1;
		TwinString *this_00;
		this_00 = this->strArray;
		iVar1 = 8;
		do {
		TwinString::Copy(this_00,this_00[1].value);
		this_00 = this_00 + 1;
		iVar1 = iVar1 + -1;
		}
		 while (iVar1 != 0);
		if (param_1 != '\0') {
		TwinString::Copy(this->strArray + this->cnt,"> ");
		this->cnt = this->cnt - 1;
		return;
		}
		this->cnt = 8;
		TwinString::Copy(this->strArray + 8,"> ");
		return;
		}
		
	*/
	return;
}

void UnkFamily39Abstract::Dispose_2(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily39Abstract * __thiscall UnkFamily39Abstract::Dispose(UnkFamily39Abstract *this,byte param_1){
		Dispose(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

int UnkFamily39Abstract::AddStr(char* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall UnkFamily39Abstract::AddStr(UnkFamily39Abstract *this,char *param_1){
		byte bVar1;
		TwinString::Append(this->strArray + this->cnt,param_1);
		bVar1 = this->cnt + 1;
		this->cnt = bVar1;
		if (bVar1 == 9) {
		(*(code *)this->vtable->field5_0x14)(0);
		}
		return this->cnt - 1;
		}
		
	*/
	return 0;
}

void UnkFamily39Abstract::ClearStrArray() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily39Abstract::ClearStrArray(UnkFamily39Abstract *this){
		TwinString *this_00;
		int iVar1;
		this_00 = this->strArray;
		iVar1 = 9;
		do {
		TwinString::Copy(this_00,"> ");
		this_00 = this_00 + 1;
		iVar1 = iVar1 + -1;
		}
		 while (iVar1 != 0);
		this->cnt = 0;
		return;
		}
		
	*/
	return;
}

void UnkFamily39Abstract::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily39Abstract * __fastcall UnkFamily39Abstract::Construct(UnkFamily39Abstract *this){
		int i;
		TwinString *str;
		this->vtable = (UnkFamily39Abstract_VTable *)&UnkFamily39_VT_Abstract;
		str = this->strArray;
		str->value = (char *)0x0;
		this->strArray[0].strLength = 0;
		this->strArray[0].strSize = 0;
		this->strArray[1].value = (char *)0x0;
		this->strArray[1].strLength = 0;
		this->strArray[1].strSize = 0;
		this->strArray[2].value = (char *)0x0;
		this->strArray[2].strLength = 0;
		this->strArray[2].strSize = 0;
		this->strArray[3].value = (char *)0x0;
		this->strArray[3].strLength = 0;
		this->strArray[3].strSize = 0;
		this->strArray[4].value = (char *)0x0;
		this->strArray[4].strLength = 0;
		this->strArray[4].strSize = 0;
		this->strArray[5].value = (char *)0x0;
		this->strArray[5].strLength = 0;
		this->strArray[5].strSize = 0;
		this->strArray[6].value = (char *)0x0;
		this->strArray[6].strLength = 0;
		this->strArray[6].strSize = 0;
		this->strArray[7].value = (char *)0x0;
		this->strArray[7].strLength = 0;
		this->strArray[7].strSize = 0;
		this->strArray[8].value = (char *)0x0;
		this->strArray[8].strLength = 0;
		this->strArray[8].strSize = 0;
		i = 9;
		do {
		TwinString::Copy(str,"> ");
		str = str + 1;
		i = i + -1;
		}
		 while (i != 0);
		this->cnt = 0;
		return this;
		}
		
	*/
	return;
}

