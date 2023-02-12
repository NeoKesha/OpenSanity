#include "headers/Unknown/AutoClasses/InputWrapper.h"

#include "headers/Unknown/AutoClasses/InputBinding1.h"
#include "headers/Known/Input/InputController/InputStruct.h"
#include "headers/Unknown/AutoClasses/InputBinding2.h"
void InputWrapper::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InputWrapper::Dispose(InputWrapper *this){
		VirtualPool::FreeMemory(this->array2);
		VirtualPool::FreeMemory(this->array1);
		return;
		}
		
	*/
	return;
}

void InputWrapper::FUN_0020a4b0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InputWrapper::FUN_0020a4b0(InputWrapper *this){
		uint i;
		int offset;
		i = 0;
		if ((*(uint *)this & 0xff) != 0) {
		do {
		this->array2[i].flags = this->array2[i].flags & 0xfffffff0;
		i = i + 1;
		}
		 while (i < (*(uint *)this & 0xff));
		}
		i = 0;
		if (this->arrayLength1 != 0) {
		offset = 0;
		do {
		*(uint *)((int)&this->array1->flags + offset) =*(uint *)((int)&this->array1->flags + offset) & 0xfffffff0;
		i = i + 1;
		offset = offset + 0x10;
		}
		 while (i < this->arrayLength1);
		}
		return;
		}
		
	*/
	return;
}

bool InputWrapper::AddKey(int actionIndex, Keys key) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InputWrapper::AddKey(InputWrapper *this,int actionIndex,Keys key){
		InputBinding2 *pIVar1;
		uint uVar2;
		pIVar1 = this->array2;
		uVar2 = pIVar1[actionIndex].flags;
		pIVar1[actionIndex].flags = uVar2 & 0xffffffef;
		pIVar1[actionIndex].field0_0x0[uVar2 & 0xf] = (byte)key;
		uVar2 = pIVar1[actionIndex].flags;
		pIVar1[actionIndex].flags = (uVar2 + 1 ^ uVar2) & 0xf ^ uVar2;
		return true;
		}
		
	*/
	return false;
}

bool InputWrapper::AddAxis(int param_1, byte param_2, float param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InputWrapper::AddAxis(InputWrapper *this,int param_1,byte param_2,float param_3){
		InputBinding1 *pIVar1;
		uint uVar2;
		float fVar3;
		int iVar4;
		fVar3 = FLOAT_0038639c;
		pIVar1 = this->array1;
		iVar4 = param_1 * 0x10;
		uVar2 = *(uint *)(iVar4 + 4 + (int)pIVar1);
		*(uint *)((int)pIVar1 + iVar4 + 4) = uVar2 & 0xffffffef;
		*(byte *)((int)pIVar1 + (uVar2 & 0xf) + iVar4) = param_2;
		uVar2 = *(uint *)((int)pIVar1 + iVar4 + 4);
		*(uint *)((int)pIVar1 + iVar4 + 4) = (uVar2 + 1 ^ uVar2) & 0xf ^ uVar2;
		*(float *)((int)pIVar1 + iVar4 + 8) = param_3;
		*(float *)((int)pIVar1 + iVar4 + 0xc) = fVar3 / (fVar3 - param_3);
		return true;
		}
		
	*/
	return false;
}

bool InputWrapper::CheckInput(InputStruct* inputHandle, int index, char param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InputWrapper::CheckInput(InputWrapper *this,InputStruct *inputHandle,int index,char param_3){
		bool bVar1;
		bool bVar2;
		InputBinding2 *element;
		element = this->array2 + index;
		bVar1 = InputStruct::CheckKeyBinding(inputHandle,element,param_3);
		if ((element->flags & 0x10) == 0) {
		return bVar1;
		}
		bVar2 = InputStruct::CheckKeyBinding(inputHandle,this->array2 + (element->flags >> 6 & 0xff),'\0');
		if ((*(byte *)&element->flags & 0x20) == 0) {
		if ((bVar1 != false) && (bVar2 == false)) {
		return true;
		}
		}
		else if ((bVar1 != false) && (bVar2 != false)) {
		return true;
		}
		return false;
		}
		
	*/
	return false;
}

float InputWrapper::FUN_0020a7c0(InputStruct* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall InputWrapper::FUN_0020a7c0(InputWrapper *this,InputStruct *param_1,int param_2){
		InputBinding2 *pIVar1;
		InputBinding2 *pIVar2;
		int iVar3;
		bool bVar4;
		uint uVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		iVar3 = param_2;
		fVar8 = 0.0;
		pIVar1 = this->array2;
		pIVar2 = pIVar1 + param_2;
		uVar5 = 0;
		fVar7 = 0.0;
		param_2 = 0;
		fVar9 = FLOAT_003a4540;
		if ((pIVar2->flags & 0xf) != 0) {
		do {
		fVar10 = InputStruct::FUN_00209c50(param_1,(uint)pIVar1[iVar3].field0_0x0[uVar5]);
		fVar6 = fVar10;
		if (fVar10 < FLOAT_00386394) {
		fVar6 = fVar8 - fVar10;
		}
		if (fVar9 < fVar6) {
		fVar6 = fVar7;
		if (fVar7 < fVar8) {
		fVar6 = fVar8 - fVar7;
		}
		if (fVar6 <= fVar9) {
		fVar7 = fVar10;
		param_2 = (int)fVar10;
		}
		}
		uVar5 = uVar5 + 1;
		}
		 while (uVar5 < (pIVar1[iVar3].flags & 0xf));
		}
		if ((pIVar1[iVar3].flags & 0x10) != 0) {
		bVar4 = InputStruct::CheckKeyBinding(param_1,this->array2 + (pIVar1[iVar3].flags >> 6 & 0xff),'\0');
		if ((*(byte *)&pIVar1[iVar3].flags & 0x20) == 0) {
		if (bVar4 != false) {
		return 0.0;
		}
		}
		else if (bVar4 == false) {
		return 0.0;
		}
		return (float)param_2;
		}
		return fVar7;
		}
		
	*/
	return 0.0f;
}

float InputWrapper::FUN_0020a8c0(InputStruct* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall InputWrapper::FUN_0020a8c0(InputWrapper *this,InputStruct *param_1,int param_2){
		InputBinding1 *pIVar1;
		bool bVar2;
		int iVar3;
		uint uVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		fVar7 = 0.0;
		pIVar1 = this->array1;
		iVar3 = param_2 * 0x10;
		fVar8 = *(float *)(iVar3 + 8 + (int)pIVar1);
		fVar10 = *(float *)(iVar3 + 0xc + (int)pIVar1);
		uVar4 = 0;
		fVar9 = 0.0;
		param_2 = 0;
		if ((*(uint *)(iVar3 + 4 + (int)pIVar1) & 0xf) != 0) {
		do {
		fVar11 = FUN_00209e50((int)param_1,(uint)*(byte *)((int)pIVar1 + uVar4 + iVar3));
		fVar5 = fVar7;
		fVar6 = fVar7;
		if (FLOAT_00386394 <= fVar11) {
		if (fVar8 < fVar11) {
		fVar11 = fVar11 - fVar8;
		goto LAB_0020a932;
		}
		}
		else if (fVar11 < fVar7 - fVar8) {
		fVar11 = fVar11 + fVar8;
		LAB_0020a932:fVar5 = fVar11 * fVar10;
		fVar6 = fVar5;
		if (fVar5 < fVar7) {
		fVar6 = fVar7 - fVar5;
		}
		}
		if (FLOAT_003a4540 < fVar6) {
		fVar6 = fVar9;
		if (fVar9 < fVar7) {
		fVar6 = fVar7 - fVar9;
		}
		if (fVar6 <= FLOAT_003a4540) {
		fVar9 = fVar5;
		param_2 = (int)fVar5;
		}
		}
		uVar4 = uVar4 + 1;
		}
		 while (uVar4 < (*(uint *)((int)pIVar1 + iVar3 + 4) & 0xf));
		}
		uVar4 = *(uint *)((int)pIVar1 + iVar3 + 4);
		if ((uVar4 & 0x10) == 0) {
		return fVar9;
		}
		bVar2 = InputStruct::CheckKeyBinding(param_1,this->array2 + (uVar4 >> 6 & 0xff),'\0');
		if ((*(byte *)((int)pIVar1 + iVar3 + 4) & 0x20) == 0) {
		if (bVar2 != false) {
		return 0.0;
		}
		}
		else if (bVar2 == false) {
		return 0.0;
		}
		return (float)param_2;
		}
		
	*/
	return 0.0f;
}

void InputWrapper::Construct(int cnt1, int cnt2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InputWrapper * __thiscall InputWrapper::Construct(InputWrapper *this,int cnt1,int cnt2){
		InputBinding2 *startPtr;
		InputBinding1 *startPtr_00;
		if (cnt2 == 0) {
		LAB_0020ad13:startPtr = (InputBinding2 *)0x0;
		}
		else {
		startPtr = (InputBinding2 *)VirtualPool::AllocateMemory(cnt2 * 8);
		if (startPtr == (InputBinding2 *)0x0) goto LAB_0020ad13;
		ForEach(startPtr,8,cnt2,InputBinding2::Construct);
		}
		this->array2 = startPtr;
		if (cnt1 != 0) {
		startPtr_00 = (InputBinding1 *)VirtualPool::AllocateMemory(cnt1 << 4);
		if (startPtr_00 != (InputBinding1 *)0x0) {
		ForEach(startPtr_00,0x10,cnt1,InputBinding1::Construct);
		goto LAB_0020ad46;
		}
		}
		startPtr_00 = (InputBinding1 *)0x0;
		LAB_0020ad46:this->arrayLength2 = (byte)cnt2;
		this->array1 = startPtr_00;
		this->arrayLength1 = (byte)cnt1;
		FUN_0020a4b0(this);
		return this;
		}
		
	*/
	return;
}

