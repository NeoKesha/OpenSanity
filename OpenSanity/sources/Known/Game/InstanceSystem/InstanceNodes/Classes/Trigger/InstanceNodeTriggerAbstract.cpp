#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Trigger/InstanceNodeTriggerAbstract.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void InstanceNodeTriggerAbstract::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeTriggerAbstract::CleanUp(InstanceNodeTriggerAbstract *this){
		this->vtable = (InstanceNodeTrigger_VTable *)&InstanceNode_VT_Trigger_Abstract;
		FUN_00155860((int)&(this->body).field8_0x5c);
		TwinString::Dispose(&(this->body).field7_0x2c.chunkName);
		InstanceNodeAbstract::UnrollVtable((InstanceNodeAbstract *)this);
		return;
		}
		
	*/
	return;
}

void InstanceNodeTriggerAbstract::UpdateTime() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeTriggerAbstract::UpdateTime(InstanceNodeTriggerAbstract *this){
		InstanceContext *pIVar1;
		pIVar1 = (this->body).parent.ctx;
		(this->body).field8_0x5c = 0;
		(this->body).field1_0x14 = (this->body).field1_0x14 & 0xffdfffff;
		AutoClass52::FUN_000fb0b0(&(this->body).field7_0x2c,pIVar1);
		pIVar1 = (this->body).parent.ctx;
		(*((pIVar1->parent).vtable)->Method1)(pIVar1);
		return;
		}
		
	*/
	return;
}

void InstanceNodeTriggerAbstract::Construct(void* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeTriggerAbstract * __thiscall InstanceNodeTriggerAbstract::Construct(InstanceNodeTriggerAbstract *this,undefined *param_1,int param_2){
		uint uVar1;
		InstanceNodeAbstract::Contruct((InstanceNodeAbstract *)this);
		this->vtable = (InstanceNodeTrigger_VTable *)&InstanceNode_VT_Trigger_Abstract;
		(this->body).field3_0x1c = 0;
		(this->body).field4_0x20 = (int)param_1;
		AutoClass52::Construct(&(this->body).field7_0x2c,(ChunkData *)param_1);
		(this->body).field9_0x60 = 0;
		(this->body).field10_0x64 = 0;
		(this->body).field11_0x68 = 0;
		(this->body).field12_0x6c = 0;
		(this->body).field13_0x70 = 0;
		(this->body).field14_0x74 = 0;
		(this->body).field15_0x78 = 0;
		(this->body).field16_0x7c = 0;
		(this->body).field17_0x80 = 0;
		(this->body).field18_0x84 = 0;
		(this->body).field19_0x88 = 0;
		(this->body).field20_0x8c = 0;
		(this->body).field21_0x90 = 0;
		(this->body).field22_0x94 = 0;
		(this->body).field23_0x98 = 0;
		(this->body).field24_0x9c = 0;
		(this->body).field25_0xa0 = 0;
		(this->body).field26_0xa4 = 0;
		(this->body).field27_0xa8 = 0;
		(this->body).field28_0xac = 0;
		(this->body).field29_0xb0 = 0;
		(this->body).field30_0xb4 = 0;
		(this->body).field31_0xb8 = 0;
		(this->body).field32_0xbc = 0;
		(this->body).field33_0xc0 = 0;
		(this->body).field34_0xc4 = 0;
		(this->body).field35_0xc8 = 0;
		(this->body).field36_0xcc = 0;
		(this->body).field37_0xd0 = 0;
		(this->body).field38_0xd4 = 0;
		(this->body).field39_0xd8 = 0;
		(this->body).field40_0xdc = 0;
		(this->body).field8_0x5c = 0;
		(this->body).field1_0x14 = 0;
		(this->body).field3_0x1c = 0;
		*(undefined *)&(this->body).field1_0x14 = *(undefined *)(param_2 + 0x10);
		uVar1 = (this->body).field1_0x14;
		(this->body).field1_0x14 =uVar1 ^ ((*(uint *)(param_2 + 0x10) >> 0xc & 0xff) << 0x14 ^ uVar1) & 0x100000;
		return this;
		}
		
	*/
	return;
}

void InstanceNodeTriggerAbstract::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeAbstract * __thiscall InstanceNodeTriggerAbstract::Dispose(InstanceNodeTriggerAbstract *this,byte param_1){
		this->vtable = (InstanceNodeTrigger_VTable *)&InstanceNode_VT_Trigger_Abstract;
		FUN_00155860((int)&(this->body).field8_0x5c);
		TwinString::Dispose(&(this->body).field7_0x2c.chunkName);
		InstanceNodeAbstract::UnrollVtable((InstanceNodeAbstract *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (InstanceNodeAbstract *)this;
		}
		
	*/
	return;
}

void InstanceNodeTriggerAbstract::SetCtx(InstanceContext* ctx) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeTriggerAbstract::SetCtx(InstanceNodeTriggerAbstract *this,InstanceContext *ctx){
		AutoClass52::FUN_000f6ab0(&(this->body).field7_0x2c,ctx,1);
		InstanceNodeAbstract::SetCtx((InstanceNodeAbstract *)this,ctx);
		return;
		}
		
	*/
	return;
}

bool InstanceNodeTriggerAbstract::Step(byte* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodeTriggerAbstract::Step(InstanceNodeTriggerAbstract *this,byte *param_1){
		short *psVar1;
		bool bVar2;
		uint *local_84 [33];
		if (((this->body).field1_0x14 & 0x100000U) != 0) {
		return false;
		}
		if ((*param_1 & 1) != 0) {
		if ((this->body).field2_0x18 <= (int)(*(int *)(param_1 + 4) - (this->body).parent.time)) {
		FUN_00155630(local_84,(this->body).field4_0x20,(this->body).field3_0x1c,(int)(this->body).parent.ctx);
		FUN_00155980(this,local_84);
		FUN_00155860((int)local_84);
		bVar2 = InstanceNodeAbstract::Step((InstanceNodeAbstract *)this,(UnkTimePack *)param_1);
		return bVar2;
		}
		psVar1 = &(this->body).parent.field1_0x4;
		*(byte *)psVar1 = *(byte *)psVar1 | 1;
		}
		bVar2 = InstanceNodeAbstract::Step((InstanceNodeAbstract *)this,(UnkTimePack *)param_1);
		return bVar2;
		}
		
	*/
	return false;
}

void InstanceNodeTriggerAbstract::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void InstanceNodeTriggerAbstract::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

