#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x092.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x092::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x092::Dispose(Action0x092 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x092::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x092::ExecuteFromCallContext(Action0x092 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *this_00;
		int iVar1;
		float fVar2;
		InstanceContext *pIVar3;
		InstanceNodeAbstract *pIVar5;
		InstanceNodeObjectLink *pIVar4;
		InstanceContext *pIVar6;
		uint uVar7;
		Vector4 local_20;
		this_00 = (ctx->parent).ctx;
		iVar1 = (this_00->parent).field14_0x20.field27_0x78;
		if ((this->unlabelled12 & 0x400U) == 0) {
		if ((this->unlabelled12 & 0x800U) == 0) {
		if (iVar1 == 0) {
		pIVar6 = (this_00->parent).ctx;
		}
		else {
		pIVar6 = *(InstanceContext **)(iVar1 + 4);
		}
		}
		else {
		pIVar5 = (this_00->nodes).array[0xc];
		if ((pIVar5 != (InstanceNodeAbstract *)0x0) && ((*(byte *)&pIVar5->field6_0x14 & 1) != 0)) {
		(this_00->nodes).array[0xc] = (InstanceNodeAbstract *)0x0;
		}
		pIVar6 = (InstanceContext *)(this_00->nodes).array[0xc];
		}
		}
		else {
		fVar2 = (this_00->parent).field14_0x20.matrix2.m43;
		pIVar6 = (InstanceContext *)0x0;
		if (((((uint)fVar2 & 1) != 0) &&(pIVar3 = (this_00->parent).field14_0x20.field4_0x10, pIVar3 != (InstanceContext *)0x0)) &&(pIVar6 = pIVar3, (*(byte *)&(pIVar3->parent).flags & 1) != 0)) {
		(this_00->parent).field14_0x20.field4_0x10 = (InstanceContext *)0x0;
		(this_00->parent).field14_0x20.matrix2.m43 = (float)((uint)fVar2 & 0xfffffffc);
		pIVar6 = (InstanceContext *)0x0;
		}
		}
		if ((this->unlabelled12 & 0x100U) == 0) {
		uVar7 = this->unlabelled12 & 0xff;
		if (uVar7 < 0xde) {
		iVar1 = (ctx->parent).flags;
		if (iVar1 == 0) {
		return;
		}
		pIVar6 = *(InstanceContext **)(iVar1 + 4 + (uint)*(byte *)&this->unlabelled12 * 4);
		}
		else {
		pIVar6 = (*(this_00->parent).vtable[7].Dispose)(this_00,(byte)uVar7);
		}
		}
		else {
		pIVar4 = (InstanceNodeObjectLink *)InstanceDataList::GetNode(&pIVar6->nodes,ObjectLink);
		if (pIVar4 == (InstanceNodeObjectLink *)0x0) {
		return;
		}
		uVar7 = this->unlabelled12;
		if ((uVar7 & 0x200) == 0) {
		if ((char)(uVar7 >> 8) < '\0') {
		pIVar6 = (&(pIVar4->field9_0x20).ctx)[(byte)((*(byte *)&pIVar4->field7_0x18 & 0x1f) - 1)];
		}
		else {
		if ((pIVar4->field7_0x18 & 0x1f) <= (uVar7 & 0xff)) {
		return;
		}
		pIVar6 = (&(pIVar4->field9_0x20).ctx)[uVar7 & 0xff];
		}
		}
		else {
		pIVar6 = (&(pIVar4->field9_0x20).ctx)[pIVar4->field7_0x18 >> 7 & 0x1f];
		}
		}
		if (pIVar6 != (InstanceContext *)0x0) {
		uVar7 = (uint)this->unlabelled12 >> 0xc & 7;
		if (uVar7 == 0) {
		(this_00->parent).field14_0x20.field4_0x10 = pIVar6;
		(this_00->parent).field14_0x20.matrix2.m43 =(float)((uint)(this_00->parent).field14_0x20.matrix2.m43 & 0xfffffffd | 1);
		}
		else {
		if (uVar7 == 1) {
		(this_00->nodes).array[0xc] = (InstanceNodeAbstract *)pIVar6;
		return;
		}
		if (uVar7 == 3) {
		InstanceNodeCharacter::GetPosition((InstanceNodeCharacter *)pIVar6,&local_20);
		InstanceContext::FUN_0016dda0(this_00,&local_20.x);
		return;
		}
		}
		}
		return;
		}
		
	*/
	return;
}

void Action0x092::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x092 * __thiscall Action0x092::Construct(Action0x092 *this,uint param_1){
		uint uVar1;
		uVar1 = this->unlabelled12;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x092;
		this->unlabelled12 = (param_1 & 7) << 0xc | uVar1 & 0xffff00ff | 0xff;
		return this;
		}
		
	*/
	return;
}

void Action0x092::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x092::UnkMethod(Action0x092 *this,int *param_1){
		char cVar1;
		short *this_00;
		uint uVar2;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		do {
		if (cVar1 != '\0') {
		return;
		}
		this_00 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		uVar2 = FUN_0017f240(this_00,this->unlabelled12 & 0xff);
		*(char *)&this->unlabelled12 = (char)uVar2;
		if (*this_00 == 0x72) {
		if (*(int *)(this_00 + 2) < 1) {
		*(undefined *)&this->unlabelled12 = 0;
		}
		else {
		*(char *)&this->unlabelled12 = (char)*(int *)(this_00 + 2) + -1;
		}
		LAB_0019274f:uVar2 = this->unlabelled12 | 0x100;
		goto LAB_00192754;
		}
		if ((*this_00 == -1) && (*(char *)(this_00 + 1) == '\x04')) {
		switch(*(undefined4 *)(this_00 + 2)) {
		case 0x3d:*(undefined *)&this->unlabelled12 = 0;
		goto LAB_0019274f;
		default:goto switchD_00192709_caseD_3e;
		case 0xa5:uVar2 = this->unlabelled12 | 0x300;
		break;
		case 0xc4:uVar2 = this->unlabelled12 | 0x8100;
		break;
		case 0xc5:uVar2 = this->unlabelled12 | 0x400;
		break;
		case 0xc6:uVar2 = this->unlabelled12 | 0x800;
		}
		LAB_00192754:this->unlabelled12 = uVar2;
		}
		switchD_00192709_caseD_3e:IteratorE2::Iterate(&local_10);
		cVar1 = IteratorE2::IsEnd(&local_10);
		}
		 while( true );
		}
		
	*/
	return;
}

