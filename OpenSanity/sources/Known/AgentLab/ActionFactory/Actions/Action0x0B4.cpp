#include "headers/Known/AgentLab/ActionFactory/Actions/Action0x0B4.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void Action0x0B4::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall Action0x0B4::Dispose(Action0x0B4 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void Action0x0B4::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	Action0x0B4 * __fastcall Action0x0B4::Construct(Action0x0B4 *this){
		float fVar1;
		fVar1 = FLOAT_003869d8;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0B4;
		this->unlabelled12 = -1;
		this->unlabelled16 = (int)fVar1;
		return this;
		}
		
	*/
	return;
}

void Action0x0B4::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0B4::UnkMethod(Action0x0B4 *this,int *param_1){
		float fVar1;
		float fVar2;
		char cVar3;
		short *psVar4;
		IteratorE2 local_10;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		while (cVar3 == '\0') {
		psVar4 = (short *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		fVar2 = FLOAT_0038639c;
		if (*psVar4 == 0x59) {
		fVar1 = *(float *)(psVar4 + 2);
		this->unlabelled16 = (int)fVar1;
		if (fVar2 < fVar1) {
		this->unlabelled16 = (int)FLOAT_003869d8;
		}
		if ((float)this->unlabelled16 <= FLOAT_0038a928 && FLOAT_0038a928 != (float)this->unlabelled16) {
		this->unlabelled16 = (int)FLOAT_0038a928;
		}
		}
		else if (*psVar4 == 0x11a) {
		this->unlabelled12 = *(int *)(psVar4 + 2);
		}
		IteratorE2::Iterate(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void Action0x0B4::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall Action0x0B4::ExecuteFromCallContext(Action0x0B4 *this,undefined4 time_clock,InstanceContext *ctx){
		InstanceContext *pIVar1;
		int iVar2;
		InstanceContext *pIVar3;
		float fVar4;
		pIVar1 = (ctx->parent).ctx;
		iVar2 = (pIVar1->parent).field14_0x20.field27_0x78;
		pIVar3 = (pIVar1->parent).ctx;
		if (iVar2 == 0) {
		fVar4 = (pIVar1->parent).field14_0x20.matrix2.m33;
		}
		else {
		fVar4 = (float)FUN_00015286(iVar2);
		}
		VideoController::FUN_001f4f00(VideoController,fVar4,(int)pIVar3,this->unlabelled12);
		return;
		}
		
	*/
	return;
}

int Action0x0B4::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int Action0x0B4::GetSize(void){
		return 0x14;
		}
		
	*/
	return 0;
}

