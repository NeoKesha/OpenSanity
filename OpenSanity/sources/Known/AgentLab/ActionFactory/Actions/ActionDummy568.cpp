#include "headers/Known/AgentLab/ActionFactory/Actions/ActionDummy568.h"

void ActionDummy568::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * __thiscall ActionDummy568::Dispose(ActionDummy568 *this,byte param_1){
		ActionAbstract::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

void ActionDummy568::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionDummy568 * __fastcall ActionDummy568::Construct(ActionDummy568 *this){
		float fVar1;
		this->unlabelled12 = (int)FLOAT_00387520;
		this->unlabelled16 = 0;
		this->unlabelled20 = 0;
		this->unlabelled24 = 0;
		fVar1 = FLOAT_00388414;
		(this->parent).nextAction = (ActionAbstract *)0x0;
		(this->parent).field1_0x4 = 0xffffff;
		(this->parent).vtable = (ActionAbstract_VTable *)&Action_VT_Dummy568;
		this->unlabelled28 = (int)fVar1;
		*(undefined2 *)&this->unlabelled32 = 0xffff;
		*(undefined2 *)((int)&this->unlabelled32 + 2) = 0xffff;
		*(undefined2 *)&this->unlabelled36 = 0xffff;
		*(undefined2 *)((int)&this->unlabelled36 + 2) = 0xffff;
		*(undefined2 *)&this->unlabelled40 = 0xffff;
		return this;
		}
		
	*/
	return;
}

int ActionDummy568::GetSize() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	 WARNING: Unknown calling convention yet parameter storage is locked int ActionDummy568::GetSize(void){
		return 0x2c;
		}
		
	*/
	return 0;
}

void ActionDummy568::UnkMethod(int* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDummy568::UnkMethod(ActionDummy568 *this,int *param_1){
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
		if (uVar1 < 0x232) {
		switch(uVar1) {
		case 0x1c:this->unlabelled24 = *(int *)(puVar3 + 2);
		break;
		case 0x1d:case 0x1e:case 0x1f:case 0x20:case 0x21:case 0x22:case 0x23:case 0x24:case 0x25:case 0x26:case 0x27:case 0x28:case 0x29:case 0x2a:case 0x2b:case 0x2c:case 0x2d:case 0x2e:case 0x2f:case 0x30:case 0x31:case 0x32:case 0x33:case 0x34:case 0x35:case 0x36:case 0x37:case 0x38:case 0x3a:case 0x3b:case 0x3c:case 0x3d:case 0x3e:case 0x3f:case 0x40:case 0x41:case 0x42:case 0x43:case 0x44:case 0x45:case 0x46:case 0x47:case 0x48:case 0x49:case 0x4a:case 0x4b:case 0x4c:case 0x4d:case 0x4e:case 0x4f:case 0x50:case 0x51:case 0x52:case 0x53:case 0x54:case 0x55:case 0x56:case 0x57:case 0x58:case 0x59:case 0x5a:case 0x5b:case 0x5c:case 0x5d:case 0x5e:case 0x5f:case 0x60:case 0x61:case 0x62:case 99:case 100:case 0x65:case 0x66:case 0x67:case 0x68:case 0x69:case 0x6a:case 0x6b:case 0x6c:case 0x6d:case 0x6e:case 0x6f:case 0x70:case 0x71:case 0x72:case 0x73:case 0x74:case 0x75:case 0x76:case 0x77:case 0x78:case 0x79:case 0x7b:case 0x7c:case 0x7d:case 0x7e:case 0x7f:case 0x80:case 0x81:case 0x82:case 0x83:case 0x84:case 0x85:case 0x86:case 0x87:case 0x88:case 0x89:case 0x8a:case 0x8b:case 0x8c:case 0x8d:case 0x8e:case 0x8f:case 0x90:case 0x91:case 0x92:case 0x93:case 0x94:case 0x95:case 0x96:case 0x97:case 0x98:case 0x99:case 0x9a:case 0x9b:case 0x9c:case 0x9d:case 0x9e:case 0x9f:case 0xa0:case 0xa1:break;
		case 0x39:this->unlabelled12 = *(int *)(puVar3 + 2);
		break;
		case 0x7a:this->unlabelled28 = *(int *)(puVar3 + 2);
		break;
		case 0xa2:this->unlabelled16 = *(int *)(puVar3 + 2);
		break;
		case 0xa3:this->unlabelled20 = *(int *)(puVar3 + 2);
		break;
		default:*(ushort *)&this->unlabelled32 = puVar3[2];
		}
		}
		else if (uVar1 < 0x235) {
		if (uVar1 == 0x234) {
		*(ushort *)&this->unlabelled40 = puVar3[2];
		}
		else if (uVar1 == 0x232) {
		*(ushort *)((int)&this->unlabelled32 + 2) = puVar3[2];
		}
		else if (uVar1 == 0x233) {
		*(ushort *)&this->unlabelled36 = puVar3[2];
		}
		}
		else if (uVar1 == 0x235) {
		*(ushort *)((int)&this->unlabelled36 + 2) = puVar3[2];
		}
		IteratorE2::Iterate(&local_10);
		cVar2 = IteratorE2::IsEnd(&local_10);
		}
		return;
		}
		
	*/
	return;
}

void ActionDummy568::EmptyFunction() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall ActionDummy568::EmptyFunction(void){
		return;
		}
		
	*/
	return;
}

