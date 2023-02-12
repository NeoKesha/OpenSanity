#include "headers/Unknown/AutoClasses/AutoClass46.h"

void AutoClass46::FUN_00131230() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall AutoClass46::FUN_00131230(AutoClass46 *this){
		uint uVar1;
		float fVar2;
		int iVar3;
		uint uVar4;
		int *piVar5;
		AutoClass46 *local_4;
		uVar4 = 1;
		piVar5 = (int *)&this->field_0x48;
		iVar3 = 0x18;
		local_4 = this;
		do {
		if ((this->field6_0x18 & uVar4) != 0) {
		if (*piVar5 == 0) {
		LAB_00131270:piVar5[-10] = piVar5[-10] & 0xffffc1bf;
		}
		else {
		_IDirectSoundBuffer_GetStatus@8(piVar5[-2],(uint *)&local_4);
		if (((uint)local_4 & 1) == 0) {
		*piVar5 = 0;
		piVar5[1] = 0;
		goto LAB_00131270;
		}
		}
		fVar2 = FLOAT_003869d8;
		uVar1 = piVar5[-10];
		if (((uVar1 & 0x40) == 0) && ((uVar1 >> 5 & 1) == 0)) {
		piVar5[-8] = (int)FLOAT_003869d8;
		piVar5[-7] = (int)fVar2;
		this->field6_0x18 = this->field6_0x18 & ~(1 << ((byte)uVar1 & 0x1f));
		}
		}
		piVar5 = piVar5 + 0xac;
		uVar4 = uVar4 << 1;
		iVar3 = iVar3 + -1;
		if (iVar3 == 0) {
		return;
		}
		}
		 while( true );
		}
		
	*/
	return;
}

void AutoClass46::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall AutoClass46::Construct(AutoClass46 *this){
		undefined4 *puVar1;
		uint uVar2;
		float fVar3;
		int iVar4;
		uint *puVar5;
		undefined4 *puVar6;
		undefined4 *puVar7;
		int local_8;
		puVar5 = &this->field11_0x20;
		this->field0_0x0 = 0;
		this->field6_0x18 = 0;
		puVar6 = (undefined4 *)&this->field_0x48;
		local_8 = 0x18;
		do {
		fVar3 = FLOAT_003869d8;
		uVar2 = *puVar5;
		puVar6[-8] = FLOAT_003869d8;
		puVar6[-7] = fVar3;
		puVar6[-6] = 0;
		*puVar5 = uVar2 & 0xffffc080;
		puVar6[-2] = 0;
		puVar6[-1] = 0;
		*puVar6 = 0;
		puVar6[1] = 0;
		puVar6[0x74] = 0;
		puVar6[0x75] = 0x19;
		ForEach(puVar6 + 0x76,0x20,5,::Passthrough);
		puVar6[0x9e] = 0;
		puVar6[2] = 0;
		puVar6[3] = 0;
		puVar6[4] = 0;
		puVar6[5] = 0;
		puVar6[6] = 0;
		puVar6[7] = 0;
		puVar1 = puVar6 + 0xe;
		puVar7 = puVar1;
		for (iVar4 = 0x14;
		 iVar4 != 0;
		 iVar4 = iVar4 + -1) {
		*puVar7 = 0;
		puVar7 = puVar7 + 1;
		}
		puVar6[0xf] = 2;
		puVar6[0x19] = 2;
		puVar6[0x15] = 0xff;
		puVar6[0x18] = 0;
		puVar5 = puVar5 + 0xac;
		puVar6 = puVar6 + 0xac;
		local_8 = local_8 + -1;
		*puVar1 = 1;
		}
		 while (local_8 != 0);
		this->field2_0x8 = 0x7fff;
		this->field3_0xc = 0x7fff;
		this->field4_0x10 = 0x7fff;
		this->field5_0x14 = 0x7fff;
		this->field1_0x4 = this->field1_0x4 | 0x3fff0000;
		return;
		}
		
	*/
	return;
}

