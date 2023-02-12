#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Instance/InstanceNodeInstanceA/InstanceNodeInstanceASub.h"

uint InstanceNodeInstanceASub::FUN_00170550(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall InstanceNodeInstanceASub::FUN_00170550(InstanceNodeInstanceASub *this,undefined4 *param_1){
		uint uVar1;
		uVar1 = this->field65_0x60 & 0x1f;
		if (uVar1 == 8) {
		return 0xff;
		}
		this->field64_0x40[uVar1 - 0x10] = (undefined *)param_1;
		this->field64_0x40[this->field65_0x60 & 0x1f] = (undefined *)(int)(TicksPerTime * FLOAT_00386394);
		uVar1 = this->field65_0x60;
		uVar1 = (uVar1 + 1 ^ uVar1) & 0x1f ^ uVar1;
		this->field65_0x60 = uVar1;
		if (((byte)*param_1 & 0xf) == 5) {
		this->field65_0x60 = uVar1 | 0x20;
		}
		return this->field65_0x60 & 0x1f;
		}
		
	*/
	return 0;
}

void InstanceNodeInstanceASub::FUN_001705b0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeInstanceASub::FUN_001705b0(InstanceNodeInstanceASub *this){
		undefined **ppuVar1;
		int iVar2;
		ppuVar1 = this->field64_0x40;
		iVar2 = 8;
		do {
		*(undefined4 *)(ppuVar1 + -0x10) = 0;
		ppuVar1[-8] = (undefined *)0xffffffff;
		*ppuVar1 = (undefined *)(int)(TicksPerTime * 0.0);
		ppuVar1 = ppuVar1 + 1;
		iVar2 = iVar2 + -1;
		}
		 while (iVar2 != 0);
		this->field65_0x60 = this->field65_0x60 & 0xffffffe0;
		return;
		}
		
	*/
	return;
}

InstanceNodeInstanceASub* InstanceNodeInstanceASub::FUN_00176000() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeInstanceASub * __fastcall InstanceNodeInstanceASub::FUN_00176000(InstanceNodeInstanceASub *this){
		float fVar1;
		InstanceNodeInstanceASub *extraout_ECX;
		FUN_001705b0(this);
		fVar1 = FLOAT_0038639c;
		extraout_ECX->field65_0x60 = extraout_ECX->field65_0x60 & 0xffffffdf;
		*(undefined4 *)&extraout_ECX->field_0x68 = 0;
		*(float *)&extraout_ECX->field_0x64 = fVar1;
		return extraout_ECX;
		}
		
	*/
	return null;
}

