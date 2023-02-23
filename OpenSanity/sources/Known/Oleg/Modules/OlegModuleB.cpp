#include "headers/Known/Oleg/Modules/OlegModuleB.h"

OlegModuleB::OlegModuleB() : OlegModuleAbstract()
{
	this->array[1].x = 0.0f;
	this->array[1].y = 0.0f;
	this->array[4].x = 0.0f;
	this->array[4].y = 0.0f;
	this->array[5].x = 0.0f;
	this->array[5].y = 0.0f;
	this->array[8].x = 1.0f;
	this->array[8].y = 1.0f;
	this->array[9].x = 1.0f;
	this->array[9].y = 1.0f;
}

OlegModuleB::OlegModuleB(float x) : OlegModuleAbstract(x)
{
	this->array[1].x = 0.0f;
	this->array[1].y = 0.0f;
	this->array[4].x = 0.0f;
	this->array[4].y = 0.0f;
	this->array[5].x = 0.0f;
	this->array[5].y = 0.0f;
	this->array[8].x = 1.0f;
	this->array[8].y = 1.0f;
	this->array[9].x = 1.0f;
	this->array[9].y = 1.0f;
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