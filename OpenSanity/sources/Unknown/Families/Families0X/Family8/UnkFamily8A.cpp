#include "headers/Unknown/Families/Families0X/Family8/UnkFamily8A.h"

void UnkFamily8A::FUN_001a11b0(uint param_1, int strCnt, byte param_3, uint param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily8A::FUN_001a11b0(UnkFamily8A *this,undefined4 param_1,int strCnt,undefined param_3,float param_4){
		byte bVar1;
		int iVar2;
		float *pfVar3;
		*(undefined4 *)&this->field_0x34 = param_1;
		this->cnt = strCnt;
		bVar1 = *(byte *)((int)&(this->parent).field2_0x8 + 3);
		this->field_0x3c = param_3;
		iVar2 = 0;
		if ((bVar1 & 0xf) != 0) {
		pfVar3 = this->field1_0x14;
		do {
		*pfVar3 = param_4;
		iVar2 = iVar2 + 1;
		pfVar3 = pfVar3 + 1;
		}
		 while (iVar2 < (int)(*(byte *)((int)&(this->parent).field2_0x8 + 3) & 0xf));
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily8A::Construct(uint param_1, uint param_2, uint param_3, uint param_4, byte param_5, uint param_6, uint param_7) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily8A * __thiscall UnkFamily8A::Construct(UnkFamily8A *this,uint param_1,uint param_2,undefined4 param_3,int param_4,undefined param_5,undefined4 param_6,uint param_7){
		char cVar1;
		(this->parent).field2_0x8 =((param_7 & 0xf | 0x10) << 0xc | param_1 & 0xfff) << 0xc | param_2 & 0xfff |(this->parent).field2_0x8 & 0xf0000000;
		cVar1 = ('\x01' << ((byte)param_7 & 0x1f)) + -1;
		(this->parent).field7_0x10 = (UnkFamily10Base *)0x0;
		(this->parent).field1_0x4 = 0;
		this->field_0x3d = 0;
		(this->parent).field_0xd = cVar1;
		(this->parent).field_0xc = cVar1;
		(this->parent).vtable = &UnkFamily8_VT_A;
		FUN_001a11b0(this,param_3,param_4,param_5,param_6);
		return this;
		}
		
	*/
	return;
}

void UnkFamily8A::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily8A::Dispose(UnkFamily8A *this){
		void *ptr;
		ptr = (void *)this[1].parent.field2_0x8;
		(this->parent).vtable = &UnkFamily8_VT_AA;
		VirtualPool::FreeMemory(ptr);
		VirtualPool::FreeMemory(this[1].parent.vtable);
		(this->parent).vtable = &UnkFamily8_VT_Abstract;
		return;
		}
		
	*/
	return;
}

bool UnkFamily8A::FUN_001a1140(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall UnkFamily8A::FUN_001a1140(UnkFamily8A *this,int param_1){
		float fVar1;
		fVar1 = this->field1_0x14[param_1];
		if (this->cnt <= (int)fVar1) {
		if (this->field_0x3c == '\0') {
		return false;
		}
		if (this->cnt <= (int)fVar1) {
		(*(code *)(this->parent).vtable[4])(param_1,*(undefined4 *)&this->field_0x34);
		return true;
		}
		}
		(*(code *)(this->parent).vtable[4])(param_1,(int)fVar1 + 1);
		return true;
		}
		
	*/
	return false;
}

int UnkFamily8A::FUN_001a1190(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall UnkFamily8A::FUN_001a1190(UnkFamily8A *this,int param_1){
		UnkFamily10Base *pUVar1;
		pUVar1 = (this->parent).field7_0x10;
		if (pUVar1 == (UnkFamily10Base *)0x0) {
		if (this->field_0x3d != '\0') {
		FUN_001a1140(this,param_1);
		}
		pUVar1 = (UnkFamily10Base *)0x0;
		}
		return (int)pUVar1;
		}
		
	*/
	return 0;
}

uint UnkFamily8A::FUN_001a11f0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 UnkFamily8A::FUN_001a11f0(void){
		return 0;
		}
		
	*/
	return 0;
}

bool UnkFamily8A::PrintValue(int param_1, char* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall UnkFamily8A::PrintValue(UnkFamily8A *this,int param_1,char *param_2){
		_sprintf(param_2,"%d",this->field1_0x14[param_1]);
		return true;
		}
		
	*/
	return false;
}

bool UnkFamily8A::SetValue3(int param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall UnkFamily8A::SetValue3(UnkFamily8A *this,int param_1,float param_2){
		this->field1_0x14[param_1] = param_2;
		return true;
		}
		
	*/
	return false;
}

bool UnkFamily8A::GetValue3(int param_1, uint* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall UnkFamily8A::GetValue3(UnkFamily8A *this,int param_1,undefined4 *param_2){
		*param_2 = this->field1_0x14[param_1];
		return true;
		}
		
	*/
	return false;
}

bool UnkFamily8A::SetValue2(int param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall UnkFamily8A::SetValue2(UnkFamily8A *this,int param_1,float param_2){
		this->field1_0x14[param_1] = param_2;
		return true;
		}
		
	*/
	return false;
}

bool UnkFamily8A::GetValue2(int param_1, uint* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall UnkFamily8A::GetValue2(UnkFamily8A *this,int param_1,undefined4 *param_2){
		*param_2 = this->field1_0x14[param_1];
		return true;
		}
		
	*/
	return false;
}

bool UnkFamily8A::SetValue1(int index, float value) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall UnkFamily8A::SetValue1(UnkFamily8A *this,int index,float value){
		this->field1_0x14[index] = (float)(int)value;
		return true;
		}
		
	*/
	return false;
}

bool UnkFamily8A::GetValue1(int param_1, float* out) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall UnkFamily8A::GetValue1(UnkFamily8A *this,int param_1,float *out){
		*out = (float)(int)this->field1_0x14[param_1];
		return true;
		}
		
	*/
	return false;
}

int UnkFamily8A::FUN_001a5580(int param_1, uint param_2, int param_3, int param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall UnkFamily8A::FUN_001a5580(UnkFamily8A *this,int param_1,undefined4 param_2,int param_3,int param_4){
		float fVar1;
		byte bVar2;
		bool bVar3;
		int iVar4;
		byte bVar5;
		bVar5 = (byte)((this->parent).field2_0x8 >> 0x1c) & 1;
		if (bVar5 == 0) {
		bVar2 = *(byte *)(param_3 + 9);
		}
		else {
		bVar2 = *(byte *)(param_3 + 8);
		}
		if (bVar5 == 0) {
		bVar5 = *(byte *)(param_3 + 9);
		}
		else {
		bVar5 = *(byte *)(param_3 + 8);
		}
		if ((bVar2 & 0x20) != 0) {
		fVar1 = this->field1_0x14[param_1];
		if (((int)fVar1 < 1) && (this->field_0x3c == '\0')) {
		bVar5 = 0;
		}
		else {
		if (*(int *)&this->field_0x34 < (int)fVar1) {
		iVar4 = (int)fVar1 + -1;
		}
		else {
		iVar4 = this->cnt;
		}
		(*(code *)(this->parent).vtable[4])(param_1,iVar4);
		bVar5 = 1;
		}
		if (param_4 != 0) {
		iVar4 = *(int *)(param_4 + (bVar5 + 8) * 4);
		if (iVar4 != 0) {
		FUN_00132a40(iVar4,*(undefined4 *)(param_4 + 0x34 + (bVar5 + 8) * 4),-1.0,0xbf800000,0,-1);
		}
		}
		return 0;
		}
		if ((bVar5 & 0x40) != 0) {
		bVar3 = FUN_001a1140(this,param_1);
		if (param_4 != 0) {
		FUN_001a1c20(param_4,(bVar3 != false) + 6);
		}
		return 0;
		}
		iVar4 = UnkFamily8Abstract::FUN_001a4420(&this->parent,param_1,param_2,param_3,param_4);
		return iVar4;
		}
		
	*/
	return 0;
}

void UnkFamily8A::Construct_14(uint param_1, uint param_2, uint param_3, uint strCnt, byte param_5, uint param_6, byte param_7) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily8A * __thiscall UnkFamily8A::Construct(UnkFamily8A *this,int param_1,uint param_2,undefined4 param_3,int strCnt,undefined param_5,undefined4 param_6,byte param_7){
		char cVar1;
		(this->parent).field1_0x4 = param_1;
		(this->parent).field2_0x8 =(param_7 & 0xf | 0x10) << 0x18 | param_2 & 0xfff | (this->parent).field2_0x8 & 0xf0000000;
		cVar1 = ('\x01' << (param_7 & 0x1f)) + -1;
		(this->parent).field7_0x10 = (UnkFamily10Base *)0x0;
		this->field_0x3d = 0;
		(this->parent).field_0xd = cVar1;
		(this->parent).field_0xc = cVar1;
		(this->parent).vtable = &UnkFamily8_VT_A;
		FUN_001a11b0(this,param_3,strCnt,param_5,param_6);
		return this;
		}
		
	*/
	return;
}

