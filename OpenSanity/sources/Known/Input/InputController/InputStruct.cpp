#include "headers/Known/Input/InputController/InputStruct.h"

#include "headers/Unknown/AutoClasses/InputBinding2.h"
bool InputStruct::CheckKey(Keys key, char param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InputStruct::CheckKey(InputStruct *this,Keys key,char param_2){
		byte bVar1;
		short sVar2;
		bool bVar3;
		bool bVar4;
		float fVar5;
		uint keyCodeMask;
		keyCodeMask = KEY_MAP[key];
		if ((int)key < 8) {
		if (param_2 == '\0') {
		bVar4 = (keyCodeMask & this->inputBitfield1) != 0;
		LAB_00209920:if (bVar4 != false) {
		this->slot = 0;
		return bVar4;
		}
		return false;
		}
		if ((keyCodeMask & this->inputBitfield2) != 0) {
		return false;
		}
		if ((keyCodeMask & this->inputBitfield1) == 0) {
		return false;
		}
		goto LAB_00209a7c;
		}
		if ((int)key < 0x10) {
		bVar1 = *(byte *)((int)this->devicePtr + keyCodeMask + 0x4c);
		if (param_2 == '\0') {
		bVar4 = 0x1e < bVar1;
		goto LAB_00209920;
		}
		if (0x1d < *(byte *)((int)this->devicePtr + keyCodeMask + 0x62)) {
		return false;
		}
		bVar3 = bVar1 < 0x1e;
		bVar4 = bVar1 == 0x1e;
		}
		else if (key == 0x10) {
		fVar5 = (float)(int)this->analogValue1 * FLOAT_0038d854;
		if (param_2 != '\0') {
		if (fVar5 <= FLOAT_00386ab4) {
		return false;
		}
		sVar2 = this->field28_0x70;
		LAB_00209a49:fVar5 = (float)(int)sVar2;
		goto LAB_00209a4d;
		}
		LAB_00209a06:bVar4 = fVar5 == FLOAT_00386ab4;
		bVar3 = fVar5 < FLOAT_00386ab4;
		}
		else {
		if (key == 0x11) {
		fVar5 = (float)(int)this->analogValue1 * FLOAT_0038d854;
		if (param_2 == '\0') {
		LAB_00209a6b:bVar4 = FLOAT_0038bc0c == fVar5;
		bVar3 = FLOAT_0038bc0c < fVar5;
		goto LAB_00209a76;
		}
		if (FLOAT_0038bc0c <= fVar5) {
		return false;
		}
		fVar5 = (float)(int)this->field28_0x70;
		}
		else {
		if (key != 0x13) {
		if (key != 0x12) {
		return false;
		}
		fVar5 = (float)(int)this->analogValue2 * FLOAT_0038d854;
		if (param_2 != '\0') {
		if (FLOAT_0038bc0c <= fVar5) {
		return false;
		}
		sVar2 = this->field27_0x6e;
		goto LAB_00209a49;
		}
		goto LAB_00209a6b;
		}
		fVar5 = (float)(int)this->analogValue2 * FLOAT_0038d854;
		if (param_2 == '\0') goto LAB_00209a06;
		if (fVar5 <= FLOAT_00386ab4) {
		return false;
		}
		fVar5 = (float)(int)this->field27_0x6e;
		}
		LAB_00209a4d:fVar5 = AbsFloat(fVar5 * FLOAT_0038d854);
		bVar4 = FLOAT_00386ab4 == fVar5;
		bVar3 = FLOAT_00386ab4 < fVar5;
		}
		LAB_00209a76:if (bVar3 || bVar4) {
		return false;
		}
		LAB_00209a7c:this->slot = 0;
		return true;
		}
		
	*/
	return false;
}

float InputStruct::FUN_00209c50(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float __thiscall InputStruct::FUN_00209c50(InputStruct *this,int param_1){
		short sVar1;
		float fVar2;
		float fVar3;
		bool bVar4;
		fVar3 = FLOAT_003869d8;
		fVar2 = FLOAT_0038639c;
		switch(param_1) {
		case 0:case 3:case 4:case 5:case 6:case 7:break;
		case 1:case 2:if (param_1 < 8) {
		bVar4 = (KEY_MAP[param_1] & (uint)this->inputBitfield1) != 0;
		}
		else {
		if (0xf < param_1) {
		if (param_1 == 0x10) {
		sVar1 = this->analogValue1;
		}
		else {
		if (param_1 == 0x11) {
		if (FLOAT_0038bc0c <= (float)(int)this->analogValue1 * FLOAT_0038d854) {
		return 0.0;
		}
		bVar4 = true;
		goto LAB_00209d6f;
		}
		if (param_1 != 0x13) {
		if (param_1 != 0x12) {
		return 0.0;
		}
		if (FLOAT_0038bc0c <= (float)(int)this->analogValue2 * FLOAT_0038d854) {
		return 0.0;
		}
		bVar4 = true;
		goto LAB_00209d6f;
		}
		sVar1 = this->analogValue2;
		}
		if ((float)(int)sVar1 * FLOAT_0038d854 <= FLOAT_00386ab4) {
		return 0.0;
		}
		bVar4 = true;
		goto LAB_00209d6f;
		}
		bVar4 = 0x1e < *(byte *)((int)this->devicePtr + KEY_MAP[param_1] + 0x4c);
		}
		if (!bVar4) {
		return 0.0;
		}
		LAB_00209d6f:this->slot = 0;
		if (!bVar4) {
		return 0.0;
		}
		return fVar3;
		case 8:case 9:case 10:case 0xb:case 0xc:case 0xd:case 0xe:case 0xf:return (float)(uint)*(byte *)((int)this->devicePtr + KEY_MAP[param_1] + 0x4c) * FLOAT_0038dedc;
		default:return FLOAT_00386394;
		}
		if (param_1 < 8) {
		bVar4 = (KEY_MAP[param_1] & (uint)this->inputBitfield1) != 0;
		}
		else {
		if (0xf < param_1) {
		if (param_1 == 0x10) {
		sVar1 = this->analogValue1;
		}
		else {
		if (param_1 == 0x11) {
		if (FLOAT_0038bc0c <= (float)(int)this->analogValue1 * FLOAT_0038d854) {
		return 0.0;
		}
		bVar4 = true;
		goto LAB_00209ca1;
		}
		if (param_1 != 0x13) {
		if (param_1 != 0x12) {
		return 0.0;
		}
		if (FLOAT_0038bc0c <= (float)(int)this->analogValue2 * FLOAT_0038d854) {
		return 0.0;
		}
		bVar4 = true;
		goto LAB_00209ca1;
		}
		sVar1 = this->analogValue2;
		}
		if ((float)(int)sVar1 * FLOAT_0038d854 <= FLOAT_00386ab4) {
		return 0.0;
		}
		bVar4 = true;
		goto LAB_00209ca1;
		}
		bVar4 = 0x1e < *(byte *)((int)this->devicePtr + KEY_MAP[param_1] + 0x4c);
		}
		if (!bVar4) {
		return 0.0;
		}
		LAB_00209ca1:this->slot = 0;
		if (!bVar4) {
		return 0.0;
		}
		return fVar2;
		}
		
	*/
	return 0.0f;
}

bool InputStruct::CheckSomeKeyInput(InputStruct* input) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall InputStruct::CheckSomeKeyInput(InputStruct *input){
		if (input->handle == (void *)0x0) {
		return false;
		}
		if (input->slot != 0) {
		if (((KEY_MAP[4] & input->inputBitfield2) != 0) || ((KEY_MAP[4] & input->inputBitfield1) == 0)){
		if (0x1d < *(byte *)((int)input->devicePtr + KEY_MAP[9] + 0x62)) {
		return false;
		}
		if (*(byte *)((int)input->devicePtr + KEY_MAP[9] + 0x4c) < 0x1f) {
		return false;
		}
		}
		input->slot = 0;
		input->slot = 0;
		}
		return true;
		}
		
	*/
	return false;
}

bool InputStruct::CheckKeyBinding(InputBinding2* element, char param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool InputStruct::CheckKeyBinding(InputStruct *this,InputBinding2 *element,char param_3){
		bool bVar1;
		uint uVar2;
		uVar2 = 0;
		if ((element->flags & 0xf) != 0) {
		do {
		bVar1 = CheckKey(this,(uint)element->field0_0x0[uVar2],param_3);
		if (bVar1 != false) {
		return true;
		}
		uVar2 = uVar2 + 1;
		}
		 while (uVar2 < (element->flags & 0xf));
		}
		return false;
		}
		
	*/
	return false;
}

