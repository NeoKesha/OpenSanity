#include "headers/Known/AgentLab/ActionFactory/Actions/ActionCreateDamage.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionCreateDamage::Execute(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionCreateDamage::Execute(ActionCreateDamage *this,InstanceContext *ctx){
		InstanceContext *pIVar1;
		InstanceTransform *pIVar2;
		InstanceContext *pIVar3;
		void *pvVar4;
		byte bVar5;
		ushort uVar6;
		int iVar7;
		uint uVar8;
		InstanceNodeCharacter *pIVar9;
		uint uVar10;
		InstanceContext *ctx_00;
		undefined *puVar11;
		ChunkData *this_00;
		float fVar12;
		float fVar13;
		float fVar14;
		float fVar15;
		char cVar16;
		uint local_174;
		float local_170;
		float local_16c;
		float local_168;
		float local_164;
		void *local_160;
		ChunkData *local_15c;
		float local_158;
		InstanceContext **local_154;
		undefined2 local_150;
		undefined2 local_14e;
		float local_14c;
		uint local_148;
		undefined4 local_144;
		undefined4 local_140;
		undefined4 local_13c;
		undefined4 local_138;
		undefined4 local_134;
		float local_130;
		float local_12c;
		float local_128;
		float local_124;
		uint local_120;
		undefined local_11c;
		InstanceContext *local_110 [67];
		local_130 = Vector4_0039ef70.x;
		local_12c = Vector4_0039ef70.y;
		iVar7 = (ctx->parent).field14_0x20.field27_0x78;
		local_128 = Vector4_0039ef70.z;
		local_120 = 0;
		local_11c = 0;
		local_124 = Vector4_0039ef70.w;
		local_174 = 0;
		if (iVar7 == 0) {
		local_160 = (void *)(ctx->parent).field14_0x20.matrix2.m41;
		}
		else {
		local_160 = (void *)FUN_00017ba8(iVar7);
		}
		pIVar1 = (ctx->parent).ctx;
		this_00 = (pIVar1->parent).chunkData;
		local_15c = this_00;
		local_158 = FUN_00180490(&this->unlabelled52,local_160);
		puVar11 = (undefined *)0x5f000;
		if ((this->unlabelled32 & 8U) == 0) {
		if ((this->unlabelled32 & 0x10U) != 0) {
		puVar11 = (undefined *)0x1000;
		}
		}
		else {
		puVar11 = &LAB_0005e000;
		}
		local_154 = local_110;
		local_148 = local_148 & 0xfffffffe | 2;
		local_150 = 0;
		local_14e = 0x40;
		local_14c = FLOAT_00386648;
		local_144 = 0;
		local_140 = 1;
		local_13c = 0;
		local_134 = 0;
		local_138 = 0;
		FUN_00137280((int)&local_154,(int)pIVar1);
		bVar5 = (byte)((uint)this->unlabelled32 >> 5);
		if (bVar5 == 0xff) {
		pIVar2 = (pIVar1->parent).transform;
		if ((*(byte *)&pIVar2->field3_0x60 & 4) != 0) {
		fVar15 = (pIVar2->matrix).m44;
		fVar12 = (pIVar2->matrix).m43;
		fVar13 = (pIVar2->matrix).m42;
		(pIVar2->position).x = (pIVar2->matrix).m41;
		(pIVar2->position).y = fVar13;
		(pIVar2->position).z = fVar12;
		(pIVar2->position).w = fVar15;
		pIVar2->field3_0x60 = (float)((uint)pIVar2->field3_0x60 & 0xfffffffa);
		}
		local_170 = (pIVar2->position).x;
		local_16c = (pIVar2->position).y;
		local_168 = (pIVar2->position).z;
		local_164 = (pIVar2->position).w;
		if ((*(byte *)&this->unlabelled32 & 4) != 0) {
		pIVar2 = (pIVar1->parent).transform;
		InstanceTransform::FillMatrix(pIVar2);
		local_170 = (pIVar2->matrix).m31 * (float)this->unlabelled24 +(pIVar2->matrix).m21 * (float)this->unlabelled20 +(float)this->unlabelled16 * (pIVar2->matrix).m11 + local_170;
		local_16c = local_16c +(pIVar2->matrix).m32 * (float)this->unlabelled24 +(pIVar2->matrix).m22 * (float)this->unlabelled20 +(pIVar2->matrix).m12 * (float)this->unlabelled16;
		local_168 = local_168 +(pIVar2->matrix).m33 * (float)this->unlabelled24 +(pIVar2->matrix).m23 * (float)this->unlabelled20 +(pIVar2->matrix).m13 * (float)this->unlabelled16;
		this_00 = local_15c;
		}
		}
		else {
		FUN_001725b0((int)pIVar1,bVar5,&local_170,(float *)0x0);
		}
		uVar6 = *(ushort *)&this->unlabelled48;
		if (((byte)uVar6 & 0xf0) != 0xf0) {
		local_174 = thunk_FUN_000677e0((int)pIVar1,(uVar6 & 0xf0) >> 4,(uint)puVar11,&local_154);
		local_174 = local_174 & 0xffff;
		goto LAB_00046eea;
		}
		uVar6 = uVar6 & 0xf;
		if (uVar6 == 1) {
		cVar16 = '\x01';
		LAB_00046ec1:local_164 = local_158;
		local_174 = FUN_0013d440((int)this_00,&local_170,(uint)puVar11,&local_154,cVar16);
		}
		else {
		if (uVar6 == 2) {
		cVar16 = '\0';
		goto LAB_00046ec1;
		}
		if (uVar6 != 3) goto LAB_00046eea;
		local_15c = (ChunkData *)FUN_00180490(&this->unlabelled56,local_160);
		local_164 = local_158;
		local_174 = FUN_0013d480((int)this_00,&local_170,(float)local_15c,(uint)puVar11,&local_154);
		local_164 = FLOAT_0038639c;
		}
		local_174 = local_174 & 0xffff;
		LAB_00046eea:pvVar4 = local_160;
		iVar7 = FUN_001804d0(&this->unlabelled40,local_160);
		local_11c = (undefined)iVar7;
		local_120 = this->unlabelled36;
		if ((this->unlabelled32 & 2U) != 0) {
		local_120 = local_120 | 0x400;
		}
		if ((this->unlabelled32 & 1U) != 0) {
		local_124 = FUN_00180490(&this->unlabelled44,pvVar4);
		}
		if ((this->unlabelled32 & 0x2000U) == 0) {
		uVar10 = 0;
		if (local_174 != 0) {
		uVar8 = 0;
		do {
		pIVar9 = InstanceContext::GetCharacterNode(local_110[uVar8]);
		if (pIVar9 != (InstanceNodeCharacter *)0x0) {
		(*((pIVar9->field1_0x18->parent).parent.vtable)->Method8)((NodeRelated2Abstract *)pIVar9->field1_0x18,&local_130,pIVar1,'\x01');
		}
		uVar10 = uVar10 + 1;
		uVar8 = uVar10 & 0xffff;
		}
		 while (uVar8 < local_174);
		}
		}
		else {
		ctx_00 = (InstanceContext *)0x0;
		uVar10 = 0;
		if (local_174 != 0) {
		uVar8 = 0;
		fVar15 = FLOAT_00386648;
		do {
		pIVar3 = local_110[uVar8];
		fVar14 = (((pIVar3->parent).field14_0x20.matrix2.m21 -(pIVar3->parent).field14_0x20.matrix2.m11) * FLOAT_00386ab4 +(pIVar3->parent).field14_0x20.matrix2.m11) - local_170;
		fVar12 = ((pIVar3->parent).field14_0x20.matrix2.m12 +((pIVar3->parent).field14_0x20.matrix2.m22 -(pIVar3->parent).field14_0x20.matrix2.m12) * FLOAT_00386ab4) - local_16c;
		fVar13 = ((pIVar3->parent).field14_0x20.matrix2.m13 +((pIVar3->parent).field14_0x20.matrix2.m23 -(pIVar3->parent).field14_0x20.matrix2.m13) * FLOAT_00386ab4) - local_168;
		fVar12 = fVar13 * fVar13 + fVar12 * fVar12 + fVar14 * fVar14;
		if (fVar12 < fVar15) {
		ctx_00 = pIVar3;
		fVar15 = fVar12;
		}
		uVar10 = uVar10 + 1;
		uVar8 = uVar10 & 0xffff;
		}
		 while (uVar8 < local_174);
		if ((ctx_00 != (InstanceContext *)0x0) &&(pIVar9 = InstanceContext::GetCharacterNode(ctx_00), pIVar9 != (InstanceNodeCharacter *)0x0)) {
		(*((pIVar9->field1_0x18->parent).parent.vtable)->Method8)((NodeRelated2Abstract *)pIVar9->field1_0x18,&local_130,pIVar1,'\x01');
		return;
		}
		}
		}
		return;
		}
		
	*/
	return;
}

void ActionCreateDamage::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionCreateDamage::Dispose(ActionCreateDamage *this,byte param_1){
		::EmptyFunction();
		::EmptyFunction();
		::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionCreateDamage::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionCreateDamage * __fastcall ActionCreateDamage::Construct(ActionCreateDamage *this){
		ushort uVar1;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_CreateDamageAbstract;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		this->unlabelled24 = 0;
		this->unlabelled28 = (int)FLOAT_0038639c;
		this->unlabelled36 = 0;
		FUN_001803a0(&this->unlabelled40,1);
		FUN_00180380(&this->unlabelled44,0);
		uVar1 = *(ushort *)&this->unlabelled48;
		this->unlabelled32 = 0x1fe0;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_CreateDamage;
		*(ushort *)&this->unlabelled48 = uVar1 & 0xfff1 | 0xf1;
		FUN_00180380(&this->unlabelled52,0);
		FUN_00180380(&this->unlabelled56,0);
		return this;
		}
		
	*/
	return;
}

int ActionCreateDamage::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionCreateDamage::GetSize(void){
		return 0x40;
		}
		
	*/
	return 0;
}

void ActionCreateDamage::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionCreateDamage::ExecuteFromCallContext(ActionCreateDamage *this,undefined4 time_clock,InstanceContext *ctx){
		(*((this->parent).vtable)->Execute)(&this->parent,(ctx->parent).ctx);
		return;
		}
		
	*/
	return;
}

