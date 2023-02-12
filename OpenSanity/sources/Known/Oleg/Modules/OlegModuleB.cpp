#include "headers/Known/Oleg/Modules/OlegModuleB.h"

void OlegModuleB::Construct(OlegModuleB* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall OlegModuleB::Construct(OlegModuleB *param_1){
		float fVar1;
		fVar1 = FLOAT_00386ab4;
		(param_1->parent).field2_0x8.x = FLOAT_00386ab4;
		(param_1->parent).field2_0x8.y = fVar1;
		(param_1->parent).value = 0.0;
		(param_1->parent).next = (OlegModuleAbstract *)0x0;
		(param_1->parent).spline = (SplineA *)0x0;
		*(undefined4 *)&(param_1->parent).field_0x28 = 0;
		*(undefined *)&(param_1->parent).field13_0x2c = 0;
		*(undefined *)((int)&(param_1->parent).field13_0x2c + 1) = 0;
		*(undefined *)((int)&(param_1->parent).field13_0x2c + 2) = 0;
		*(undefined *)((int)&(param_1->parent).field13_0x2c + 3) = 0x7f;
		(param_1->parent).field14_0x30 = 0.0;
		(param_1->parent).field15_0x34 = 0.0;
		(param_1->parent).flags = 0;
		(param_1->parent).startTime = 0;
		(param_1->parent).fadeInLength = 0;
		(param_1->parent).fadeOutLength = 0;
		(param_1->parent).vtable = (OlegModuleAbstract_VTable *)&OlegModule_VT_B;
		(param_1->parent).flags = 0x1800;
		param_1->array[1].x = DAT_00496488;
		param_1->array[1].y = DAT_00496488;
		param_1->array[4].x = DAT_0049647c;
		param_1->array[4].y = DAT_00496480;
		param_1->array[5].x = DAT_0049647c;
		param_1->array[5].y = DAT_00496480;
		param_1->array[8].x = FLOAT_003a3944;
		param_1->array[8].y = FLOAT_003a3948;
		param_1->array[9].x = FLOAT_003a3944;
		param_1->array[9].y = FLOAT_003a3948;
		return;
		}
		
	*/
	return;
}

void OlegModuleB::Construct_1(float param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OlegModuleB * __thiscall OlegModuleB::Construct(OlegModuleB *this,float param_1){
		(this->parent).field2_0x8.x = param_1;
		(this->parent).field2_0x8.y = FLOAT_00386ab4;
		(this->parent).value = 0.0;
		(this->parent).next = (OlegModuleAbstract *)0x0;
		(this->parent).spline = (SplineA *)0x0;
		*(undefined4 *)&(this->parent).field_0x28 = 0;
		*(undefined *)&(this->parent).field13_0x2c = 0;
		*(undefined *)((int)&(this->parent).field13_0x2c + 1) = 0;
		*(undefined *)((int)&(this->parent).field13_0x2c + 2) = 0;
		*(undefined *)((int)&(this->parent).field13_0x2c + 3) = 0x7f;
		(this->parent).field14_0x30 = 0.0;
		(this->parent).field15_0x34 = 0.0;
		(this->parent).flags = 0;
		(this->parent).startTime = 0;
		(this->parent).fadeInLength = 0;
		(this->parent).fadeOutLength = 0;
		(this->parent).vtable = (OlegModuleAbstract_VTable *)&OlegModule_VT_B;
		(this->parent).flags = 0x1c00;
		this->array[1].x = DAT_00496488;
		this->array[1].y = DAT_00496488;
		this->array[4].x = DAT_0049647c;
		this->array[4].y = DAT_00496480;
		this->array[5].x = DAT_0049647c;
		this->array[5].y = DAT_00496480;
		this->array[8].x = FLOAT_003a3944;
		this->array[8].y = FLOAT_003a3948;
		this->array[9].x = FLOAT_003a3944;
		this->array[9].y = FLOAT_003a3948;
		return this;
		}
		
	*/
	return;
}

void OlegModuleB::FUN_001a3e80() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall OlegModuleB::FUN_001a3e80(OlegModuleB *this){
		float fVar1;
		float fVar2;
		float fVar3;
		OlegModuleA::FUN_00108ea0(this->array,(this->parent).value,this->array[0].y,this->array[1].y);
		fVar2 = FLOAT_0038639c;
		fVar1 = (this->parent).value;
		fVar3 = FLOAT_0038639c - fVar1;
		this->array[2].x = fVar3 * this->array[3].x + fVar1 * this->array[5].x;
		this->array[2].y = this->array[3].y * fVar3 + this->array[5].y * fVar1;
		fVar1 = (this->parent).value;
		this->array[6].x = this->array[9].x * fVar1 + this->array[7].x * (fVar2 - fVar1);
		this->array[6].y = this->array[7].y * (fVar2 - fVar1) + this->array[9].y * fVar1;
		return;
		}
		
	*/
	return;
}

void OlegModuleB::FUN_001a3f60() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall OlegModuleB::FUN_001a3f60(OlegModuleB *this){
		float fVar1;
		float fVar2;
		float fVar3;
		OlegModuleA::FUN_00108ea0(this->array,(this->parent).value,this->array[0].y,this->array[1].x);
		fVar2 = FLOAT_0038639c;
		fVar1 = (this->parent).value;
		fVar3 = FLOAT_0038639c - fVar1;
		this->array[2].x = fVar3 * this->array[3].x + fVar1 * this->array[4].x;
		this->array[2].y = this->array[3].y * fVar3 + this->array[4].y * fVar1;
		fVar1 = (this->parent).value;
		this->array[6].x = this->array[8].x * fVar1 + this->array[7].x * (fVar2 - fVar1);
		this->array[6].y = this->array[7].y * (fVar2 - fVar1) + this->array[8].y * fVar1;
		return;
		}
		
	*/
	return;
}

void OlegModuleB::FUN_001a3dc0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall OlegModuleB::FUN_001a3dc0(OlegModuleB *this){
		this->array[0].x = this->array[1].x;
		this->array[2].x = this->array[4].x;
		this->array[2].y = this->array[4].y;
		this->array[6].x = this->array[8].x;
		this->array[6].y = this->array[8].y;
		return;
		}
		
	*/
	return;
}

void OlegModuleB::FUN_001a3de0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall OlegModuleB::FUN_001a3de0(OlegModuleB *this){
		this->array[0].y = this->array[0].x;
		this->array[3].x = this->array[2].x;
		this->array[3].y = this->array[2].y;
		this->array[7].x = this->array[6].x;
		this->array[7].y = this->array[6].y;
		return;
		}
		
	*/
	return;
}

void OlegModuleB::FUN_001a3e00() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall OlegModuleB::FUN_001a3e00(OlegModuleB *this){
		this->array[0].x = this->array[1].y;
		this->array[2].x = this->array[5].x;
		this->array[2].y = this->array[5].y;
		this->array[6].x = this->array[9].x;
		this->array[6].y = this->array[9].y;
		return;
		}
		
	*/
	return;
}

void OlegModuleB::FUN_001a3e30() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall OlegModuleB::FUN_001a3e30(OlegModuleB *this){
		this->array[0].y = this->array[0].x;
		this->array[3].x = this->array[2].x;
		this->array[3].y = this->array[2].y;
		this->array[7].x = this->array[6].x;
		this->array[7].y = this->array[6].y;
		return;
		}
		
	*/
	return;
}

void OlegModuleB::FUN_001a3e50() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall OlegModuleB::FUN_001a3e50(OlegModuleB *this){
		this->array[0].x = this->array[1].x;
		this->array[2].x = this->array[4].x;
		this->array[2].y = this->array[4].y;
		this->array[6].x = this->array[8].x;
		this->array[6].y = this->array[8].y;
		if ((this->parent).spline != (SplineA *)0x0) {
		(this->parent).spline = (SplineA *)0x0;
		}
		return;
		}
		
	*/
	return;
}

void OlegModuleB::FUN_001a3f30() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall OlegModuleB::FUN_001a3f30(OlegModuleB *this){
		this->array[0].x = this->array[1].y;
		this->array[2].x = this->array[5].x;
		this->array[2].y = this->array[5].y;
		this->array[6].x = this->array[9].x;
		this->array[6].y = this->array[9].y;
		return;
		}
		
	*/
	return;
}

void OlegModuleB::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	OlegModuleB * __thiscall OlegModuleB::Dispose(OlegModuleB *this,byte param_1){
		(this->parent).vtable = (OlegModuleAbstract_VTable *)&OlegModule_VT_Abstract;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

