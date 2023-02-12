#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x099.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x099::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x099::Dispose(Action0x099 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x099::ExecuteFromCallContext(int time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Globals starting with '_' overlap smaller symbols at the same address void __thiscall Action0x099::ExecuteFromCallContext(Action0x099 *this,int time_clock,InstanceContext *ctx){
		float fVar1;
		InstanceContext *this_00;
		InstanceContext *this_01;
		InstanceTransform *pIVar2;
		InstanceNodeAbstract *pIVar3;
		bool bVar4;
		uint uVar5;
		int iVar6;
		InstanceNodeCharacter *pIVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar11;
		float fVar12;
		InstanceNodeCharacter *local_58;
		float local_54;
		Vector4 local_50;
		Vector4 local_40;
		float local_30;
		float local_2c;
		float local_28;
		undefined4 local_20 [7];
		this_00 = (ctx->parent).ctx;
		this_01 = (this_00->parent).ctx;
		pIVar2 = (this_01->parent).transform;
		if ((*(byte *)&pIVar2->field3_0x60 & 4) != 0) {
		fVar9 = (pIVar2->matrix).m44;
		fVar10 = (pIVar2->matrix).m43;
		fVar11 = (pIVar2->matrix).m42;
		(pIVar2->position).x = (pIVar2->matrix).m41;
		(pIVar2->position).y = fVar11;
		(pIVar2->position).z = fVar10;
		(pIVar2->position).w = fVar9;
		pIVar2->field3_0x60 = (float)((uint)pIVar2->field3_0x60 & 0xfffffffa);
		}
		local_30 = (pIVar2->position).x;
		local_2c = (pIVar2->position).y;
		local_28 = (pIVar2->position).z;
		FUN_0016dcc0((int)this_00,local_20);
		local_58 = (InstanceNodeCharacter *)0x0;
		local_50.x = 0.0;
		local_50.y = 0.0;
		local_50.z = 0.0;
		switch(this->unlabelled12 & 0xff) {
		case 0xf6:InstanceNodeInstance::FUN_0016be20((InstanceNodeInstance *)this_00,&local_50.x);
		break;
		case 0xf8:pIVar3 = (this_00->nodes).array[0xc];
		if ((pIVar3 != (InstanceNodeAbstract *)0x0) && ((*(byte *)&pIVar3->field6_0x14 & 1) != 0)) {
		(this_00->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		}
		pIVar7 = (InstanceNodeCharacter *)(this_00->nodes).array[0xc];
		if (pIVar7 == (InstanceNodeCharacter *)0x0) break;
		goto LAB_00194d75;
		case 0xfb:uVar5 = InstanceContext::thunk_FUN_00054ce0(this_00,(int *)&local_58);
		pIVar7 = local_58;
		if ((char)uVar5 == '\0') break;
		LAB_00194d75:InstanceNodeCharacter::GetPosition(pIVar7,&local_50);
		break;
		case 0xfc:thunk_FUN_0005a580((int)this_00,&local_50.x);
		}
		iVar6 = *(int *)&(this_00->parent).field_0xc;
		if (iVar6 == 0) {
		iVar6 = 0;
		}
		else {
		iVar6 = *(int *)(time_clock + 4) - iVar6;
		}
		fVar12 = local_50.z - local_28;
		fVar11 = local_50.y - local_2c;
		fVar10 = local_50.x - local_30;
		pIVar7 = (InstanceNodeCharacter *)(fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10);
		fVar9 = (float)iVar6 * TimePerTick1;
		if ((float)pIVar7 <= _DAT_004962e0) {
		fVar8 = 0.0;
		}
		else {
		local_54 = SQRT((float)pIVar7);
		fVar8 = FLOAT_0038639c / local_54;
		local_58 = pIVar7;
		}
		fVar1 = (float)this->unlabelled20;
		local_40.z = fVar12 * fVar8 * fVar1 * fVar9 + local_28;
		local_40.x = fVar10 * fVar8 * fVar1 * fVar9 + local_30;
		local_40.y = fVar11 * fVar8 * fVar1 * fVar9 + local_2c;
		local_40.w = FLOAT_0038639c;
		FUN_00171380((int)this_01,&local_40.x,1.0,0.0,0x42b40000,'\x01');
		bVar4 = InstanceTransform::SetupPosition((this_01->parent).transform,&local_40);
		if (bVar4 != false) {
		InstanceContext::RegisterCtxPtrToList(this_01);
		}
		return;
		}
		
	*/
	return;
}

void Action0x099::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x099 * __fastcall Action0x099::Construct(Action0x099 *this){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x099;
		this->unlabelled12 = uVar1 | 0xff;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		this->unlabelled24 = 0;
		this->unlabelled28 = 0;
		return this;
		}
		
	*/
	return;
}

int Action0x099::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x099::GetSize(void){
		return 0x20;
		}
		
	*/
	return 0;
}

void Action0x099::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x099::UnkMethod(Action0x099 *this,int *param_1){
		ushort uVar1;
		char cVar2;
		ushort *puVar3;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		while (cVar2 == '\0') {
		puVar3 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar1 = *puVar3;
		if (uVar1 < 0xeb) {
		if (uVar1 == 0xea) {
		this->unlabelled20 = *(int *)(puVar3 + 2);
		}
		else if (uVar1 == 0x39) {
		this->unlabelled16 = *(int *)(puVar3 + 2);
		}
		else if (uVar1 == 0x40) {
		this->unlabelled28 = *(int *)(puVar3 + 2);
		}
		}
		else if (uVar1 == 0xeb) {
		this->unlabelled24 = *(int *)(puVar3 + 2);
		}
		else if ((uVar1 == 0xffff) && (*(char *)(puVar3 + 1) == '\x04')) {
		switch(*(undefined4 *)(puVar3 + 2)) {
		case 0x1c:*(undefined *)&this->unlabelled12 = 0xfb;
		break;
		case 0x1d:*(undefined *)&this->unlabelled12 = 0xfc;
		break;
		case 0x74:*(undefined *)&this->unlabelled12 = 0xf8;
		break;
		case 0x75:*(undefined *)&this->unlabelled12 = 0xf7;
		}
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

