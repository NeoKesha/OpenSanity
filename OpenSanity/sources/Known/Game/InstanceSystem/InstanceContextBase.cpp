#include "headers/Known/Game/InstanceSystem/InstanceContextBase.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
#include "headers/Known/Game/Chunks/ChunkData.h"
#include "headers/Known/Game/InstanceSystem/InstanceTransform.h"
void InstanceContextBase::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceContextBase * __fastcall InstanceContextBase::Construct(InstanceContextBase *this){
		InstanceTransform *transform;
		this->vtable = (InstanceContext_VTable *)&InstanceContext_VT_Base;
		this->field10_0x10 = 0;
		this->flags = 0;
		AutoClass2::FUN_00137310(&this->field14_0x20,this);
		this->chunkData = (ChunkData *)0x0;
		transform = (InstanceTransform *)VirtualPool::AllocateMemory(0x70);
		if (transform != (InstanceTransform *)0x0) {
		transform = InstanceTransform::Construct(transform);
		this->transform = transform;
		InstanceTransform::Init(transform);
		return this;
		}
		this->transform = (InstanceTransform *)0x0;
		InstanceTransform::Init((InstanceTransform *)0x0);
		return this;
		}
		
	*/
	return;
}

void InstanceContextBase::Construct_1(InstanceTransform* transform) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceContextBase * __thiscall InstanceContextBase::Construct(InstanceContextBase *this,InstanceTransform *transform){
		InstanceTransform *pIVar1;
		this->vtable = (InstanceContext_VTable *)&InstanceContext_VT_Base;
		this->field10_0x10 = 0;
		this->flags = 0;
		AutoClass2::FUN_00137310(&this->field14_0x20,this);
		this->chunkData = (ChunkData *)0x0;
		pIVar1 = (InstanceTransform *)VirtualPool::AllocateMemory(0x70);
		if (pIVar1 != (InstanceTransform *)0x0) {
		pIVar1 = InstanceTransform::Copy(pIVar1,transform);
		this->transform = pIVar1;
		return this;
		}
		this->transform = (InstanceTransform *)0x0;
		return this;
		}
		
	*/
	return;
}

void InstanceContextBase::Dispose() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceContextBase::Dispose(InstanceContextBase *this){
		this->vtable = (InstanceContext_VTable *)&InstanceContext_VT_Base;
		VirtualPool::FreeMemory(this->transform);
		AutoClass2::Dispose(&this->field14_0x20);
		return;
		}
		
	*/
	return;
}

void InstanceContextBase::Dispose_3(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall InstanceContextBase::Dispose(InstanceContextBase *this,byte param_1){
		this->vtable = (InstanceContext_VTable *)&InstanceContext_VT_Base;
		VirtualPool::FreeMemory(this->transform);
		AutoClass2::Dispose(&this->field14_0x20);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->vtable;
		}
		
	*/
	return;
}

bool InstanceContextBase::ResetFlag() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall InstanceContextBase::ResetFlag(InstanceContextBase *this){
		int iVar1;
		iVar1 = this->flags;
		this->flags = this->flags & 0xfffffffe;
		return (bool)('\x01' - (((byte)iVar1 & 1) != 1));
		}
		
	*/
	return false;
}

bool InstanceContextBase::SetFlag() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall InstanceContextBase::SetFlag(InstanceContextBase *this){
		byte bool;
		bool = *(byte *)&this->flags;
		this->flags = this->flags | 1;
		return (bool)(~bool & 1);
		}
		
	*/
	return false;
}

uint InstanceContextBase::SetFlag2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __fastcall InstanceContextBase::SetFlag2(InstanceContextBase *this){
		if ((*(byte *)&this->flags & 4) != 0) {
		return 0;
		}
		this->flags = this->flags | 4;
		return 1;
		}
		
	*/
	return 0;
}

void InstanceContextBase::ResetFlag2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall InstanceContextBase::ResetFlag2(InstanceContextBase *this){
		this->flags = this->flags & 0xfffffffd;
		return;
		}
		
	*/
	return;
}

void InstanceContextBase::Construct_8(InstanceTransform* transform, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceContextBase * __thiscall InstanceContextBase::Construct(InstanceContextBase *this,InstanceTransform *transform,int param_2){
		InstanceTransform *pIVar1;
		this->vtable = (InstanceContext_VTable *)&InstanceContext_VT_Base;
		this->field10_0x10 = 0;
		this->flags = 0;
		AutoClass2::FUN_0013e950(&this->field14_0x20,this,(undefined *)param_2);
		this->chunkData = (ChunkData *)0x0;
		pIVar1 = (InstanceTransform *)VirtualPool::AllocateMemory(0x70);
		if (pIVar1 != (InstanceTransform *)0x0) {
		pIVar1 = InstanceTransform::Copy(pIVar1,transform);
		this->transform = pIVar1;
		return this;
		}
		this->transform = (InstanceTransform *)0x0;
		return this;
		}
		
	*/
	return;
}

void InstanceContextBase::Construct_9(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	InstanceContextBase * __thiscall InstanceContextBase::Construct(InstanceContextBase *this,int param_1){
		InstanceTransform *pIVar1;
		this->vtable = (InstanceContext_VTable *)&InstanceContext_VT_Base;
		this->field10_0x10 = 0;
		this->flags = 0;
		AutoClass2::FUN_0013e950(&this->field14_0x20,this,(undefined *)param_1);
		this->chunkData = (ChunkData *)0x0;
		pIVar1 = (InstanceTransform *)VirtualPool::AllocateMemory(0x70);
		if (pIVar1 != (InstanceTransform *)0x0) {
		pIVar1 = InstanceTransform::Construct(pIVar1);
		this->transform = pIVar1;
		InstanceTransform::Init(pIVar1);
		return this;
		}
		this->transform = (InstanceTransform *)0x0;
		InstanceTransform::Init((InstanceTransform *)0x0);
		return this;
		}
		
	*/
	return;
}

