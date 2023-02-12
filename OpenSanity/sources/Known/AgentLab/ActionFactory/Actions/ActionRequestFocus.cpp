#include "headers/Known/AgentLab/ActionFactory/Actions/ActionRequestFocus.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionRequestFocus::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Could not reconcile some variable overlaps void __thiscall ActionRequestFocus::ExecuteFromCallContext(ActionRequestFocus *this,undefined4 time_clock,InstanceContext *ctx){
		uint *puVar1;
		float *pfVar2;
		byte bVar3;
		InstanceContext *this_00;
		InstanceContext *pIVar4;
		ChunkDataRefCounter *pCVar5;
		ChunkData *pCVar6;
		InstanceNodeCharacter *this_01;
		InstanceNodeCrate *pIVar7;
		NodeRelated2D *pNVar8;
		bool bVar9;
		ushort uVar10;
		ushort uVar11;
		uint uVar12;
		InstanceNodeInstance *pIVar10;
		int iVar13;
		InstanceNodeAbstract *pIVar14;
		uint uVar15;
		int *piVar16;
		InstanceNodeCrate *pIVar17;
		float fVar18;
		float fVar19;
		float fVar20;
		float local_274;
		uint local_270;
		InstanceNodeCharacter *local_26c;
		InstanceNodeCrate *local_268;
		ChunkData *local_264;
		float local_260;
		float local_25c;
		float local_258;
		float local_254;
		ChunkData *local_244;
		undefined2 local_240;
		undefined2 local_23e;
		float local_23c;
		uint local_238;
		uint local_234;
		uint local_230;
		undefined4 local_22c;
		undefined4 local_228;
		undefined4 local_224;
		Vector4 local_220;
		ChunkData local_210;
		InstanceNodeCrate *nodeCrate;
		InstanceNodeCharacter *nodeCharacter;
		this_00 = (ctx->parent).ctx;
		pIVar4 = (this_00->parent).ctx;
		local_264 = (pIVar4->parent).chunkData;
		uVar12 = (uint)this->unlabelled44 >> 4 & 0xf;
		local_260 = 0.0;
		local_25c = 0.0;
		local_258 = 0.0;
		local_254 = FLOAT_0038639c;
		local_26c._0_1_ = 0xff;
		if (uVar12 != 0xf) {
		local_26c._0_1_ = (byte)uVar12;
		}
		if ((this->unlabelled44 & 0x100000U) == 0) {
		piVar16 = (int *)0x0;
		}
		else {
		piVar16 = &this->unlabelled16;
		}
		FUN_00176960(&local_260,this->unlabelled44 & 0xf,(int)ctx,(float *)piVar16,*(byte *)((int)&this->unlabelled44 + 1),(byte)local_26c);
		local_234 = ~(this->unlabelled48 * 2) & 8;
		local_230 = 1;
		switch((uint)this->unlabelled44 >> 0x17 & 0xf) {
		case 1:case 7:local_234 = local_234 | 0x80;
		break;
		case 2:case 6:case 8:local_230 = 0x81;
		break;
		case 3:case 5:local_234 = local_234 | 0x40;
		break;
		case 4:local_230 = 0x41;
		}
		uVar12 = (uint)this->unlabelled44 >> 0x1b & 3;
		if (uVar12 == 1) {
		local_234 = local_234 | 0x100;
		}
		else if (uVar12 == 2) {
		local_230 = local_230 | 0x100;
		}
		if ((this->unlabelled48 & 0x40U) != 0) {
		local_234 = local_234 | 0x400;
		}
		local_244 = &local_210;
		local_238 = local_238 & 0xfffffffe | 2;
		local_240 = 0;
		local_23e = 0x80;
		local_23c = FLOAT_00386648;
		local_22c = 0;
		local_224 = 0;
		local_228 = 0;
		FUN_00137280((int)&local_244,(int)pIVar4);
		uVar12 = this->unlabelled48 & 3;
		local_228 = 0;
		local_268 = (InstanceNodeCrate *)0x0;
		if (uVar12 == 0) {
		InstanceContext::thunk_FUN_00054ce0(this_00,(int *)&local_268);
		}
		else if (uVar12 == 1) {
		nodeCharacter = (InstanceNodeCharacter *)(this_00->nodes).array[0xc];
		if ((nodeCharacter != (InstanceNodeCharacter *)0x0) &&((*(byte *)&(nodeCharacter->parent).field6_0x14 & 1) != 0)) {
		(this_00->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		}
		local_268 = (InstanceNodeCrate *)(this_00->nodes).array[0xc];
		}
		else if (uVar12 == 2) {
		nodeCrate = (InstanceNodeCrate *)(this_00->nodes).array[0xd];
		if (((nodeCrate != (InstanceNodeCrate *)0x0) &&((*(byte *)&(nodeCrate->parent).field6_0x14 & 1) != 0)) &&((~(byte)((uint)(this_00->parent).field14_0x20.matrix2.m43 >> 0x14) & 1) != 0)) {
		(this_00->nodes).array[0xd] = (InstanceNodeAbstract *)0x0;
		}
		local_268 = (InstanceNodeCrate *)(this_00->nodes).array[0xd];
		}
		local_254 = (float)this->unlabelled56;
		local_270 = FUN_0013d440((int)local_264,&local_260,this->unlabelled52,&local_244,'\x01');
		uVar10 = (ushort)local_270;
		if (uVar10 == 0) {
		uVar12 = this->unlabelled48 & 3;
		if (uVar12 == 0) {
		pfVar2 = &(this_00->parent).field14_0x20.matrix2.m43;
		*pfVar2 = (float)((uint)*pfVar2 & 0xfffffffc);
		}
		else {
		if (uVar12 == 1) {
		(this_00->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		return;
		}
		if (uVar12 == 2) {
		(this_00->nodes).array[0xd] = (InstanceNodeAbstract *)0x0;
		return;
		}
		}
		}
		else {
		local_26c = (InstanceNodeCharacter *)0x0;
		local_274 = FLOAT_00386648;
		if (((*(byte *)&this->unlabelled48 & 0x18) == 0) ||((*(byte *)((int)&this->unlabelled44 + 2) & 7) == 0)) {
		uVar12 = this->unlabelled44;
		if ((uVar12 & 0x70000) == 0) {
		if ((uVar12 & 0x80000) == 0) {
		thunk_FUN_00038910((int)this,(int)local_210.chunkRef,(int)this_00);
		thunk_FUN_00042fa0((int)this,(int)local_210.chunkRef,(int)this_00);
		return;
		}
		iVar13 = 0;
		if ((local_270 & 0xffff) != 0) {
		pIVar17 = (InstanceNodeCrate *)0x0;
		do {
		pIVar7 = (InstanceNodeCrate *)(&local_210.chunkRef)[iVar13];
		if (((*(byte *)&this->unlabelled48 & 0x20) != 0) || (pIVar7 != local_268)) {
		pNVar8 = pIVar7->field1_0x18;
		if ((pNVar8->field1_0x60 & 4U) != 0) {
		fVar18 = (pNVar8->parent).vec1.w;
		fVar19 = (pNVar8->parent).vec1.z;
		fVar20 = (pNVar8->parent).vec1.y;
		(pNVar8->parent).field27_0x40.x = (pNVar8->parent).vec1.x;
		(pNVar8->parent).field27_0x40.y = fVar20;
		(pNVar8->parent).field27_0x40.z = fVar19;
		(pNVar8->parent).field27_0x40.w = fVar18;
		*(uint *)&pNVar8->field1_0x60 = *(uint *)&pNVar8->field1_0x60 & 0xfffffffa;
		}
		fVar19 = local_260 - (pNVar8->parent).field27_0x40.x;
		fVar20 = local_25c - (pNVar8->parent).field27_0x40.y;
		fVar18 = local_258 - (pNVar8->parent).field27_0x40.z;
		fVar18 = fVar18 * fVar18 + fVar20 * fVar20 + fVar19 * fVar19;
		if (fVar18 < local_274) {
		pIVar17 = pIVar7;
		local_274 = fVar18;
		}
		}
		iVar13 = iVar13 + 1;
		}
		 while (iVar13 < (int)(local_270 & 0xffff));
		if (pIVar17 != (InstanceNodeCrate *)0x0) {
		thunk_FUN_00038910((int)this,(int)pIVar17,(int)this_00);
		if ((this->unlabelled44 & 0x40000000U) != 0) {
		(this_00->nodes).array[0xd] = &pIVar17->parent;
		}
		if ((this->unlabelled44 & 0x20000000U) == 0) {
		return;
		}
		puVar1 = &(pIVar17->parent).field6_0x14;
		*puVar1 = *puVar1 | 0x100;
		return;
		}
		}
		}
		else if ((uVar12 & 0x80000) == 0) {
		if ((uVar12 & 0x400000) == 0) {
		iVar13 = thunk_FUN_00043050((int)this,(int)&local_210,uVar10);
		}
		else {
		iVar13 = thunk_FUN_000430c0((int)this,(int)&local_210,uVar10);
		}
		if (iVar13 != 0) {
		thunk_FUN_00038910((int)this,iVar13,(int)this_00);
		thunk_FUN_00042fa0((int)this,iVar13,(int)this_00);
		return;
		}
		}
		else if (uVar10 != 0) {
		local_270 = local_270 & 0xffff;
		local_264 = &local_210;
		do {
		this_01 = (InstanceNodeCharacter *)local_264->chunkRef;
		if (((*(byte *)&this->unlabelled48 & 0x20) != 0) ||(this_01 != (InstanceNodeCharacter *)local_268)) {
		pIVar14 = InstanceDataList::GetNode((InstanceDataList *)&this_01[8].parent.ctx,Instance);
		bVar3 = *(byte *)((int)&this->unlabelled44 + 2);
		uVar12 = 0;
		if ((bVar3 & 7) != 0) {
		piVar16 = &this->unlabelled32;
		do {
		if (*(short *)(pIVar14[5].time + 0x16) == *(short *)piVar16) {
		InstanceNodeCharacter::GetPosition(this_01,&local_220);
		fVar18 = (local_258 - local_220.z) * (local_258 - local_220.z) +(local_25c - local_220.y) * (local_25c - local_220.y) +(local_260 - local_220.x) * (local_260 - local_220.x);
		if (fVar18 < local_274) {
		local_274 = fVar18;
		local_26c = this_01;
		}
		break;
		}
		uVar12 = uVar12 + 1;
		piVar16 = (int *)((int)piVar16 + 2);
		}
		 while (uVar12 < (bVar3 & 7));
		}
		}
		local_264 = (ChunkData *)&local_264->field1_0x4;
		local_270 = local_270 - 1;
		}
		 while (local_270 != 0);
		if (local_26c != (InstanceNodeCharacter *)0x0) {
		thunk_FUN_00038910((int)this,(int)local_26c,(int)this_00);
		if ((this->unlabelled44 & 0x40000000U) != 0) {
		(this_00->nodes).array[0xd] = &local_26c->parent;
		}
		if ((this->unlabelled44 & 0x20000000U) == 0) {
		return;
		}
		puVar1 = &(local_26c->parent).field6_0x14;
		*puVar1 = *puVar1 | 0x100;
		return;
		}
		}
		thunk_FUN_00038970((int)this,(int)this_00);
		return;
		}
		uVar11 = 0;
		if (uVar10 != 0) {
		do {
		pCVar5 = (&local_210.chunkRef)[uVar11];
		pIVar10 = (InstanceNodeInstance *)InstanceDataList::GetNode((InstanceDataList *)&pCVar5[0x1c].refCount,Instance);
		uVar15 = 0;
		uVar12 = (uint)this->unlabelled48 >> 3 & 3;
		if (uVar12 != 0) {
		piVar16 = &this->unlabelled40;
		do {
		if ((pIVar10->body).field49_0x80[0xb] == *(ushort *)piVar16) {
		pCVar6 = pCVar5[0x1c].chunk;
		if ((pCVar6 != (ChunkData *)0x0) &&(bVar9 = thunk_FUN_00042fd0((int)this,(int)pCVar6,'\0'), bVar9 != false)) {
		thunk_FUN_00038910((int)this,(int)pCVar6,(int)this_00);
		thunk_FUN_00042fa0((int)this,(int)pCVar6,(int)this_00);
		return;
		}
		break;
		}
		uVar15 = uVar15 + 1;
		piVar16 = (int *)((int)piVar16 + 2);
		}
		 while (uVar15 < uVar12);
		}
		uVar11 = uVar11 + 1;
		}
		 while (uVar11 < uVar10);
		}
		uVar12 = this->unlabelled48 & 3;
		if (uVar12 == 0) {
		pfVar2 = &(this_00->parent).field14_0x20.matrix2.m43;
		*pfVar2 = (float)((uint)*pfVar2 & 0xfffffffc);
		return;
		}
		if (uVar12 == 1) {
		(this_00->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		return;
		}
		if (uVar12 == 2) {
		(this_00->nodes).array[0xd] = (InstanceNodeAbstract *)0x0;
		return;
		}
		}
		return;
		}
		
	*/
	return;
}

void ActionRequestFocus::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionRequestFocus::Dispose(ActionRequestFocus *this,byte param_1){
		thunk_FUN_000571d0((undefined4 *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionRequestFocus::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionRequestFocus * __thiscall ActionRequestFocus::Construct(ActionRequestFocus *this,uint param_1){
		float fVar1;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_RequestFocus;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		this->unlabelled24 = 0;
		this->unlabelled28 = (int)FLOAT_0038639c;
		*(undefined2 *)&this->unlabelled32 = 0xffff;
		fVar1 = FLOAT_00387520;
		*(undefined2 *)((int)&this->unlabelled32 + 2) = 0xffff;
		*(undefined2 *)&this->unlabelled36 = 0xffff;
		*(undefined2 *)((int)&this->unlabelled36 + 2) = 0xffff;
		*(undefined2 *)&this->unlabelled40 = 0xffff;
		*(undefined2 *)((int)&this->unlabelled40 + 2) = 0xffff;
		this->unlabelled44 = this->unlabelled44 & 0x8048fff2U | 0x48fff2;
		this->unlabelled48 = this->unlabelled48 & 0xffffff80U | param_1 & 3;
		this->unlabelled52 = 0x3ff000;
		this->unlabelled56 = (int)fVar1;
		return this;
		}
		
	*/
	return;
}

void ActionRequestFocus::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionRequestFocus::UnkMethod(ActionRequestFocus *this,int *param_1){
		ushort uVar1;
		bool bVar2;
		char cVar3;
		ushort *this_00;
		uint uVar4;
		float fVar5;
		float fVar6;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		bVar2 = true;
		IteratorE2::Rewind(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar3 != '\0') {
		fVar6 = (float)this->unlabelled16;
		if (fVar6 < 0.0) {
		fVar6 = 0.0 - fVar6;
		}
		if (fVar6 <= EPSILON) {
		fVar6 = (float)this->unlabelled20;
		if (fVar6 < 0.0) {
		fVar6 = 0.0 - fVar6;
		}
		if (fVar6 <= EPSILON) {
		fVar6 = (float)this->unlabelled24;
		fVar5 = 0.0 - fVar6;
		if (0.0 <= fVar6) {
		fVar5 = fVar6;
		}
		if (fVar5 <= EPSILON) {
		return;
		}
		}
		}
		this->unlabelled44 = this->unlabelled44 | 0x100000;
		return;
		}
		this_00 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar4 = FUN_0017f240(this_00,(uint)*(byte *)((int)&this->unlabelled44 + 1));
		*(char *)((int)&this->unlabelled44 + 1) = (char)uVar4;
		uVar4 = FUN_00180820(this_00,this->unlabelled44 & 0xf);
		this->unlabelled44 = this->unlabelled44 ^ (this->unlabelled44 ^ uVar4) & 0xf;
		FUN_0017f260(this_00,(uint *)&this->unlabelled16);
		uVar1 = *this_00;
		if (uVar1 < 0x66) {
		if (uVar1 == 0x65) {
		this->unlabelled56 = *(int *)(this_00 + 2);
		}
		else if (uVar1 == 6) {
		this->unlabelled44 =this->unlabelled44 ^ ((uint)*(byte *)(this_00 + 2) << 4 ^ this->unlabelled44) & 0xf0;
		}
		else if (uVar1 == 0x10) {
		uVar4 = this->unlabelled44;
		uVar1 = this_00[2];
		this->unlabelled44 = ((uVar4 & 0xffff0000) + 0x10000 ^ uVar4) & 0x70000 ^ uVar4;
		*(ushort *)((int)&this->unlabelled32 + (uVar4 >> 0x10 & 7) * 2) = uVar1;
		}
		goto switchD_00042d1b_caseD_20f;
		}
		if (uVar1 == 0x7b) {
		uVar4 = this->unlabelled48;
		uVar1 = this_00[2];
		this->unlabelled48 = ((uVar4 & 0xfffffff8) + 8 ^ uVar4) & 0x18 ^ uVar4;
		*(ushort *)((int)&this->unlabelled40 + (uVar4 >> 3 & 3) * 2) = uVar1;
		uVar4 = this->unlabelled44 & 0xfaffffffU | 0x2800000;
		goto LAB_00042e58;
		}
		if ((uVar1 != 0xffff) || (*(char *)(this_00 + 1) != '\x04')) goto switchD_00042d1b_caseD_20f;
		uVar4 = *(uint *)(this_00 + 2);
		switch(uVar4) {
		case 0x209:this->unlabelled52 = this->unlabelled52 & 0xffffbfff;
		break;
		case 0x20a:this->unlabelled52 = this->unlabelled52 & 0xfff7ffff;
		break;
		case 0x20b:this->unlabelled52 = this->unlabelled52 & 0xfffdffff;
		break;
		case 0x20c:this->unlabelled52 = this->unlabelled52 & 0xfffbffff;
		break;
		case 0x20d:if (bVar2) {
		this->unlabelled52 = 0;
		bVar2 = false;
		}
		this->unlabelled52 = this->unlabelled52 | 0x2000;
		break;
		case 0x20e:if (bVar2) {
		this->unlabelled52 = 0;
		bVar2 = false;
		}
		this->unlabelled52 = this->unlabelled52 | 0x8000;
		break;
		case 0x20f:case 0x210:case 0x216:case 0x217:case 0x218:case 0x219:case 0x21a:case 0x21b:case 0x21c:case 0x21d:case 0x21e:case 0x21f:case 0x220:case 0x221:case 0x222:case 0x223:case 0x224:case 0x225:case 0x226:case 0x227:case 0x228:case 0x229:case 0x22a:case 0x22b:case 0x22c:case 0x22d:case 0x22e:case 0x22f:case 0x232:case 0x233:case 0x234:case 0x235:case 0x236:case 0x237:case 0x238:case 0x239:case 0x23a:case 0x23b:case 0x23c:case 0x23d:case 0x23e:case 0x23f:case 0x240:case 0x241:case 0x242:case 0x243:case 0x244:case 0x245:case 0x246:case 0x247:case 0x248:case 0x249:case 0x24a:case 0x24b:case 0x24c:case 0x24d:case 0x24e:case 0x24f:case 0x250:case 0x251:break;
		case 0x211:if (bVar2) {
		this->unlabelled52 = 0;
		bVar2 = false;
		}
		this->unlabelled52 = this->unlabelled52 | 0x401800;
		break;
		case 0x212:if (bVar2) {
		this->unlabelled52 = 0;
		bVar2 = false;
		}
		this->unlabelled52 = this->unlabelled52 | 0x4000;
		break;
		case 0x213:if (bVar2) {
		this->unlabelled52 = 0;
		bVar2 = false;
		}
		this->unlabelled52 = this->unlabelled52 | 0x80000;
		break;
		case 0x214:if (bVar2) {
		this->unlabelled52 = 0;
		bVar2 = false;
		}
		this->unlabelled52 = this->unlabelled52 | 0x20000;
		break;
		case 0x215:if (bVar2) {
		this->unlabelled52 = 0;
		bVar2 = false;
		}
		this->unlabelled52 = this->unlabelled52 | 0x40000;
		break;
		case 0x230:if (bVar2) {
		this->unlabelled52 = 0;
		bVar2 = false;
		}
		this->unlabelled52 = this->unlabelled52 | 0x100000;
		break;
		case 0x231:this->unlabelled52 = this->unlabelled52 & 0xffefffff;
		break;
		case 0x252:this->unlabelled48 = this->unlabelled48 | 0x20;
		break;
		default:if (uVar4 == 0x208) {
		this->unlabelled52 = this->unlabelled52 & 0xffbfe7ff;
		break;
		}
		if (0x4d < uVar4) {
		if (uVar4 < 0x205) {
		if (uVar4 == 0x204) {
		this->unlabelled52 = this->unlabelled52 & 0xffffdfff;
		}
		else {
		if (uVar4 == 0x77) {
		uVar4 = this->unlabelled44 | 0x40000000;
		goto LAB_00042e58;
		}
		if (uVar4 == 0xb0) {
		this->unlabelled48 = this->unlabelled48 | 4;
		}
		else if (uVar4 == 0xde) {
		this->unlabelled48 = this->unlabelled48 | 0x40;
		}
		}
		}
		else if (uVar4 == 0x205) {
		this->unlabelled52 = this->unlabelled52 & 0xffff7fff;
		}
		else if (uVar4 == 0x207) {
		this->unlabelled52 = this->unlabelled52 & 0xfffeffff;
		}
		break;
		}
		switch(uVar4) {
		case 0x39:uVar4 = this->unlabelled44 & 0xfff7ffffU | 0x400000;
		goto LAB_00042e58;
		case 0x3a:case 0x3b:case 0x3c:case 0x3d:case 0x3e:case 0x3f:case 0x40:case 0x41:case 0x42:case 0x43:case 0x44:case 0x45:case 0x46:break;
		case 0x47:uVar4 = this->unlabelled44 & 0xf8ffffffU | 0x800000;
		goto LAB_00042e58;
		case 0x48:this->unlabelled44 = this->unlabelled44 & 0xf97fffffU | 0x1000000;
		break;
		case 0x49:this->unlabelled44 = this->unlabelled44 & 0xf9ffffffU | 0x1800000;
		break;
		case 0x4a:uVar4 = this->unlabelled44 & 0xfa7fffffU | 0x2000000;
		goto LAB_00042e58;
		case 0x4b:this->unlabelled44 = this->unlabelled44 & 0xf7ffffffU | 0x10000000;
		break;
		case 0x4c:this->unlabelled44 = this->unlabelled44 & 0xefffffffU | 0x8000000;
		break;
		default:uVar4 = this->unlabelled44 | 0x20000000;
		LAB_00042e58:this->unlabelled44 = uVar4;
		}
		}
		switchD_00042d1b_caseD_20f:IteratorE2::Iterate(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

int ActionRequestFocus::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionRequestFocus::GetSize(void){
		return 0x40;
		}
		
	*/
	return 0;
}

