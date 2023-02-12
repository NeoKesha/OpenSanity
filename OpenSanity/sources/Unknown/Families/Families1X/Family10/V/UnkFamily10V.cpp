#include "headers/Unknown/Families/Families1X/Family10/V/UnkFamily10V.h"

void UnkFamily10V::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkFamily10V * __thiscall UnkFamily10V::Dispose(UnkFamily10V *this,byte param_1){
		(this->parent).vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		UnkFamily10Base::CleanUp(&this->parent);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void UnkFamily10V::Construct(uint name, uint param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall UnkFamily10V::Construct(UnkFamily10V *this,char *name,int param_2){
		UnkFamily10Base::Construct(&this->parent,name,1);
		(this->parent).vtable = (UnkFamily10Base_VTable *)&UnkFamily10_VT_V;
		(this->parent).field7_0x1c = param_2;
		return (undefined4 *)this;
		}
		
	*/
	return;
}

