#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/Modules/InstanceNodeKSubModule3B.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/InstanceNodeKSubA.h"
void InstanceNodeKSubModule3B::FUN_001c8350(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubModule3B::FUN_001c8350(InstanceNodeKSubModule3B *this,byte param_1){
		this->field13_0x50 = this->field13_0x50 ^ ((uint)param_1 << 8 ^ this->field13_0x50) & 0x100;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubModule3B::FUN_001c8990() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeKSubModule3B::FUN_001c8990(InstanceNodeKSubModule3B *this){
		this->field575_0x3a4 = FLOAT_0038639c;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubModule3B::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeKSubModule3B::Dispose(InstanceNodeKSubModule3B *this){
		void *ptr;
		ptr = (void *)this->field564_0x390;
		(this->parent).vtable = &InstanceNodeKSubModule3_VT_B;
		if (ptr != (void *)0x0) {
		FUN_001e2ba0((int)ptr);
		VirtualPool::FreeMemory(ptr);
		}
		if ((undefined4 *)this->field437_0x308 != (undefined4 *)0x0) {
		(***(code ***)(undefined4 *)this->field437_0x308)(1);
		}
		if ((undefined4 *)this->field438_0x30c != (undefined4 *)0x0) {
		(***(code ***)(undefined4 *)this->field438_0x30c)(1);
		}
		(this->parent).vtable = &InstanceNodeKSubModule3_VT_Abstract;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubModule3B::FUN_001d2e10() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeKSubModule3B::FUN_001d2e10(InstanceNodeKSubModule3B *this){
		Vector4 *pVVar1;
		short sVar2;
		uint uVar3;
		int iVar4;
		uint uVar5;
		int extraout_ECX;
		float fVar6;
		float fVar7;
		float local_34;
		float local_30;
		float local_2c;
		float local_28;
		float local_24;
		float local_20;
		float local_1c;
		float local_18;
		float local_14;
		sVar2 = this->field14_0x54;
		uVar5 = this->field13_0x50;
		uVar3 = this->field13_0x50 >> 1;
		*(ushort *)&this->field_0x58 = *(ushort *)&this->field_0x58 & 0xfdff | 0x400;
		this->field106_0xd8 = *(int *)&this->field_0xe0;
		this->field200_0x178 = this->field202_0x180;
		this->field47_0x88 = *(int *)&this->field_0x90;
		this->field156_0x128 = *(int *)&this->field_0x130;
		this->field29_0x70 = DAT_003a3d10;
		FUN_001c79d0(&this->field23_0x64);
		FUN_001c79d0((uint *)&this->field_0xb4);
		FUN_001cc090((int)this,&local_34);
		*(float *)&this->field_0x110 = local_34;
		FUN_001c79d0(&this->field129_0x104);
		local_24 = FLOAT_0038639c;
		(this->field229_0x1b0).x = Vector4_0039ef70.x;
		(this->field229_0x1b0).y = Vector4_0039ef70.y;
		(this->field229_0x1b0).z = Vector4_0039ef70.z;
		(this->field229_0x1b0).w = local_24;
		if ((uVar3 & 1) != 0) {
		this->field188_0x160 =(local_24 - *(float *)&this->field_0x74) * this->field207_0x188 +this->field208_0x18c * *(float *)&this->field_0x74;
		}
		fVar6 = this->field208_0x18c - this->field207_0x188;
		this->field191_0x16c = 0.0;
		this->field190_0x168 = this->field188_0x160;
		fVar7 = fVar6;
		if (fVar6 < 0.0) {
		fVar7 = 0.0 - fVar6;
		}
		if (FLOAT_003a3cd8 < fVar7) {
		this->field189_0x164 = (this->field188_0x160 - this->field207_0x188) / fVar6;
		}
		else {
		this->field189_0x164 = FLOAT_00395544;
		}
		*(uint *)&this->field_0x154 = (uint)(this->field_0x154 & 1);
		this->field202_0x180 = this->field200_0x178;
		this->field211_0x198 = this->field188_0x160;
		this->field212_0x19c = 0.0;
		this->field186_0x158 = 0.0;
		this->field187_0x15c = 0.0;
		iVar4 = this->field22_0x60;
		*(undefined2 *)&this->field_0x58 = 0;
		this->field14_0x54 =(ushort)((byte)((ushort)sVar2 >> 0xe) & 1) << 0xe | this->field14_0x54 & 0x9ffbU;
		this->field13_0x50 = ((uint)((byte)(uVar5 >> 8) & 1) << 7 | (uint)((byte)uVar3 & 1)) << 1;
		this->field_0x1e4 = 0;
		if (iVar4 == 0) {
		local_30 = Vector4_0039ef70.x;
		local_2c = Vector4_0039ef70.y;
		local_28 = Vector4_0039ef70.z;
		}
		else {
		local_30 = *(float *)(iVar4 + 0x30);
		local_2c = *(float *)(iVar4 + 0x34);
		local_28 = *(float *)(iVar4 + 0x38);
		local_24 = *(float *)(iVar4 + 0x3c);
		}
		FUN_001cc200((int)this,&local_30,(undefined (*) [16])&local_20,'\0');
		pVVar1 = &(this->parent).vec2;
		if (this->field22_0x60 == 0) {
		pVVar1->x = Vector4_0039ef70.x;
		(this->parent).vec2.y = Vector4_0039ef70.y;
		(this->parent).vec2.z = Vector4_0039ef70.z;
		fVar7 = FLOAT_0038639c;
		}
		else {
		pVVar1->x = local_20;
		(this->parent).vec2.y = local_1c;
		(this->parent).vec2.z = local_18;
		fVar7 = local_14;
		}
		(this->parent).vec2.w = fVar7;
		(this->parent).fov = *(float *)&this->field_0xc8;
		this->field_0x59 = this->field_0x59 & 0xfe;
		*(undefined4 *)&this->field_0x2fc = 0;
		this->field13_0x50 = this->field13_0x50 & 0xffffff27;
		FUN_001cde90((int)this);
		iVar4 = (int)((FLOAT_003863a8 / 2PI) * 0.0);
		*(int *)&this->field_0x2f0 = iVar4;
		*(int *)&this->field_0x2f4 = iVar4;
		this->field13_0x50 = this->field13_0x50 | 0x8000;
		fVar7 = FLOAT_0038a82c;
		*(int *)&this->field_0x3ac = (int)(TicksPerTime * 0.0);
		*(float *)&this->field_0x3cc = fVar7;
		*(float *)&this->field_0x3d0 = fVar7;
		*(undefined4 *)&this->field_0x3c8 = 0;
		this->field14_0x54 = this->field14_0x54 & 0xe047U | 0x40;
		this->field433_0x300 = 0x10;
		this->field13_0x50 = this->field13_0x50 & 0xfffff7ff;
		FUN_001cde90(extraout_ECX);
		iVar4 = this->field22_0x60;
		this[1].parent.vec1.x = 0.0;
		if (iVar4 != 0) {
		local_30 = *(float *)(iVar4 + 0x50);
		local_28 = *(float *)(iVar4 + 0x58);
		local_2c = *(float *)(iVar4 + 0x54) + FLOAT_0038639c;
		local_24 = *(float *)(iVar4 + 0x5c);
		uVar5 = FUN_001c8870((int)this,&pVVar1->x,&local_30);
		if (((char)uVar5 != '\0') &&(uVar5 = FUN_001ced00((int)this,&pVVar1->x,&local_30,&local_20,'\0'), (char)uVar5 != '\0')) {
		pVVar1->x = local_20;
		(this->parent).vec2.y = local_1c;
		(this->parent).vec2.z = local_18;
		(this->parent).vec2.w = local_14;
		FUN_001cdd30(this);
		}
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubModule3B::Construct(float k, uint num) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Removing unreachable block (ram,0x001d56ea) undefined4 * __thiscall InstanceNodeKSubModule3B::Construct(InstanceNodeKSubModule3B *this,float k,int num){
		uint *puVar1;
		undefined *puVar2;
		int iVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fov;
		fVar5 = FLOAT_0038639c;
		fVar6 = 0.0;
		(this->parent).vtable = &InstanceNodeKSubModule3_VT_Abstract;
		(this->parent).field13_0x10 = 0;
		(this->parent).field25_0x40 = 1;
		(this->parent).fov = ENV_FLOAT_113_SCREEN_FOV;
		(this->parent).vec1.z = 0.0;
		(this->parent).vec1.y = 0.0;
		(this->parent).vec1.x = 0.0;
		(this->parent).vec1.w = fVar5;
		(this->parent).vec2.x = Vector4_0039ef70.x;
		(this->parent).vec2.y = Vector4_0039ef70.y;
		(this->parent).vec2.z = Vector4_0039ef70.z;
		(this->parent).vec2.w = fVar5;
		puVar1 = &this->field23_0x64;
		(this->parent).vtable = &InstanceNodeKSubModule3_VT_B;
		this->field21_0x5c = 0;
		this->field22_0x60 = 0;
		this->field29_0x70 = num;
		this->field47_0x88 = 0x4000;
		this->field48_0x8c = 0x4000;
		this->field57_0x98 = num;
		this->field58_0x9c = num;
		this->field59_0xa0 = num;
		this->field60_0xa4 = num;
		*puVar1 = *puVar1 & 0xfffffbff;
		FUN_001c79d0(puVar1);
		fov = ENV_FLOAT_113_SCREEN_FOV;
		puVar2 = &this->field_0xb4;
		this->fov = ENV_FLOAT_113_SCREEN_FOV;
		this->field106_0xd8 = 0x4000;
		this->field107_0xdc = 0x4000;
		(this->fovVector).x = fov;
		(this->fovVector).y = fov;
		(this->fovVector).z = fov;
		(this->fovVector).w = fov;
		*(uint *)puVar2 = *(uint *)puVar2 & 0xfffffbff;
		FUN_001c79d0((uint *)puVar2);
		puVar1 = &this->field129_0x104;
		iVar3 = (int)((FLOAT_003863a8 / 2PI) * fVar6);
		*(int *)&this->field_0x110 = iVar3;
		this->field156_0x128 = 0x4000;
		this->field157_0x12c = 0x4000;
		this->field166_0x138 = iVar3;
		this->field167_0x13c = iVar3;
		this->field168_0x140 = iVar3;
		this->field169_0x144 = iVar3;
		*puVar1 = *puVar1 & 0xfffffbff;
		FUN_001c79d0(puVar1);
		fov = FLOAT_0038807c;
		this->field188_0x160 = k;
		this->field200_0x178 = fov;
		this->field201_0x17c = fov;
		this->field207_0x188 = k;
		this->field208_0x18c = k;
		this->field209_0x190 = k;
		this->field210_0x194 = k;
		this->field212_0x19c = fVar6;
		this->field191_0x16c = fVar6;
		this->field190_0x168 = k;
		fVar4 = FLOAT_00395544;
		if (FLOAT_003a3cd8 < fVar6) {
		fVar4 = fVar6 / fVar6;
		}
		this->field189_0x164 = fVar4;
		this->field202_0x180 = fov;
		this->field211_0x198 = k;
		this->field212_0x19c = fVar6;
		this->field186_0x158 = fVar6;
		this->field187_0x15c = fVar6;
		fov = FLOAT_0039559c;
		*(uint *)&this->field_0x154 = (uint)(this->field_0x154 & 1);
		this->field254_0x1d8 = fVar5;
		this->field255_0x1dc = 0x8000;
		this->field256_0x1e0 = 0x8000;
		this->field439_0x310 = fVar5;
		this->field433_0x300 = 0x10;
		this->field437_0x308 = 0;
		this->field438_0x30c = 0;
		this->field_0x380 = 0;
		this->field434_0x304 = 0;
		this->field564_0x390 = 0;
		this->field574_0x3a0 = fov;
		this->field_0x394 = 0x3c;
		this->field569_0x398 = fVar6;
		this->field575_0x3a4 = fVar5;
		this->field576_0x3a8 = fVar5;
		this->field621_0x3d8 = iVar3;
		this->field_0x3dc = 0;
		this->field13_0x50 = this->field13_0x50 & 0xfffffffd;
		this->field14_0x54 = this->field14_0x54 & 0xfffdU | 0x4000;
		*(uint *)puVar2 = *(uint *)puVar2 | 1;
		(this->field285_0x230).x = Vector4_0039ef70.x;
		(this->field285_0x230).y = Vector4_0039ef70.y;
		(this->field285_0x230).z = Vector4_0039ef70.z;
		(this->field285_0x230).w = fVar5;
		(this->field286_0x240).x = Vector4_0039ef70.x;
		(this->field286_0x240).y = Vector4_0039ef70.y;
		(this->field286_0x240).z = Vector4_0039ef70.z;
		(this->field286_0x240).w = fVar5;
		(this->field287_0x250).x = Vector4_0039ef70.x;
		(this->field287_0x250).y = Vector4_0039ef70.y;
		(this->field287_0x250).z = Vector4_0039ef70.z;
		(this->field287_0x250).w = fVar5;
		(this->field288_0x260).x = Vector4_0039ef70.x;
		(this->field288_0x260).y = Vector4_0039ef70.y;
		(this->field288_0x260).z = Vector4_0039ef70.z;
		fov = FLOAT_003869d8;
		(this->field288_0x260).w = fVar5;
		this->field263_0x1f0 = fVar5;
		this->field264_0x1f4 = fov;
		this->field261_0x1e8 = fVar5;
		this->field262_0x1ec = fov;
		this->field267_0x200 = fVar5;
		this->field268_0x204 = fov;
		this->field265_0x1f8 = fVar5;
		this->field266_0x1fc = fov;
		this->field271_0x210 = fVar5;
		this->field272_0x214 = fov;
		this->field269_0x208 = fVar5;
		this->field270_0x20c = fov;
		this->field275_0x220 = fVar5;
		this->field276_0x224 = fov;
		this->field274_0x21c = fov;
		this->field273_0x218 = fVar5;
		(this->field229_0x1b0).x = Vector4_0039ef70.x;
		(this->field229_0x1b0).y = Vector4_0039ef70.y;
		(this->field229_0x1b0).z = Vector4_0039ef70.z;
		(this->field229_0x1b0).w = fVar5;
		this->field188_0x160 = k * FLOAT_003865d4 * FLOAT_00386ab4;
		this->field207_0x188 = k;
		this->field208_0x18c = k;
		this->field29_0x70 = num;
		FUN_001d2e10(this);
		return (undefined4 *)this;
		}
		
	*/
	return;
}

uint InstanceNodeKSubModule3B::FUN_001c81d0(uint param_1, InstanceNodeKSubA* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __thiscall InstanceNodeKSubModule3B::FUN_001c81d0(InstanceNodeKSubModule3B *this,undefined4 param_1,InstanceNodeKSubA *param_2){
		Vector4 *pVVar1;
		InstanceNodeKSubAbstract_VTable *pIVar2;
		int iVar3;
		float fVar4;
		uint uVar5;
		float local_64;
		Vector4 local_60;
		Matrix4 local_50;
		pIVar2 = (param_2->parent).parent.vtable;
		uVar5 = (uint)pIVar2 >> 0x12;
		if ((uVar5 & 1) == 0) {
		return ((uint)pIVar2 >> 0x1a) << 8;
		}
		InstanceNodeKSubA::FUN_00139650(param_2,&this->field229_0x1b0,true);
		if (((uint)(param_2->parent).parent.vtable >> 0x12 & 1) != 0) {
		InstanceNodeKSubA::FUN_00139480(param_2,&(this->parent).vec1.x);
		pVVar1 = &(this->parent).vec2;
		InstanceNodeKSubA::FUN_00139650(param_2,pVVar1,true);
		iVar3 = this->field22_0x60;
		local_60.z = *(float *)(iVar3 + 0x38) - (this->parent).vec2.z;
		local_60.y = *(float *)(iVar3 + 0x34) - (this->parent).vec2.y;
		local_60.x = *(float *)(iVar3 + 0x30) - pVVar1->x;
		local_60.w = FLOAT_0038639c;
		FUN_000f0c90(&local_64,&local_60.x);
		fVar4 = local_64;
		Matrix4::Construct(&local_50,(float)-(int)local_64);
		InstanceTransform::FUN_000d3ed0((InstanceTransform *)&local_50,&local_60);
		FUN_000f0d00(&local_64,(int)&local_60);
		*(uint *)&this->field_0x78 = ((int)local_64 - 0x8000U & 0xffff) - 0x8000;
		uVar5 = ((int)fVar4 - 0x8000U & 0xffff) - 0x8000;
		*(uint *)&this->field_0x118 = uVar5;
		return uVar5 & 0xffffff00 | 1;
		}
		return uVar5 & 0xffffff00;
		}
		
	*/
	return 0;
}

void InstanceNodeKSubModule3B::FUN_001cdf60(uint param_1, float* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __thiscall InstanceNodeKSubModule3B::FUN_001cdf60(InstanceNodeKSubModule3B *this,undefined4 param_1,float *param_2){
		int iVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float local_30;
		float local_2c;
		float local_28;
		float local_24;
		Vector4 local_20;
		fVar5 = FLOAT_00395590;
		fVar6 = FLOAT_003865d0;
		if ((this->field13_0x50 & 0x100) != 0) {
		fVar3 = *(float *)(this->field22_0x60 + 0x60);
		fVar2 = *(float *)(this->field22_0x60 + 0x68);
		fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
		fVar3 = FLOAT_003955b8;
		if (FLOAT_003865d0 < fVar2) {
		fVar3 = FLOAT_00395574;
		}
		fVar7 = 2PI * FLOAT_003863a0;
		fVar4 = FLOAT_003863a8 / 2PI;
		*(int *)&this->field_0x2f0 =*(int *)&this->field_0x2f0 +(int)((float)(int)((float)_DAT_003a3d08 * this->field569_0x398) * fVar7 *(float)(int)(fVar4 * ((0.0 - *(float *)&this->field_0x3c0 * fVar3) -(float)*(int *)&this->field_0x2f0 * fVar7)));
		if (fVar6 < fVar2) {
		fVar5 = FLOAT_0039558c;
		}
		iVar1 = *(int *)&this->field_0x2f4 +(int)((float)(int)((float)_DAT_003a3d08 * this->field569_0x398) * fVar7 *(float)(int)(fVar4 * (*(float *)&this->field_0x3c4 * fVar5 -(float)*(int *)&this->field_0x2f4 * fVar7)));
		*(int *)&this->field_0x2f4 = iVar1;
		Vector4::FromRotation(&local_20,(int)(fVar4 * 0.0),iVar1,(int)(fVar4 * 0.0));
		FUN_000dae60(&local_30,&local_20.x,param_2);
		param_2[3] = local_24;
		param_2[2] = local_28;
		param_2[1] = local_2c;
		fVar6 = FLOAT_0038a950;
		fVar5 = local_24 * local_24 + local_28 * local_28 + local_2c * local_2c + local_30 * local_30;
		*param_2 = local_30;
		if (fVar5 <= fVar6) {
		fVar6 = 0.0;
		}
		else {
		fVar6 = FLOAT_0038639c / SQRT(fVar5);
		}
		*param_2 = *param_2 * fVar6;
		param_2[1] = fVar6 * param_2[1];
		param_2[3] = fVar6 * param_2[3];
		fVar5 = (FLOAT_003863a8 / 2PI) * FLOAT_00386394;
		param_2[2] = param_2[2] * fVar6;
		iVar1 = (int)fVar5;
		Vector4::FromRotation(&local_20,*(int *)&this->field_0x2f0,iVar1,iVar1);
		FUN_000dae60(&local_30,param_2,&local_20.x);
		param_2[3] = local_24;
		param_2[2] = local_28;
		param_2[1] = local_2c;
		fVar6 = FLOAT_0038a950;
		fVar5 = local_24 * local_24 + local_28 * local_28 + local_2c * local_2c + local_30 * local_30;
		*param_2 = local_30;
		if (fVar5 <= fVar6) {
		fVar6 = 0.0;
		}
		else {
		fVar6 = FLOAT_0038639c / SQRT(fVar5);
		}
		*param_2 = fVar6 * *param_2;
		param_2[1] = fVar6 * param_2[1];
		param_2[2] = param_2[2] * fVar6;
		param_2[3] = fVar6 * param_2[3];
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubModule3B::FUN_001d3320(int param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubModule3B::FUN_001d3320(InstanceNodeKSubModule3B *this,int param_1,int param_2){
		Vector4 *pVVar1;
		undefined *this_00;
		bool bVar2;
		ushort uVar3;
		uint uVar4;
		int iVar5;
		byte bVar6;
		float fVar7;
		float fVar8;
		float *pfVar9;
		float local_b4;
		float local_b0;
		float local_ac;
		float local_a8;
		float local_a4;
		Vector4 local_a0;
		float local_84;
		float local_80;
		float local_7c;
		float local_78;
		float local_74;
		uint local_64;
		float local_60 [4];
		Matrix4 local_50;
		if (this->field_0x3dc == '\0') {
		this->field569_0x398 = (float)*(int *)(param_1 + 8) * TimePerTick1;
		if ((this->field13_0x50 & 0x5000) == 0) {
		FUN_001c83b0((int)this);
		this->field22_0x60 = param_2;
		this->field_0x1e4 = 0;
		local_b0 = 0.0;
		*(undefined4 *)&this->field_0x7c = 0;
		this->field23_0x64 = this->field23_0x64 & 0xffffffef | 8;
		*(undefined4 *)&this->field_0xcc = 0;
		*(uint *)&this->field_0xb4 = *(uint *)&this->field_0xb4 & 0xffffffef | 8;
		*(undefined4 *)&this->field_0x11c = 0;
		this->field129_0x104 = this->field129_0x104 & 0xffffffef | 8;
		this_00 = &this->field_0x154;
		this->field191_0x16c = 0.0;
		*(uint *)this_00 = *(uint *)&this->field_0x154 & 0xffffffef | 8;
		uVar3 = *(ushort *)&this->field_0x58;
		if (((char)uVar3 < '\0') && ((uVar3 & 0x40) != 0)) {
		*(ushort *)&this->field_0x58 = uVar3 & 0xffbf;
		}
		uVar3 = *(ushort *)&this->field_0x58;
		if ((((uVar3 & 0x200) != 0) || ((uVar3 & 1) != 0)) && ((uVar3 & 2) == 0)) {
		*(undefined4 *)&this->field_0x1d0 = *(undefined4 *)(param_1 + 4);
		*(float *)&this->field_0x1c0 = (this->parent).vec2.x;
		*(float *)&this->field_0x1c4 = (this->parent).vec2.y;
		*(float *)&this->field_0x1c8 = (this->parent).vec2.z;
		*(float *)&this->field_0x1cc = (this->parent).vec2.w;
		*(ushort *)&this->field_0x58 = *(ushort *)&this->field_0x58 & 0xfbff | 2;
		}
		FUN_001cc1a0((int)this,&local_80);
		if (((char)((uint)(ushort)this->field14_0x54 >> 8) < '\0') ||(bVar2 = false, *(char *)&this->field13_0x50 < '\0')) {
		bVar2 = true;
		}
		bVar6 = 0;
		local_a4 = FLOAT_0038639c;
		local_ac = local_b0;
		local_a8 = local_b0;
		if ((this->field14_0x54 & 0x20U) != 0) {
		iVar5 = this->field22_0x60;
		local_a0.x = *(float *)(iVar5 + 0x50);
		local_a0.z = *(float *)(iVar5 + 0x58);
		local_a0.w = *(float *)(iVar5 + 0x5c);
		pVVar1 = &(this->parent).vec2;
		local_a0.y = *(float *)(iVar5 + 0x54) + FLOAT_0038639c;
		uVar4 = FUN_001c8870((int)this,&pVVar1->x,&local_a0.x);
		if (((char)uVar4 != '\0') &&(uVar4 = FUN_001ced00((int)this,&pVVar1->x,(float *)(this->field22_0x60 + 0x30),&local_b0,'\x01'), (char)uVar4 != '\0')) {
		*(byte *)&this->field14_0x54 = *(byte *)&this->field14_0x54 & 199;
		uVar3 = *(ushort *)&this->field_0x58;
		bVar6 = 1;
		(this->parent).field25_0x40 = 0;
		*(ushort *)&this->field_0x58 = uVar3 & 0xff7f | 0x40;
		}
		}
		if ((((*(byte *)((int)&this->field14_0x54 + 1) & 0x40) == 0) || (!bVar2)) ||((this->field_0x58 & 0x40) != 0)) {
		FUN_001cd7f0((int)this,param_1);
		}
		else {
		uVar4 = FUN_001cd5c0((int)this,&local_80,(int *)&local_84,(int *)&local_64,&local_b4,'\x01');
		if ((char)uVar4 != '\0') {
		fVar7 = (float)*(int *)(param_1 + 8) * TimePerTick1;
		FUN_001c7a60(&this->field23_0x64,fVar7,(uint)local_84,'\x01');
		FUN_001c7a60(&this->field129_0x104,fVar7,local_64,'\0');
		if ((*(uint *)this_00 & 8) != 0) {
		this->field191_0x16c = fVar7 * local_b4;
		if ((char)*(uint *)this_00 < '\0') {
		local_84 = this->field209_0x190;
		fVar7 = this->field210_0x194;
		}
		else {
		local_84 = this->field207_0x188;
		fVar7 = this->field208_0x18c;
		}
		FUN_001c7bd0(this_00,local_84,fVar7);
		*(uint *)this_00 = *(uint *)this_00 | 0x10;
		}
		}
		this->field23_0x64 =this->field23_0x64 ^((uint)(byte)(1 - ((uVar4 & 3) != 0)) << 3 ^ this->field23_0x64) & 8;
		this->field129_0x104 =this->field129_0x104 ^((uint)(byte)(1 - ((uVar4 & 0xc) != 0)) << 3 ^ this->field129_0x104) & 8;
		*(uint *)this_00 =*(uint *)this_00 ^((uint)(byte)(1 - ((uVar4 & 0x70) != 0)) << 3 ^ *(uint *)this_00) & 8;
		uVar4 = FUN_001cd7f0((int)this,param_1);
		if ((char)uVar4 != '\0') {
		FUN_001cd6c0((int)this,param_1,&local_80);
		FUN_001cc200((int)this,&local_80,(undefined (*) [16])local_60,'\0');
		uVar4 = FUN_001ce4a0((int)this,(undefined (*) [16])local_60,&(this->parent).vec2.x,(undefined (*) [16])&local_b0);
		local_a0.x = local_b0;
		local_a0.y = local_ac;
		local_a0.z = local_a8;
		local_a0.w = local_a4;
		uVar3 = FUN_001ce8d0((int)this,&local_b0,&local_80,&local_a0.x);
		bVar6 = bVar6 | (byte)uVar4 | (byte)uVar3;
		local_b0 = local_a0.x;
		local_ac = local_a0.y;
		local_a8 = local_a0.z;
		local_a4 = local_a0.w;
		FUN_001cf520((int)this,&local_b0,&local_80,&local_b0,param_1);
		}
		}
		if (((*(byte *)&this->field23_0x64 & 0x10) != 0) || (*(int *)&this->field_0x84 == 0)) {
		*(undefined4 *)&this->field_0x84 = *(undefined4 *)(param_1 + 4);
		}
		*(undefined4 *)&this->field_0x68 = 0;
		this->field28_0x6c = 0.0;
		if (((this->field_0xb4 & 0x10) != 0) || (*(int *)&this->field_0xd4 == 0)) {
		*(undefined4 *)&this->field_0xd4 = *(undefined4 *)(param_1 + 4);
		}
		*(undefined4 *)&this->field_0xb8 = 0;
		*(undefined4 *)&this->field_0xbc = 0;
		if (((*(byte *)&this->field129_0x104 & 0x10) != 0) || (*(int *)&this->field_0x124 == 0)) {
		*(undefined4 *)&this->field_0x124 = *(undefined4 *)(param_1 + 4);
		}
		*(undefined4 *)&this->field_0x108 = 0;
		this->field134_0x10c = 0.0;
		if (((*this_00 & 0x10) != 0) || (*(int *)&this->field_0x174 == 0)) {
		*(undefined4 *)&this->field_0x174 = *(undefined4 *)(param_1 + 4);
		}
		this->field186_0x158 = 0.0;
		this->field187_0x15c = 0.0;
		if (bVar6 == 0) {
		FUN_001cc200((int)this,&local_80,(undefined (*) [16])local_60,'\x01');
		bVar6 = 0;
		pfVar9 = local_60;
		}
		else {
		iVar5 = this->field22_0x60;
		local_a0.z = *(float *)(iVar5 + 0x38) - local_a8;
		local_a0.y = *(float *)(iVar5 + 0x34) - local_ac;
		local_a0.x = *(float *)(iVar5 + 0x30) - local_b0;
		local_a0.w = FLOAT_0038639c;
		FUN_000f0c90(&local_b4,&local_a0.x);
		fVar7 = local_b4;
		Matrix4::Construct(&local_50,(float)-(int)local_b4);
		InstanceTransform::FUN_000d3ed0((InstanceTransform *)&local_50,&local_a0);
		FUN_000f0d00(&local_b4,(int)&local_a0);
		fVar8 = FLOAT_003863a8 / 2PI;
		*(uint *)&this->field_0x78 = ((int)local_b4 - 0x8000U & 0xffff) - 0x8000;
		*(uint *)&this->field_0x118 = ((int)fVar7 - 0x8000U & 0xffff) - 0x8000;
		iVar5 = (int)(fVar8 * 0.0);
		*(int *)&this->field_0x7c = iVar5;
		*(int *)&this->field_0x11c = iVar5;
		pfVar9 = &local_b0;
		this->field191_0x16c = 0.0;
		}
		FUN_001cc3b0(this,&local_80,pfVar9,bVar6);
		(this->parent).fov = *(float *)&this->field_0xc8;
		this->field_0x58 = this->field_0x58 | 0x80;
		this->field13_0x50 = this->field13_0x50 & 0xffff7fff;
		}
		else {
		iVar5 = this->field22_0x60;
		if (iVar5 == 0) {
		local_80 = Vector4_0039ef70.x;
		local_7c = Vector4_0039ef70.y;
		local_78 = Vector4_0039ef70.z;
		local_74 = FLOAT_0038639c;
		}
		else {
		local_80 = *(float *)(iVar5 + 0x30);
		local_7c = *(float *)(iVar5 + 0x34);
		local_78 = *(float *)(iVar5 + 0x38);
		local_74 = *(float *)(iVar5 + 0x3c);
		}
		FUN_001cc3b0(this,&local_80,local_60,'\0');
		}
		FUN_001c8a50((int)this);
		}
		this[1].parent.field13_0x10 = (this->parent).vec2.x;
		this[1].parent.fov = (this->parent).vec2.y;
		*(float *)&this[1].parent.field_0x18 = (this->parent).vec2.z;
		*(float *)&this[1].parent.field_0x1c = (this->parent).vec2.w;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubModule3B::Dispose_8(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeKSubModule3B * __thiscall InstanceNodeKSubModule3B::Dispose(InstanceNodeKSubModule3B *this,byte param_1){
		Dispose(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void InstanceNodeKSubModule3B::FUN_001d3260(uint param_1, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubModule3B::FUN_001d3260(InstanceNodeKSubModule3B *this,int param_1,int param_2){
		void *ptr;
		UNV007 *pUVar1;
		ptr = (void *)this->field564_0x390;
		this->field21_0x5c = param_1;
		this->field22_0x60 = param_2;
		if (ptr != (void *)0x0) {
		FUN_001e2ba0((int)ptr);
		VirtualPool::FreeMemory(ptr);
		}
		this->field564_0x390 = 0;
		pUVar1 = (UNV007 *)VirtualPool::AllocateMemory(0x50);
		if (pUVar1 != (UNV007 *)0x0) {
		pUVar1 = UNV007::Construct(pUVar1,param_1,0x20);
		this->field564_0x390 = (int)pUVar1;
		FUN_001d2e10(this);
		return;
		}
		this->field564_0x390 = 0;
		FUN_001d2e10(this);
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubModule3B::FUN_001d70b0(int param_1, int param_2, float param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubModule3B::FUN_001d70b0(InstanceNodeKSubModule3B *this,int param_1,int param_2,float param_3){
		uint uVar1;
		uint *puVar2;
		byte bVar3;
		char cVar4;
		int iVar5;
		int extraout_ECX;
		int *piVar6;
		if ((param_1 != 0) && ((*(byte *)(*(int *)(param_1 + 0x170) + 4) >> 2 & 1) != 0)) {
		this->field433_0x300 = 0x10;
		this->field13_0x50 = this->field13_0x50 & 0xfffff7ff;
		FUN_001cde90((int)this);
		}
		uVar1 = this->field13_0x50;
		if ((uVar1 & 0x800) == 0) {
		if (param_1 != 0) {
		this->field13_0x50 =((**(uint **)(param_1 + 0x170) >> 0xb & 0xff) << 5 ^ uVar1) & 0x20 ^ uVar1;
		cVar4 = FUN_001c8300((int)this);
		if (cVar4 != '\0') {
		FUN_001cde90(extraout_ECX);
		}
		}
		if (param_1 != *(int *)&this->field_0x2fc) {
		FUN_001cde90((int)this);
		if (param_1 == 0) {
		FUN_001ce2c0((int)this,*(float *)&this->field_0x2fc,'\x01');
		goto LAB_001d720a;
		}
		puVar2 = *(uint **)(param_1 + 0x170);
		if (((~(byte)(*puVar2 >> 5) & 1) == 0) || ((char)(this->field13_0x50 >> 8) < '\0')) {
		iVar5 = 1;
		}
		else {
		iVar5 = 0;
		}
		*(ushort *)&this->field_0x58 =*(ushort *)&this->field_0x58 ^ (byte)((byte)(iVar5 << 6) ^ this->field_0x58) & 0x40;
		if (*(int *)&this->field_0x2fc != 0) {
		if (((*(byte *)(*(int *)(*(int *)&this->field_0x2fc + 0x170) + 3) & 1) == 0) ||((*(byte *)((int)puVar2 + 3) & 1) == 0)) {
		iVar5 = 0;
		}
		else {
		iVar5 = 1;
		}
		bVar3 = (byte)*(ushort *)&this->field_0x58;
		*(ushort *)&this->field_0x58 =(byte)(((byte)(iVar5 << 6) | bVar3) ^ bVar3) & 0x40 ^ *(ushort *)&this->field_0x58;
		}
		this->field_0x58 = this->field_0x58 & 0x7f;
		piVar6 = (int *)puVar2[3];
		if (piVar6 != (int *)0x0) {
		(**(code **)(*piVar6 + 0xc))(&(this->parent).vec2,this->field22_0x60 + 0x30);
		iVar5 = (**(code **)(*piVar6 + 0x10))();
		if (iVar5 == 0x1c0e) {
		this->field_0x3dc = 1;
		}
		}
		}
		if (param_1 == 0) goto LAB_001d720a;
		piVar6 = *(int **)(param_1 + 0x170);
		}
		else {
		piVar6 = &this->field433_0x300;
		}
		FUN_001d6300((int)this,(uint *)piVar6,param_2,param_3);
		LAB_001d720a:uVar1 = this->field13_0x50;
		*(int *)&this->field_0x2fc = param_1;
		this->field13_0x50 = (uVar1 * 2 ^ uVar1) & 0x10 ^ uVar1;
		return;
		}
		
	*/
	return;
}

uint InstanceNodeKSubModule3B::FUN_001d96c0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	uint __fastcall InstanceNodeKSubModule3B::FUN_001d96c0(InstanceNodeKSubModule3B *this){
		return this->field13_0x50 >> 0xc & 1;
		}
		
	*/
	return 0;
}

