#include "headers/Known/AgentLab/ActionFactory/Actions/ActionDisplayBottomTextInstance.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void ActionDisplayBottomTextInstance::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionDisplayBottomTextInstance::Dispose(ActionDisplayBottomTextInstance *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionDisplayBottomTextInstance::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionDisplayBottomTextInstance * __fastcall ActionDisplayBottomTextInstance::Construct(ActionDisplayBottomTextInstance *this){
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_BottomTextDisplayInstance;
		this->unlabelled20 = 0;
		this->unlabelled24 = 0;
		this->unlabelled28 = 0;
		this->unlabelled32 = 0;
		return this;
		}
		
	*/
	return;
}

int ActionDisplayBottomTextInstance::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionDisplayBottomTextInstance::GetSize(void){
		return 0x24;
		}
		
	*/
	return 0;
}

void ActionDisplayBottomTextInstance::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDisplayBottomTextInstance::UnkMethod(ActionDisplayBottomTextInstance *this,int *param_1){
		ushort uVar1;
		float fVar2;
		char cVar3;
		ushort *puVar4;
		IteratorE2 local_10;
		this->unlabelled16 = 0;
		this->unlabelled12 = 0;
		IteratorE2::Construct(&local_10,param_1);
		IteratorE2::Rewind(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		while (cVar3 == '\0') {
		puVar4 = (ushort *)(*(local_10.parent)->Get)((IteratorEAbstract *)&local_10);
		fVar2 = FLOAT_0038639c;
		uVar1 = *puVar4;
		if (uVar1 < 0xe) {
		if (uVar1 == 0xd) {
		this->unlabelled20 = *(int *)(puVar4 + 2);
		}
		else if (uVar1 == 0) {
		this->unlabelled12 = *(int *)(puVar4 + 2);
		}
		else if (uVar1 == 1) {
		this->unlabelled16 = *(int *)(puVar4 + 2);
		}
		else if (uVar1 == 0xc) {
		this->unlabelled32 = *(int *)(puVar4 + 2);
		}
		}
		else if (uVar1 == 0xe) {
		this->unlabelled24 = *(int *)(puVar4 + 2);
		}
		else if (uVar1 == 0xf) {
		this->unlabelled28 = *(int *)(puVar4 + 2);
		}
		else if ((uVar1 == 0xffff) && (*(char *)(puVar4 + 1) == '\x04')) {
		switch(*(undefined4 *)(puVar4 + 2)) {
		case 0xec:this->unlabelled20 = (int)FLOAT_0038639c;
		break;
		case 0xed:this->unlabelled24 = (int)FLOAT_0038639c;
		break;
		case 0xee:this->unlabelled28 = (int)FLOAT_0038639c;
		break;
		case 0xef:this->unlabelled28 = (int)FLOAT_0038639c;
		this->unlabelled24 = (int)fVar2;
		break;
		case 0xf0:this->unlabelled20 = (int)FLOAT_0038639c;
		this->unlabelled28 = (int)fVar2;
		break;
		case 0xf1:this->unlabelled20 = (int)FLOAT_0038639c;
		this->unlabelled24 = (int)fVar2;
		break;
		case 0xf2:this->unlabelled20 = 0;
		this->unlabelled28 = 0;
		this->unlabelled24 = 0;
		break;
		case 0xf3:this->unlabelled20 = (int)FLOAT_0038639c;
		this->unlabelled28 = (int)fVar2;
		this->unlabelled24 = (int)fVar2;
		break;
		case 0xf4:this->unlabelled12 = (int)FLOAT_00386ab4;
		this->unlabelled16 = (int)FLOAT_0038ab50;
		}
		}
		IteratorE2::Iterate(&local_10);
		cVar3 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionDisplayBottomTextInstance::ExecuteFromCallContext(uint time_clock, InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDisplayBottomTextInstance::ExecuteFromCallContext(ActionDisplayBottomTextInstance *this,undefined4 time_clock,InstanceContext *ctx){
		float fVar1;
		GameController *pGVar2;
		uint uVar3;
		long lVar4;
		long lVar5;
		long lVar6;
		int iVar7;
		pGVar2 = GameController1;
		uVar3 = BlackboardAbstract::GetIntValue((BlackboardAbstract *)(((ctx->parent).ctx)->parent).field14_0x20.matrix2.m41,0);
		iVar7 = uVar3 + 0x1e;
		if (10 < uVar3) {
		iVar7 = uVar3 + 0x29;
		}
		lVar4 = __ftol2((float)this->unlabelled20 * FLOAT_00386448);
		lVar5 = __ftol2((float)this->unlabelled24 * FLOAT_00386448);
		lVar6 = __ftol2((float)this->unlabelled28 * FLOAT_00386448);
		ctx = (InstanceContext *)CONCAT13(0xff,CONCAT12((char)lVar6,CONCAT11((char)lVar5,(char)lVar4)));
		TwinString::Copy(&(pGVar2->oleg).screenMessage.message,*(char **)(LOCAL_MSG2 + iVar7 * 4));
		fVar1 = FLOAT_0038a838;
		(pGVar2->oleg).screenMessage.field6_0x2c = (int)((float)this->unlabelled32 * TicksPerTime);
		(pGVar2->oleg).screenMessage.color = (Color)ctx;
		(pGVar2->oleg).screenMessage.vec.x = (float)this->unlabelled12;
		(pGVar2->oleg).screenMessage.vec.y = (float)this->unlabelled16;
		(pGVar2->oleg).screenMessage.vec.z = fVar1;
		(pGVar2->oleg).screenMessage.vec.w = fVar1;
		return;
		}
		
	*/
	return;
}

