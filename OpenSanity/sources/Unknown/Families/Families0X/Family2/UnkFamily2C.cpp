#include "headers/Unknown/Families/Families0X/Family2/UnkFamily2C.h"

void UnkFamily2C::FUN_0004a830() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __fastcall UnkFamily2C::FUN_0004a830(UnkFamily2C *this){
		InstanceNodeAbstract **ppIVar1;
		float fVar2;
		float fVar3;
		InstanceNodeAbstract *pIVar4;
		InstanceTransform *pIVar5;
		InstanceContext *this_00;
		uint *puVar6;
		undefined4 uVar7;
		byte bVar8;
		float fVar9;
		InstanceContext *local_f4;
		Vector4 local_f0;
		InstanceContext *local_e0;
		float local_dc;
		float local_d8;
		uint local_d4;
		float local_d0;
		float local_cc;
		float local_c8;
		float local_c0;
		float local_bc;
		float local_b8;
		float local_b4;
		float local_b0;
		float local_ac;
		float local_a8;
		float local_a4;
		float local_a0;
		float local_9c;
		float local_98;
		float local_94;
		float local_90;
		float local_8c;
		float local_88;
		float local_84;
		float local_80;
		float local_7c;
		float local_78;
		float local_74;
		float local_70;
		float local_6c;
		float local_68;
		int local_54;
		undefined local_50 [76];
		undefined *pIVar12;
		int notthis;
		pIVar4 = (this->parent).node;
		pIVar12 = (undefined *)pIVar4[0xc].ctx;
		local_e0 = pIVar4->ctx;
		notthis = **(int **)(pIVar12 + 0x10);
		local_d4 = pIVar4[0xc].time;
		local_54 = *(int *)&pIVar4[0xc].field2_0x8;
		if (PTR_00496350 == (InstanceContextRefCounter *)0x0) {
		local_f4 = (InstanceContext *)PTR_00496350;
		}
		else {
		local_f4 = PTR_00496350->ctx;
		}
		puVar6 = InstanceContext::FUN_000f7220(local_e0);
		pIVar5 = (local_f4->parent).transform;
		local_d8 = (float)puVar6[2] * TimePerTick1;
		if ((*(byte *)((Vector4 *)(&pIVar5->matrix + 1) + 2) & 4) != 0) {
		fVar9 = (pIVar5->matrix).m44;
		fVar2 = (pIVar5->matrix).m43;
		fVar3 = (pIVar5->matrix).m42;
		((Vector4 *)(&pIVar5->matrix + 1))->x = (pIVar5->matrix).m41;
		((Vector4 *)(&pIVar5->matrix + 1))->y = fVar3;
		((Vector4 *)(&pIVar5->matrix + 1))->z = fVar2;
		((Vector4 *)(&pIVar5->matrix + 1))->w = fVar9;
		*(uint *)((Vector4 *)(&pIVar5->matrix + 1) + 2) =(uint)((Vector4 *)(&pIVar5->matrix + 1))[2].x & 0xfffffffa;
		}
		local_a0 = ((Vector4 *)(&pIVar5->matrix + 1))->x;
		local_9c = ((Vector4 *)(&pIVar5->matrix + 1))->y;
		local_98 = ((Vector4 *)(&pIVar5->matrix + 1))->z;
		local_94 = ((Vector4 *)(&pIVar5->matrix + 1))->w;
		pIVar5 = (((this->parent).node)->ctx->parent).transform;
		if ((*(byte *)&pIVar5->field3_0x60 & 4) != 0) {
		fVar9 = (pIVar5->matrix).m44;
		fVar2 = (pIVar5->matrix).m43;
		fVar3 = (pIVar5->matrix).m42;
		(pIVar5->position).x = (pIVar5->matrix).m41;
		(pIVar5->position).y = fVar3;
		(pIVar5->position).z = fVar2;
		(pIVar5->position).w = fVar9;
		pIVar5->field3_0x60 = (float)((uint)pIVar5->field3_0x60 & 0xfffffffa);
		}
		local_90 = (pIVar5->position).x;
		local_8c = (pIVar5->position).y;
		local_88 = (pIVar5->position).z;
		local_84 = (pIVar5->position).w;
		local_dc = FUN_000f1ce0(notthis,&local_a0,&local_70);
		fVar9 = FUN_000f1ce0(notthis,&local_90,&local_d0);
		Math::ClampFloat(local_dc,0.0,1.0);
		fVar9 = Math::ClampFloat(fVar9,0.0,1.0);
		FUN_000efff0(notthis,&local_c0,fVar9);
		FUN_000e8990(local_50,&local_c0);
		*(float *)(pIVar12 + 0x20) = local_c0;
		*(float *)(pIVar12 + 0x24) = local_bc;
		*(float *)(pIVar12 + 0x28) = local_b8;
		*(float *)(pIVar12 + 0x2c) = local_b4;
		*(float *)(pIVar12 + 0x30) = fVar9;
		local_bc = local_bc - (float)this->field15_0x2c;
		local_f0.w = local_b4;
		fVar9 = local_bc * local_bc + local_b8 * local_b8 + local_c0 * local_c0;
		bVar8 = *(byte *)(local_d4 + 0x93) & 1;
		if (fVar9 <= _DAT_0039d860) {
		local_f0.z = 0.0;
		}
		else {
		local_f0.z = FLOAT_0038639c / SQRT(fVar9);
		local_dc = fVar9;
		}
		local_f0.x = local_f0.z * local_c0;
		local_f0.y = local_bc * local_f0.z;
		local_f0.z = local_b8 * local_f0.z;
		local_b0 = local_f0.x * FLOAT_0038abfc + local_d0;
		local_a4 = FLOAT_0038639c;
		if (bVar8 == 0) {
		fVar9 = this->field10_0x24 * local_d8 * FLOAT_00386660;
		}
		else {
		fVar9 = this->field10_0x24 * local_d8;
		}
		local_a8 = local_c8 + local_f0.z * FLOAT_0038abfc;
		local_ac = local_cc + local_f0.y * FLOAT_0038abfc;
		FUN_00171380((int)local_e0,&local_b0,fVar9,0.0,0x42b40000,'\x01');
		pIVar5 = (local_e0->parent).transform;
		InstanceTransform::FillMatrix(pIVar5);
		local_80 = (pIVar5->matrix).m21;
		local_7c = (pIVar5->matrix).m22;
		local_78 = (pIVar5->matrix).m23;
		local_74 = (pIVar5->matrix).m24;
		FUN_00164d10(local_d4,&local_80,local_d8);
		pIVar5 = (local_e0->parent).transform;
		InstanceTransform::FillMatrix(pIVar5);
		local_f0.w = (pIVar5->matrix).m34;
		local_dc = (local_c8 - local_68) * (local_c8 - local_68) +(local_cc - local_6c) * (local_cc - local_6c) +(local_d0 - local_70) * (local_d0 - local_70);
		local_f0.z = (SQRT(local_dc) - (float)this->field7_0x18) * this->field9_0x20 * local_d8 +*(float *)(local_54 + 0xc);
		local_f0.x = (pIVar5->matrix).m31 * local_f0.z;
		local_f0.y = (pIVar5->matrix).m32 * local_f0.z;
		local_f0.z = (pIVar5->matrix).m33 * local_f0.z;
		*(undefined4 *)(local_54 + 0x30) = *(undefined4 *)(local_54 + 0x20);
		*(undefined4 *)(local_54 + 0x34) = *(undefined4 *)(local_54 + 0x24);
		*(undefined4 *)(local_54 + 0x38) = *(undefined4 *)(local_54 + 0x28);
		*(undefined4 *)(local_54 + 0x3c) = *(undefined4 *)(local_54 + 0x2c);
		*(float *)(local_54 + 0x20) = local_f0.x;
		if (bVar8 == 0) {
		*(float *)(local_54 + 0x28) = local_f0.z;
		}
		else {
		*(float *)(local_54 + 0x24) = local_f0.y;
		*(float *)(local_54 + 0x28) = local_f0.z;
		*(float *)(local_54 + 0x2c) = local_f0.w;
		}
		local_f0.x = local_f0.x * local_d8;
		local_f0.y = local_f0.y * local_d8;
		local_f0.z = local_f0.z * local_d8;
		if (*(char *)(local_d4 + 0x8c) != '\0') {
		FUN_0015e780(local_d4,&local_f0.x);
		}
		this_00 = local_e0;
		uVar7 = InstanceTransform::thunk_FUN_00026880((local_e0->parent).transform,&local_f0);
		if ((char)uVar7 != '\0') {
		InstanceContext::RegisterCtxPtrToList(this_00);
		}
		ppIVar1 = &(this->parent).node[5].field5_0x10;
		*ppIVar1 = (InstanceNodeAbstract *)((uint)*ppIVar1 | 0x10);
		return;
		}
		
	*/
	return;
}

void UnkFamily2C::Construct(uint ctx, byte param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall UnkFamily2C::Construct(UnkFamily2C *this,InstanceNodeAbstract *ctx,undefined param_2){
		float fVar1;
		(this->parent).field_0x4 = param_2;
		(this->parent).node = ctx;
		(this->parent).vtable = (UnkFamily2_VTable *)&UnkFamily2_VT_C;
		this->field5_0x10 = Vector4_0039ef70.x;
		this->field6_0x14 = Vector4_0039ef70.y;
		this->field7_0x18 = Vector4_0039ef70.z;
		fVar1 = FLOAT_0038639c;
		this->field8_0x1c = FLOAT_0038639c;
		this->field9_0x20 = fVar1;
		this->field10_0x24 = fVar1;
		this->field15_0x2c = 0;
		return;
		}
		
	*/
	return;
}

void UnkFamily2C::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily2C::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily2C::EmptyFunction_3() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily2C::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily2C::EmptyFunction_4() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily2C::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily2C::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily2Base * __thiscall UnkFamily2C::Dispose(UnkFamily2C *this,byte param_1){
		(this->parent).vtable = (UnkFamily2_VTable *)&UnkFamily2_VT_Base;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

