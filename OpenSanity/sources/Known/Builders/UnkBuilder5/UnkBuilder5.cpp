#include "headers/Known/Builders/UnkBuilder5/UnkBuilder5.h"

void UnkBuilder5::Dispose(byte flag) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	UnkBuilder5 * __thiscall UnkBuilder5::Dispose(UnkBuilder5 *this,byte flag){
		this->vtable = (UnkBuilder5_VTable *)&Builder_VT_Abstract;
		if ((flag & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void* UnkBuilder5::BUILD(uint id) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	float * UnkBuilder5::BUILD(int id){
		float fVar1;
		float *pfVar2;
		if (id == 0x1507) {
		pfVar2 = (float *)VirtualPool::AllocateMemory(0x70);
		fVar1 = FLOAT_0038639c;
		if (pfVar2 != (float *)0x0) {
		pfVar2[0xf] = FLOAT_0038639c;
		pfVar2[10] = fVar1;
		pfVar2[5] = fVar1;
		*pfVar2 = fVar1;
		pfVar2[4] = 0.0;
		pfVar2[3] = 0.0;
		pfVar2[2] = 0.0;
		pfVar2[1] = 0.0;
		pfVar2[9] = 0.0;
		pfVar2[8] = 0.0;
		pfVar2[7] = 0.0;
		pfVar2[6] = 0.0;
		pfVar2[0xe] = 0.0;
		pfVar2[0xd] = 0.0;
		pfVar2[0xc] = 0.0;
		pfVar2[0xb] = 0.0;
		pfVar2[0x18] = (float)((uint)pfVar2[0x18] & 0xfffffff0);
		pfVar2[0x10] = Vector4_0039ef70.x;
		pfVar2[0x11] = Vector4_0039ef70.y;
		pfVar2[0x12] = Vector4_0039ef70.z;
		pfVar2[0x13] = fVar1;
		pfVar2[0x16] = 0.0;
		pfVar2[0x15] = 0.0;
		pfVar2[0x14] = 0.0;
		pfVar2[0x17] = fVar1;
		return pfVar2;
		}
		}
		else if (id == 0x150d) {
		pfVar2 = (float *)VirtualPool::AllocateMemory(0x10);
		return pfVar2;
		}
		return (float *)0x0;
		}
		
	*/
	return null;
}

void UnkBuilder5::Construct(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall UnkBuilder5::Construct(undefined4 *param_1){
		*param_1 = &Builder_VT_5;
		return;
		}
		
	*/
	return;
}

