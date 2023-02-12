#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0C1.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0C1::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0C1::Dispose(Action0x0C1 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x0C1::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0C1::ExecuteFromCallContext(Action0x0C1 *this,undefined4 time_clock,InstanceContext *ctx){
		float fVar1;
		float fVar2;
		float fVar3;
		InstanceContext *this_00;
		InstanceNodeAbstract *pIVar4;
		InstanceNodeAbstract *pIVar5;
		InstanceTransform *pIVar6;
		uint uVar7;
		int *piVar8;
		float local_48;
		Vector4 local_40;
		float local_30;
		float local_2c;
		float local_28;
		float local_24;
		float local_20;
		float local_1c;
		float local_18;
		float local_14;
		this_00 = (ctx->parent).ctx;
		pIVar4 = (this_00->nodes).array[0x10];
		pIVar5 = (this_00->nodes).array[0x11];
		if ((this->unlabelled32 & 0x100000U) == 0) {
		pIVar6 = (((this_00->parent).ctx)->parent).transform;
		if ((*(byte *)&pIVar6->field3_0x60 & 4) != 0) {
		fVar1 = (pIVar6->matrix).m44;
		fVar2 = (pIVar6->matrix).m43;
		fVar3 = (pIVar6->matrix).m42;
		(pIVar6->position).x = (pIVar6->matrix).m41;
		(pIVar6->position).y = fVar3;
		(pIVar6->position).z = fVar2;
		(pIVar6->position).w = fVar1;
		pIVar6->field3_0x60 = (float)((uint)pIVar6->field3_0x60 & 0xfffffffa);
		}
		local_20 = (pIVar6->position).x;
		local_1c = (pIVar6->position).y;
		local_18 = (pIVar6->position).z;
		local_14 = (pIVar6->position).w;
		local_30 = Vector4_0039ef70.x;
		local_2c = Vector4_0039ef70.y;
		local_28 = Vector4_0039ef70.z;
		local_24 = FLOAT_0038639c;
		if ((this->unlabelled32 & 0x200000U) == 0) {
		piVar8 = (int *)0x0;
		}
		else {
		piVar8 = &this->unlabelled16;
		}
		uVar7 = this->unlabelled32;
		FUN_00176960(&local_30,uVar7 & 0xf,(int)ctx,(float *)piVar8,(byte)(uVar7 >> 0xc),(byte)(uVar7 >> 4));
		fVar1 = (float)pIVar5[6].field6_0x14;
		uVar7 = this->unlabelled32;
		if ((uVar7 & 0x800000) == 0) {
		if ((uVar7 & 0x400000) != 0) {
		FUN_00171280(&local_20,&local_30,fVar1,(float)this->unlabelled36,&local_40.x);
		}
		}
		else {
		local_48 = (float)this->unlabelled36;
		if (((uVar7 & 0x1000000) != 0) && (FLOAT_00386394 < local_2c - local_1c)) {
		local_48 = (float)this->unlabelled36 + (local_2c - local_1c);
		}
		FUN_00171110(&local_20,&local_30,fVar1,local_48,&local_40.x);
		}
		pIVar4[2].vtable = *(InstanceNodeAbstract_VTable **)&pIVar4[1].field2_0x8;
		pIVar4[2].ctx = (InstanceContext *)pIVar4[1].time;
		*(InstanceNodeAbstract **)&pIVar4[2].field2_0x8 = pIVar4[1].field5_0x10;
		pIVar4[2].time = pIVar4[1].field6_0x14;
		}
		else {
		local_40.x = (float)this->unlabelled16;
		local_40.y = (float)this->unlabelled20;
		local_40.z = (float)this->unlabelled24;
		local_40.w = (float)this->unlabelled28;
		pIVar6 = (((this_00->parent).ctx)->parent).transform;
		InstanceTransform::FillMatrix(pIVar6);
		InstanceTransform::FUN_000d3ed0(pIVar6,&local_40);
		pIVar4[2].vtable = *(InstanceNodeAbstract_VTable **)&pIVar4[1].field2_0x8;
		pIVar4[2].ctx = (InstanceContext *)pIVar4[1].time;
		*(InstanceNodeAbstract **)&pIVar4[2].field2_0x8 = pIVar4[1].field5_0x10;
		pIVar4[2].time = pIVar4[1].field6_0x14;
		}
		*(float *)&pIVar4[1].field2_0x8 = local_40.x;
		pIVar4[1].time = (uint)local_40.y;
		pIVar4[1].field5_0x10 = (InstanceNodeAbstract *)local_40.z;
		pIVar4[1].field6_0x14 = (uint)local_40.w;
		FUN_0016ecb0((int)this_00,&local_40.x,(float)this->unlabelled44,(float)this->unlabelled40);
		return;
		}
		
	*/
	return;
}

void Action0x0C1::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x0C1 * __fastcall Action0x0C1::Construct(Action0x0C1 *this){
		float fVar1;
		fVar1 = FLOAT_0038639c;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0C1;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		this->unlabelled24 = 0;
		this->unlabelled28 = (int)fVar1;
		this->unlabelled32 = this->unlabelled32 & 0xfe0ffff2U | 0xffff2;
		this->unlabelled36 = 0;
		this->unlabelled40 = 0;
		this->unlabelled44 = 0;
		return this;
		}
		
	*/
	return;
}

int Action0x0C1::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0C1::GetSize(void){
		return 0x30;
		}
		
	*/
	return 0;
}

void Action0x0C1::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0C1::UnkMethod(Action0x0C1 *this,int *param_1){
		ushort uVar1;
		bool bVar2;
		ushort *this_00;
		uint uVar3;
		float fVar4;
		float fVar5;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		bVar2 = IteratorE2::IsEnd(&local_10);
		if (bVar2 == false) {
		do {
		this_00 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar3 = FUN_0017f240(this_00,(uint)this->unlabelled32 >> 0xc & 0xff);
		uVar3 = this->unlabelled32 ^ (uVar3 << 0xc ^ this->unlabelled32) & 0xff000;
		this->unlabelled32 = uVar3;
		uVar3 = FUN_00180820(this_00,uVar3 & 0xf);
		this->unlabelled32 = this->unlabelled32 ^ (this->unlabelled32 ^ uVar3) & 0xf;
		FUN_0017f260(this_00,(uint *)&this->unlabelled16);
		uVar1 = *this_00;
		if (0x4b < uVar1) {
		if (uVar1 < 0xc6) {
		if (uVar1 == 0xc5) {
		this->unlabelled32 = this->unlabelled32 | 0x1000000;
		goto switchD_001620fb_caseD_41;
		}
		if (uVar1 == 0x9f) {
		this->unlabelled44 = *(int *)(this_00 + 2);
		}
		else if (uVar1 == 0xa0) {
		this->unlabelled40 = *(int *)(this_00 + 2);
		}
		}
		goto switchD_001620fb_caseD_7;
		}
		switch(uVar1) {
		case 6:this->unlabelled32 = (uint)*(byte *)(this_00 + 2) << 4 | this->unlabelled32 & 0xfffff00fU;
		break;
		case 7:case 8:case 9:case 10:case 0xb:case 0xd:case 0xe:case 0xf:case 0x10:case 0x11:case 0x12:case 0x13:case 0x14:case 0x15:case 0x16:case 0x17:case 0x18:case 0x19:case 0x1a:case 0x1b:case 0x1c:case 0x1d:case 0x1e:case 0x1f:case 0x20:case 0x21:case 0x22:case 0x23:case 0x24:case 0x25:case 0x26:case 0x27:case 0x28:case 0x29:case 0x2a:case 0x2b:case 0x2c:case 0x2d:case 0x2e:case 0x2f:case 0x30:case 0x31:case 0x32:case 0x33:case 0x34:case 0x35:case 0x36:case 0x37:case 0x38:case 0x39:case 0x3a:case 0x3b:case 0x3c:case 0x3d:case 0x3e:case 0x3f:case 0x40:case 0x42:case 0x43:case 0x44:case 0x45:case 0x46:case 0x47:case 0x48:break;
		case 0xc:this->unlabelled36 = *(int *)(this_00 + 2);
		uVar3 = this->unlabelled32 | 0x400000;
		goto LAB_001621ac;
		case 0x41:switchD_001620fb_caseD_41:this->unlabelled36 = *(int *)(this_00 + 2);
		uVar3 = this->unlabelled32 | 0x800000;
		goto LAB_001621ac;
		case 0x49:this->unlabelled16 = *(int *)(this_00 + 2);
		this->unlabelled32 = this->unlabelled32 & 0xffdfffffU | 0x100000;
		break;
		case 0x4a:this->unlabelled20 = *(int *)(this_00 + 2);
		uVar3 = this->unlabelled32 & 0xffdfffffU | 0x100000;
		LAB_001621ac:this->unlabelled32 = uVar3;
		break;
		default:this->unlabelled24 = *(int *)(this_00 + 2);
		this->unlabelled32 = this->unlabelled32 & 0xffdfffffU | 0x100000;
		}
		switchD_001620fb_caseD_7:IteratorE2::Iterate(&local_10);
		bVar2 = IteratorE2::IsEnd(&local_10);
		}
		 while (bVar2 == false);
		}
		if ((this->unlabelled32 & 0x100000U) == 0) {
		fVar5 = (float)this->unlabelled16;
		if (fVar5 < 0.0) {
		fVar5 = 0.0 - fVar5;
		}
		if (fVar5 <= FLOAT_003a35c8) {
		fVar5 = (float)this->unlabelled20;
		if (fVar5 < 0.0) {
		fVar5 = 0.0 - fVar5;
		}
		if (fVar5 <= FLOAT_003a35c8) {
		fVar5 = (float)this->unlabelled24;
		fVar4 = 0.0 - fVar5;
		if (0.0 <= fVar5) {
		fVar4 = fVar5;
		}
		if (fVar4 <= FLOAT_003a35c8) {
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

