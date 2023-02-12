#include "headers/Known/GameData/Trigger/CameraTrigger.h"

#include "headers/Known/Math/Matrix4.h"
#include "headers/Known/GameData/Trigger/Camera.h"
#include "headers/Known/Memory/Streams/MemoryStream/MemoryStream.h"
void CameraTrigger::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	CameraTrigger * __fastcall CameraTrigger::Construct(CameraTrigger *this){
		TriggerAbstract::Construct((Trigger *)this);
		(this->parent).vtable = (TriggerAbstract_VTable *)&Trigger_VT_Camera;
		this->camera = (Camera *)0x0;
		return this;
		}
		
	*/
	return;
}

void CameraTrigger::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall CameraTrigger::CleanUp(CameraTrigger *this){
		(this->parent).vtable = (TriggerAbstract_VTable *)&Trigger_VT_Camera;
		TriggerAbstract::Dispose(&this->parent);
		return;
		}
		
	*/
	return;
}

void CameraTrigger::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	CameraTrigger * __thiscall CameraTrigger::Dispose(CameraTrigger *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void CameraTrigger::Construct_3(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	CameraTrigger * __thiscall CameraTrigger::Construct(CameraTrigger *this,int param_1){
		TriggerAbstract::Construct((Trigger *)this);
		(this->parent).vtable = (TriggerAbstract_VTable *)&Trigger_VT_Camera;
		this->camera = (Camera *)0x0;
		(*(code *)PTR_FUN_00395450)(param_1);
		return this;
		}
		
	*/
	return;
}

CameraTrigger* CameraTrigger::FUN_001d7020(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	CameraTrigger * __thiscall CameraTrigger::FUN_001d7020(CameraTrigger *this,int param_1){
		undefined4 *puVar1;
		Camera *pCVar2;
		(*((this->parent).vtable)->Copy)(&this->parent,(TriggerAbstract *)param_1);
		pCVar2 = this->camera;
		if (pCVar2 != (Camera *)0x0) {
		if (*(undefined4 **)&pCVar2->mainCamera1 != (undefined4 *)0x0) {
		(**(code **)**(undefined4 **)&pCVar2->mainCamera1)(1);
		}
		if (*(undefined4 **)&pCVar2->mainCamera2 != (undefined4 *)0x0) {
		(**(code **)**(undefined4 **)&pCVar2->mainCamera2)(1);
		}
		VirtualPool::FreeMemory(pCVar2);
		}
		this->camera = (Camera *)0x0;
		if (*(int *)(param_1 + 0x60) != 0) {
		pCVar2 = (Camera *)VirtualPool::AllocateMemory(0x90);
		if (pCVar2 != (Camera *)0x0) {
		puVar1 = *(undefined4 **)(param_1 + 0x60);
		*(undefined4 *)&pCVar2->mainCamera1 = 0;
		*(undefined4 *)&pCVar2->mainCamera2 = 0;
		FUN_001d6c20(pCVar2,puVar1);
		this->camera = pCVar2;
		return this;
		}
		this->camera = (Camera *)0x0;
		}
		return this;
		}
		
	*/
	return null;
}

void CameraTrigger::Read(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CameraTrigger::Read(CameraTrigger *this,MemoryStream *stream){
		Camera *camera;
		TriggerAbstract::Read(&this->parent,stream);
		camera = (Camera *)VirtualPool::AllocateMemory(0x90);
		if (camera != (Camera *)0x0) {
		Camera::Construct(camera,stream);
		this->camera = camera;
		return;
		}
		this->camera = (Camera *)0x0;
		return;
		}
		
	*/
	return;
}

int CameraTrigger::GetBuilderIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int CameraTrigger::GetBuilderIndex(void){
		return 0x1c00;
		}
		
	*/
	return 0;
}

void CameraTrigger::MatrixRelated(Matrix4* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CameraTrigger::MatrixRelated(CameraTrigger *this,Matrix4 *param_1){
		Camera *pCVar1;
		pCVar1 = this->camera;
		if (pCVar1 != (Camera *)0x0) {
		if (*(int **)&pCVar1->mainCamera1 != (int *)0x0) {
		(**(code **)(**(int **)&pCVar1->mainCamera1 + 0x1c))(param_1);
		}
		if (*(int **)&pCVar1->mainCamera2 != (int *)0x0) {
		(**(code **)(**(int **)&pCVar1->mainCamera2 + 0x1c))(param_1);
		}
		}
		TriggerAbstract::MatrixRelated(&this->parent,param_1);
		return;
		}
		
	*/
	return;
}

void CameraTrigger::Write(MemoryStream* stream) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall CameraTrigger::Write(CameraTrigger *this,MemoryStream *stream){
		TriggerAbstract::Write(&this->parent,stream);
		Camera::Write(this->camera,stream);
		return;
		}
		
	*/
	return;
}

bool CameraTrigger::Check(int** param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall CameraTrigger::Check(CameraTrigger *this,int **param_1){
		uint uVar1;
		uint uVar2;
		uVar1 = TriggerAbstract::FUN_001c5ae0(&this->parent,param_1);
		if (param_1[1] == (int *)0x0) {
		uVar2 = FUN_001da590(*param_1,&this->camera,0xa0a,0);
		return (bool)((byte)uVar2 & (byte)uVar1);
		}
		if (param_1[1] != (int *)0x1) {
		return false;
		}
		uVar2 = FUN_001da9c0(*param_1,this->camera,0xa0a,0);
		return (bool)((byte)uVar2 & (byte)uVar1);
		}
		
	*/
	return false;
}

