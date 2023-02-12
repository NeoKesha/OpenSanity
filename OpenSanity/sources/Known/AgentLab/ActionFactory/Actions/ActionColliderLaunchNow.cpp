#include "headers/Known/AgentLab/ActionFactory/Actions/ActionColliderLaunchNow.h"

#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/InstanceNodeAbstract.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionColliderLaunchNow::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionColliderLaunchNow::Dispose(ActionColliderLaunchNow *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionColliderLaunchNow::ExecuteFromCallContext(InstanceNodeAbstract* time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionColliderLaunchNow::ExecuteFromCallContext(ActionColliderLaunchNow *this,InstanceNodeAbstract *time_clock,InstanceContext *ctx){
		float fVar1;
		float fVar2;
		float fVar3;
		int iVar4;
		InstanceContext *pIVar5;
		InstanceNodeAbstract *pIVar6;
		InstanceNodeAbstract *pIVar7;
		InstanceTransform *pIVar8;
		uint this_00;
		InstanceNodeAbstract_VTable *pIVar9;
		uint uVar10;
		int *piVar11;
		float local_48;
		Vector4 local_40;
		float local_30;
		float local_2c;
		float local_28;
		float local_24;
		float local_20;
		uint local_1c;
		InstanceNodeAbstract *local_18;
		float local_14;
		pIVar5 = (ctx->parent).ctx;
		pIVar6 = (pIVar5->nodes).array[0x11];
		if (pIVar6 != (InstanceNodeAbstract *)0x0) {
		pIVar6[5].field6_0x14 = pIVar6[5].field6_0x14 | 0x1000000;
		pIVar7 = (pIVar5->nodes).array[0x10];
		if ((this->unlabelled32 & 0x100000U) == 0) {
		pIVar8 = (((pIVar5->parent).ctx)->parent).transform;
		if ((*(byte *)&pIVar8->field3_0x60 & 4) != 0) {
		fVar1 = (pIVar8->matrix).m44;
		fVar2 = (pIVar8->matrix).m43;
		fVar3 = (pIVar8->matrix).m42;
		(pIVar8->position).x = (pIVar8->matrix).m41;
		(pIVar8->position).y = fVar3;
		(pIVar8->position).z = fVar2;
		(pIVar8->position).w = fVar1;
		pIVar8->field3_0x60 = (float)((uint)pIVar8->field3_0x60 & 0xfffffffa);
		}
		local_30 = (pIVar8->position).x;
		local_2c = (pIVar8->position).y;
		local_28 = (pIVar8->position).z;
		local_24 = (pIVar8->position).w;
		local_40.x = Vector4_0039ef70.x;
		local_40.y = Vector4_0039ef70.y;
		uVar10 = (uint)this->unlabelled32 >> 0xc & 0xff;
		local_40.z = Vector4_0039ef70.z;
		local_40.w = FLOAT_0038639c;
		if ((uVar10 == 0xfa) || (uVar10 == 0xef)) {
		FUN_00188470((int)(pIVar5->nodes).array[0xf],&local_40.x,(int)pIVar5,(float)this->unlabelled56,(float)this->unlabelled60,(float)this->unlabelled64,'\x01',0.0,0.0);
		}
		else {
		if ((this->unlabelled32 & 0x200000U) == 0) {
		piVar11 = (int *)0x0;
		}
		else {
		piVar11 = &this->unlabelled16;
		}
		uVar10 = this->unlabelled32;
		FUN_00176960(&local_40.x,uVar10 & 0xf,(int)ctx,(float *)piVar11,(byte)(uVar10 >> 0xc),(byte)(uVar10 >> 4));
		}
		if ((this->unlabelled32 & 0x20000000U) == 0) {
		if ((this->unlabelled32 & 0x10000000U) != 0) {
		FUN_00171280(&local_30,&local_40.x,(float)pIVar6[6].field6_0x14,(float)this->unlabelled68,&local_20);
		}
		}
		else {
		local_48 = (float)this->unlabelled68;
		if (((*(byte *)&this->unlabelled36 & 8) != 0) && (FLOAT_00386394 < local_40.y - local_2c)) {
		local_48 = (local_40.y - local_2c) + (float)this->unlabelled68;
		}
		FUN_00171110(&local_30,&local_40.x,(float)pIVar6[6].field6_0x14,local_48,&local_20);
		}
		pIVar7[2].vtable = *(InstanceNodeAbstract_VTable **)&pIVar7[1].field2_0x8;
		pIVar7[2].ctx = (InstanceContext *)pIVar7[1].time;
		*(InstanceNodeAbstract **)&pIVar7[2].field2_0x8 = pIVar7[1].field5_0x10;
		pIVar7[2].time = pIVar7[1].field6_0x14;
		*(float *)&pIVar7[1].field2_0x8 = local_20;
		pIVar7[1].time = local_1c;
		pIVar7[1].field5_0x10 = local_18;
		}
		else {
		local_40.x = (float)this->unlabelled16;
		local_40.y = (float)this->unlabelled20;
		local_40.z = (float)this->unlabelled24;
		local_40.w = (float)this->unlabelled28;
		pIVar8 = (((pIVar5->parent).ctx)->parent).transform;
		InstanceTransform::FillMatrix(pIVar8);
		InstanceTransform::FUN_000d3ed0(pIVar8,&local_40);
		pIVar7[2].vtable = *(InstanceNodeAbstract_VTable **)&pIVar7[1].field2_0x8;
		pIVar7[2].ctx = (InstanceContext *)pIVar7[1].time;
		*(InstanceNodeAbstract **)&pIVar7[2].field2_0x8 = pIVar7[1].field5_0x10;
		pIVar7[2].time = pIVar7[1].field6_0x14;
		*(float *)&pIVar7[1].field2_0x8 = local_40.x;
		pIVar7[1].time = (uint)local_40.y;
		pIVar7[1].field5_0x10 = (InstanceNodeAbstract *)local_40.z;
		local_14 = local_40.w;
		}
		pIVar7[1].field6_0x14 = (uint)local_14;
		if ((*(byte *)((int)&this->unlabelled32 + 3) & 1) != 0) {
		uVar10 = this->unlabelled48;
		pIVar6[5].field6_0x14 = pIVar6[5].field6_0x14 | 0x8000;
		this_00 = pIVar6[8].field6_0x14;
		pIVar6[7].time = uVar10;
		if (this_00 != 0) {
		FUN_001dbc80(this_00,uVar10);
		}
		}
		if ((this->unlabelled32 & 0x800000U) != 0) {
		iVar4 = this->unlabelled44;
		pIVar6[5].field6_0x14 = pIVar6[5].field6_0x14 | 0x4000;
		uVar10 = pIVar6[8].field6_0x14;
		*(int *)&pIVar6[7].field2_0x8 = iVar4;
		if (uVar10 != 0) {
		FUN_001dbcc0(uVar10,iVar4);
		}
		}
		if ((this->unlabelled32 & 0x400000U) != 0) {
		uVar10 = pIVar6[8].field6_0x14;
		pIVar9 = (InstanceNodeAbstract_VTable *)this->unlabelled40;
		pIVar6[5].field6_0x14 = pIVar6[5].field6_0x14 | 0x2000;
		pIVar6[7].vtable = pIVar9;
		if (uVar10 != 0) {
		*(InstanceNodeAbstract_VTable **)(uVar10 + 0x31c) = pIVar9;
		}
		}
		if ((this->unlabelled32 & 0x2000000U) != 0) {
		pIVar5 = (InstanceContext *)this->unlabelled52;
		FUN_0016dd50((int)pIVar6[6].ctx,((((pIVar6[6].ctx)->parent).ctx)->parent).transform);
		uVar10 = pIVar6[5].field6_0x14;
		pIVar6[8].vtable = (InstanceNodeAbstract_VTable *)0x0;
		pIVar6[8].ctx = pIVar5;
		pIVar6[5].field6_0x14 = uVar10 | 0x4000000;
		}
		if ((*(byte *)&this->unlabelled36 & 0x10) == 0) {
		pIVar9 = (InstanceNodeAbstract_VTable *)((uint)pIVar6[6].vtable & 0xfffffffb);
		}
		else {
		pIVar9 = (InstanceNodeAbstract_VTable *)((uint)pIVar6[6].vtable | 4);
		}
		pIVar6[6].vtable = pIVar9;
		if ((this->unlabelled32 & 0x8000000U) != 0) {
		pIVar9 = pIVar6[6].vtable;
		pIVar6[5].field6_0x14 = pIVar6[5].field6_0x14 | 0x2000000;
		pIVar6[6].vtable = (InstanceNodeAbstract_VTable *)((uint)pIVar9 & 0xffff87ff);
		}
		FUN_0015e9c0((int)pIVar6);
		}
		return;
		}
		
	*/
	return;
}

void ActionColliderLaunchNow::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionColliderLaunchNow * __fastcall ActionColliderLaunchNow::Construct(ActionColliderLaunchNow *this){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ColliderLaunchNow;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		this->unlabelled24 = 0;
		this->unlabelled28 = (int)fVar1;
		this->unlabelled32 = this->unlabelled32 & 0xc00ffff2U | 0xffff2;
		this->unlabelled36 = this->unlabelled36 & 0xffffffe0;
		this->unlabelled40 = 0;
		this->unlabelled44 = 0;
		this->unlabelled48 = 0;
		this->unlabelled52 = 0;
		this->unlabelled56 = 0;
		this->unlabelled60 = 0;
		this->unlabelled64 = 0;
		this->unlabelled68 = 0;
		return this;
		}
		
	*/
	return;
}

int ActionColliderLaunchNow::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionColliderLaunchNow::GetSize(void){
		return 0x50;
		}
		
	*/
	return 0;
}

void ActionColliderLaunchNow::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionColliderLaunchNow::UnkMethod(ActionColliderLaunchNow *this,int *param_1){
		ushort uVar1;
		int iVar2;
		bool bVar3;
		ushort *this_00;
		uint uVar4;
		float fVar5;
		float fVar6;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		bVar3 = IteratorE2::IsEnd(&local_10);
		if (bVar3 == false) {
		do {
		this_00 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar4 = FUN_0017f240(this_00,(uint)this->unlabelled32 >> 0xc & 0xff);
		uVar4 = this->unlabelled32 ^ (uVar4 << 0xc ^ this->unlabelled32) & 0xff000;
		this->unlabelled32 = uVar4;
		uVar4 = FUN_00180820(this_00,uVar4 & 0xf);
		this->unlabelled32 = this->unlabelled32 ^ (this->unlabelled32 ^ uVar4) & 0xf;
		FUN_0017f260(this_00,(uint *)&this->unlabelled16);
		uVar1 = *this_00;
		if (uVar1 < 0x74) {
		switch(uVar1) {
		case 6:this->unlabelled32 = (uint)*(byte *)(this_00 + 2) << 4 | this->unlabelled32 & 0xfffff00fU;
		break;
		case 7:case 8:case 9:case 10:case 0xb:case 0xd:case 0xe:case 0xf:case 0x10:case 0x11:case 0x12:case 0x13:case 0x14:case 0x15:case 0x16:case 0x17:case 0x18:case 0x19:case 0x1a:case 0x1b:case 0x1c:case 0x1d:case 0x1e:case 0x1f:case 0x20:case 0x21:case 0x22:case 0x23:case 0x24:case 0x25:case 0x26:case 0x27:case 0x28:case 0x29:case 0x2a:case 0x2b:case 0x2c:case 0x2d:case 0x2e:case 0x2f:case 0x30:case 0x31:case 0x32:case 0x33:case 0x34:case 0x35:case 0x36:case 0x37:case 0x38:case 0x39:case 0x3a:case 0x3b:case 0x3c:case 0x3d:case 0x3e:case 0x40:case 0x42:case 0x43:case 0x44:case 0x45:case 0x46:case 0x47:case 0x48:break;
		case 0xc:this->unlabelled68 = *(int *)(this_00 + 2);
		this->unlabelled32 = this->unlabelled32 | 0x10000000;
		break;
		case 0x3f:this->unlabelled40 = *(int *)(this_00 + 2);
		this->unlabelled32 = this->unlabelled32 | 0x400000;
		break;
		case 0x41:switchD_001619bc_caseD_41:this->unlabelled68 = *(int *)(this_00 + 2);
		this->unlabelled32 = this->unlabelled32 | 0x20000000;
		break;
		case 0x49:this->unlabelled16 = *(int *)(this_00 + 2);
		this->unlabelled32 = this->unlabelled32 & 0xffdfffffU | 0x100000;
		break;
		case 0x4a:this->unlabelled20 = *(int *)(this_00 + 2);
		this->unlabelled32 = this->unlabelled32 & 0xffdfffffU | 0x100000;
		break;
		case 0x4b:this->unlabelled24 = *(int *)(this_00 + 2);
		this->unlabelled32 = this->unlabelled32 & 0xffdfffffU | 0x100000;
		break;
		default:this->unlabelled44 = *(int *)(this_00 + 2);
		this->unlabelled32 = this->unlabelled32 | 0x800000;
		}
		}
		else if (uVar1 < 0xac) {
		if (uVar1 == 0xab) {
		this->unlabelled36 = this->unlabelled36 | 2;
		this->unlabelled60 = *(int *)(this_00 + 2);
		}
		else if (uVar1 == 0x74) {
		this->unlabelled48 = *(int *)(this_00 + 2);
		this->unlabelled32 = this->unlabelled32 | 0x1000000;
		}
		else if (uVar1 == 0x75) {
		this->unlabelled52 = (int)(*(float *)(this_00 + 2) * FLOAT_003a35ac);
		this->unlabelled32 = this->unlabelled32 | 0x2000000;
		}
		else if (uVar1 == 0xaa) {
		this->unlabelled36 = this->unlabelled36 | 1;
		this->unlabelled56 = *(int *)(this_00 + 2);
		}
		}
		else if (uVar1 == 0xac) {
		this->unlabelled36 = this->unlabelled36 | 4;
		this->unlabelled64 = *(int *)(this_00 + 2);
		}
		else {
		if (uVar1 == 0xc5) {
		this->unlabelled36 = this->unlabelled36 | 8;
		goto switchD_001619bc_caseD_41;
		}
		if ((uVar1 == 0xffff) && (*(char *)(this_00 + 1) == '\x04')) {
		iVar2 = *(int *)(this_00 + 2);
		if (iVar2 == 0x42) {
		this->unlabelled32 = this->unlabelled32 | 0x8000000;
		}
		else if (iVar2 == 0x43) {
		this->unlabelled32 = this->unlabelled32 | 0x4000000;
		}
		else if (iVar2 == 0x8e) {
		this->unlabelled36 = this->unlabelled36 | 0x10;
		}
		}
		}
		IteratorE2::Iterate(&local_10);
		bVar3 = IteratorE2::IsEnd(&local_10);
		}
		 while (bVar3 == false);
		}
		if ((this->unlabelled32 & 0x100000U) == 0) {
		fVar6 = (float)this->unlabelled16;
		if (fVar6 < 0.0) {
		fVar6 = 0.0 - fVar6;
		}
		if (fVar6 <= FLOAT_003a35c8) {
		fVar6 = (float)this->unlabelled20;
		if (fVar6 < 0.0) {
		fVar6 = 0.0 - fVar6;
		}
		if (fVar6 <= FLOAT_003a35c8) {
		fVar6 = (float)this->unlabelled24;
		fVar5 = 0.0 - fVar6;
		if (0.0 <= fVar6) {
		fVar5 = fVar6;
		}
		if (fVar5 <= FLOAT_003a35c8) {
		return;
		}
		}
		}
		this->unlabelled32 = this->unlabelled32 | 0x200000;
		}
		return;
		}
		
	*/
	return;
}

