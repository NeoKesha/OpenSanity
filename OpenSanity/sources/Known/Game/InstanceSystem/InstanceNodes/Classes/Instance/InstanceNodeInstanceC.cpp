#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Instance/InstanceNodeInstanceC.h"

void InstanceNodeInstanceC::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceNodeInstanceC::Dispose(InstanceNodeInstanceC *this){
		AutoClass52 *ptr;
		this->vtable = (InstanceNodeInstance_VTable *)&InstanceNode_VT_Instance_C;
		FUN_00175240((int)this);
		ptr = (this->body).parent.field42_0x6c;
		(this->body).parent.field61_0x9c.w = 0.0;
		this->vtable = (InstanceNodeInstance_VTable *)&InstanceNode_VT_Instance;
		if (ptr != (AutoClass52 *)0x0) {
		TwinString::Dispose(&ptr->chunkName);
		VirtualPool::FreeMemory(ptr);
		}
		TwinString::Dispose(&(this->body).parent.field41_0x3c.chunkName);
		InstanceNodeAbstract::UnrollVtable((InstanceNodeAbstract *)this);
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceC::Dispose_1(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeInstanceC * __thiscall InstanceNodeInstanceC::Dispose(InstanceNodeInstanceC *this,byte param_1){
		AutoClass52 *ptr;
		this->vtable = (InstanceNodeInstance_VTable *)&InstanceNode_VT_Instance_C;
		FUN_00175240((int)this);
		ptr = (this->body).parent.field42_0x6c;
		(this->body).parent.field61_0x9c.w = 0.0;
		this->vtable = (InstanceNodeInstance_VTable *)&InstanceNode_VT_Instance;
		if (ptr != (AutoClass52 *)0x0) {
		TwinString::Dispose(&ptr->chunkName);
		VirtualPool::FreeMemory(ptr);
		}
		TwinString::Dispose(&(this->body).parent.field41_0x3c.chunkName);
		InstanceNodeAbstract::UnrollVtable((InstanceNodeAbstract *)this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

bool InstanceNodeInstanceC::InstanceMethod7(uint param_1, uint param_2, char param_3, byte param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall InstanceNodeInstanceC::InstanceMethod7(InstanceNodeInstanceC *this,uint param_1,uint param_2,char param_3,byte param_4){
		float this_00;
		bool bVar1;
		void *this_01;
		uint *puVar2;
		uint uVar3;
		uVar3 = (uint)param_4;
		this_00 = (&(this->body).parent.field61_0x9c.x)[uVar3];
		if (this_00 != 0.0) {
		bVar1 = FUN_00186c60((int)this_00,param_1,param_2,param_3);
		return bVar1;
		}
		this_01 = VirtualPool::AllocateMemory(0x60);
		if (this_01 == (void *)0x0) {
		puVar2 = (uint *)0x0;
		}
		else {
		puVar2 = FUN_00186a80(this_01,(uint)this,uVar3);
		}
		(&(this->body).parent.field61_0x9c.x)[uVar3] = (float)puVar2;
		puVar2[6] = param_1;
		puVar2[7] = param_2;
		return true;
		}
		
	*/
	return false;
}

void InstanceNodeInstanceC::InstanceMethod10(char param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeInstanceC::InstanceMethod10(InstanceNodeInstanceC *this,char param_1){
		void *pvVar1;
		pvVar1 = (void *)(this->body).parent.field61_0x9c.x;
		if (pvVar1 != (void *)0x0) {
		FUN_00186e40(pvVar1,param_1);
		FUN_00189410((int)pvVar1);
		VirtualPool::FreeMemory(pvVar1);
		(this->body).parent.field61_0x9c.x = 0.0;
		}
		pvVar1 = (void *)(this->body).parent.field61_0x9c.y;
		if (pvVar1 != (void *)0x0) {
		FUN_00186e40(pvVar1,param_1);
		FUN_00189410((int)pvVar1);
		VirtualPool::FreeMemory(pvVar1);
		(this->body).parent.field61_0x9c.y = 0.0;
		}
		return;
		}
		
	*/
	return;
}

void InstanceNodeInstanceC::InstanceMethod8(ushort param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall InstanceNodeInstanceC::InstanceMethod8(InstanceNodeInstanceC *this,ushort param_1){
		uint *puVar1;
		ushort uVar2;
		ScriptAbstract *pSVar3;
		uint uVar4;
		uint uVar5;
		uVar4 = (uint)*(byte *)((this->body).parent.field44_0x74 + 0xf);
		uVar5 = 0;
		if (uVar4 != 0) {
		while (puVar1 = (uint *)FUN_001a8070((this->body).parent.field44_0x74,uVar5),(*(ushort *)puVar1 & 0x3ff) != param_1) {
		uVar5 = uVar5 + 1;
		if (uVar4 <= uVar5) {
		return;
		}
		}
		uVar2 = (ushort)(*puVar1 >> 10) & 0x3fff;
		if (uVar2 == 0xffff) {
		pSVar3 = (ScriptAbstract *)0x0;
		}
		else {
		pSVar3 = ((GameResources->parent).scripts)->elements[uVar2];
		}
		(*this->vtable->InstanceMethod7)((InstanceNodeInstance *)this,(uint)pSVar3,(this->body).parent.field54_0x8c,'\0',(byte)(*puVar1 >> 0x18) & 1);
		}
		return;
		}
		
	*/
	return;
}

uint InstanceNodeInstanceC::IsG() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 InstanceNodeInstanceC::IsG(void){
		return 0;
		}
		
	*/
	return 0;
}

void InstanceNodeInstanceC::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeInstanceC * __fastcall InstanceNodeInstanceC::Construct(InstanceNodeInstanceC *this){
		::InstanceNodeInstance::Construct((InstanceNodeInstance *)this);
		(this->body).parent.field61_0x9c.w = 0.0;
		this->vtable = (InstanceNodeInstance_VTable *)&InstanceNode_VT_Instance_C;
		(this->body).parent.field61_0x9c.x = 0.0;
		(this->body).parent.field61_0x9c.y = 0.0;
		return this;
		}
		
	*/
	return;
}

void InstanceNodeInstanceC::Construct_7(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeInstanceC * __thiscall InstanceNodeInstanceC::Construct(InstanceNodeInstanceC *this,int param_1){
		::InstanceNodeInstance::Construct((InstanceNodeInstance *)this,param_1);
		(this->body).parent.field61_0x9c.w = 0.0;
		this->vtable = (InstanceNodeInstance_VTable *)&InstanceNode_VT_Instance_C;
		(this->body).parent.field61_0x9c.x = 0.0;
		(this->body).parent.field61_0x9c.y = 0.0;
		return this;
		}
		
	*/
	return;
}

void InstanceNodeInstanceC::Construct_8(void* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceNodeInstanceC * __thiscall InstanceNodeInstanceC::Construct(InstanceNodeInstanceC *this,undefined *param_1){
		::InstanceNodeInstance::Construct((InstanceNodeInstance *)this,(ChunkData *)param_1);
		(this->body).parent.field61_0x9c.w = 0.0;
		this->vtable = (InstanceNodeInstance_VTable *)&InstanceNode_VT_Instance_C;
		(this->body).parent.field61_0x9c.x = 0.0;
		(this->body).parent.field61_0x9c.y = 0.0;
		return this;
		}
		
	*/
	return;
}

