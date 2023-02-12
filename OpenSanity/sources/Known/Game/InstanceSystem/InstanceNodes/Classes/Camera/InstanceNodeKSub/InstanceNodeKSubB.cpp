#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/InstanceNodeKSubB.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
#include "headers/Known/Input/InputController/InputStruct.h"
void InstanceNodeKSubB::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeKSubB * __fastcall InstanceNodeKSubB::Construct(InstanceNodeKSubB *this){
		InstanceNodeKSubAbstract::Construct((InstanceNodeKSubAbstract *)this);
		(this->parent).parent.vtable = (InstanceNodeKSubAbstract_VTable *)&InstanceNodeKSub_VT_Base;
		InputWrapper::Construct(&(this->parent).inputWrapper,5,3);
		(this->parent).parent.vtable = (InstanceNodeKSubAbstract_VTable *)&InstanceNodeKSub_VT_B;
		InstanceNodeKSubModuleA::Construct(&this->struct1);
		InstanceNodeKSubModuleA::Construct(&this->struct2);
		InstanceNodeKSubModule2B::Construct(&this->struct3);
		InstanceNodeKSubModule3B::Construct(&this->struct4,8.5,DAT_0039dca0);
		this->field103_0x710 = (int)((FLOAT_003863a8 / DAT_0039db80) * FLOAT_00386394);
		this->field5_0x50 = 4;
		InitInput(this);
		(this->parent).parent.struct2ptr = &(this->struct2).parent;
		(this->parent).parent.struct1ptr = &(this->struct1).parent;
		(this->parent).parent.struct3ptr = &(this->struct3).parent;
		(this->parent).parent.struct4ptr = &(this->struct4).parent;
		this->inputVal4 = 0.0;
		this->inputVal5 = 0.0;
		this->inputVal6 = 0.0;
		this->inputVal7 = 0.0;
		this->inputVal8 = 0.0;
		this->inputVal1 = 0.0;
		this->inputVal2 = 0.0;
		this->inputVal3 = 0.0;
		thunk_FUN_0007c930(this,1);
		return this;
		}
		
	*/
	return;
}

void InstanceNodeKSubB::FUN_0007cc40() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeKSubB::FUN_0007cc40(InstanceNodeKSubB *this){
		uint *puVar1;
		undefined *puVar2;
		uint uVar3;
		float fVar4;
		int iVar5;
		uVar3 = this->field5_0x50;
		(this->struct3).parent.field31_0x70 = 1;
		this->field5_0x50 = uVar3 | 8;
		InstanceNodeKSubModule3B::FUN_001c8350(&this->struct4,1);
		puVar1 = &(this->struct4).field129_0x104;
		*puVar1 = *puVar1 | 0x401;
		iVar5 = DAT_0039dcc8;
		(this->struct4).field151_0x120 = (int)(TicksPerTime * FLOAT_0038b844);
		(this->struct4).field156_0x128 = iVar5;
		puVar1 = &(this->struct4).field23_0x64;
		*puVar1 = *puVar1 | 1;
		iVar5 = DAT_0039dccc;
		fVar4 = FLOAT_0038b854;
		(this->struct4).field42_0x80 = (int)(TicksPerTime * FLOAT_00386394);
		(this->struct4).field47_0x88 = iVar5;
		puVar1 = &(this->struct4).field13_0x50;
		*puVar1 = *puVar1 | 0x10000;
		puVar2 = &(this->struct4).field_0x154;
		*(uint *)puVar2 = *(uint *)puVar2 | 0x80;
		(this->struct4).field209_0x190 = fVar4;
		(this->struct4).field210_0x194 = fVar4;
		InstanceNodeKSubModule3B::FUN_001c8990(&this->struct4);
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubB::FUN_0007c930(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubB::FUN_0007c930(InstanceNodeKSubB *this,uint param_1){
		InstanceNodeKSubModule3B *this_00;
		uint *puVar1;
		undefined *puVar2;
		float fVar3;
		int iVar4;
		float fVar5;
		uint uVar6;
		int iVar7;
		uint uVar8;
		byte bVar9;
		uVar8 = param_1 & 1;
		this->field5_0x50 = this->field5_0x50 & 0xfffffff7U | uVar8 * 8;
		this_00 = &this->struct4;
		bVar9 = (byte)param_1;
		InstanceNodeKSubModule3B::FUN_001c8350(this_00,bVar9);
		*(uint *)&(this->struct4).field_0xb4 = *(uint *)&(this->struct4).field_0xb4 & 0xffffff7f;
		puVar1 = &(this->struct4).field23_0x64;
		*puVar1 = *puVar1 & 0xffffff7f;
		puVar1 = &(this->struct4).field129_0x104;
		*puVar1 = *puVar1 & 0xffffff7f;
		puVar2 = &(this->struct4).field_0x154;
		*(uint *)puVar2 = *(uint *)puVar2 & 0xffffff7f;
		FUN_001c8ff0((int)&this->struct3);
		uVar6 = (this->struct4).field129_0x104 & 0xfffffbfe | uVar8;
		(this->struct4).field129_0x104 = uVar6;
		(this->struct4).field129_0x104 = (*(byte *)&this->field5_0x50 ^ uVar6) & 1 ^ uVar6;
		iVar7 = DAT_0039dcc0;
		fVar3 = TicksPerTime;
		if (bVar9 != 0) {
		iVar7 = DAT_0039dcc8;
		fVar3 = TicksPerTime * FLOAT_0038b844;
		}
		(this->struct4).field151_0x120 = (int)fVar3;
		(this->struct4).field156_0x128 = iVar7;
		(this->struct4).field23_0x64 = (this->struct4).field23_0x64 & 0xfffffffe | uVar8;
		iVar4 = DAT_0039dccc;
		iVar7 = DAT_0039dcc4;
		if (bVar9 == 0) {
		(this->struct4).field42_0x80 = (int)(TicksPerTime * FLOAT_0038b834);
		(this->struct4).field47_0x88 = iVar7;
		return;
		}
		(this->struct4).field42_0x80 = (int)(TicksPerTime * FLOAT_00386394);
		(this->struct4).field47_0x88 = iVar4;
		InstanceNodeKSubModule3B::FUN_001c8990(this_00);
		FUN_001c89b0((int)this_00);
		fVar3 = FLOAT_0038b824;
		(this->struct4).field13_0x50 = (this->struct4).field13_0x50 & 0xfffeffff;
		fVar5 = ENV_FLOAT_113_SCREEN_FOV;
		(this->struct4).fovVector.x = ENV_FLOAT_113_SCREEN_FOV;
		(this->struct4).fovVector.y = fVar5;
		(this->struct4).field207_0x188 = fVar3;
		(this->struct4).field208_0x18c = FLOAT_0038b828;
		iVar7 = DAT_0039dc78;
		(this->struct4).field57_0x98 = DAT_0039dc74;
		(this->struct4).field58_0x9c = iVar7;
		(this->struct3).field62_0x100.x = DAT_0039dc80;
		(this->struct3).field62_0x100.y = FLOAT_0039dc84;
		(this->struct3).field62_0x100.z = DAT_0039dc88;
		(this->struct3).field62_0x100.w = FLOAT_0039dc8c;
		(this->struct3).field63_0x110.x = DAT_0039dc90;
		(this->struct3).field63_0x110.y = FLOAT_0039dc94;
		(this->struct3).field63_0x110.z = DAT_0039dc98;
		(this->struct3).field63_0x110.w = FLOAT_0039dc9c;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubB::FUN_0007cb80() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeKSubB::FUN_0007cb80(InstanceNodeKSubB *this){
		float fVar1;
		int iVar2;
		iVar2 = DAT_0039dce4;
		fVar1 = FLOAT_0038b864;
		(this->struct4).field57_0x98 = DAT_0039dce4;
		(this->struct4).field58_0x9c = iVar2;
		(this->struct4).field207_0x188 = fVar1;
		(this->struct4).field208_0x18c = fVar1;
		fVar1 = DAT_0039dce0;
		(this->struct4).fovVector.x = DAT_0039dce0;
		(this->struct4).fovVector.y = fVar1;
		(this->struct3).field62_0x100.x = DAT_0039dcf0;
		(this->struct3).field62_0x100.y = FLOAT_0039dcf4;
		(this->struct3).field62_0x100.z = DAT_0039dcf8;
		(this->struct3).field62_0x100.w = FLOAT_0039dcfc;
		(this->struct3).field63_0x110.x = DAT_0039dcf0;
		(this->struct3).field63_0x110.y = FLOAT_0039dcf4;
		(this->struct3).field63_0x110.z = DAT_0039dcf8;
		(this->struct3).field63_0x110.w = FLOAT_0039dcfc;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubB::FUN_0007cd50() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeKSubB::FUN_0007cd50(InstanceNodeKSubB *this){
		uint *puVar1;
		uint uVar2;
		uVar2 = this->field5_0x50;
		if ((uVar2 & 0x100) == 0) {
		if ((uVar2 & 0x400) == 0) {
		if ((uVar2 & 0x200) == 0) {
		puVar1 = &(this->struct4).field129_0x104;
		*puVar1 = *puVar1 & 0xfffffffe;
		puVar1 = &(this->struct4).field23_0x64;
		*puVar1 = *puVar1 | 1;
		puVar1 = &(this->struct4).field13_0x50;
		*puVar1 = *puVar1 & 0xfff7ffff;
		}
		}
		else {
		puVar1 = &(this->struct4).field129_0x104;
		*puVar1 = *puVar1 | 1;
		puVar1 = &(this->struct4).field23_0x64;
		*puVar1 = *puVar1 | 1;
		puVar1 = &(this->struct4).field13_0x50;
		*puVar1 = *puVar1 & 0xfff7ffff;
		this->field5_0x50 = this->field5_0x50 & 0xfffffdff;
		}
		}
		else {
		puVar1 = &(this->struct4).field129_0x104;
		*puVar1 = *puVar1 & 0xfffffffe;
		puVar1 = &(this->struct4).field23_0x64;
		*puVar1 = *puVar1 & 0xfffffffe;
		puVar1 = &(this->struct4).field13_0x50;
		*puVar1 = *puVar1 | 0x80000;
		this->field5_0x50 = this->field5_0x50 | 0x200;
		}
		if ((*(byte *)&(this->struct4).field14_0x54 >> 6 & 1) == 0) {
		puVar1 = &(this->struct4).field23_0x64;
		*puVar1 = *puVar1 & 0xfffffffe;
		puVar1 = &(this->struct4).field129_0x104;
		*puVar1 = *puVar1 & 0xfffffffe;
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubB::InitInput() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeKSubB::InitInput(InstanceNodeKSubB *this){
		InputWrapper *inputWrapper;
		inputWrapper = &(this->parent).inputWrapper;
		InputWrapper::AddAxis(inputWrapper,0,2,0.3);
		InputWrapper::AddAxis(inputWrapper,1,3,0.3);
		InputWrapper::AddAxis(inputWrapper,3,1,0.3);
		InputWrapper::AddAxis(inputWrapper,3,5,0.3);
		InputWrapper::AddAxis(inputWrapper,4,0,0.3);
		InputWrapper::AddAxis(inputWrapper,4,4,0.3);
		InputWrapper::AddKey(inputWrapper,0,KEY_BLACK);
		InputWrapper::AddKey(inputWrapper,0,KEY_RIGHT_TRIGGER);
		InputWrapper::AddKey(inputWrapper,0,KEY_WHITE);
		InputWrapper::AddKey(inputWrapper,0,KEY_LEFT_TRIGGER);
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubB::FUN_000835f0(void* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubB::FUN_000835f0(InstanceNodeKSubB *this,void *param_1){
		int iVar1;
		int iVar2;
		int iVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float local_38;
		float local_34;
		float local_30;
		float local_2c;
		float local_28;
		float local_20;
		undefined4 local_1c;
		float local_18;
		float local_14;
		if ((~(byte)((this->struct4).field13_0x50 >> 10) & 1) == 0) {
		return;
		}
		fVar6 = *(float *)&(this->struct4).field_0x108;
		fVar4 = 0.0 - fVar6;
		if (0.0 <= fVar6) {
		fVar4 = fVar6;
		}
		if (EPSILON < fVar4) {
		(this->struct4).field156_0x128 = DAT_0039dcc0 * 2;
		return;
		}
		thunk_FUN_00066eb0(param_1,&local_30);
		local_34 = SQRT(local_28 * local_28 + local_2c * local_2c + local_30 * local_30);
		iVar3 = (int)((FLOAT_003863a8 / DAT_0039db80) * 0.0);
		if (((this->struct4).field129_0x104 >> 7 & 1) != 0) goto LAB_000838ec;
		fVar6 = FLOAT_0038639c;
		if ((*(uint *)(*(int *)((int)param_1 + 0x20) + 0x14) >> 2 & 1) == 0) {
		fVar6 = FLOAT_00386ab4;
		}
		if ((this->inputVal7 != 0.0) || (this->inputVal8 != 0.0)) {
		local_20 = this->inputVal8;
		local_1c = 0;
		local_18 = this->inputVal7;
		local_14 = FLOAT_0038639c;
		FUN_000f0c90(&local_38,&local_20);
		fVar7 = DAT_0039db80 * FLOAT_003863a0;
		fVar5 = (float)(((int)local_38 - 0x8000U & 0xffff) - 0x8000) * fVar7;
		fVar4 = 0.0 - fVar5;
		if (0.0 <= fVar5) {
		fVar4 = fVar5;
		}
		fVar5 = FLOAT_003863a8 / DAT_0039db80;
		iVar1 = (int)(fVar5 * fVar4);
		if ((iVar1 < (int)(fVar5 * FLOAT_0038bdd0)) || ((int)(fVar5 * DAT_0039db70) <= iVar1)) {
		if ((iVar1 < (int)(fVar5 * DAT_0039db70)) ||((int)((DAT_0039db78 + DAT_0039db70) * fVar5) < iVar1)) {
		iVar2 = (int)((DAT_0039db78 + DAT_0039db70) * fVar5);
		if ((iVar2 < iVar1) && (iVar1 < (int)(fVar5 * FLOAT_0038bdcc))) {
		iVar3 = (int)((float)DAT_0039dcc8 * FLOAT_0038b718);
		fVar7 = FLOAT_0038639c -(float)(int)((float)(iVar1 - iVar2) / (DAT_0039db78 - FLOAT_0038bdd0)) * fVar7;
		goto LAB_000838a6;
		}
		}
		else {
		iVar3 = (int)((float)(int)((float)(iVar1 - (int)(fVar5 * DAT_0039db70)) / DAT_0039db78) *fVar7 * (float)(int)((float)DAT_0039dcc8 * FLOAT_00386ab4)) + DAT_0039dcc8;
		}
		}
		else {
		fVar7 = (float)(int)((float)(iVar1 - (int)(fVar5 * FLOAT_0038bdd0)) /(DAT_0039db70 - FLOAT_0038bdd0)) * fVar7;
		iVar3 = DAT_0039dcc8;
		LAB_000838a6:iVar3 = (int)(fVar7 * (float)iVar3);
		}
		}
		iVar3 = this->field103_0x710 - (int)((float)(iVar3 - this->field103_0x710) * FLOAT_0038a774);
		(this->struct4).field156_0x128 = (int)((float)(int)((float)iVar3 * local_34) * fVar6);
		LAB_000838ec:this->field103_0x710 = iVar3;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubB::FUN_0008f8a0(void* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubB::FUN_0008f8a0(InstanceNodeKSubB *this,void *param_1){
		uint *puVar1;
		uint uVar2;
		bool bVar3;
		int iVar4;
		uint uVar5;
		InstanceNodeKSubB *this_00;
		InstanceNodeKSubB *this_01;
		Vector4 vec;
		bVar3 = thunk_FUN_00066eb0(param_1,&vec);
		if (bVar3 == false) {
		if (((this->field5_0x50 & 8U) != 0) && ((this->field5_0x50 & 0x70U) != 0)) {
		iVar4 = BlackboardAbstract::GetIntValue(*(BlackboardAbstract **)((int)param_1 + 0x1c),0);
		if (iVar4 == 5) {
		thunk_FUN_0007cb80(this);
		}
		else {
		thunk_FUN_0007c930(this,1);
		(this->struct3).parent.field31_0x70 = 0;
		}
		}
		thunk_FUN_0007cd50(this);
		thunk_FUN_000835f0(this_01,param_1);
		this->field5_0x50 = this->field5_0x50 & 0xffffff8f;
		}
		else {
		iVar4 = (**(code **)(**(int **)((int)param_1 + 0xb8) + 0x1c))();
		if (iVar4 == 1) {
		if (((byte)this->field5_0x50 & 0x70) != 0x10) {
		thunk_FUN_0007cc40(this);
		}
		thunk_FUN_0007cd50(this);
		thunk_FUN_00083380(this,SQRT(vec.z * vec.z + vec.y * vec.y + vec.x * vec.x),(int)param_1);
		}
		else if (iVar4 == 3) {
		thunk_FUN_000834c0(this);
		thunk_FUN_0007cd50(this);
		puVar1 = &(this->struct4).field13_0x50;
		*puVar1 = *puVar1 | 0x10000;
		}
		else if (iVar4 == 5) {
		if (((byte)this->field5_0x50 & 0x70) != 0x50) {
		(this->struct3).parent.field31_0x70 = 1;
		puVar1 = &(this->struct4).field13_0x50;
		*puVar1 = *puVar1 | 0x10000;
		}
		thunk_FUN_0007cd50(this);
		thunk_FUN_000835f0(this_00,param_1);
		}
		else {
		uVar2 = this->field5_0x50;
		uVar5 = (**(code **)(**(int **)((int)param_1 + 0xb8) + 0x1c))();
		if (((uVar2 >> 4 & 7) != uVar5) && ((uVar2 & 8) != 0)) {
		thunk_FUN_0007c930(this,1);
		}
		thunk_FUN_000835f0(this,param_1);
		(this->struct3).parent.field31_0x70 = 0;
		}
		iVar4 = (**(code **)(**(int **)((int)param_1 + 0xb8) + 0x1c))();
		this->field5_0x50 = this->field5_0x50 ^ (iVar4 << 4 ^ this->field5_0x50) & 0x70U;
		}
		(this->struct3).parent.field30_0x60.x = vec.x;
		(this->struct3).parent.field30_0x60.y = vec.y;
		(this->struct3).parent.field30_0x60.z = vec.z;
		(this->struct3).parent.field30_0x60.w = vec.w;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubB::FUN_00083380(float param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubB::FUN_00083380(InstanceNodeKSubB *this,float param_1,int param_2){
		undefined *puVar1;
		uint *puVar2;
		int iVar3;
		float fVar4;
		Vector4 local_30;
		Vector4 local_20;
		if (FLOAT_0038b850 < param_1) {
		param_1 = DAT_0039db80 * FLOAT_003863a0 * (float)INT_0039dcd4;
		}
		iVar3 = (int)(param_1 * FLOAT_0038abc8 * (float)ENV_INT_60) + INT_0039dcd0;
		(this->struct4).field151_0x120 = (int)(TicksPerTime * FLOAT_0038b844);
		(this->struct4).field156_0x128 = iVar3;
		local_30.y = *(float *)(*(int *)(param_2 + 0xb8) + 0xfc) - FLOAT_0038adb8;
		if (local_30.y <= 0.0) {
		puVar1 = &(this->struct4).field_0x154;
		*(uint *)puVar1 = *(uint *)puVar1 & 0xffffff7f;
		}
		else {
		fVar4 = local_30.y + FLOAT_0038b854;
		local_30.y = local_30.y + FLOAT_0038b824;
		*(uint *)&(this->struct4).field_0x154 = *(uint *)&(this->struct4).field_0x154 | 0x80;
		(this->struct4).field209_0x190 = fVar4;
		(this->struct4).field210_0x194 = fVar4;
		local_20.x = 0.0;
		local_20.z = 0.0;
		local_20.w = FLOAT_0038639c;
		local_30.x = 0.0;
		local_30.z = 0.0;
		local_30.w = FLOAT_0038639c;
		local_20.y = local_30.y;
		InstanceNodeKSubModule2B::FUN_001c9000(&this->struct3,&local_20,&local_30);
		}
		puVar2 = &(this->struct4).field13_0x50;
		*puVar2 = *puVar2 | 0x10000;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubB::FUN_000834c0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeKSubB::FUN_000834c0(InstanceNodeKSubB *this){
		uint *puVar1;
		float fVar2;
		float fVar3;
		int iVar4;
		this->field5_0x50 = this->field5_0x50 | 8;
		(this->struct3).parent.field31_0x70 = 0;
		InstanceNodeKSubModule3B::FUN_001c8350(&this->struct4,1);
		(this->struct4).field129_0x104 = (this->struct4).field129_0x104 | 0x401;
		iVar4 = DAT_0039dcd8;
		(this->struct4).field151_0x120 = (int)(TicksPerTime * 0.0);
		(this->struct4).field156_0x128 = iVar4;
		puVar1 = &(this->struct4).field23_0x64;
		*puVar1 = *puVar1 | 1;
		iVar4 = DAT_0039dccc;
		fVar2 = FLOAT_0038660c;
		(this->struct4).field42_0x80 = (int)(TicksPerTime * 0.0);
		(this->struct4).field47_0x88 = iVar4;
		puVar1 = &(this->struct4).field13_0x50;
		*puVar1 = *puVar1 | 0x10000;
		(this->struct4).field574_0x3a0 = fVar2;
		(this->struct4).field575_0x3a4 = FLOAT_0038bc04;
		fVar2 = FLOAT_0038639c;
		(this->struct3).field62_0x100.x = 0.0;
		(this->struct3).field62_0x100.z = 0.0;
		(this->struct3).field62_0x100.y = fVar2;
		(this->struct3).field62_0x100.w = fVar2;
		(this->struct3).field63_0x110.x = 0.0;
		(this->struct3).field63_0x110.z = 0.0;
		fVar3 = FLOAT_0038b860;
		(this->struct3).field63_0x110.y = fVar2;
		(this->struct3).field63_0x110.w = fVar2;
		(this->struct4).field207_0x188 = fVar3;
		(this->struct4).field208_0x18c = fVar3;
		(this->struct4).fovVector.x = 2.040711e-41;
		(this->struct4).fovVector.y = 2.040711e-41;
		(this->struct4).field57_0x98 = 0xe38;
		(this->struct4).field58_0x9c = 0xe38;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubB::FUN_0007cde0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeKSubB::FUN_0007cde0(InstanceNodeKSubB *this){
		(*(code *)((this->parent).parent.vtable)->field6_0x18)();
		(*(code *)(this->struct3).parent.vtable[1])();
		InstanceNodeKSubModule3B::FUN_001d2e10(&this->struct4);
		(*(code *)(this->struct1).parent.vtable[1])(&(this->struct3).parent.field26_0x20,&(this->struct3).parent.field27_0x30);
		(*(code *)(this->struct2).parent.vtable[1])(&(this->struct4).parent.vec1,&(this->struct4).parent.vec2);
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubB::FUN_0007c8b0(void* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubB::FUN_0007c8b0(InstanceNodeKSubB *this,void *param_1){
		uint uVar1;
		float local_20 [2];
		float local_18;
		thunk_FUN_00066eb0(param_1,local_20);
		uVar1 = (this->struct4).field13_0x50;
		if (local_18 * local_18 + local_20[0] * local_20[0] < FLOAT_00386ab4) {
		(this->struct4).field13_0x50 = uVar1 & 0xffffffbf;
		this->field5_0x50 = this->field5_0x50 & 0xfffffbff;
		return;
		}
		(this->struct4).field13_0x50 = uVar1 | 0x40;
		this->field5_0x50 = this->field5_0x50 | 0x400;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubB::FUN_000990d0(uint param_1, uint param_2, int** param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubB::FUN_000990d0(InstanceNodeKSubB *this,undefined4 param_1,undefined4 param_2,int **param_3){
		InstanceContextRefCounter **this_00;
		uint *puVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		int iVar7;
		int iVar8;
		InstanceContext *pIVar9;
		InstanceContextRefCounter *pIVar10;
		void *pvVar11;
		fVar2 = FLOAT_0038abfc;
		(this->struct1).functionType = (this->struct1).functionType & 0xffffff3f | 0x30;
		this_00 = &(this->struct3).field16_0x84;
		(this->struct1).field12_0x24 = fVar2;
		pIVar9 = (InstanceContext *)*this_00;
		if (pIVar9 != (InstanceContext *)0x0) {
		pIVar9 = *(InstanceContext **)&pIVar9->parent;
		}
		if (pIVar9 != (InstanceContext *)param_3) {
		InstanceContextSmartPtr::Release(this_00);
		if (param_3 == (int **)0x0) {
		*this_00 = (InstanceContextRefCounter *)0x0;
		}
		else {
		pIVar10 = (InstanceContextRefCounter *)InstanceContextSmartPtr::CreateRef((InstanceContextSmartPtr *)(param_3 + 0x30),(InstanceContext *)param_3,0);
		*this_00 = pIVar10;
		}
		}
		(this->struct3).field62_0x100.x = DAT_0039dc80;
		(this->struct3).field62_0x100.y = FLOAT_0039dc84;
		(this->struct3).field62_0x100.z = DAT_0039dc88;
		(this->struct3).field62_0x100.w = FLOAT_0039dc8c;
		(this->struct3).field63_0x110.x = DAT_0039dc90;
		(this->struct3).field63_0x110.y = FLOAT_0039dc94;
		(this->struct3).field63_0x110.z = DAT_0039dc98;
		(this->struct3).field63_0x110.w = FLOAT_0039dc9c;
		fVar6 = FLOAT_0038bc0c;
		fVar5 = FLOAT_0038adb8;
		fVar4 = FLOAT_0038abfc;
		fVar3 = FLOAT_00386ab4;
		fVar2 = FLOAT_0038639c;
		(this->struct2).functionType = (this->struct2).functionType & 0xffffff1f | 0x10;
		(this->struct2).field12_0x24 = fVar4;
		(this->struct4).field285_0x230.w = fVar2;
		(this->struct4).field285_0x230.z = fVar6;
		(this->struct4).field285_0x230.x = 0.0;
		(this->struct4).field285_0x230.y = 0.0;
		(this->struct4).field286_0x240.w = fVar2;
		(this->struct4).field286_0x240.z = fVar6;
		(this->struct4).field286_0x240.x = 0.0;
		(this->struct4).field286_0x240.y = 0.0;
		(this->struct4).field287_0x250.w = fVar2;
		(this->struct4).field287_0x250.x = 0.0;
		(this->struct4).field287_0x250.y = 0.0;
		(this->struct4).field287_0x250.z = 0.0;
		(this->struct4).field288_0x260.w = fVar2;
		(this->struct4).field288_0x260.x = 0.0;
		(this->struct4).field288_0x260.y = 0.0;
		(this->struct4).field288_0x260.z = 0.0;
		(this->struct4).field269_0x208 = fVar2;
		fVar2 = FLOAT_0038bc38;
		(this->struct4).field261_0x1e8 = fVar3;
		(this->struct4).field270_0x20c = fVar2;
		(this->struct4).field262_0x1ec = fVar6;
		(this->struct4).field263_0x1f0 = fVar5;
		(this->struct4).field271_0x210 = fVar5;
		fVar5 = FLOAT_0038bfe8;
		(this->struct4).field264_0x1f4 = fVar2;
		(this->struct4).field272_0x214 = fVar2;
		fVar2 = FLOAT_0038bfe4;
		(this->struct4).field265_0x1f8 = FLOAT_0038bfe4;
		(this->struct4).field273_0x218 = fVar3;
		(this->struct4).field274_0x21c = fVar6;
		(this->struct4).field266_0x1fc = fVar5;
		(this->struct4).field267_0x200 = fVar2;
		(this->struct4).field275_0x220 = fVar3;
		(this->struct4).field276_0x224 = fVar6;
		fVar4 = FLOAT_0038b9f8;
		fVar3 = FLOAT_0038b834;
		(this->struct4).field268_0x204 = fVar5;
		iVar8 = DAT_0039dc68;
		iVar7 = DAT_0039dc64;
		(this->struct4).field254_0x1d8 = fVar4;
		(this->struct4).field255_0x1dc = iVar7;
		(this->struct4).field256_0x1e0 = iVar8;
		puVar1 = &(this->struct4).field13_0x50;
		*puVar1 = *puVar1 | 2;
		(this->struct4).field48_0x8c = DAT_0039dc6c;
		iVar7 = DAT_0039dc78;
		(this->struct4).field57_0x98 = DAT_0039dc74;
		(this->struct4).field58_0x9c = iVar7;
		iVar7 = DAT_0039dcc4;
		fVar2 = FLOAT_0038b824;
		(this->struct4).field42_0x80 = (int)(TicksPerTime * fVar3);
		(this->struct4).field47_0x88 = iVar7;
		(this->struct4).field157_0x12c = DAT_0039dc70;
		iVar7 = DAT_0039dcc0;
		(this->struct4).field151_0x120 = (int)TicksPerTime;
		(this->struct4).field156_0x128 = iVar7;
		(this->struct4).field207_0x188 = fVar2;
		fVar2 = FLOAT_0038b828;
		(this->struct4).field201_0x17c = fVar4;
		(this->struct4).field208_0x18c = fVar2;
		*(int *)&(this->struct4).field_0x170 = (int)(TicksPerTime * fVar3);
		(this->struct4).field200_0x178 = fVar4;
		iVar7 = DAT_0039dcc0;
		*(int *)&(this->struct4).field_0xd0 = (int)(TicksPerTime * 0.0);
		(this->struct4).field106_0xd8 = iVar7;
		pvVar11 = (void *)thunk_FUN_00066e10((int)param_3);
		thunk_FUN_0008f8a0(this,pvVar11);
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubB::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeKSubBase * __thiscall InstanceNodeKSubB::Dispose(InstanceNodeKSubB *this,byte param_1){
		(this->parent).parent.vtable = (InstanceNodeKSubAbstract_VTable *)&InstanceNodeKSub_VT_B;
		InstanceNodeKSubModule3B::Dispose(&this->struct4);
		InstanceNodeKSubModule2B::Dispose(&this->struct3);
		InstanceNodeKSubModuleAbstract::Unroll(&(this->struct2).parent);
		InstanceNodeKSubModuleAbstract::Unroll(&(this->struct1).parent);
		(this->parent).parent.vtable = (InstanceNodeKSubAbstract_VTable *)&InstanceNodeKSub_VT_Base;
		InputWrapper::Dispose(&(this->parent).inputWrapper);
		InstanceNodeKSubAbstract::CleanUp((InstanceNodeKSubAbstract *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void InstanceNodeKSubB::FUN_00095350(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __thiscall InstanceNodeKSubB::FUN_00095350(InstanceNodeKSubB *this,int param_1){
		int iVar1;
		InstanceContext *puVar2;
		InstanceNodeCharacter *nodeC;
		iVar1 = *(int *)(param_1 + 0xb0);
		if (iVar1 == 0) {
		this->ctx = (InstanceContext *)0x0;
		return;
		}
		if ((*(int **)(iVar1 + 0xc) != (int *)0x0) && (**(int **)(iVar1 + 0xc) != 0)) {
		puVar2 = *(InstanceContext **)(iVar1 + 0xc);
		if (puVar2 != (InstanceContext *)0x0) {
		puVar2 = (InstanceContext *)(puVar2->parent).vtable;
		}
		nodeC = (InstanceNodeCharacter *)InstanceDataList::GetNode(&puVar2->nodes,Character);
		this->ctx = (nodeC->field1_0x18->parent).parent.ctx;
		return;
		}
		this->ctx = _DAT_00000010;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubB::UpdatePointers() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeKSubB::UpdatePointers(InstanceNodeKSubB *this){
		(this->parent).parent.struct2ptr = &(this->struct2).parent;
		(this->parent).parent.struct4ptr = &(this->struct4).parent;
		(this->parent).parent.struct1ptr = &(this->struct1).parent;
		(this->parent).parent.struct3ptr = &(this->struct3).parent;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubB::ResetInputValues() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeKSubB::ResetInputValues(InstanceNodeKSubB *this){
		this->inputVal4 = 0.0;
		this->inputVal5 = 0.0;
		this->inputVal6 = 0.0;
		this->inputVal7 = 0.0;
		this->inputVal8 = 0.0;
		this->inputVal1 = 0.0;
		this->inputVal2 = 0.0;
		this->inputVal3 = 0.0;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubB::FetchInput(InputStruct* input) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubB::FetchInput(InstanceNodeKSubB *this,InputStruct *input){
		float fVar1;
		InputWrapper *inputWrapper;
		inputWrapper = &(this->parent).inputWrapper;
		fVar1 = InputWrapper::FUN_0020a8c0(inputWrapper,input,0);
		this->inputVal4 = fVar1;
		fVar1 = InputWrapper::FUN_0020a8c0(inputWrapper,input,1);
		this->inputVal5 = fVar1;
		fVar1 = InputWrapper::FUN_0020a8c0(inputWrapper,input,2);
		this->inputVal6 = fVar1;
		fVar1 = InputWrapper::FUN_0020a8c0(inputWrapper,input,3);
		this->inputVal7 = fVar1;
		fVar1 = InputWrapper::FUN_0020a8c0(inputWrapper,input,4);
		this->inputVal8 = fVar1;
		fVar1 = InputWrapper::FUN_0020a7c0(inputWrapper,input,1);
		this->inputVal2 = fVar1;
		fVar1 = InputWrapper::FUN_0020a7c0(inputWrapper,input,0);
		this->inputVal1 = fVar1;
		fVar1 = InputWrapper::FUN_0020a7c0(inputWrapper,input,2);
		this->inputVal3 = fVar1;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubB::GetInputValues(float* outVal1, float* outVal2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubB::GetInputValues(InstanceNodeKSubB *this,float *outVal1,float *outVal2){
		*outVal1 = this->inputVal4;
		*outVal2 = this->inputVal5;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubB::FUN_00083240(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubB::FUN_00083240(InstanceNodeKSubB *this,int param_1){
		uint uVar1;
		int iVar2;
		iVar2 = BlackboardAbstract::GetIntValue(*(BlackboardAbstract **)(param_1 + 0x1c),0);
		if (iVar2 == 5) {
		thunk_FUN_0007cb80(this);
		return;
		}
		uVar1 = *(uint *)&(this->struct4).field_0x154;
		(this->struct4).field188_0x160 = FLOAT_0038bd2c;
		(this->struct4).field207_0x188 = FLOAT_0038b824;
		(this->struct4).field208_0x18c = FLOAT_0038b828;
		*(uint *)&(this->struct4).field_0x154 = uVar1 ^ ((uint)this->field5_0x50 >> 2 ^ uVar1) & 1;
		(this->struct4).field29_0x70 = DAT_0039dca0;
		uVar1 = (this->struct4).field23_0x64;
		(this->struct4).field23_0x64 = uVar1 ^ ((uint)this->field5_0x50 >> 1 ^ uVar1) & 1;
		uVar1 = (this->struct4).field129_0x104;
		(this->struct4).field129_0x104 = uVar1 ^ (*(byte *)&this->field5_0x50 ^ uVar1) & 1;
		thunk_FUN_0007c930(this,(uint)this->field5_0x50 >> 3 & 0xffffff01);
		this->field5_0x50 = this->field5_0x50 & 0xffffff8f;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubB::FUN_00097e40(uint param_1, void* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubB::FUN_00097e40(InstanceNodeKSubB *this,undefined4 param_1,void *param_2){
		uint *puVar1;
		uint uVar2;
		int iVar3;
		float fVar4;
		float fVar5;
		iVar3 = *(int *)((int)param_2 + 0xb8);
		if (iVar3 != 0) {
		iVar3 = iVar3 + 0x20;
		}
		if ((*(uint *)((int)param_2 + 0x70) >> 0xe & 1) != 0) {
		puVar1 = &(this->struct4).field13_0x50;
		*puVar1 = *puVar1 | 0x100000;
		}
		(this->struct3).field25_0x90.z = *(float *)((int)param_2 + 0xd4);
		uVar2 = (this->struct4).field13_0x50;
		*(int *)&(this->struct3).field_0x88 = iVar3;
		(this->struct3).field26_0xa0.x = *(float *)&(this->struct4).field_0x74;
		*(undefined4 *)&(this->struct4).field_0x3d4 = *(undefined4 *)((int)param_2 + 0xd4);
		if ((uVar2 >> 5 & 1) == 0) {
		(this->struct4).field28_0x6c = this->inputVal5;
		(this->struct4).field134_0x10c = 0.0 - this->inputVal4;
		(this->struct4).field187_0x15c = 0.0 - this->inputVal6;
		}
		else {
		(this->struct4).field28_0x6c = 0.0;
		(this->struct4).field134_0x10c = 0.0;
		(this->struct4).field187_0x15c = 0.0;
		}
		fVar4 = this->inputVal5;
		if (fVar4 < 0.0) {
		fVar4 = 0.0 - fVar4;
		}
		if (fVar4 <= EPSILON) {
		fVar4 = 0.0 - this->inputVal4;
		if (fVar4 < 0.0) {
		fVar4 = 0.0 - fVar4;
		}
		if (fVar4 <= EPSILON) {
		fVar5 = 0.0 - this->inputVal6;
		fVar4 = 0.0 - fVar5;
		if (0.0 <= fVar5) {
		fVar4 = fVar5;
		}
		if (fVar4 <= EPSILON) {
		puVar1 = &(this->struct4).field13_0x50;
		*puVar1 = *puVar1 & 0xfffffff7;
		puVar1 = &(this->struct3).field15_0x80;
		*puVar1 = *puVar1 & 0xfffffbff;
		this->field5_0x50 = this->field5_0x50 & 0xfffffeff;
		goto LAB_00097f78;
		}
		}
		}
		puVar1 = &(this->struct4).field13_0x50;
		*puVar1 = *puVar1 | 8;
		puVar1 = &(this->struct3).field15_0x80;
		*puVar1 = *puVar1 | 0x400;
		this->field5_0x50 = this->field5_0x50 | 0x100;
		LAB_00097f78:thunk_FUN_0007c8b0(this,param_2);
		*(float *)&(this->struct4).field_0x68 = this->inputVal2;
		if ((this->field5_0x50 & 0x400U) == 0) {
		*(float *)&(this->struct4).field_0x108 = this->inputVal1;
		}
		(this->struct4).field186_0x158 = this->inputVal3;
		thunk_FUN_0008f8a0(this,param_2);
		*(int *)&this->field_0x6e0 =(int)((FLOAT_003863a8 / DAT_0039db80) * *(float *)((int)param_2 + 0x300));
		thunk_FUN_00095350(this,(int)param_2);
		return;
		}
		
	*/
	return;
}

