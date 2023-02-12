#include "headers/Known/GameData/GameObject/ReferenceHelpers/ReferenceHelper.h"

ushort ReferenceHelper::GetRefenreceIndex() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ushort __fastcall ReferenceHelper::GetRefenreceIndex(ReferenceHelper *this){
		return (short)(this->parent).references + 4 + (short)(this->parent).index * 2;
		}
		
	*/
	return 0;
}

bool ReferenceHelper::FUN_001adb40() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __fastcall ReferenceHelper::FUN_001adb40(ReferenceHelper *this){
		return (this->parent).references == (GameObjectReferenceList *)0x0;
		}
		
	*/
	return false;
}

void ReferenceHelper::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ReferenceHelperAbstract * __thiscall ReferenceHelper::Dispose(ReferenceHelper *this,byte param_1){
		(this->parent).vtable = &ReferenceHelper_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ReferenceHelper::FUN_001adb20() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ReferenceHelper::FUN_001adb20(ReferenceHelper *this){
		GameObjectReferenceList *pGVar1;
		GameObjectReferenceList *pGVar2;
		pGVar1 = *(GameObjectReferenceList **)&(this->parent).field_0x4;
		pGVar2 = pGVar1->next;
		(this->parent).index = 0;
		if (pGVar2 == (GameObjectReferenceList *)0x0) {
		(this->parent).references = (GameObjectReferenceList *)0x0;
		return;
		}
		(this->parent).references = pGVar1;
		return;
		}
		
	*/
	return;
}

void ReferenceHelper::FUN_001adb50() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ReferenceHelper::FUN_001adb50(ReferenceHelper *this){
		GameObjectReferenceList *pGVar1;
		GameObjectReferenceList *pGVar2;
		pGVar2 = (GameObjectReferenceList *)((this->parent).index + 1);
		(this->parent).index = (uint)pGVar2;
		pGVar1 = ((this->parent).references)->next;
		if (pGVar1 < (GameObjectReferenceList *)0x11) {
		if (pGVar1 <= pGVar2) {
		(this->parent).index = 0;
		(this->parent).references = (GameObjectReferenceList *)0x0;
		}
		}
		else if ((GameObjectReferenceList *)0xf < pGVar2) {
		(this->parent).index = 0;
		(this->parent).references = pGVar1;
		return;
		}
		return;
		}
		
	*/
	return;
}

