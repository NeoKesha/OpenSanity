#include "headers/Unknown/AutoClasses/GameParticle.h"

void GameParticle::FUN_00123780() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __cdecl GameParticle::FUN_00123780(GameParticle *this){
		float fVar1;
		float fVar2;
		fVar1 = FLOAT_003928b0;
		if (this->field15_0x20 == 0) {
		(this->field116_0x340).x =(this->field29_0x40 + this->field28_0x3c) * this->field45_0x8c +*(float *)&this->field_0x4c;
		(this->field116_0x340).y =(*(float *)&this->field_0x44 + this->field28_0x3c) * this->field45_0x8c +this->field39_0x50;
		(this->field116_0x340).z =(this->field34_0x48 + this->field28_0x3c) * this->field45_0x8c + (this->field40_0x54).x;
		fVar2 = FLOAT_0038acf0;
		(this->field116_0x340).x = this->field71_0x174 * FLOAT_0038acf0 + (this->field116_0x340).x;
		(this->field116_0x340).y = this->field71_0x174 * fVar2 + (this->field116_0x340).y;
		fVar1 = FLOAT_0038a838;
		(this->field116_0x340).z = this->field71_0x174 * fVar2 + (this->field116_0x340).z;
		(this->field116_0x340).x = (this->field116_0x340).x * fVar1;
		(this->field116_0x340).y = (this->field116_0x340).y * fVar1;
		(this->field116_0x340).z = (this->field116_0x340).z * fVar1;
		(this->field116_0x340).w = 0.0;
		return;
		}
		(this->field116_0x340).x = FLOAT_003928b0;
		(this->field116_0x340).y = fVar1;
		(this->field116_0x340).z = fVar1;
		(this->field116_0x340).w = 0.0;
		return;
		}
		
	*/
	return;
}

void GameParticle::ReadParticle(int particleType, byte param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __cdecl GameParticle::ReadParticle(GameParticle *this,int particleType,byte param_3){
		byte bVar1;
		short sVar2;
		uint uVar3;
		int iVar4;
		float *pfVar5;
		Vector4 *pVVar6;
		int *outData;
		float fVar7;
		float fVar8;
		int local_20 [3];
		int local_14 [4];
		int local_4;
		local_4 = SECURITY_COOKIE;
		ParticleStreamRead((int *)this,0x10);
		if (particleType == 0x20) {
		FUN_000fe690();
		uVar3 = FUN_000fe690();
		*(int *)&this->field_0x330 = (int)(char)uVar3;
		}
		this->field6_0x10 = param_3;
		sVar2 = ParticleStreamReadShort();
		this->field8_0x12 = sVar2;
		sVar2 = ParticleStreamReadShort();
		this->field9_0x14 = sVar2;
		sVar2 = ParticleStreamReadShort();
		this->field10_0x16 = sVar2;
		sVar2 = ParticleStreamReadShort();
		this->field11_0x18 = sVar2;
		sVar2 = ParticleStreamReadShort();
		this->field12_0x1a = sVar2;
		sVar2 = ParticleStreamReadShort();
		this->field13_0x1c = sVar2;
		sVar2 = ParticleStreamReadShort();
		this->field14_0x1e = sVar2;
		uVar3 = FUN_000fe690();
		this->field15_0x20 = (byte)uVar3;
		uVar3 = FUN_000fe690();
		this->field16_0x21 = (byte)uVar3;
		uVar3 = FUN_000fe690();
		this->field17_0x22 = (byte)uVar3;
		uVar3 = FUN_000fe690();
		this->field18_0x23 = (byte)uVar3;
		fVar7 = ParticleStreamReadFloat();
		(this->field19_0x24).x = fVar7;
		if (particleType == 0x20) {
		bVar1 = this->field17_0x22;
		(this->field19_0x24).x = FLOAT_0038660c;
		if ('\x03' < (char)bVar1) {
		this->field17_0x22 = bVar1 - 4;
		}
		LAB_00123995:fVar7 = ParticleStreamReadFloat();
		(this->field19_0x24).y = fVar7;
		fVar7 = ParticleStreamReadFloat();
		(this->field19_0x24).z = fVar7;
		}
		else {
		if (5 < particleType) goto LAB_00123995;
		(this->field19_0x24).y = 0.0;
		(this->field19_0x24).z = FLOAT_0038660c;
		}
		if (particleType < 10) {
		fVar7 = 0.0;
		LAB_001239e7:(this->field19_0x24).w = fVar7;
		}
		else {
		fVar8 = ParticleStreamReadFloat();
		(this->field19_0x24).w = fVar8;
		fVar7 = FLOAT_003928b4;
		if (fVar8 <= FLOAT_003865d4) goto LAB_001239e7;
		}
		if ((particleType < 0x17) || (particleType == 0x20)) {
		*(undefined4 *)&this->field_0x34 = 0;
		}
		else {
		fVar7 = ParticleStreamReadFloat();
		*(float *)&this->field_0x34 = fVar7;
		}
		if ((particleType < 0x18) || (particleType == 0x20)) {
		*(float *)&this->field_0x38 = FLOAT_00386ab4;
		}
		else {
		fVar7 = ParticleStreamReadFloat();
		*(float *)&this->field_0x38 = fVar7;
		}
		if (particleType < 7) {
		ParticleStreamReadInt2();
		ParticleStreamReadInt2();
		}
		fVar7 = ParticleStreamReadFloat();
		this->field28_0x3c = fVar7;
		ParticleStreamRead((int *)&this->field29_0x40,0xc);
		if (particleType < 0x12) {
		ParticleStreamRead(local_20,0xc);
		}
		ParticleStreamRead((int *)&this->field_0x4c,0xc);
		if (particleType < 0x12) {
		ParticleStreamRead(local_20,0xc);
		}
		fVar7 = FLOAT_003865d4;
		if (((particleType == 0x12) || (particleType == 0x13)) && (this->field15_0x20 == 6)) {
		this->field34_0x48 = this->field34_0x48 * FLOAT_003865d4;
		(this->field40_0x54).x = (this->field40_0x54).x * fVar7;
		}
		fVar7 = ParticleStreamReadFloat();
		(this->field40_0x54).y = fVar7;
		fVar7 = ParticleStreamReadFloat();
		(this->field40_0x54).z = fVar7;
		fVar7 = ParticleStreamReadFloat();
		(this->field40_0x54).w = fVar7;
		fVar7 = ParticleStreamReadFloat();
		(this->field41_0x64).x = fVar7;
		fVar7 = ParticleStreamReadFloat();
		(this->field41_0x64).y = fVar7;
		fVar7 = ParticleStreamReadFloat();
		(this->field41_0x64).z = fVar7;
		fVar7 = ParticleStreamReadFloat();
		(this->field41_0x64).w = fVar7;
		fVar7 = ParticleStreamReadFloat();
		(this->field42_0x74).x = fVar7;
		fVar7 = ParticleStreamReadFloat();
		(this->field42_0x74).y = fVar7;
		fVar7 = ParticleStreamReadFloat();
		(this->field42_0x74).z = fVar7;
		fVar7 = ParticleStreamReadFloat();
		(this->field42_0x74).w = fVar7;
		fVar7 = ParticleStreamReadFloat();
		this->field43_0x84 = fVar7;
		fVar7 = ParticleStreamReadFloat();
		this->field44_0x88 = fVar7;
		fVar7 = ParticleStreamReadFloat();
		this->field45_0x8c = fVar7;
		sVar2 = ParticleStreamReadShort();
		this->field46_0x90 = sVar2;
		uVar3 = FUN_000fe690();
		this->field47_0x92 = (byte)uVar3;
		uVar3 = FUN_000fe690();
		this->field48_0x93 = (byte)uVar3;
		fVar7 = ParticleStreamReadFloat();
		this->field49_0x94 = (int)fVar7;
		fVar7 = ParticleStreamReadFloat();
		this->field50_0x98 = (int)fVar7;
		fVar7 = ParticleStreamReadFloat();
		this->field51_0x9c = (int)fVar7;
		fVar7 = ParticleStreamReadFloat();
		this->field52_0xa0 = (int)fVar7;
		fVar7 = ParticleStreamReadFloat();
		this->field53_0xa4 = (int)fVar7;
		pfVar5 = (float *)&this->field54_0xa8;
		iVar4 = 8;
		do {
		ParticleStreamRead((int *)pfVar5,0x10);
		pfVar5 = pfVar5 + 4;
		iVar4 = iVar4 + -1;
		}
		 while (iVar4 != 0);
		pfVar5 = (float *)(this->field56_0xbc + 0x1b);
		iVar4 = 8;
		do {
		ParticleStreamRead((int *)pfVar5,8);
		fVar7 = FLOAT_0038c850;
		pfVar5 = pfVar5 + 2;
		iVar4 = iVar4 + -1;
		}
		 while (iVar4 != 0);
		if (particleType < 0x15) {
		*(float *)&this->field_0x168 = FLOAT_0038c850;
		*(float *)&this->field_0x16c = fVar7;
		}
		else {
		fVar7 = ParticleStreamReadFloat();
		*(float *)&this->field_0x168 = fVar7;
		fVar7 = ParticleStreamReadFloat();
		*(float *)&this->field_0x16c = fVar7;
		}
		fVar7 = ParticleStreamReadFloat();
		*(float *)&this->field_0x170 = fVar7;
		fVar7 = ParticleStreamReadFloat();
		this->field71_0x174 = fVar7;
		pVVar6 = &this->field72_0x178;
		iVar4 = 8;
		do {
		ParticleStreamRead((int *)pVVar6,8);
		pVVar6 = (Vector4 *)&pVVar6->z;
		iVar4 = iVar4 + -1;
		}
		 while (iVar4 != 0);
		pfVar5 = (float *)(this->field73_0x188 + 0xc);
		iVar4 = 8;
		do {
		ParticleStreamRead((int *)pfVar5,8);
		pfVar5 = pfVar5 + 2;
		iVar4 = iVar4 + -1;
		}
		 while (iVar4 != 0);
		fVar7 = ParticleStreamReadFloat();
		(this->field76_0x1f8).x = fVar7;
		fVar7 = ParticleStreamReadFloat();
		(this->field76_0x1f8).y = fVar7;
		pfVar5 = &(this->field76_0x1f8).z;
		iVar4 = 8;
		do {
		ParticleStreamRead((int *)pfVar5,8);
		pfVar5 = pfVar5 + 2;
		iVar4 = iVar4 + -1;
		}
		 while (iVar4 != 0);
		pVVar6 = (Vector4 *)(this->field78_0x218 + 10);
		iVar4 = 8;
		do {
		ParticleStreamRead((int *)pVVar6,8);
		pVVar6 = (Vector4 *)&pVVar6->z;
		iVar4 = iVar4 + -1;
		}
		 while (iVar4 != 0);
		pVVar6 = (Vector4 *)(this->field80_0x258 + 10);
		iVar4 = 8;
		do {
		ParticleStreamRead((int *)pVVar6,8);
		pVVar6 = (Vector4 *)&pVVar6->z;
		iVar4 = iVar4 + -1;
		}
		 while (iVar4 != 0);
		fVar7 = ParticleStreamReadFloat();
		(this->field83_0x2c0).x = fVar7;
		fVar7 = ParticleStreamReadFloat();
		(this->field83_0x2c0).y = fVar7;
		fVar7 = ParticleStreamReadFloat();
		(this->field83_0x2c0).z = fVar7;
		fVar7 = ParticleStreamReadFloat();
		(this->field83_0x2c0).w = fVar7;
		if (particleType == 0x20) {
		ParticleStreamReadInt2();
		LAB_00123cfe:outData = this->field84_0x2d0 + 1;
		iVar4 = 8;
		do {
		ParticleStreamRead(outData,8);
		outData = outData + 2;
		iVar4 = iVar4 + -1;
		}
		 while (iVar4 != 0);
		uVar3 = FUN_000fe690();
		*(char *)(this->field84_0x2d0 + 0x11) = (char)uVar3;
		}
		else {
		if (2 < particleType) goto LAB_00123cfe;
		*(undefined *)(this->field84_0x2d0 + 0x11) = 0;
		}
		if (particleType < 0x11) {
		*(undefined *)((int)this->field84_0x2d0 + 0x45) = 0;
		}
		else {
		uVar3 = FUN_000fe690();
		*(char *)((int)this->field84_0x2d0 + 0x45) = (char)uVar3;
		}
		if (this->field17_0x22 == 7) {
		*(undefined *)((int)this->field84_0x2d0 + 0x45) = 2;
		}
		*(undefined4 *)((int)this->field84_0x2d0 + 0x46) = 0xffffffff;
		*(undefined4 *)(this->field85_0x318 + 1) = 0xffffffff;
		if (particleType == 0x20) {
		FUN_000fe690();
		FUN_000fe690();
		ParticleStreamReadInt2();
		LAB_00123d80:iVar4 = 0;
		do {
		if ((10 < particleType) && (particleType == 0x20)) {
		if (iVar4 == 0) {
		fVar7 = ParticleStreamReadFloat();
		*(float *)&this->field_0x334 = fVar7;
		}
		else {
		ParticleStreamReadInt2();
		}
		ParticleStreamReadInt2();
		ParticleStreamReadInt2();
		}
		iVar4 = iVar4 + 1;
		}
		 while (iVar4 < 4);
		}
		else {
		if (particleType < 0x17) goto LAB_00123d80;
		if ((particleType < 0x1d) && (iVar4 = ParticleStreamReadInt2(), 0 < iVar4)) {
		do {
		ParticleStreamRead(local_14,0x10);
		ParticleStreamReadInt2();
		ParticleStreamReadInt2();
		iVar4 = iVar4 + -1;
		}
		 while (iVar4 != 0);
		}
		}
		if (particleType < 0x10) {
		this->field85_0x318[3] = 0;
		*(undefined4 *)&this->field_0x324 = 0;
		LAB_00123e6f:if ((0x18 < particleType) && (particleType != 0x20)) {
		iVar4 = ParticleStreamReadInt2();
		this->field85_0x318[4] = (short)iVar4;
		fVar7 = ParticleStreamReadFloat();
		*(float *)&this->field_0x32c = fVar7;
		goto LAB_00123e2b;
		}
		}
		else {
		if (particleType != 0x20) {
		iVar4 = ParticleStreamReadInt2();
		this->field85_0x318[3] = (short)iVar4;
		fVar7 = ParticleStreamReadFloat();
		*(float *)&this->field_0x324 = fVar7;
		goto LAB_00123e6f;
		}
		sVar2 = ParticleStreamReadShort();
		this->field85_0x318[3] = sVar2;
		FUN_000fe690();
		FUN_000fe690();
		fVar7 = ParticleStreamReadFloat();
		*(float *)&this->field_0x324 = fVar7;
		}
		fVar7 = FLOAT_00386ab4;
		this->field85_0x318[4] = 5;
		*(float *)&this->field_0x32c = fVar7;
		LAB_00123e2b:if ((particleType < 0x1a) || (particleType == 0x20)) {
		*(undefined4 *)&this->field_0x328 = 0;
		}
		else {
		fVar7 = ParticleStreamReadFloat();
		*(float *)&this->field_0x328 = fVar7;
		}
		if (particleType != 0x20) {
		if (0x1a < particleType) {
		iVar4 = ParticleStreamReadInt2();
		*(int *)&this->field_0x330 = iVar4;
		}
		if (0x1b < particleType) {
		fVar7 = ParticleStreamReadFloat();
		*(float *)&this->field_0x334 = fVar7;
		}
		if (particleType < 0x1e) {
		FUN_00123780(this);
		@__security_check_cookie@4(local_4);
		return;
		}
		}
		ParticleStreamRead((int *)&this->field116_0x340,0x10);
		@__security_check_cookie@4(local_4);
		return;
		}
		
	*/
	return;
}

