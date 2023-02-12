#include "headers/Unknown/Families/Families1X/Family10/UnkFamily10P.h"

void UnkFamily10P::Construct(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily10P * __thiscall UnkFamily10P::Construct(UnkFamily10P *this,int param_1){
		UnkFamily8BA *this_00;
		UnkFamily8BA *element;
		UnkFamily10Base::Construct(&this->parent,"",1);
		(this->parent).field7_0x1c = param_1;
		(this->parent).vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_P;
		this_00 = (UnkFamily8BA *)VirtualPool::AllocateMemory(0x14);
		if (this_00 != (UnkFamily8BA *)0x0) {
		element = UnkFamily8BA::Construct(this_00,5,0xc,&PTR_UnkFamily10_VT_Base_003a3950,1);
		UnkFamily10Base::Add(&this->parent,(UnkFamily8Abstract *)element);
		return this;
		}
		UnkFamily10Base::Add(&this->parent,(UnkFamily8Abstract *)0x0);
		return this;
		}
		
	*/
	return;
}

void UnkFamily10P::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily10P::Dispose(UnkFamily10P *this,byte param_1){
		(this->parent).vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		UnkFamily10Base::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

