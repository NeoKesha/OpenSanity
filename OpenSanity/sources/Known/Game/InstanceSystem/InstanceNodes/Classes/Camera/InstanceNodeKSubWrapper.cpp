#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSubWrapper.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
#include "headers/Known/GameController.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated2/NodeRelated2C.h"
void InstanceNodeKSubWrapper::FUN_0007cf40(NodeRelated2C* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubWrapper::FUN_0007cf40(InstanceNodeKSubWrapper *this,NodeRelated2C *param_1){
		(*(code *)((this->struct).parent.parent.vtable)->field5_0x14)(param_1);
		(this->struct).struct4.field14_0x54 =(ushort)((byte)(this->field0_0x0 >> 1) & 1) << 0xe |(this->struct).struct4.field14_0x54 & 0xbfffU;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubWrapper::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeKSubWrapper * __fastcall InstanceNodeKSubWrapper::Construct(InstanceNodeKSubWrapper *this){
		InstanceNodeKSubB::Construct(&this->struct);
		this->field0_0x0 = 0x23;
		return this;
		}
		
	*/
	return;
}

void InstanceNodeKSubWrapper::FUN_0007ce90(GameController* gameController, InstanceContext* ctx1, InstanceContext* ctx2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeKSubWrapper::FUN_0007ce90(InstanceNodeKSubWrapper *this,GameController *gameController,InstanceContext *ctx1,InstanceContext *ctx2){
		ChunkData *this_00;
		undefined4 uVar1;
		InstanceDataList::GetNode(&ctx1->nodes,NodeR);
		this_00 = (ctx2->parent).chunkData;
		this->field0_0x0 =(((uint)((byte)(this->field0_0x0 >> 5) & 1) << 3 | (uint)((byte)(this->field0_0x0 >> 2) & 1))<< 1 | (uint)((byte)(this->field0_0x0 >> 1) & 1)) << 1 |(uint)(*(byte *)&this->field0_0x0 & 1);
		this->field2_0x8 = 0;
		this->field1_0x4 = 0;
		this->field3_0xc = 0;
		this->field4_0x10 = 0;
		if (this_00 != (ChunkData *)0x0) {
		ChunkData::FUN_0013e400(this_00,ctx1);
		}
		(*((this->struct).parent.parent.vtable)->field4_0x10)((InstanceNodeKSubAbstract *)&this->struct,gameController,(uint *)ctx1);
		uVar1 = GameController::FUN_001c7570(gameController,(FontRenderer *)&this->struct,true);
		this[1].field3_0xc = uVar1;
		return;
		}
		
	*/
	return;
}

void InstanceNodeKSubWrapper::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeKSubWrapper::Dispose(InstanceNodeKSubWrapper *this){
		InstanceNodeKSubB *struct;
		struct = &this->struct;
		(struct->parent).parent.vtable = (InstanceNodeKSubAbstract_VTable *)&InstanceNodeKSub_VT_B;
		InstanceNodeKSubModule3B::Dispose(&(this->struct).struct4);
		InstanceNodeKSubModule2B::Dispose(&(this->struct).struct3);
		InstanceNodeKSubModuleAbstract::Unroll(&(this->struct).struct2.parent);
		InstanceNodeKSubModuleAbstract::Unroll(&(this->struct).struct1.parent);
		(struct->parent).parent.vtable = (InstanceNodeKSubAbstract_VTable *)&InstanceNodeKSub_VT_Base;
		InputWrapper::Dispose(&(this->struct).parent.inputWrapper);
		InstanceNodeKSubAbstract::CleanUp((InstanceNodeKSubAbstract *)struct);
		return;
		}
		
	*/
	return;
}

