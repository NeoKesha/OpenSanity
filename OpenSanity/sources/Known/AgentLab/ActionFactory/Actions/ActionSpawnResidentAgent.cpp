#include "headers/Known/AgentLab/ActionFactory/Actions/ActionSpawnResidentAgent.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionSpawnResidentAgent::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionSpawnResidentAgent::Dispose(ActionSpawnResidentAgent *this,byte param_1){
		::EmptyFunction();
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionSpawnResidentAgent::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSpawnResidentAgent::ExecuteFromCallContext(ActionSpawnResidentAgent *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		float fVar1;
		float fVar2;
		float fVar3;
		char cVar4;
		ushort uVar5;
		InstanceContext *this_04;
		InstanceContext *ctx_00;
		float fVar6;
		InstanceTransform *pIVar7;
		Matrix4Array *pMVar8;
		ushort *puVar9;
		InstanceNodeAbstract *pIVar10;
		GameResourceManager *this_05;
		bool bVar11;
		ChunkMeta *pCVar12;
		void *pvVar13;
		int iVar14;
		InstanceNodeInstance *pIVar13;
		uint uVar15;
		InstanceContext *this_06;
		InstanceNodeOGI *pIVar14;
		Matrix4 *pMVar16;
		int *piVar17;
		InstanceNodeInstance *this_03;
		InstanceNodeObjectLink *pIVar19;
		UnkFamily5AB *this_07;
		UnkFamily5AA *pUVar20;
		InstanceContextSmartPtr IVar21;
		InstanceNodeObjectLink *pIVar18;
		uint uVar22;
		byte bVar23;
		undefined4 uVar24;
		byte local_5a;
		InstanceContext *local_44;
		int local_3c;
		undefined4 local_38;
		int local_34;
		float local_30;
		float local_2c;
		float local_28;
		float local_24;
		undefined4 local_20 [7];
		this_05 = ResourceManager;
		this_04 = (ctx->parent).ctx;
		ctx_00 = (((InstanceNodeInstanceBody *)&(this_04->parent).ctx)->parent).ctx;
		fVar6 = (this_04->parent).field14_0x20.matrix2.m42;
		pCVar12 = (ChunkMeta *)UnkFamily16A::FUN_001b3ac0(PTR_DefaultRM,ctx_00);
		iVar14 = (this_04->parent).field14_0x20.field27_0x78;
		if (iVar14 == 0) {
		pvVar13 = (void *)(this_04->parent).field14_0x20.matrix2.m41;
		}
		else {
		pvVar13 = (void *)FUN_00017ba8(iVar14);
		}
		if (this->unlabelled44 < 0) {
		iVar14 = FUN_001804d0(&this->unlabelled32,pvVar13);
		local_5a = (byte)iVar14;
		}
		else {
		local_5a = 0;
		}
		cVar4 = *(char *)&(this_04->parent).field14_0x20.matrix2.m44;
		local_44 = (InstanceContext *)0x0;
		if ((this->unlabelled44 & 0x100000U) == 0) {
		if ((this->unlabelled44 & 0x1000000U) == 0) {
		uVar5 = *(ushort *)&this->unlabelled36;
		goto LAB_0019b26a;
		}
		pIVar10 = (this_04->nodes).array[0xd];
		if (((pIVar10 != (InstanceNodeAbstract *)0x0) && ((*(byte *)&pIVar10->field6_0x14 & 1) != 0)) &&((~(byte)((uint)(this_04->parent).field14_0x20.matrix2.m43 >> 0x14) & 1) != 0)) {
		(this_04->nodes).array[0xd] = (InstanceNodeAbstract *)0x0;
		}
		local_44 = (InstanceContext *)(this_04->nodes).array[0xd];
		pIVar13 = (InstanceNodeInstance *)InstanceDataList::GetNode(&local_44->nodes,Instance);
		uVar22 = (pIVar13->body).field49_0x80[0xb] & 0x7fff;
		if (-1 < this->unlabelled44) {
		local_5a = (*pIVar13->vtable->InstanceMethod14)();
		}
		}
		else {
		uVar5 = *(ushort *)((int)(this_04->parent).field14_0x20.matrix2.m42 + 0x16);
		local_44 = ctx_00;
		LAB_0019b26a:uVar22 = uVar5 & 0x7fff;
		}
		if (((this->unlabelled44 & 0x80000U) == 0) ||(uVar15 = (uint)this->unlabelled44 >> 8 & 0x1f, uVar15 == 2)) {
		pIVar7 = (ctx_00->parent).transform;
		if ((*(byte *)&pIVar7->field3_0x60 & 8) != 0) {
		Vector4::FUN_000db0d0(&pIVar7->rotation,&pIVar7->matrix);
		pIVar7->field3_0x60 = (float)((uint)pIVar7->field3_0x60 & 0xfffffff5);
		}
		FUN_000e9ad0(&pIVar7->rotation,&local_3c,&local_38,&local_34);
		}
		else if (uVar15 == 0) {
		local_3c = 0;
		local_38 = 0;
		local_34 = 0;
		}
		else if (uVar15 == 1) {
		FUN_000e9ad0((void *)(this_04->parent).field14_0x20.matrix2.m32,&local_3c,&local_38,&local_34);
		}
		GameResourceManager::FUN_001a79d0(this_05);
		GameResourceManager::FUN_001a79c0(this_05);
		FUN_001a7970((int)this_05);
		if ((this->unlabelled44 & 0x800000U) == 0) {
		FUN_001a7a00((int)this_05);
		}
		else {
		GameResourceManager::FUN_001a79f0(this_05);
		}
		(this_05->parent).field1_0x4 = 0;
		if (this->unlabelled44 < 0) {
		(this_05->parent).field3_0xc = (uint)local_5a << 5 | (this_05->parent).field3_0xc & 0xffffe01fU;
		}
		uVar15 = this->unlabelled44;
		if ((char)(uVar15 >> 8) < '\0') {
		pIVar7 = (ctx_00->parent).transform;
		if ((*(byte *)&pIVar7->field3_0x60 & 4) != 0) {
		fVar1 = (pIVar7->matrix).m44;
		fVar2 = (pIVar7->matrix).m43;
		fVar3 = (pIVar7->matrix).m42;
		(pIVar7->position).x = (pIVar7->matrix).m41;
		(pIVar7->position).y = fVar3;
		(pIVar7->position).z = fVar2;
		(pIVar7->position).w = fVar1;
		pIVar7->field3_0x60 = (float)((uint)pIVar7->field3_0x60 & 0xfffffffa);
		}
		local_30 = (pIVar7->position).x;
		local_2c = (pIVar7->position).y;
		local_28 = (pIVar7->position).z;
		local_24 = (pIVar7->position).w;
		this_06 = (InstanceContext *)FUN_001a9c40(this_05,pCVar12,uVar22,&local_30,&local_3c);
		bVar23 = *(byte *)&this->unlabelled44;
		if (bVar23 == 0xff) {
		bVar23 = 0xff;
		}
		FUN_001a7c70((int)fVar6,(int **)this_06,0,bVar23,(undefined4 *)0x0);
		if (this_06 == (InstanceContext *)0x0) goto LAB_0019b856;
		(this_06->parent).field14_0x20.field6_0x18 = ctx_00;
		(ctx_00->parent).field14_0x20.field6_0x18 = this_06;
		}
		else {
		bVar23 = *(byte *)&this->unlabelled40;
		if ((uVar15 & 0x40000) == 0) {
		if ((uVar15 & 0x20000) == 0) {
		if ((*(byte *)&this->unlabelled48 & 1) != 0) {
		bVar23 = 0xf6;
		}
		}
		else {
		bVar23 = 0xfc;
		}
		}
		else {
		bVar23 = 0xfb;
		}
		if ((char)uVar15 == -1) {
		if ((uVar15 & 0x4000) == 0) {
		piVar17 = (int *)0x0;
		}
		else {
		piVar17 = &this->unlabelled16;
		}
		FUN_00176960(&local_30,uVar15 >> 8 & 0x1f,(int)ctx,(float *)piVar17,bVar23,0xff);
		if ((this->unlabelled44 & 0x100000U) == 0) {
		if ((this->unlabelled44 & 0x1000000U) == 0) {
		LAB_0019b572:this_06 = (InstanceContext *)FUN_001a9c40(this_05,pCVar12,uVar22,&local_30,&local_3c);
		}
		else {
		this_06 = (InstanceContext *)FUN_001aa520(this_05,pCVar12,local_44,uVar22,&local_30,&local_3c,'\0');
		}
		}
		else {
		this_06 = (InstanceContext *)FUN_001aa520(this_05,pCVar12,local_44,uVar22,&local_30,&local_3c,'\0');
		}
		}
		else {
		pIVar14 = (InstanceNodeOGI *)InstanceDataList::GetNode(&ctx_00->nodes,OGI);
		if (((pIVar14->field4_0x24 != (InstanceNodeOGISub *)0x0) &&(pMVar8 = pIVar14->field4_0x24->matrixArray2, pMVar8 != (Matrix4Array *)0x0)) &&(pMVar16 = pMVar8->array[*(byte *)&this->unlabelled44], pMVar16 != (Matrix4 *)0x0)) {
		piVar17 = &local_3c;
		pMVar16 = FUN_001f8be0(pMVar16);
		FUN_000e7d90(pMVar16,piVar17);
		}
		if ((this->unlabelled44 & 0x4000U) == 0) {
		piVar17 = (int *)0x0;
		}
		else {
		piVar17 = &this->unlabelled16;
		}
		FUN_001725b0((int)ctx_00,*(byte *)&this->unlabelled44,&local_30,(float *)piVar17);
		if ((this->unlabelled44 & 0x100000U) == 0) {
		if ((this->unlabelled44 & 0x1000000U) == 0) goto LAB_0019b572;
		this_06 = (InstanceContext *)FUN_001aa520(this_05,pCVar12,local_44,uVar22,&local_30,&local_3c,'\0');
		}
		else {
		this_06 = (InstanceContext *)FUN_001aa520(this_05,pCVar12,local_44,uVar22,&local_30,&local_3c,'\0');
		}
		}
		if ((*(byte *)((int)&this->unlabelled44 + 2) & 1) != 0) {
		FUN_001a7c50((int)fVar6,(int)this_06,'\0');
		}
		}
		if (this_06 != (InstanceContext *)0x0) {
		if (this_06->field36_0x164 == -1) {
		piVar17 = (int *)0x0;
		}
		else {
		piVar17 = UF16SUB->array + this_06->field36_0x164 * 2;
		}
		piVar17[1] = (int)ctx_00;
		this_03 = (InstanceNodeInstance *)InstanceDataList::GetNode(&this_06->nodes,Instance);
		puVar9 = (this_03->body).field49_0x80;
		if ((this->unlabelled44 & 0x800000U) != 0) {
		puVar9[0x13] = *(ushort *)((int)fVar6 + 0x26);
		}
		FUN_001ac9e0((int)puVar9);
		if ((this->unlabelled44 & 0x2000000U) != 0) {
		pIVar19 = InstanceNodeObjectLink::Build((int)this_06);
		InstanceNodeObjectLink::FUN_000f6cd0(pIVar19,(int)ctx_00,'\0');
		}
		if (*(short *)((int)&this->unlabelled40 + 2) != -1) {
		this_07 = (UnkFamily5AB *)VirtualPool::AllocateMemory(0x14);
		if (this_07 == (UnkFamily5AB *)0x0) {
		pUVar20 = (UnkFamily5AA *)0x0;
		}
		else {
		uVar24 = 2;
		if (ctx_00 == (InstanceContext *)0x0) {
		pUVar20 = (UnkFamily5AA *)UnkFamily5AB::Construct(this_07,*(undefined2 *)((int)&this->unlabelled40 + 2),(InstanceContextSmartPtr)0x0,2);
		}
		else {
		IVar21 = (InstanceContextSmartPtr)InstanceContextSmartPtr::CreateRef(&ctx_00->smartPtr,ctx_00,0);
		pUVar20 = (UnkFamily5AA *)UnkFamily5AB::Construct(this_07,*(undefined2 *)((int)&this->unlabelled40 + 2),IVar21,uVar24);
		}
		}
		if (pUVar20 != (UnkFamily5AA *)0x0) {
		pUVar20 = (UnkFamily5AA *)UnkFamily5SomeStruct::CreatePayload(&(pUVar20->parent).parent.someStruct,pUVar20,1);
		}
		InstanceContext::FUN_000fa200(this_06,(char)pUVar20);
		}
		if ((this->unlabelled44 & 0x2000U) != 0) {
		uVar22 = (this_06->parent).flags;
		(this_06->parent).flags = uVar22 & 0xffffffef;
		(this_06->parent).flags = uVar22 & 0xffffffe7;
		}
		if ((*(byte *)&this->unlabelled48 & 2) != 0) {
		piVar17 = &(this_06->parent).flags;
		*piVar17 = *piVar17 | 0x100;
		}
		if ((*(byte *)&this->unlabelled48 & 4) != 0) {
		piVar17 = &(this_06->parent).flags;
		*piVar17 = *piVar17 & 0xfffffeff;
		}
		bVar23 = *(byte *)((int)&this->unlabelled40 + 1);
		if (bVar23 != 0) {
		if (bVar23 == 0xff) {
		(this_03->body).parent.field2_0x6 = 0xffff;
		}
		else {
		(this_03->body).parent.field2_0x6 = (ushort)bVar23 * (ushort)bVar23;
		}
		}
		if ((this->unlabelled44 & 0x200000U) != 0) {
		fVar6 = (this_04->parent).field14_0x20.matrix2.m43;
		(this_04->parent).field14_0x20.field4_0x10 = this_06;
		(this_04->parent).field14_0x20.matrix2.m43 = (float)((uint)fVar6 & 0xfffffffd | 1);
		}
		if ((this->unlabelled44 & 0x400000U) != 0) {
		(this_04->nodes).array[0xd] = (InstanceNodeAbstract *)this_06;
		}
		if ((this->unlabelled44 & 0x4000000U) != 0) {
		pIVar10 = (this_04->nodes).array[0xc];
		if ((pIVar10 != (InstanceNodeAbstract *)0x0) && ((*(byte *)&pIVar10->field6_0x14 & 1) != 0)) {
		(this_04->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		}
		this_03[1].body.field41_0x3c.vec1.z = (float)(this_04->nodes).array[0xc];
		}
		if ((this->unlabelled44 & 0x8000000U) != 0) {
		pIVar10 = (this_04->nodes).array[0xd];
		if (((pIVar10 != (InstanceNodeAbstract *)0x0) && ((*(byte *)&pIVar10->field6_0x14 & 1) != 0))&& ((~(byte)((uint)(this_04->parent).field14_0x20.matrix2.m43 >> 0x14) & 1) != 0)) {
		(this_04->nodes).array[0xd] = (InstanceNodeAbstract *)0x0;
		}
		this_03[1].body.field41_0x3c.vec1.w = (float)(this_04->nodes).array[0xd];
		}
		if ((this->unlabelled44 & 0x10000000U) != 0) {
		FUN_0018b930((int)this_03,(int)this_04);
		}
		if (((this->unlabelled44 & 0x20000000U) != 0) &&(uVar24 = InstanceNodeInstance::FUN_0016be20((InstanceNodeInstance *)this_04,local_20),(char)uVar24 != '\0')) {
		InstanceContext::FUN_0016dda0((InstanceContext *)this_03,local_20);
		}
		if (((this->unlabelled44 & 0x40000000U) != 0) &&(pIVar18 = (InstanceNodeObjectLink *)InstanceDataList::GetNode(&ctx_00->nodes,ObjectLink),pIVar18 != (InstanceNodeObjectLink *)0x0)) {
		pIVar19 = InstanceNodeObjectLink::Build((int)this_06);
		InstanceNodeObjectLink::FUN_000f6d60(pIVar19,(int)pIVar18);
		}
		if (((*(byte *)&this->unlabelled48 & 8) != 0) &&(bVar11 = (*this_03->vtable->IsC)(), bVar11 != false)) {
		FUN_001880b0((void *)this_03[1].body.field41_0x3c.vec2.y,(int *)(this_04->nodes).array[0xf]);
		}
		if (((*(byte *)&this->unlabelled48 & 0x10) != 0) &&(bVar11 = (*this_03->vtable->IsC)(), bVar11 != false)) {
		FUN_00188150((int)this_03[1].body.field41_0x3c.vec2.y,(int)(this_04->nodes).array[0xf]);
		}
		(this_03->body).field51_0x88 = cVar4;
		}
		LAB_0019b856:FUN_001a7a00((int)this_05);
		(this_05->parent).field3_0xc = (this_05->parent).field3_0xc | 0x1fe0;
		return;
		}
		
	*/
	return;
}

void ActionSpawnResidentAgent::Construct(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionSpawnResidentAgent * __thiscall ActionSpawnResidentAgent::Construct(ActionSpawnResidentAgent *this,byte param_1){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_SpawnResidentAgent;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		this->unlabelled24 = 0;
		this->unlabelled28 = (int)FLOAT_0038639c;
		this->unlabelled32 = 0;
		*(undefined2 *)&this->unlabelled36 = 0xffff;
		this->unlabelled40 = this->unlabelled40 | 0xff;
		*(undefined *)((int)&this->unlabelled40 + 1) = 0;
		this->unlabelled40 = this->unlabelled40 | 0xffff0000;
		this->unlabelled44 = (param_1 & 1) << 0x18 | 0x2ff;
		this->unlabelled48 = this->unlabelled48 & 0xffffffe0;
		return this;
		}
		
	*/
	return;
}

void ActionSpawnResidentAgent::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionSpawnResidentAgent::UnkMethod(ActionSpawnResidentAgent *this,int *param_1){
		ushort uVar1;
		bool bVar2;
		ushort *this_00;
		int iVar3;
		float fVar4;
		float fVar5;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		bVar2 = IteratorE2::IsEnd(&local_10);
		if (bVar2 == false) {
		do {
		this_00 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		iVar3 = FUN_00180820(this_00,(uint)this->unlabelled44 >> 8 & 0x1f);
		this->unlabelled44 = this->unlabelled44 ^ (iVar3 << 8 ^ this->unlabelled44) & 0x1f00U;
		FUN_0017f260(this_00,(uint *)&this->unlabelled16);
		uVar1 = *this_00;
		if (uVar1 < 0x8a) {
		switch(uVar1) {
		case 7:*(char *)&this->unlabelled40 = *(char *)(this_00 + 2) + -1;
		break;
		case 8:case 9:case 10:case 0xb:case 0xc:case 0xd:case 0xe:case 0xf:case 0x10:case 0x11:case 0x13:case 0x14:case 0x15:case 0x16:case 0x17:case 0x18:case 0x19:case 0x1a:case 0x1b:case 0x1c:case 0x1d:case 0x1e:case 0x1f:case 0x20:case 0x21:case 0x22:case 0x23:case 0x24:case 0x25:case 0x26:case 0x27:case 0x28:case 0x29:case 0x2a:case 0x2b:case 0x2c:case 0x2d:case 0x2e:case 0x2f:case 0x30:case 0x31:case 0x32:case 0x33:case 0x34:case 0x35:case 0x36:case 0x37:case 0x38:case 0x39:case 0x3a:case 0x3b:case 0x3c:case 0x3d:case 0x3e:case 0x3f:case 0x40:case 0x41:case 0x42:case 0x43:case 0x44:case 0x45:case 0x46:case 0x47:case 0x48:case 0x49:case 0x4a:case 0x4b:case 0x4c:case 0x4d:case 0x4e:case 0x4f:case 0x50:case 0x51:case 0x52:case 0x53:case 0x54:case 0x55:case 0x56:case 0x57:case 0x58:case 0x59:case 0x5a:case 0x5b:case 0x5c:case 0x5d:case 0x5e:case 0x5f:case 0x60:case 0x61:case 0x62:case 99:case 100:case 0x65:case 0x66:case 0x67:case 0x68:case 0x69:case 0x6a:case 0x6b:case 0x6c:case 0x6e:break;
		case 0x12:*(undefined *)&this->unlabelled44 = *(undefined *)(this_00 + 2);
		break;
		case 0x6d:*(ushort *)((int)&this->unlabelled40 + 2) = this_00[2];
		break;
		case 0x6f:this->unlabelled44 = this->unlabelled44 | 0x80000000;
		this->unlabelled32 = this->unlabelled32 & 0xfffffff9;
		FUN_00180840(this_00,(US002 *)&this->unlabelled32);
		break;
		default:*(ushort *)&this->unlabelled36 = this_00[2];
		}
		}
		else if (uVar1 == 0x9b) {
		*(undefined *)((int)&this->unlabelled40 + 1) = *(undefined *)(this_00 + 2);
		}
		else if (uVar1 == 0x9d) {
		bVar2 = FUN_0017ef90((int)this_00);
		this->unlabelled44 =this->unlabelled44 ^ ((uint)bVar2 << 0x17 ^ this->unlabelled44) & 0x800000;
		}
		else if ((uVar1 == 0xffff) && (*(char *)(this_00 + 1) == '\x04')) {
		switch(*(undefined4 *)(this_00 + 2)) {
		case 0x1c:this->unlabelled44 = this->unlabelled44 | 0x40000;
		break;
		case 0x1d:this->unlabelled44 = this->unlabelled44 | 0x20000;
		break;
		case 0x20:this->unlabelled44 = this->unlabelled44 | 0x100000;
		break;
		case 0x24:*(undefined *)&this->unlabelled40 = 0xfe;
		break;
		case 0x25:*(undefined *)&this->unlabelled40 = 0xfd;
		break;
		case 0x3c:this->unlabelled44 = this->unlabelled44 | 0x8000;
		break;
		case 0x4d:this->unlabelled48 = this->unlabelled48 | 2;
		break;
		case 0x4e:this->unlabelled48 = this->unlabelled48 | 4;
		break;
		case 0x6b:this->unlabelled44 = this->unlabelled44 | 0x80000;
		break;
		case 0x6c:this->unlabelled44 = this->unlabelled44 | 0x10000;
		break;
		case 0x6e:this->unlabelled44 = this->unlabelled44 | 0x2000;
		break;
		case 0x73:this->unlabelled44 = this->unlabelled44 | 0x200000;
		break;
		case 0x77:this->unlabelled44 = this->unlabelled44 | 0x400000;
		break;
		case 0x79:this->unlabelled44 = this->unlabelled44 | 0x4000000;
		break;
		case 0x7a:this->unlabelled48 = this->unlabelled48 | 1;
		break;
		case 0x87:this->unlabelled44 = this->unlabelled44 | 0x2000000;
		break;
		case 0x9c:this->unlabelled44 = this->unlabelled44 | 0x10000000;
		break;
		case 0x9d:this->unlabelled44 = this->unlabelled44 | 0x20000000;
		break;
		case 0x9f:this->unlabelled44 = this->unlabelled44 | 0x8000000;
		break;
		case 0xab:this->unlabelled44 = this->unlabelled44 | 0x40000000;
		break;
		case 0xcc:this->unlabelled48 = this->unlabelled48 | 8;
		break;
		case 0xd0:this->unlabelled48 = this->unlabelled48 | 0x10;
		}
		}
		IteratorE2::Iterate(&local_10);
		bVar2 = IteratorE2::IsEnd(&local_10);
		}
		 while (bVar2 == false);
		}
		fVar5 = (float)this->unlabelled16;
		if (fVar5 < 0.0) {
		fVar5 = 0.0 - fVar5;
		}
		if (fVar5 <= DAT_004962d0) {
		fVar5 = (float)this->unlabelled20;
		if (fVar5 < 0.0) {
		fVar5 = 0.0 - fVar5;
		}
		if (fVar5 <= DAT_004962d0) {
		fVar5 = (float)this->unlabelled24;
		fVar4 = 0.0 - fVar5;
		if (0.0 <= fVar5) {
		fVar4 = fVar5;
		}
		if (fVar4 <= DAT_004962d0) {
		return;
		}
		}
		}
		this->unlabelled44 = this->unlabelled44 | 0x4000;
		return;
		}
		
	*/
	return;
}

int ActionSpawnResidentAgent::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionSpawnResidentAgent::GetSize(void){
		return 0x40;
		}
		
	*/
	return 0;
}

