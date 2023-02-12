#include "headers/Known/Iterators/TypeB/Iterator2X/Iterator24/IteratorB24.h"

#include "headers/Known/GameData/CollisionSurface/CollisionSurface.h"
uint IteratorB24::End() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __fastcall IteratorB24::End(IteratorB24 *this){
		if ((-1 < this->field3_0x8) && ((uint)this->field3_0x8 < *(uint *)(*(int *)&this->field1_0x4 + 4))) {
		return 0;
		}
		return 1;
		}
		
	*/
	return 0;
}

CollisionSurface** IteratorB24::Get() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	CollisionSurface ** __fastcall IteratorB24::Get(IteratorB24 *this){
		return (CollisionSurface **)(**(int **)&this->field1_0x4 + this->field3_0x8 * 4);
		}
		
	*/
	return null;
}

void IteratorB24::Rewind() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB24::Rewind(IteratorB24 *this){
		this->field3_0x8 = 0;
		return;
		}
		
	*/
	return;
}

void IteratorB24::Iterate() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB24::Iterate(IteratorB24 *this){
		this->field3_0x8 = this->field3_0x8 + 1;
		return;
		}
		
	*/
	return;
}

void IteratorB24::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB24::Construct(IteratorB24 *this,undefined4 param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_24;
		*(undefined4 *)&this->field1_0x4 = param_1;
		this->field3_0x8 = 0;
		return;
		}
		
	*/
	return;
}

void IteratorB24::SeekEnd() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB24::SeekEnd(IteratorB24 *this){
		this->field3_0x8 = *(int *)(*(int *)&this->field1_0x4 + 4) + -1;
		return;
		}
		
	*/
	return;
}

void IteratorB24::Previous() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall IteratorB24::Previous(IteratorB24 *this){
		this->field3_0x8 = this->field3_0x8 + -1;
		return;
		}
		
	*/
	return;
}

void IteratorB24::Set(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall IteratorB24::Set(IteratorB24 *this,int param_1){
		*(undefined4 *)&this->field1_0x4 = *(undefined4 *)(param_1 + 4);
		this->field3_0x8 = *(int *)(param_1 + 8);
		return;
		}
		
	*/
	return;
}

int IteratorB24::Get2() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __fastcall IteratorB24::Get2(IteratorB24 *this){
		return **(int **)&this->field1_0x4 + this->field3_0x8 * 4;
		}
		
	*/
	return 0;
}

void IteratorB24::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall IteratorB24::Dispose(IteratorB24 *this,byte param_1){
		(this->parent).parent.vtable = (IteratorBBase_VTable *)&IteratorB_VT_24_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return &this->parent;
		}
		
	*/
	return;
}

