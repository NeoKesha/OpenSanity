#include "headers/Unknown/Families/Families0X/Family2/UnkFamily2B.h"

void UnkFamily2B::FUN_00038f10() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily2B::FUN_00038f10(UnkFamily2B *this){
		int *piVar1;
		InstanceNodeCharacter *nodeC;
		int iVar2;
		iVar2 = ((this->parent).node)->ctx->field36_0x164;
		if (iVar2 == -1) {
		piVar1 = (int *)0x0;
		}
		else {
		piVar1 = UF16SUB->array + iVar2 * 2;
		}
		iVar2 = piVar1[1];
		*(int *)&this->field_0x670 = iVar2;
		nodeC = (InstanceNodeCharacter *)InstanceDataList::GetNode((InstanceDataList *)(iVar2 + 0xe4),Character);
		iVar2 = BlackboardAbstract::GetIntValue((nodeC->field1_0x18->parent).parent.blackboard,0);
		switch(iVar2) {
		default:this->field1_0xc = this->field1_0xc & 0xfffffeff;
		switchD_00038f59_caseD_4:return;
		case 1:case 3:case 5:this->field1_0xc = this->field1_0xc | 0x100;
		return;
		case 4:goto switchD_00038f59_caseD_4;
		}
		}
		
	*/
	return;
}

void UnkFamily2B::FUN_00039380() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily2B::FUN_00039380(UnkFamily2B *this){
		int iVar1;
		InstanceNodeAbstract *pIVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		*(undefined4 *)&this->field_0x674 = 0;
		iVar1 = *(int *)(*(int *)&this->field_0x670 + 0x18);
		if ((*(byte *)(iVar1 + 0x60) & 4) != 0) {
		*(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x30);
		*(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(iVar1 + 0x34);
		*(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(iVar1 + 0x38);
		*(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(iVar1 + 0x3c);
		*(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) & 0xfffffffa;
		}
		fVar4 = *(float *)(iVar1 + 0x44);
		fVar3 = *(float *)(iVar1 + 0x40);
		fVar5 = *(float *)(iVar1 + 0x48);
		*(undefined4 *)&this->field_0x69c = *(undefined4 *)(iVar1 + 0x4c);
		this->field1628_0x698 = fVar5;
		this->field1627_0x694 = fVar4;
		this->field1626_0x690 = fVar3;
		this->field1627_0x694 = fVar4 + FLOAT_0038a760;
		fVar6 = this->field1628_0x698 + FLOAT_003865d0;
		this->field1628_0x698 = fVar6;
		fVar4 = fVar4 - this->field1627_0x694;
		fVar3 = fVar3 - this->field1626_0x690;
		fVar5 = fVar5 - fVar6;
		pIVar2 = (this->parent).node;
		*(float *)&this->field_0x678 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
		*(undefined *)&this->field1_0xc = 2;
		FUN_001912a0((uint)pIVar2,2,0,0.0);
		InstanceContext::FUN_0018f270((InstanceContext *)(this->parent).node,1,'\0');
		(*((this->parent).node)->vtable[2].IsA)();
		return;
		}
		
	*/
	return;
}

void UnkFamily2B::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily2B::CleanUp(UnkFamily2B *this){
		int i;
		i = 12;
		do {
		EmptyFunction();
		i = i + -1;
		}
		 while (i != 0);
		EmptyFunction();
		EmptyFunction();
		(this->parent).vtable = (UnkFamily2_VTable *)&UnkFamily2_VT_Base;
		return;
		}
		
	*/
	return;
}

void UnkFamily2B::FUN_00045070() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily2B::FUN_00045070(UnkFamily2B *this){
		InstanceContext *pIVar1;
		int iVar2;
		InstanceNodeObjectLink *nodeU;
		InstanceNodeAbstract *pIVar3;
		int iVar4;
		int *piVar5;
		pIVar3 = (this->parent).node;
		*(undefined *)&this->field1_0xc = 4;
		pIVar1 = pIVar3->ctx;
		(pIVar1->parent).flags = (pIVar1->parent).flags | 0x400;
		piVar5 = &this->field1573_0x640;
		iVar4 = 3;
		do {
		iVar2 = FUN_0016f420(*piVar5);
		*piVar5 = iVar2;
		piVar5 = piVar5 + 1;
		iVar4 = iVar4 + -1;
		}
		 while (iVar4 != 0);
		nodeU = (InstanceNodeObjectLink *)InstanceDataList::GetNode((InstanceDataList *)(*(int *)&this->field_0x670 + 0xe4),ObjectLink);
		FUN_000fc140((int)nodeU,'\x01',0,'\x01');
		InstanceContext::FUN_0018f270((InstanceContext *)(this->parent).node,6,'\0');
		FUN_001912a0((uint)(this->parent).node,1,1,0.0);
		if (*(int *)&this->field_0x670 != 0) {
		pIVar3 = InstanceDataList::GetNode((InstanceDataList *)(*(int *)&this->field_0x670 + 0xe4),Instance);
		if (pIVar3 != (InstanceNodeAbstract *)0x0) {
		(*pIVar3->vtable[2].IsA)();
		}
		}
		(*((this->parent).node)->vtable[2].IsA)();
		pIVar3 = (this->parent).node;
		(*pIVar3->vtable[2].SetCtx)(pIVar3,(InstanceContext *)&this->field14_0x20);
		return;
		}
		
	*/
	return;
}

void UnkFamily2B::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily2B::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily2B::FUN_00039080() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Could not reconcile some variable overlaps void __fastcall UnkFamily2B::FUN_00039080(UnkFamily2B *this){
		float fVar1;
		float fVar2;
		InstanceTransform *pIVar3;
		int iVar4;
		Matrix4 *matrix;
		bool bVar5;
		uint *puVar6;
		undefined4 uVar7;
		float fVar8;
		float fVar9;
		Vector4 local_40;
		float local_30;
		float local_2c;
		float local_28;
		Vector4 local_20;
		InstanceContext *ctx;
		ctx = ((this->parent).node)->ctx;
		puVar6 = InstanceContext::FUN_000f7220(ctx);
		pIVar3 = (ctx->parent).transform;
		fVar9 = (float)puVar6[2] * TimePerTick1;
		if ((*(byte *)&pIVar3->field3_0x60 & 4) != 0) {
		fVar8 = (pIVar3->matrix).m44;
		fVar1 = (pIVar3->matrix).m43;
		fVar2 = (pIVar3->matrix).m42;
		(pIVar3->position).x = (pIVar3->matrix).m41;
		(pIVar3->position).y = fVar2;
		(pIVar3->position).z = fVar1;
		(pIVar3->position).w = fVar8;
		pIVar3->field3_0x60 = (float)((uint)pIVar3->field3_0x60 & 0xfffffffa);
		}
		local_30 = (pIVar3->position).x;
		local_2c = (pIVar3->position).y;
		local_28 = (pIVar3->position).z;
		if (PTR_003d0ee8->field22_0xb8 == (undefined *)0x0) {
		local_40 = this->field1625_0x680;
		pIVar3 = *(InstanceTransform **)(*(int *)&this->field_0x670 + 0x18);
		InstanceTransform::FillMatrix(pIVar3);
		local_40 = (Vector4)CONCAT412(local_40.x * (pIVar3->matrix).m14 +local_40.y * (pIVar3->matrix).m24 +(pIVar3->matrix).m34 * 0.0 + (pIVar3->matrix).m44,CONCAT48(local_40.x * (pIVar3->matrix).m13 +local_40.y * (pIVar3->matrix).m23 +(pIVar3->matrix).m33 * 0.0 + (pIVar3->matrix).m43,CONCAT44(local_40.x * (pIVar3->matrix).m12 +local_40.y * (pIVar3->matrix).m22 +(pIVar3->matrix).m32 * 0.0 +(pIVar3->matrix).m42,local_40.x * (pIVar3->matrix).m11 +local_40.y * (pIVar3->matrix).m21 +(pIVar3->matrix).m31 * 0.0 +(pIVar3->matrix).m41)));
		matrix = *(Matrix4 **)(*(int *)&this->field_0x670 + 0x18);
		if ((*(byte *)&matrix[1].m31 & 8) != 0) {
		Vector4::FUN_000db0d0((Vector4 *)&matrix[1].m21,matrix);
		matrix[1].m31 = (float)((uint)matrix[1].m31 & 0xfffffff5);
		}
		local_20.x = matrix[1].m21;
		local_20.y = matrix[1].m22;
		local_20.z = matrix[1].m23;
		local_20.w = matrix[1].m24;
		bVar5 = InstanceTransform::thunk_FUN_000269f0((ctx->parent).transform,&local_20);
		if (bVar5 != false) {
		InstanceContext::RegisterCtxPtrToList(ctx);
		}
		}
		else {
		iVar4 = *(int *)&this->field_0x670;
		fVar8 = (*(float *)(iVar4 + 100) - *(float *)(iVar4 + 0x54)) * FLOAT_00386ab4;
		local_40 = (Vector4)(ZEXT1216(ZEXT412((uint)fVar8) & (undefined  [12])0xffffffff) << 0x20);
		FUN_00171f20((int)ctx,&local_40.x,fVar9 * FLOAT_0038a90c,0.0,90.0);
		}
		fVar9 = fVar9 * FLOAT_0038a770;
		local_20.w = local_40.w;
		local_20.x = (local_40.x - local_30) * fVar9;
		local_20.y = (local_40.y - local_2c) * fVar9;
		local_20.z = (local_40.z - local_28) * fVar9;
		uVar7 = InstanceTransform::thunk_FUN_00026880((ctx->parent).transform,&local_20);
		if ((char)uVar7 != '\0') {
		InstanceContext::RegisterCtxPtrToList(ctx);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily2B::FUN_00044d10() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily2B::FUN_00044d10(UnkFamily2B *this){
		InstanceContext *pIVar1;
		InstanceNodeObjectLink *nodeU;
		pIVar1 = ((this->parent).node)->ctx;
		if (((uint)(pIVar1->parent).flags >> 2 & 1) == 0) {
		nodeU = (InstanceNodeObjectLink *)InstanceDataList::GetNode((InstanceDataList *)(*(int *)&this->field_0x670 + 0xe4),ObjectLink);
		if (nodeU != (InstanceNodeObjectLink *)0x0) {
		InstanceNodeObjectLink::FUN_000fc0b0(nodeU,(undefined4 *)pIVar1,0,'\x01','\0');
		}
		pIVar1 = ((this->parent).node)->ctx;
		(*((pIVar1->parent).vtable)->Method3)(pIVar1);
		return;
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily2B::FUN_00044d60() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily2B::FUN_00044d60(UnkFamily2B *this){
		int iVar1;
		InstanceContext *pIVar2;
		InstanceNodeAbstract *pIVar3;
		float fVar4;
		bool bVar5;
		Vector4 local_30;
		float local_1c;
		float local_18;
		fVar4 = FLOAT_0038639c;
		(this->field1625_0x680).x = FLOAT_0038a834;
		(this->field1625_0x680).y = FLOAT_003865d4;
		(this->field1625_0x680).z = 0.0;
		(this->field1625_0x680).w = fVar4;
		*(undefined4 *)&this->field_0x674 = 0;
		iVar1 = *(int *)(*(int *)&this->field_0x670 + 0x18);
		if ((*(byte *)(iVar1 + 0x60) & 4) != 0) {
		*(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x30);
		*(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(iVar1 + 0x34);
		*(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(iVar1 + 0x38);
		*(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(iVar1 + 0x3c);
		*(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) & 0xfffffffa;
		}
		local_1c = *(float *)(iVar1 + 0x44);
		local_18 = *(float *)(iVar1 + 0x48);
		local_30.x = *(float *)(iVar1 + 0x40);
		local_30.w = *(float *)(iVar1 + 0x4c);
		pIVar2 = ((this->parent).node)->ctx;
		local_30.y = local_1c + FLOAT_0038a760;
		local_30.z = local_18 + FLOAT_003865d0;
		bVar5 = InstanceTransform::SetupPosition((pIVar2->parent).transform,&local_30);
		if (bVar5 != false) {
		InstanceContext::RegisterCtxPtrToList(pIVar2);
		}
		pIVar3 = (this->parent).node;
		*(float *)&this->field_0x678 =SQRT((local_30.z - local_18) * (local_30.z - local_18) +(local_30.y - local_1c) * (local_30.y - local_1c) + 0.0);
		pIVar2 = pIVar3->ctx;
		(pIVar2->parent).flags = (pIVar2->parent).flags | 0x400;
		*(undefined *)&this->field1_0xc = 1;
		return;
		}
		
	*/
	return;
}

void UnkFamily2B::FUN_00044ed0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily2B::FUN_00044ed0(UnkFamily2B *this){
		InstanceNodeAbstract *pIVar1;
		Matrix4Array *pMVar2;
		InstanceTransform *pIVar3;
		float fVar4;
		InstanceNodeOGI *nodeN;
		Matrix4 *pMVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		pIVar1 = (this->parent).node;
		*(undefined *)&this->field1_0xc = 5;
		(*pIVar1->vtable[2].IsA)();
		InstanceContext::FUN_0018f270((InstanceContext *)(this->parent).node,4,'\0');
		FUN_001912a0((uint)(this->parent).node,2,1,0.0);
		this->field1_0xc = this->field1_0xc & 0xfffffdff;
		*(undefined4 *)&this->field_0x674 = 0;
		nodeN = (InstanceNodeOGI *)InstanceDataList::GetNode((InstanceDataList *)(*(int *)&this->field_0x670 + 0xe4),OGI);
		pMVar2 = nodeN->field4_0x24->matrixArray2;
		if (pMVar2 == (Matrix4Array *)0x0) {
		pMVar5 = (Matrix4 *)0x0;
		}
		else {
		pMVar5 = pMVar2->array[1];
		}
		pMVar5 = FUN_001f8be0(pMVar5);
		fVar4 = FLOAT_0038ab54;
		fVar6 = pMVar5->m12;
		fVar7 = pMVar5->m13;
		fVar8 = pMVar5->m14;
		(this->field1633_0x6a0).x = pMVar5->m11;
		(this->field1633_0x6a0).y = fVar6;
		(this->field1633_0x6a0).z = fVar7;
		(this->field1633_0x6a0).w = fVar8;
		fVar6 = pMVar5->m22;
		fVar7 = pMVar5->m23;
		fVar8 = pMVar5->m24;
		(this->field1634_0x6b0).x = pMVar5->m21;
		(this->field1634_0x6b0).y = fVar6;
		(this->field1634_0x6b0).z = fVar7;
		(this->field1634_0x6b0).w = fVar8;
		fVar6 = pMVar5->m32;
		fVar7 = pMVar5->m33;
		fVar8 = pMVar5->m34;
		(this->field1635_0x6c0).x = pMVar5->m31;
		(this->field1635_0x6c0).y = fVar6;
		(this->field1635_0x6c0).z = fVar7;
		(this->field1635_0x6c0).w = fVar8;
		fVar6 = pMVar5->m42;
		fVar7 = pMVar5->m43;
		fVar8 = pMVar5->m44;
		(this->field1636_0x6d0).x = pMVar5->m41;
		(this->field1636_0x6d0).y = fVar6;
		(this->field1636_0x6d0).z = fVar7;
		(this->field1636_0x6d0).w = fVar8;
		fVar6 = (this->field1635_0x6c0).y;
		fVar7 = (this->field1635_0x6c0).z;
		(this->field1636_0x6d0).x = (this->field1635_0x6c0).x * fVar4 + (this->field1636_0x6d0).x;
		(this->field1636_0x6d0).y = fVar6 * fVar4 + (this->field1636_0x6d0).y;
		(this->field1636_0x6d0).z = fVar7 * fVar4 + (this->field1636_0x6d0).z;
		pIVar3 = (((this->parent).node)->ctx->parent).transform;
		if ((*(byte *)&pIVar3->field3_0x60 & 4) != 0) {
		fVar6 = (pIVar3->matrix).m44;
		fVar7 = (pIVar3->matrix).m43;
		fVar8 = (pIVar3->matrix).m42;
		(pIVar3->position).x = (pIVar3->matrix).m41;
		(pIVar3->position).y = fVar8;
		(pIVar3->position).z = fVar7;
		(pIVar3->position).w = fVar6;
		pIVar3->field3_0x60 = (float)((uint)pIVar3->field3_0x60 & 0xfffffffa);
		}
		fVar8 = (pIVar3->position).z - (this->field1636_0x6d0).z;
		fVar7 = (pIVar3->position).y - (this->field1636_0x6d0).y;
		fVar6 = (pIVar3->position).x - (this->field1636_0x6d0).x;
		*(float *)&this->field_0x678 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
		return;
		}
		
	*/
	return;
}

void UnkFamily2B::FUN_00049d30() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily2B::FUN_00049d30(UnkFamily2B *this){
		InstanceContext *pIVar1;
		uint uVar2;
		(*((this->parent).node)->vtable[2].IsA)();
		pIVar1 = ((this->parent).node)->ctx;
		uVar2 = (pIVar1->parent).flags;
		(pIVar1->parent).flags = uVar2 & 0xfffffff7;
		(pIVar1->parent).flags = uVar2 & 0xfffffbf7;
		thunk_FUN_00038f10(this);
		*(undefined *)&this->field1_0xc = 0;
		return;
		}
		
	*/
	return;
}

void UnkFamily2B::FUN_00049dc0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __fastcall UnkFamily2B::FUN_00049dc0(UnkFamily2B *this){
		uint uVar1;
		InstanceTransform *pIVar2;
		InstanceNodeAbstract *pIVar3;
		Matrix4 *matrix;
		undefined auVar4 [12];
		bool bVar5;
		uint *puVar6;
		InstanceContext *pIVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		float local_40;
		float fStack60;
		Vector4 local_20;
		if (PTR_00496350 == (InstanceContextRefCounter *)0x0) {
		pIVar7 = (InstanceContext *)0x0;
		}
		else {
		pIVar7 = PTR_00496350->ctx;
		}
		if (*(InstanceContext **)&this->field_0x670 != pIVar7) {
		(*((this->parent).node)->vtable[2].IsA)();
		pIVar7 = ((this->parent).node)->ctx;
		uVar1 = (pIVar7->parent).flags;
		(pIVar7->parent).flags = uVar1 & 0xfffffff7;
		(pIVar7->parent).flags = uVar1 & 0xfffffbf7;
		*(undefined *)&this->field1_0xc = 0;
		return;
		}
		pIVar2 = ((*(InstanceContext **)&this->field_0x670)->parent).transform;
		auVar4 = *(undefined (*) [12])&this->field1625_0x680;
		InstanceTransform::FillMatrix(pIVar2);
		local_40 = SUB124(auVar4,0);
		fStack60 = SUB124(auVar4 >> 0x20,0);
		pIVar7 = ((this->parent).node)->ctx;
		local_20.x = local_40 * (pIVar2->matrix).m11 + fStack60 * (pIVar2->matrix).m21 +(pIVar2->matrix).m31 * 0.0 + (pIVar2->matrix).m41;
		local_20.y = local_40 * (pIVar2->matrix).m12 + fStack60 * (pIVar2->matrix).m22 +(pIVar2->matrix).m32 * 0.0 + (pIVar2->matrix).m42;
		local_20.z = local_40 * (pIVar2->matrix).m13 + fStack60 * (pIVar2->matrix).m23 +(pIVar2->matrix).m33 * 0.0 + (pIVar2->matrix).m43;
		pIVar2 = (pIVar7->parent).transform;
		if ((*(byte *)&pIVar2->field3_0x60 & 4) != 0) {
		fVar10 = (pIVar2->matrix).m44;
		fVar11 = (pIVar2->matrix).m43;
		fVar12 = (pIVar2->matrix).m42;
		(pIVar2->position).x = (pIVar2->matrix).m41;
		(pIVar2->position).y = fVar12;
		(pIVar2->position).z = fVar11;
		(pIVar2->position).w = fVar10;
		pIVar2->field3_0x60 = (float)((uint)pIVar2->field3_0x60 & 0xfffffffa);
		}
		fVar10 = (pIVar2->position).x;
		fVar11 = (pIVar2->position).y;
		fVar12 = (pIVar2->position).z;
		local_20.w = (pIVar2->position).w;
		puVar6 = InstanceContext::FUN_000f7220(pIVar7);
		fVar13 = FLOAT_0038639c;
		fVar8 = (float)puVar6[2] * TimePerTick1 * FLOAT_0038a770 + *(float *)&this->field_0x674;
		bVar5 = FLOAT_0038639c <= fVar8;
		*(float *)&this->field_0x674 = fVar8;
		if (bVar5) {
		pIVar3 = (this->parent).node;
		*(undefined *)&this->field1_0xc = 3;
		FUN_001912a0((uint)pIVar3,0,1,0.0);
		InstanceContext::FUN_0018f270((InstanceContext *)(this->parent).node,0,'\0');
		return;
		}
		fVar11 = fVar11 - local_20.y;
		fVar12 = fVar12 - local_20.z;
		fVar8 = (fVar8 + fVar13) * FLOAT_00386ab4;
		fVar9 = (fVar8 * fVar8 * FLOAT_003865d0 - fVar8 * fVar8 * fVar8 * FLOAT_003865d4) **(float *)&this->field_0x678;
		fVar10 = fVar10 - local_20.x;
		fVar8 = fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10;
		if (fVar8 <= _DAT_0039d860) {
		fVar13 = 0.0;
		}
		else {
		fVar13 = fVar13 / SQRT(fVar8);
		}
		local_20.y = fVar11 * fVar13 * fVar9 + local_20.y;
		local_20.z = fVar12 * fVar13 * fVar9 + local_20.z;
		local_20.x = fVar10 * fVar13 * fVar9 + local_20.x;
		bVar5 = InstanceTransform::SetupPosition((pIVar7->parent).transform,&local_20);
		if (bVar5 != false) {
		InstanceContext::RegisterCtxPtrToList(pIVar7);
		}
		matrix = *(Matrix4 **)(*(int *)&this->field_0x670 + 0x18);
		if ((*(byte *)&matrix[1].m31 & 8) != 0) {
		Vector4::FUN_000db0d0((Vector4 *)&matrix[1].m21,matrix);
		matrix[1].m31 = (float)((uint)matrix[1].m31 & 0xfffffff5);
		}
		local_20.x = matrix[1].m21;
		local_20.y = matrix[1].m22;
		local_20.z = matrix[1].m23;
		local_20.w = matrix[1].m24;
		bVar5 = InstanceTransform::thunk_FUN_000269f0((pIVar7->parent).transform,&local_20);
		if (bVar5 != false) {
		InstanceContext::RegisterCtxPtrToList(pIVar7);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily2B::FUN_0004a0d0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __fastcall UnkFamily2B::FUN_0004a0d0(UnkFamily2B *this){
		uint uVar1;
		float fVar2;
		bool bVar3;
		InstanceNodeAbstract *pIVar4;
		int iVar5;
		uint *puVar6;
		InstanceNodeObjectLink *node;
		InstanceContext *pIVar7;
		Matrix4 *pMVar8;
		int *piVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		uint *local_40;
		int local_38;
		Vector4 local_30;
		Vector4 local_20;
		if (PTR_00496350 == (InstanceContextRefCounter *)0x0) {
		pIVar7 = (InstanceContext *)0x0;
		}
		else {
		pIVar7 = PTR_00496350->ctx;
		}
		if (*(InstanceContext **)&this->field_0x670 != pIVar7) {
		(*((this->parent).node)->vtable[2].IsA)();
		pIVar7 = ((this->parent).node)->ctx;
		uVar1 = (pIVar7->parent).flags;
		(pIVar7->parent).flags = uVar1 & 0xfffffff7;
		(pIVar7->parent).flags = uVar1 & 0xfffffbf7;
		*(undefined *)&this->field1_0xc = 0;
		return;
		}
		if (((PTR_003d0eec->parent).field1_0x14 & 0x3fc0U) < 0x80) {
		thunk_FUN_00039380(this);
		return;
		}
		if (((uint)(PTR_003d0eec->parent).parent.field7_0x10 >> 10 & 1) == 0) {
		thunk_FUN_00045070(this);
		return;
		}
		pIVar4 = InstanceDataList::GetNode(&(*(InstanceContext **)&this->field_0x670)->nodes,OGI);
		piVar9 = *(int **)(pIVar4[1].time + 0x10);
		if (piVar9 == (int *)0x0) {
		pMVar8 = (Matrix4 *)0x0;
		}
		else {
		pMVar8 = *(Matrix4 **)(*piVar9 + 4);
		}
		pMVar8 = FUN_001f8be0(pMVar8);
		fVar2 = FLOAT_00386608;
		fVar12 = pMVar8->m12;
		fVar10 = pMVar8->m13;
		fVar11 = pMVar8->m14;
		(this->field1633_0x6a0).x = pMVar8->m11;
		(this->field1633_0x6a0).y = fVar12;
		(this->field1633_0x6a0).z = fVar10;
		(this->field1633_0x6a0).w = fVar11;
		fVar12 = pMVar8->m22;
		fVar10 = pMVar8->m23;
		fVar11 = pMVar8->m24;
		(this->field1634_0x6b0).x = pMVar8->m21;
		(this->field1634_0x6b0).y = fVar12;
		(this->field1634_0x6b0).z = fVar10;
		(this->field1634_0x6b0).w = fVar11;
		fVar12 = pMVar8->m32;
		fVar10 = pMVar8->m33;
		fVar11 = pMVar8->m34;
		(this->field1635_0x6c0).x = pMVar8->m31;
		(this->field1635_0x6c0).y = fVar12;
		(this->field1635_0x6c0).z = fVar10;
		(this->field1635_0x6c0).w = fVar11;
		fVar12 = pMVar8->m42;
		fVar10 = pMVar8->m43;
		fVar11 = pMVar8->m44;
		(this->field1636_0x6d0).x = pMVar8->m41;
		(this->field1636_0x6d0).y = fVar12;
		(this->field1636_0x6d0).z = fVar10;
		(this->field1636_0x6d0).w = fVar11;
		fVar12 = (this->field1635_0x6c0).x;
		fVar10 = (this->field1635_0x6c0).z;
		(this->field1636_0x6d0).y =(this->field1636_0x6d0).y + ((this->field1635_0x6c0).y * fVar2 - FLOAT_0038a828);
		(this->field1636_0x6d0).x = (this->field1636_0x6d0).x + fVar12 * fVar2;
		(this->field1636_0x6d0).z = (this->field1636_0x6d0).z + fVar10 * fVar2;
		pIVar7 = ((this->parent).node)->ctx;
		InstanceNodeCharacter::GetPosition((InstanceNodeCharacter *)pIVar7,&local_30);
		pIVar4 = InstanceDataList::GetNode((InstanceDataList *)(*(int *)&this->field_0x670 + 0xe4),Instance);
		local_40 = &this->field232_0x100;
		piVar9 = &this->field1573_0x640;
		local_38 = 3;
		do {
		iVar5 = FUN_001753e0(local_40,(int)pIVar4,*piVar9);
		*piVar9 = iVar5;
		local_40 = local_40 + 0x1c;
		piVar9 = piVar9 + 1;
		local_38 = local_38 + -1;
		}
		 while (local_38 != 0);
		if ((*(uint *)(*(int *)&this->field_0x670 + 0x14) & 0x400) == 0) {
		piVar9 = &(pIVar7->parent).flags;
		*piVar9 = *piVar9 & 0xfffffbff;
		}
		else {
		piVar9 = &(pIVar7->parent).flags;
		*piVar9 = *piVar9 | 0x400;
		}
		if ((this->field1_0xc & 0x200) == 0) {
		puVar6 = InstanceContext::FUN_000f7220(pIVar7);
		fVar12 = FLOAT_0038639c;
		fVar10 = (float)puVar6[2] * TimePerTick1 * FLOAT_0038a90c + *(float *)&this->field_0x674;
		*(float *)&this->field_0x674 = fVar10;
		local_30.z = local_30.z - (this->field1636_0x6d0).z;
		local_30.x = local_30.x - (this->field1636_0x6d0).x;
		fVar10 = (fVar10 + fVar12) * FLOAT_00386ab4;
		local_30.y = local_30.y - (this->field1636_0x6d0).y;
		fVar11 = (fVar10 * fVar10 * FLOAT_003865d0 - fVar10 * fVar10 * fVar10 * FLOAT_003865d4) **(float *)&this->field_0x678;
		local_20.w = local_30.w;
		fVar10 = local_30.z * local_30.z + local_30.y * local_30.y + local_30.x * local_30.x;
		if (fVar10 <= _DAT_0039d860) {
		fVar12 = 0.0;
		}
		else {
		fVar12 = fVar12 / SQRT(fVar10);
		}
		local_20.x = fVar12 * local_30.x * fVar11 + (this->field1636_0x6d0).x;
		local_20.y = (this->field1636_0x6d0).y + local_30.y * fVar12 * fVar11;
		local_20.z = (this->field1636_0x6d0).z + local_30.z * fVar12 * fVar11;
		bVar3 = InstanceTransform::SetupPosition((pIVar7->parent).transform,&local_20);
		if (bVar3 != false) {
		InstanceContext::RegisterCtxPtrToList(pIVar7);
		}
		bVar3 = InstanceTransform::thunk_FUN_00026aa0((pIVar7->parent).transform,(InstanceTransform *)&this->field1633_0x6a0);
		if (bVar3 != false) {
		InstanceContext::RegisterCtxPtrToList(pIVar7);
		}
		if (FLOAT_0038639c <= *(float *)&this->field_0x674) {
		bVar3 = InstanceTransform::thunk_FUN_000267c0((pIVar7->parent).transform,(InstanceTransform *)&this->field1633_0x6a0);
		if (bVar3 != false) {
		InstanceContext::RegisterCtxPtrToList(pIVar7);
		}
		this->field1_0xc = this->field1_0xc | 0x200;
		node = (InstanceNodeObjectLink *)InstanceDataList::GetNode((InstanceDataList *)(*(int *)&this->field_0x670 + 0xe4),ObjectLink);
		InstanceNodeObjectLink::FUN_000fbd70(node,*(int **)&this->field_0x670,(int **)pIVar7,1,0,(undefined4 *)0x0,'\x01');
		}
		}
		else if (*(int *)&PTR_003d0ee8->field_0xb4 != 0) {
		thunk_FUN_0007e8c0(*(int *)&PTR_003d0ee8->field_0xb4,0x3f000000);
		return;
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily2B::FUN_0004a500() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __fastcall UnkFamily2B::FUN_0004a500(UnkFamily2B *this){
		uint uVar1;
		InstanceTransform *pIVar2;
		Matrix4 *matrix;
		bool bVar3;
		InstanceContext *pIVar4;
		uint *puVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		Vector4 local_20;
		pIVar4 = (InstanceContext *)PTR_00496350;
		if (PTR_00496350 != (InstanceContextRefCounter *)0x0) {
		pIVar4 = PTR_00496350->ctx;
		}
		if (*(InstanceContext **)&this->field_0x670 == pIVar4) {
		pIVar4 = ((this->parent).node)->ctx;
		local_20.x = this->field1626_0x690;
		pIVar2 = (pIVar4->parent).transform;
		local_20.y = this->field1627_0x694;
		local_20.z = this->field1628_0x698;
		if ((*(byte *)&pIVar2->field3_0x60 & 4) != 0) {
		fVar8 = (pIVar2->matrix).m44;
		fVar9 = (pIVar2->matrix).m43;
		fVar10 = (pIVar2->matrix).m42;
		(pIVar2->position).x = (pIVar2->matrix).m41;
		(pIVar2->position).y = fVar10;
		(pIVar2->position).z = fVar9;
		(pIVar2->position).w = fVar8;
		pIVar2->field3_0x60 = (float)((uint)pIVar2->field3_0x60 & 0xfffffffa);
		}
		fVar8 = (pIVar2->position).x;
		fVar9 = (pIVar2->position).y;
		fVar10 = (pIVar2->position).z;
		local_20.w = (pIVar2->position).w;
		puVar5 = InstanceContext::FUN_000f7220(pIVar4);
		fVar11 = FLOAT_0038639c;
		fVar6 = (float)puVar5[2] * TimePerTick1 + *(float *)&this->field_0x674;
		bVar3 = fVar6 < FLOAT_0038639c;
		*(float *)&this->field_0x674 = fVar6;
		if (bVar3) {
		fVar6 = fVar6 * FLOAT_00386ab4;
		fVar9 = fVar9 - local_20.y;
		fVar10 = fVar10 - local_20.z;
		fVar7 = (fVar11 - (fVar6 * fVar6 * FLOAT_003865d0 - fVar6 * fVar6 * fVar6 * FLOAT_003865d4)) **(float *)&this->field_0x678;
		fVar8 = fVar8 - local_20.x;
		fVar6 = fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8;
		if (fVar6 <= _DAT_0039d860) {
		fVar11 = 0.0;
		}
		else {
		fVar11 = fVar11 / SQRT(fVar6);
		}
		local_20.y = fVar9 * fVar11 * fVar7 + local_20.y;
		local_20.z = fVar10 * fVar11 * fVar7 + local_20.z;
		local_20.x = fVar8 * fVar11 * fVar7 + local_20.x;
		bVar3 = InstanceTransform::SetupPosition((pIVar4->parent).transform,&local_20);
		if (bVar3 != false) {
		InstanceContext::RegisterCtxPtrToList(pIVar4);
		}
		matrix = *(Matrix4 **)(*(int *)&this->field_0x670 + 0x18);
		if ((*(byte *)&matrix[1].m31 & 8) != 0) {
		Vector4::FUN_000db0d0((Vector4 *)&matrix[1].m21,matrix);
		matrix[1].m31 = (float)((uint)matrix[1].m31 & 0xfffffff5);
		}
		local_20.x = matrix[1].m21;
		local_20.y = matrix[1].m22;
		local_20.z = matrix[1].m23;
		local_20.w = matrix[1].m24;
		bVar3 = InstanceTransform::thunk_FUN_000269f0((pIVar4->parent).transform,&local_20);
		if (bVar3 != false) {
		InstanceContext::RegisterCtxPtrToList(pIVar4);
		}
		return;
		}
		(*((this->parent).node)->vtable[2].IsA)();
		pIVar4 = ((this->parent).node)->ctx;
		}
		else {
		(*((this->parent).node)->vtable[2].IsA)();
		pIVar4 = ((this->parent).node)->ctx;
		}
		uVar1 = (pIVar4->parent).flags;
		(pIVar4->parent).flags = uVar1 & 0xfffffff7;
		(pIVar4->parent).flags = uVar1 & 0xfffffbf7;
		*(undefined *)&this->field1_0xc = 0;
		return;
		}
		
	*/
	return;
}

void UnkFamily2B::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily2Base * __thiscall UnkFamily2B::Dispose(UnkFamily2B *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void UnkFamily2B::Construct(uint param_1, byte param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily2B * __thiscall UnkFamily2B::Construct(UnkFamily2B *this,InstanceNodeAbstract *param_1,undefined param_2){
		int iVar1;
		uint *puVar2;
		(this->parent).node = param_1;
		(this->parent).field_0x4 = param_2;
		(this->parent).vtable = (UnkFamily2_VTable *)&UnkFamily2_VT_B;
		FUN_0016f1c0(&this->field14_0x20);
		FUN_0016f1c0(&this->field123_0x90);
		puVar2 = &this->field232_0x100;
		iVar1 = 0xc;
		do {
		FUN_0016f1c0(puVar2);
		puVar2 = puVar2 + 0x1c;
		iVar1 = iVar1 + -1;
		}
		 while (iVar1 != 0);
		*(undefined *)&this->field1_0xc = 0;
		this->field2_0x10 = 0xffffffff;
		this->field3_0x14 = 0xffff;
		this->field1_0xc = this->field1_0xc & 0xffff03ff;
		this->field1573_0x640 = 0xffffffff;
		this->field1574_0x644 = 0xffffffff;
		this->field1575_0x648 = 0xffffffff;
		this->field1576_0x64c = 0xffffffff;
		return this;
		}
		
	*/
	return;
}

void UnkFamily2B::FUN_0004a490() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily2B::FUN_0004a490(UnkFamily2B *this){
		InstanceContext *pIVar1;
		uint uVar2;
		pIVar1 = (InstanceContext *)PTR_00496350;
		if (PTR_00496350 != (InstanceContextRefCounter *)0x0) {
		pIVar1 = PTR_00496350->ctx;
		}
		if (*(InstanceContext **)&this->field_0x670 != pIVar1) {
		(*((this->parent).node)->vtable[2].IsA)();
		pIVar1 = ((this->parent).node)->ctx;
		uVar2 = (pIVar1->parent).flags;
		(pIVar1->parent).flags = uVar2 & 0xfffffff7;
		(pIVar1->parent).flags = uVar2 & 0xfffffbf7;
		*(undefined *)&this->field1_0xc = 0;
		return;
		}
		uVar2 = (uint)(PTR_003d0eec->parent).field1_0x14 >> 6 & 0xff;
		if (uVar2 < 2) {
		thunk_FUN_00039380(this);
		return;
		}
		if (2 < uVar2) {
		thunk_FUN_000394b0(this);
		return;
		}
		FUN_00039080(this);
		return;
		}
		
	*/
	return;
}

void UnkFamily2B::FUN_0004a790() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily2B::FUN_0004a790(UnkFamily2B *this){
		uint uVar1;
		InstanceNodeAbstract *pIVar2;
		InstanceContext *pIVar3;
		pIVar3 = (InstanceContext *)PTR_00496350;
		if (PTR_00496350 != (InstanceContextRefCounter *)0x0) {
		pIVar3 = PTR_00496350->ctx;
		}
		if (*(InstanceContext **)&this->field_0x670 != pIVar3) {
		(*((this->parent).node)->vtable[2].IsA)();
		pIVar3 = ((this->parent).node)->ctx;
		uVar1 = (pIVar3->parent).flags;
		(pIVar3->parent).flags = uVar1 & 0xfffffff7;
		(pIVar3->parent).flags = uVar1 & 0xfffffbf7;
		*(undefined *)&this->field1_0xc = 0;
		return;
		}
		if (((PTR_003d0eec->parent).field1_0x14 & 0x3fc0U) < 0xc0) {
		pIVar2 = (this->parent).node;
		*(undefined *)&this->field1_0xc = 3;
		FUN_001912a0((uint)pIVar2,0,1,0.0);
		InstanceContext::FUN_0018f270((InstanceContext *)(this->parent).node,3,'\0');
		(*((this->parent).node)->vtable[2].IsA)();
		return;
		}
		if (((uint)(PTR_003d0eec->parent).parent.field7_0x10 >> 10 & 1) != 0) {
		thunk_FUN_00044ed0(this);
		return;
		}
		FUN_00039080(this);
		return;
		}
		
	*/
	return;
}

void UnkFamily2B::FUN_00049d70() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily2B::FUN_00049d70(UnkFamily2B *this){
		InstanceContext *pIVar1;
		uint uVar2;
		pIVar1 = (InstanceContext *)PTR_00496350;
		if (PTR_00496350 != (InstanceContextRefCounter *)0x0) {
		pIVar1 = PTR_00496350->ctx;
		}
		if (*(InstanceContext **)&this->field_0x670 == pIVar1) {
		uVar2 = (uint)(PTR_003d0eec->parent).field1_0x14 >> 6 & 0xff;
		if (((uVar2 == 2) || (uVar2 == 3)) || (uVar2 == 4)) {
		FUN_00044d60(this);
		return;
		}
		}
		else {
		pIVar1 = ((this->parent).node)->ctx;
		(pIVar1->parent).flags = (pIVar1->parent).flags & 0xfffffbff;
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily2B::EmptyFunction_18() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void UnkFamily2B::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

void UnkFamily2B::FUN_0004ba50() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily2B::FUN_0004ba50(UnkFamily2B *this){
		InstanceNodeAbstract *pIVar1;
		InstanceContext *pIVar2;
		uint uVar3;
		uVar3 = GameController4->flags >> 0xc & 0x3f;
		if ((uVar3 == 0xc) || (uVar3 == 6)) {
		uVar3 = this->field1_0xc;
		if ((uVar3 & 0x4000) != 0) goto LAB_0004baf9;
		pIVar1 = (this->parent).node;
		this->field1_0xc =((uint)((*(uint *)(*(int *)&this->field_0x670 + 0x14) & 0x400) == 0x400) << 0xf ^ uVar3) &0x8000 ^ uVar3;
		(*pIVar1->vtable[2].IsA)();
		pIVar2 = ((this->parent).node)->ctx;
		uVar3 = (pIVar2->parent).flags;
		(pIVar2->parent).flags = uVar3 & 0xfffffff7;
		(pIVar2->parent).flags = uVar3 & 0xfffffbf7;
		uVar3 = this->field1_0xc | 0x4000;
		}
		else {
		if ((this->field1_0xc & 0x4000) == 0) goto LAB_0004baf9;
		if ((char)this->field1_0xc != '\0') {
		pIVar2 = ((this->parent).node)->ctx;
		(pIVar2->parent).flags = (pIVar2->parent).flags | 0x400;
		}
		uVar3 = this->field1_0xc & 0xffff3fff;
		}
		this->field1_0xc = uVar3;
		LAB_0004baf9:switch(this->field1_0xc & 0xff) {
		case 0:thunk_FUN_00049d70(this);
		return;
		case 1:thunk_FUN_00049dc0(this);
		return;
		case 2:thunk_FUN_0004a500(this);
		return;
		case 3:thunk_FUN_0004a490(this);
		return;
		case 4:thunk_FUN_0004a790(this);
		return;
		case 5:thunk_FUN_0004a0d0(this);
		}
		return;
		}
		
	*/
	return;
}

void UnkFamily2B::FUN_000394b0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkFamily2B::FUN_000394b0(UnkFamily2B *this){
		InstanceNodeAbstract *pIVar1;
		pIVar1 = (this->parent).node;
		*(undefined *)&this->field1_0xc = 4;
		FUN_001912a0((uint)pIVar1,1,1,0.0);
		InstanceContext::FUN_0018f270((InstanceContext *)(this->parent).node,2,'\0');
		(*((this->parent).node)->vtable[2].IsA)();
		pIVar1 = (this->parent).node;
		(*pIVar1->vtable[2].SetCtx)(pIVar1,(InstanceContext *)&this->field14_0x20);
		return;
		}
		
	*/
	return;
}

